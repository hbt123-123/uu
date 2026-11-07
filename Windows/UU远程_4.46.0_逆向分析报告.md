# UU远程 4.46.0 安装程序逆向分析报告

> 分析对象：`/workspace/Windows/uuyc_4.46.0.exe`
> 分析目标：远程控制、全功能终端、文件传输三大功能
> 分析方式：静态分析（REA / Ghidra / PE 结构 / 符号与字符串）+ 受控解包（动态等价观测）
> 分析日期：2026-11-07
> 分析环境：Linux 沙箱（无 Windows 运行时、无 Wine）

---

## 1. 结论摘要

1. 样本是 **网易 UU 远程（NetEase UU Remote / 内部代号 GameViewer、nrd）4.46.0** 的 **NSIS 自解压安装包**，携带完整客户端 + 被控端 + Windows 服务 + 内核驱动 + 终端组件 + 文件传输组件，共 139 个文件、约 284 MB。
2. **远程控制**采用 `Qt5 UI (GameViewer.exe) → GameViewerServer.exe → streamer.dll（WebRTC 音视频 + OpenH264/Opus + D3D11/DXGI 采集）` 的架构；输入注入由 `nrd_renderer_ipc.dll` 的 `nrd_input_send_event / nrd_input_send_text` 完成，并通过 `uuycinput`（VHF HID 驱动）与 `ViGEmBus`（虚拟游戏手柄）落到系统；虚拟显示器由 `GameViewerIddDriver`（IddCx）提供，虚拟声卡由 `nevaudio` 提供。
3. **全功能终端**由 `uuyc-cli`（`lterm`/`term` 子命令）、`uuyc-mux.exe`（10 MB，**psmux**，tmux 兼容的多路复用器）、`conpty_bridge.exe`（ConPTY 桥接）、`OpenConsole.exe`（Windows 控制台宿主）组成；`conpty_bridge` 通过 `conpty.dll` 动态解析 `CreatePseudoConsole/ResizePseudoConsole/ClosePseudoConsole`，并支持 `cmd.exe` / `powershell` 两种 shell 选择与登录会话令牌（winlogon token）场景。
4. **文件传输**是独立业务模块 `file_transfer`，具备完整的 P2P 传输协议（Ask → Confirm → Block → BlockConfirm → Complete）、本地/远端双引擎、目录/重命名/删除/存在性等文件系统任务、拖拽（OLE DropTarget）与剪贴板文件同步；并通过 FTP 特性开关（`FF_FILE_TRANSFER_FTP_*`）提供备用通道；随包附带 `aria2c.exe` 用于多线程下载。
5. **通信域名**集中在 `*.nrd.nie.163.com` 与 `*.webapp.163.com`，覆盖信令/事件上报/云电脑开机与排队/Wake-on-LAN；`api-event.nrd.nie.163.com/api/v1/event/report/batch` 为批量事件上报端点。
6. **风险提示**：该软件具备驱动级输入注入、虚拟显示/声卡、会话令牌操作、服务驻留、捆绑 `PsExec64.exe` 与 `devcon.exe` 等能力，行为等价于"合法的远程控制/远控框架"。仅可用于授权环境；本次未在沙箱内执行样本。

---

## 2. 样本与安装器信息

| 项目 | 值 |
|---|---|
| 文件名 | `uuyc_4.46.0.exe` |
| 大小 | 93,245,960 字节（约 89 MB） |
| SHA-256 | `ee378fcfd7147df776e380324ad462fabb795014cf95cd011a793b1500cb069d` |
| 文件类型 | PE32 32-bit GUI（NSIS 自解压安装包） |
| 编译时间 | 2026-04-20 04:38:47 |
| 安装包压缩 | NSIS + LZMA:25（文件整体熵 7.9997，接近完全压缩） |
| 版本信息 | FileVersion / ProductVersion = **4.46.0.4716** |
| 公司 | NetEase（网易） |
| 版权 | © NetEase Corporation. All rights reserved. |
| 数字签名 | 证书表存在；签名主体 **NetEase (Hangzhou) Network Co., Ltd**（浙江省杭州市，统一社会信用代码 91330000788831167A），由 DigiCert Trusted G4 Code Signing RSA4096 SHA384 2021 CA1 签发 |

> 说明：安装包本体 89 MB 超过 REA 单文件 64 MB 读取上限，Authenticode 未在本次工具链内完成完整校验；组件 `GameViewerServer.exe` 的 PKCS#7 证书表已解析确认签名主体。建议在 Windows 侧用 `sigcheck -a` 复核安装包签名与时间戳。

### 2.1 NSIS 安装器插件（从安装包目录表恢复）

| 插件 | 作用推断 |
|---|---|
| `UURemoteHelper.dll` | 网易自研安装辅助（服务/驱动/进程处理） |
| `SimpleSC.dll` | 创建/启动/停止 Windows 服务 |
| `AccessControl.dll` | ACL / 权限设置 |
| `System.dll` | 进程、文件、注册表等系统操作 |
| `LogEx.dll` | 安装日志 |
| `nsProcess.dll` | 结束占用进程（升级时替换文件） |
| `nsDialogs.dll` | 自定义安装向导页 |
| `devcon.exe` | 设备/驱动安装（随包） |

安装包最终将内容释放到暂存目录 `$_38_`（本次解包得到的目录名），随后由安装脚本落盘、注册服务/驱动并启动主程序。

---

## 3. 安装后组件清单与角色

解包结果：**139 个文件，284 MB**（`/workspace/Windows/_extract/$_38_`）。

### 3.1 可执行主体

| 文件 | 大小 | 角色 |
|---|---|---|
| `GameViewer.exe` | 73.8 MB | 主客户端 UI（Qt5 Widgets + WebView2 混合壳） |
| `GameViewerServer.exe` | 33.7 MB | 被控端/主控宿主进程（业务模块容器） |
| `GameViewerService.exe` | 8.5 MB | Windows 服务（会话/进程拉起，`CreateProcessAsUserW` + WTS API） |
| `streamer.dll` | 18.7 MB | 采集、编码、解码、WebRTC 传输（含 NVAPI 导出） |
| `conpty_bridge.exe` | 6.5 MB | ConPTY 桥接（终端功能核心） |
| `uuyc-mux.exe` | 10.0 MB | **psmux**（tmux 兼容终端多路复用器，Rust） |
| `uuyc-cli.exe` | 12.6 MB | 终端会话命令行（`lterm` / `term`） |
| `OpenConsole.exe` | 1.1 MB | Windows 控制台宿主（PTY 侧） |
| `aria2c.exe` | 6.2 MB | 多线程下载器（资源/安装包下载） |
| `PsExec64.exe` | 0.8 MB | Sysinternals PsExec（提权/远程执行用途） |
| `GameViewerLauncher.exe` | — | 协议/快捷方式启动器 |
| `GameViewerHealthd.exe` | — | 健康监控守护（HealthdApp、StreamerHealthWatcher） |
| `Upgrade.exe` / `Uninstall.exe` | — | 升级与卸载 |
| `StreamerCodecDetector.exe` | — | 编解码能力探测 |

### 3.2 内核驱动与设备组件

| 组件 | 类型 | 证据 / 说明 |
|---|---|---|
| `drivers/uuycinput/uuycinput.sys` | KMDF 驱动（VHF HID） | 字符串含 `VhfCreate`、`VhfReadReportSubmit`、`WdfDeviceCreateDeviceInterface`、`RAWPDO_DEVICE_CONTEXT`；PDB 路径 `D:\nework\WorkSource\VhfRefactor-legacy-16299\Output\x64\uuycinput.pdb` |
| `drivers/uuycinput/uuycinputmf.sys` | 下层过滤驱动 | `UUYCINPUTMF_DEVICE_EXTENSION` |
| `drivers/GameViewerIddDriver/GameViewerIddDriver.dll` | IddCx 虚拟显示器 | `IndirectMonitorContextWrapper`；PDB `E:\Source\VirtualDisplay\x64\Release\GameViewerIddDriver.pdb` |
| `drivers/nevaudio/nevaudio.sys` | 虚拟声卡 | PDB `D:\nework\WorkSource\NE.VirtualAudioCard\Src\Output\Nevaudio.pdb`；证书链为 Microsoft WHQL |
| `drivers/ViGEmBus` | 第三方虚拟游戏手柄 | ViGEm 总线驱动 |
| `drivers/DriverHelper.exe` | 驱动安装/修复器 | 导入 `SetupAPI`、`DiUninstallDriverW`、`OpenServiceW`、`ControlService`；字符串含 `repair_install`、`source-inf-match`、`packages-bound` |

### 3.3 运行时与 UI 资源

- Qt5：`Qt5Core/Gui/Widgets/Network/Svg/WinExtras/Xml`，`platforms/qwindows.dll`
- WebView2：`WebView2Loader.dll`、`MicrosoftEdgeWebview2Setup.exe`
- HTML 骨架页：`html/skeleton/{cloud-device,consumption-record,feedback,message-center}-skeleton`、`html/error/error.html`
- 传输配置：`streamer-config.json`（按 GPU/机型禁用 H.265、限制解码能力等）
- 媒体栈：`libssl-3-x64.dll` / `libcrypto-3-x64.dll`、`d3dcompiler_47.dll`、`libEGL/libGLESv2`、`concrt140`
- 开发期路径泄露：`D:\nrd-windows-client-gitlab\...`、`D:\nework\WorkSource\...`（可用于内部版本溯源）

---

## 4. 总体架构

```
                        ┌─────────────────────────────┐
   主控端(Windows)        │  GameViewer.exe (Qt5 UI)     │
                        │  ├─ 远程会话 / 终端页 / 文件页 │
                        │  ├─ WebView2 活动页           │
                        │  └─ drag_drop / clipboard     │
                        └──────────────┬──────────────┘
                                       │ 本地 IPC（命名管道 / shared memory）
                        ┌──────────────▼──────────────┐
                        │  GameViewerServer.exe        │  ← 业务宿主
                        │  ├─ business@host 模块        │
                        │  ├─ terminal 模块             │
                        │  ├─ file_transfer 模块        │
                        │  └─ streamer 控制             │
                        └───┬───────────┬───────────┬──┘
                            │           │           │
                 ┌──────────▼──┐  ┌─────▼──────┐  ┌─▼─────────────┐
                 │ streamer.dll │  │ nrd_renderer│  │ uuyc-mux.exe  │
                 │ WebRTC/H264  │  │ _ipc.dll    │  │ (psmux)       │
                 │ D3D11/DXGI   │  │ 输入/截图/IPC│  │ session 管理   │
                 └──────┬───────┘  └─────┬───────┘  └──┬────────────┘
                        │                │              │
                 ┌──────▼─────┐   ┌──────▼──────┐  ┌───▼────────────┐
                 │ GPU/NVAPI  │   │ uuycinput   │  │ conpty_bridge  │
                 │ 采集/编码   │   │ (VHF HID)   │  │ + conpty.dll   │
                 └────────────┘   │ ViGEmBus    │  │ + OpenConsole  │
                                  └─────────────┘  └───┬────────────┘
                                                       │
                                              cmd.exe / powershell.exe
```

- 服务层：`GameViewerService.exe` 以 Windows 服务身份运行，负责会话发现、令牌复制、以用户身份拉起 `GameViewerServer.exe`（导入 `WTSAPI32`、`USERENV`、`CreateProcessAsUserW`、`DuplicateTokenEx`）。
- 升级/健康：`Upgrade.exe`、`GameViewerHealthd.exe`（`healthd` 本地端点 `/healthd/config`、`/healthd/report`，监听 `127.0.0.1`）。
- 安全校验：`WINTRUST` + 随包 `.sig`（如 `GameViewerServer.exe.sig` 136 字节自定义签名块），用于组件完整性校验。

---

## 5. 远程控制功能分析

### 5.1 采集与编解码

`streamer.dll` 是媒体核心，导入 `d3d11.dll`、`dxgi.dll`、`d2d1.dll`、`DWrite.dll`、`AVRT.dll`、`msdmo.dll`、`Secur32.dll`，并导出 NVAPI 系列函数（`ctlEdidManagement`、`NvOptimusEnablement`、`AmdPowerXpressRequestHighPerformance`），说明其同时承担：

- GPU 选择 / EDID 管理（配合虚拟显示器）
- DXGI Desktop Duplication / D3D11 纹理采集
- 硬件或软件编码（OpenH264：`CWelsH264SVCEncoder::SetOption` 系列符号；H.265 可通过配置禁用）
- 软件解码回退（`VideoDecoderSoftwareFallbackWrapper`）
- 音频：Opus（`third_party/opus/src/celt/rate.c`）+ `AVRT` 实时线程 + `msdmo`
- 网络：WebRTC 栈（`prepare_content_receiver@httplib`、`read_content@httplib`、`adapt_bitrate`、`max_bitrate_bps` 等）

关键能力开关（字符串直接可见）：

```
"feature": "desktop_display"   "feature": "mouse_cursor"
"feature": "fps_90"            "feature": "fps_144"
"feature": "fps_super_screen"  "feature": "custom_bitrate"
adapt_bitrate=  max_bitrate_bps   bitrate_priority=
cursor_hidden=  cursor_type=  desktop_open=
change_monitor_status:  disable_monitor size:
chroma_fmt=  bit_depth_minus8=  change encoder chroma format or bitdepth need to restart
```

`streamer-config.json` 内容：

```json
{
  "disable_h265_codec": [{
    "enable": true, "roles": ["controller"], "platforms": ["windows"],
    "graphic_cards": ["GTX\\s*6","GT\\s*6","GTX\\s*7","GT\\s*7","GTX\\s*8","GT\\s*8","GTX\\s*9","GT\\s*9","NVIDIA\\s*QUADRO"]
  }],
  "set_max_decoder_cap": [{
    "enable": true, "platforms": ["android"], "brands": ["Lenovo"], "models": ["TB371FC"]
  }]
}
```

### 5.2 输入注入路径（关键逻辑）

`GameViewerServer.exe` 从 `nrd_renderer_ipc.dll` 导入两个输入导出函数，并配合 `HID.DLL`、`XInput9_1_0.dll`、`uuycinput` 驱动：

| 导出符号（MSVC 修饰名） | 还原签名 |
|---|---|
| `?nrd_input_send_event@@YAHHPEBDH@Z` | `int nrd_input_send_event(int device, const char* event, int size)` |
| `?nrd_input_send_text@@YAHHPEBD@Z` | `int nrd_input_send_text(int device, const char* text)` |
| `?nrd_screenshot@@YAHHHH@Z` | `int nrd_screenshot(int, int, int)` |
| `?nrd_system_operate@@YAHHPEBD0@Z` | `int nrd_system_operate(int, const char*, const char*)` |
| `?nrd_ipc_create/connect/send_streamer_data/destroy@...` | 流数据 IPC 通道 |

> 完整导出：`nrd_input_send_event`、`nrd_input_send_text`、`nrd_ipc_connect`、`nrd_ipc_create`、`nrd_ipc_destroy`、`nrd_ipc_send_streamer_data`、`nrd_ipc_server_destroy`、`nrd_screenshot`、`nrd_set_callback`、`nrd_system_operate`。

输入落地链路：

```
主控消息 → GameViewerServer (ControlledWrapper::onReceiveControlData)
        → nrd_renderer_ipc.dll!nrd_input_send_event/text
        → uuycinput.sys（VHF HID 原始报告）→ 系统 HID 栈
        → （游戏场景）ViGEmBus / XInput9_1_0.dll → 虚拟手柄
```

`uuycinput.sys` 关键行为（字符串）：

```
VhfCreate / VhfStart / VhfReadReportSubmit / VhfReadReportSubmit failed
WdfDeviceCreateDeviceInterface
IoBuildDeviceIoControlRequest / IoGetLowerDeviceObject
stage=vhf_submit_begin request=%p reportId=%u len=%lu
stage=vhf_submit_end   request=%p reportId=%u status=0x%08X
```

即：驱动创建 VHF（Virtual HID Framework）设备，把远端输入事件转成 HID report 提交给系统，从而实现键盘/鼠标/触控注入。

### 5.3 虚拟显示与音频

- `GameViewerIddDriver.dll`：IddCx 间接显示驱动，创建虚拟显示器，支持动态分辨率/刷新率（客户端字符串 `need_save_virtual_display_config_`、`has_reset_display_config`、`need_save_configuration_`）。
- `nevaudio.sys`：NE.VirtualAudioCard 虚拟声卡，为被控端提供音频回环采集。
- `streamer.dll` 中的 NVAPI 导出与 EDID 管理配合虚拟显示，实现"无物理显示器也能出画面"。

### 5.4 远程协助 / 云电脑

- 类符号：`RemoteAssistModule`、`RemoteAssistPage`、`IRemoteAssistPageView`、`RemoteAssistContent`、`RemoteAssistHistoryPanel`、`RemoteAssistRequestBox`、`RemoteAssistWaitingWidget`、`RemoteAssistSmartPasteWidget`、`RemoteAssistFileTransferState`。
- 云电脑接口（直接从二进制字符串提取）：

```
https://api.nrd.nie.163.com/api/v1/cloud_pc/boot_info/%s
https://api.nrd.nie.163.com/api/v1/cloud_pc/queue/%s/ticket
https://api.nrd.nie.163.com/api/v1/user/ticket/for/plugin
https://api-ipv4.nrd.nie.163.com/api/v1/device/wake_on_lan/info
https://api-event.nrd.nie.163.com/api/v1/event/report/batch
```

---

## 6. 全功能终端分析

### 6.1 组件职责

| 组件 | 职责 |
|---|---|
| `GameViewer.exe` | 终端 UI：`TerminalModule`、`TerminalMainWindow`、`TerminalTitleBar`、`TerminalStatePage`、`TerminalSessionListPage`、`TerminalManagementModel`、`TerminalSessionItem`、`TerminalSessionChanged`、`TerminalRenameDialog`、`TerminalPasswordDialog`、`HomeTerminalWindowManager`、`ITerminalManagementView`、`TerminalUpgradeHelper` |
| `GameViewerServer.exe` | 终端业务宿主：`TerminalManager@terminal@business@host`、`mux_control Request/Response`、`terminal_open_timeout`、`shell_not_allowed`、`hasCmdShell=` |
| `uuyc-cli.exe` | 会话命令行：`lterm`（本机会话）与 `term -d DEVICE`（设备会话） |
| `uuyc-mux.exe` | psmux：tmux 兼容的会话/窗口/面板多路复用（Rust 实现） |
| `conpty_bridge.exe` | ConPTY 桥接：创建伪控制台、管道转发、令牌/会话处理 |
| `OpenConsole.exe` / `conpty.dll` | Windows 控制台宿主与 ConPTY API |

### 6.2 命令行接口（直接取自 `uuyc-cli.exe` 帮助文本）

```
uuyc-cli lterm new                    Create and attach a session
uuyc-cli lterm new NAME               Create and attach a named session
uuyc-cli lterm new NAME --shell cmd   Create and attach a CMD session
uuyc-cli lterm attach [NAME]          Attach to a session
uuyc-cli lterm has NAME               Check whether a session can be attached
uuyc-cli lterm ls [--json]            List sessions
uuyc-cli lterm kill NAME              Terminate a session
uuyc-cli lterm rename OLD NEW         Rename a session

uuyc-cli term -d DEVICE <同上子命令>   针对指定设备的终端会话
```

### 6.3 psmux（`uuyc-mux.exe`）配置与命令

```
配置文件：%USERPROFILE%\.config\uuyc-mux\uuyc-mux.conf  （tmux 兼容语法）
环境变量：PSMUX_DEFAULT_SESSION / PSMUX_SESSION_NAME / PSMUX_CURSOR_STYLE
          PSMUX_CURSOR_BLINK / PSMUX_DIM_PREDICTIONS
面板内变量：TMUX / TMUX_PANE（兼容 tmux 插件）
命令：new-session(new) / attach-session(a, at, attach) / detach-client
      kill-session / list-sessions(ls) / new-window
示例：psmux new-session -- python
      psmux new-window -- cmd /K echo hello
```

### 6.4 关键逻辑恢复：`conpty_bridge.exe`

#### (1) ConPTY API 动态解析（Ghidra 反编译，`FUN_1400cee10`）

```c
undefined1 FUN_1400cee10(HMODULE conpty, undefined8 *out) {
    FARPROC create = GetProcAddress(conpty, "CreatePseudoConsole");
    FARPROC resize = GetProcAddress(conpty, "ResizePseudoConsole");
    FARPROC close  = GetProcAddress(conpty, "ClosePseudoConsole");
    if (!create || !resize || !close) return 0;
    out[0] = create; out[1] = resize; out[2] = close;
    return 1;
}
```

含义：程序不静态链接 ConPTY，而是加载 `conpty.dll` 后解析三个核心 API，兼容不同 Windows 版本/自带 `conpty.dll`。

#### (2) Shell 选择逻辑（Ghidra 反编译，`FUN_1400de120` 归纳）

```c
/* 入参：shell 名称字符串（长度 10 时与 "powershell" 比较；长度 3 时与 "cmd" 比较） */
if (shell == "powershell") {
    candidate = L"WindowsPowerShell\\v1.0\\powershell.exe";
    if (GetFileAttributesW(candidate) 存在且不是目录) return candidate;
    /* 退化路径：SearchPathW 查找 powershell.exe */
    if (SearchPathW(NULL, L"powershell.exe", ...) 成功) return 解析后的完整路径;
    return "";   /* 失败：返回空串，由上层报 shell_not_allowed */
} else if (shell == "cmd") {
    return L"cmd.exe";
}
```

佐证字符串：`powershell`、`WindowsPowerShell\v1.0\powershell.exe`、`powershell.exe`、`--shell`、` hasCmdShell=`、`shell_not_allowed`、`terminal_open_timeout`。

#### (3) 会话/令牌与 IPC

`conpty_bridge.exe` 导入：

- `WTSAPI32.dll`、`USERENV.dll`：会话枚举、用户环境
- `CreateProcessAsUserW`、`DuplicateTokenEx`、`AdjustTokenPrivileges`：以登录用户/winlogon 令牌启动 shell（支持锁屏/登录界面场景）
- `CreateNamedPipeW` / `ConnectNamedPipe` / `CreatePipe`：ConPTY 输入输出管道与本地 IPC
- `CryptAcquireContextW` / `CryptEncrypt` / `CryptSignHashW`：Windows CryptoAPI（签名/加密相关）

字符串 `winlogon_token result=degraded stage=set_session_id`、`session_id=` 表明其处理不同 Windows 会话与令牌。

### 6.5 终端数据流（恢复结果）

```
UI(TerminalModule)
  → GameViewerServer(TerminalManager)  ── mux_control Request/Response ──┐
  → uuyc-cli lterm/term  ── 命名管道 ──> uuyc-mux(psmux) session          │
                                            │  pane 进程                    │
                                            ▼                               │
                                   conpty_bridge.exe                      │
                                     → conpty.dll (CreatePseudoConsole)    │
                                     → OpenConsole.exe                    │
                                     → cmd.exe / powershell.exe            │
                                                                           │
远端输入/输出 ← WebRTC 数据通道 ← streamer/GameViewerServer ←──────────────┘
```

---

## 7. 文件传输功能分析

### 7.1 模块与类结构（RTTI 符号）

协议消息（`FileTransfer*`）：

```
FileTransferAsk           FileTransferConfirm
FileTransferBlock         FileTransferBlockConfirm
FileTransferComplete      FileTransferResult
FileTransferSend / FileTransferSendRequest / FileTransferSendResponse
FileTransferReceive / FileTransferReceiveRequest / FileTransferReceiveResponse
FileTransferFtpRequest / FileTransferFtpResponse
```

传输引擎与任务：

```
IFileDataEngine   LocalFileEngine   RemoteFileEngine
FileSenderTask    FileReceivingTask
CreateDirectoryTask  RemoveDirectoryTask  RemoveFileTask  RenameFileTask
FileExistsTask    ReadDirectoryTask
FileTransferTaskManager   FileTransferPresenter   FileTransferModule
FileTransferProxy   TransferListModel/Delegate/TableView
```

UI 与交互：

```
FileTransferMainWindow   FileTransferContentWindow   TransferListMainWindow
FileListModel/TableView/ContentWidget/Delegate/ComboBox
FileToolBarWidget   HomeFileTransferWindowManager   IFileTransferView
drag_drop::DragDropManager   DragDropOverlay   IDropTarget(OLE)
```

剪贴板文件同步：

```
ClipboardManager / ClipboardModule / IClipboardPolicy
ClipboardFileDescriptor(ListRequest/ListResponse/Segment/SegmentConfirm)
ClipboardFileContentsRequest / ClipboardFileContentsResponse
ClipboardDataBlock / ClipboardDataBlockConfirm
ClipboardTextChangeRequest/Response   ClipboardFormatListRequest/Response
```

### 7.2 恢复的传输协议状态机

```
发起端                                接收端
  │ 1. FileTransferAsk（文件名/大小/类型/路径）  │
  │ ─────────────────────────────────────────> │
  │ 2. FileTransferConfirm（接受/拒绝/另存路径）  │
  │ <───────────────────────────────────────── │
  │ 3. FileTransferBlock（分块数据 + 块序号）     │
  │ ─────────────────────────────────────────> │
  │ 4. FileTransferBlockConfirm（块校验/重传请求）│
  │ <───────────────────────────────────────── │
  │ 5. FileTransferComplete（总校验/结果）        │
  │ ─────────────────────────────────────────> │
  │ 6. FileTransferResult（成功/失败原因）        │
  │ <───────────────────────────────────────── │
```

辅助能力：

- 文件系统操作：`getFileList`（`FileSenderTask`）、`getKnownFolders`、`DriveInfo`（盘符/常用目录）
- 拖拽：`DragDropManager::initiateFileTransfer`、`OLE DropTarget`、`onFileDropData`（`stage=get_file_drop_data`）
- 粘贴模拟：`simulate_paste=`
- 保存位置：`file_transfer_save_location:`
- 特性开关：`FF_FILE_TRANSFER_FTP_INIT_VERION`、`FF_FILE_TRANSFER_FTP_LIST_COMPRESS`、`file_transfer_ftp=`、`file_transfer_ftp2=`
- 远程协助文件状态：`!remote_assist_file_transfer_state`、`RemoteAssistFileTransferState`

### 7.3 传输通道

1. **主通道**：复用远程会话的控制/数据连接（`ControllerWrapper::onReceiveBinaryData`、`ControlledWrapper::onReceiveControlData`），按块传输并逐块确认。
2. **备用通道**：FTP（特性开关控制），用于大文件/直连场景。
3. **下载组件**：`aria2c.exe`（HTTP/FTP 多线程），用于客户端资源/云电脑镜像/安装包下载（`uuyc-cli` 字符串含 aria2c 进度输出格式 `%% Total %% Received %% Xferd Average Speed`）。
4. **剪贴板文件**：文件描述符列表 → 分段 → 内容块，实现"复制文件到远端"。

---

## 8. 通信端点与网络行为（静态提取）

| 端点 | 用途推断 |
|---|---|
| `https://api.nrd.nie.163.com/` | 主 API（鉴权、会话、设备） |
| `https://api.nrd.nie.163.com/api/v1/cloud_pc/boot_info/%s` | 云电脑启动信息 |
| `https://api.nrd.nie.163.com/api/v1/cloud_pc/queue/%s/ticket` | 云电脑排队票据 |
| `https://api.nrd.nie.163.com/api/v1/user/ticket/for/plugin` | 插件鉴权票据 |
| `https://api-ipv4.nrd.nie.163.com/api/v1/device/wake_on_lan/info` | 局域网唤醒信息 |
| `https://api-event.nrd.nie.163.com/api/v1/event/report/batch` | 批量埋点/事件上报 |
| `https://api-dcdn.nrd.nie.163.com` | CDN / 加速下载 |
| `https://uuyc.163.com`、`https://uuyc.webapp.163.com/{cloud-device,consumption-record,message-center}` | 官网/活动页/消息中心/云设备 |
| `https://feedback-system.webapp.163.com/survey/4340`、`feedback-web.webapp.163.com` | 用户反馈问卷 |
| `https://fcount-api.webapp.163.com` | 计数/统计 API |
| `https://uuyc.webapp.163.com/recharge/win` | 充值页 |
| `127.0.0.1` `/healthd/config`、`/healthd/report` | 本地健康监控（GameViewerHealthd） |

传输安全：`libssl-3-x64.dll` / `libcrypto-3-x64.dll`（OpenSSL 3）、`WINHTTP`、`WINTRUST`、`bcrypt`（`BCryptDeriveKeyPBKDF2`、`BCryptGenRandom`）、`CryptProtectData`（DPAPI）。

---

## 9. 静态分析证据汇总

### 9.1 导入表（按能力）

| 组件 | 关键导入 |
|---|---|
| `GameViewerServer.exe` | `WINHTTP`、`WS2_32`、`CRYPT32`、`bcrypt`、`HID.DLL`、`SETUPAPI`、`newdev`、`WTSAPI32`、`USERENV`、`WINTRUST`、`dbghelp`、`streamer.dll`、`nrd_renderer_ipc.dll` |
| `GameViewerService.exe` | `WTSAPI32`（延迟）、`USERENV`（延迟）、`WINHTTP`（延迟）、`CreateProcessAsUserW`、`DuplicateTokenEx`、`CreateNamedPipeW` |
| `conpty_bridge.exe` | `WTSAPI32`、`USERENV`、`CreateProcessAsUserW`、`DuplicateTokenEx`、`CreateNamedPipeW`、`CryptAcquireContextW/CryptEncrypt/CryptSignHashW` |
| `streamer.dll` | `d3d11`、`dxgi`、`d2d1`、`DWrite`、`AVRT`、`msdmo`、`Secur32`、`WINMM`、`CRYPT32` |
| `uuyc-mux.exe` | `ntdll`（`NtCreateNamedPipeFile`）、`USER32`（控制台/剪贴板）、`KERNEL32`（Job/进程）、`bcryptprimitives` |
| `uuyc-cli.exe` | `WINHTTP`、`WINTRUST`、`WTSAPI32`、`bcrypt`（`BCryptDeriveKeyPBKDF2`）、`CryptProtectData` |

### 9.2 文件熵与加壳判断

| 文件 | 整体熵 | 判断 |
|---|---|---|
| `uuyc_4.46.0.exe` | 7.9997 | NSIS + LZMA 压缩载荷（非加密壳） |
| `GameViewer.exe` | 6.6379 | 正常 Qt/C++ 程序（含资源/字符串） |
| `GameViewerServer.exe` | 5.9044 | 正常 C++ 程序（符号丰富，未加壳） |
| `streamer.dll` | 6.7137 | 正常媒体库（含 WebRTC/OpenH264） |

结论：**无商业壳/混淆壳**，大量 MSVC RTTI 与 lambda 符号可直接恢复类与函数名，逆向成本低。

### 9.3 数字签名

- `GameViewerServer.exe`：PKCS#7 证书表存在，签名主体 **NetEase (Hangzhou) Network Co., Ltd**，签发者 DigiCert Trusted G4 Code Signing RSA4096 SHA384 2021 CA1。
- 随包 `.sig`（如 `GameViewerServer.exe.sig`、`DriverHelper.exe.sig`）为 136 字节自定义签名数据，推测供应用层完整性校验（配合 `WINTRUST`）。

---

## 10. 动态分析

### 10.1 环境限制与安全边界

本次环境为 **Linux 沙箱**：无 Windows 内核、无 Wine、无 Hyper-V。样本具备**驱动安装、服务驻留、令牌复制、远程控制**能力，直接执行存在以下风险，故**未在沙箱内运行安装包或主程序**：

- 内核驱动（VHF HID / IddCx / 虚拟声卡）无法在 Linux 加载，运行无意义；
- 远程控制组件会主动连接网易服务端并上报设备信息；
- 安装器可能修改系统服务/驱动与权限（ACL），污染环境。

因此，动态部分采用**受控解包 + 运行时行为重建 + 可复现验证方案**，并明确标注哪些是实测、哪些是推断。

### 10.2 已执行的受控动态观测（解包阶段）

| 观测项 | 结果 |
|---|---|
| 解包方式 | `7z x uuyc_4.46.0.exe`（等价于安装器 LZMA 解码阶段） |
| 释放结果 | 139 个文件 / 284 MB，目录 `$_38_` |
| 安装器插件 | `System.dll`、`LogEx.dll`、`UURemoteHelper.dll`、`SimpleSC.dll`、`nsProcess.dll`、`AccessControl.dll`、`devcon.exe` |
| 驱动载荷 | `uuycinput.sys`、`uuycinputmf.sys`、`GameViewerIddDriver.dll`、`nevaudio.sys`、`ViGEmBus` |
| 终端载荷 | `conpty_bridge.exe`、`conpty.dll`、`OpenConsole.exe`、`uuyc-mux.exe`、`uuyc-cli.exe` |
| 第三方工具 | `PsExec64.exe`、`aria2c.exe`、`MicrosoftEdgeWebview2Setup.exe` |
| 未恢复 | NSIS 脚本块 `[0]`（7z 不解析安装脚本；需专用 NSIS 反编译器） |

### 10.3 运行时行为重建（基于静态证据）

#### 进程树（推断）

```
uuyc_4.46.0.exe (NSIS, 32-bit)
 ├─ GameViewer.exe                     (用户态 UI，Qt5)
 ├─ GameViewerService.exe              (SYSTEM 服务)
 │   └─ GameViewerServer.exe           (以登录用户令牌 CreateProcessAsUserW)
 │       ├─ streamer.dll               (采集/编码/WebRTC)
 │       ├─ nrd_renderer_ipc.dll       (输入注入/截图/IPC)
 │       ├─ conpty_bridge.exe          (按需，终端会话)
 │       │   └─ cmd.exe / powershell.exe
 │       └─ uuyc-mux.exe (psmux)       (按需，终端复用)
 ├─ GameViewerHealthd.exe              (127.0.0.1 /healthd/*)
 └─ Upgrade.exe / Uninstall.exe        (升级/卸载)
```

#### 预期系统落点（需在 Windows 验证）

| 类别 | 预期内容 |
|---|---|
| 服务 | `GameViewerService`（显示名与内部名需用 `sc query` 确认） |
| 驱动 | `uuycinput`（VHF HID）、`uuycinputmf`（过滤）、`GameViewerIddDriver`（IddCx）、`nevaudio`（虚拟声卡）、`ViGEmBus` |
| 设备接口 | `uuycinput` 通过 `WdfDeviceCreateDeviceInterface` 注册设备接口 GUID（需在 Windows 用 `devcon classes` / 注册表确认） |
| 安装路径 | 通常为 `%LOCALAPPDATA%` 或 `%ProgramFiles%` 下的 `GameViewer`/`uuyc` 目录（安装包内未直接暴露，需实机确认） |
| 配置/日志 | `%USERPROFILE%\.config\uuyc-mux\uuyc-mux.conf`、`healthd` 配置/报告、客户端日志目录 |
| 网络 | TLS 443 连接 `*.nrd.nie.163.com`、`*.webapp.163.com`；WebRTC 另需 STUN/TURN（域名未在静态字符串中直接出现，建议抓包确认） |

#### 内核驱动行为（静态确认）

- `uuycinput.sys`：KMDF + VHF，创建设备接口，接收 IOCTL 后 `VhfReadReportSubmit` 提交 HID 报告（键鼠/Touch）。
- `GameViewerIddDriver.dll`：IddCx 虚拟显示器，`IndirectMonitorContextWrapper` 管理间接监视器上下文。
- `nevaudio.sys`：虚拟声卡（NE.VirtualAudioCard），供音频回环采集。
- `DriverHelper.exe`：安装/修复驱动（`SetupAPI`、`DiUninstallDriverW`、服务控制、`repair_install`）。

### 10.4 建议的动态验证方案（Windows VM，隔离网络）

**环境**：Windows 10/11 x64 虚拟机 + 快照 + 仅出站白名单；安装前记录基线。

1. **安装行为**
   - Procmon 过滤：`Operation: Process/RegSetValue/WriteFile`，`Path` 包含 `GameViewer|uuyc|nrd`。
   - 记录：服务创建（`SimpleSC`）、驱动安装（`devcon`/`DriverHelper`）、注册表 `HKLM\SYSTEM\CurrentControlSet\Services\{uuycinput,nevaudio,GameViewerIddDriver}`。
2. **进程与注入**
   - Process Explorer 查看服务 → 用户进程的令牌、父子关系（验证 `CreateProcessAsUserW`）。
   - API Monitor 挂钩：`CreatePseudoConsole`、`GetProcAddress`（conpty）、`SendInput`、`VhfReadReportSubmit`（驱动侧用 ETW/内核调试）。
3. **终端**
   - 打开终端页，观察 `uuyc-cli lterm ls --json`、`uuyc-mux.exe` 进程与 `%USERPROFILE%\.config\uuyc-mux\` 配置生成。
   - 验证 shell 选择：`uuyc-cli lterm new test --shell cmd` 与默认 powershell 的差异。
4. **文件传输**
   - Wireshark 过滤：`tcp port 443` + `http`；观察分块确认节奏；禁用 FTP 开关前后对比。
   - 观察 `aria2c.exe` 启动命令行与目标 URL。
5. **远程控制**
   - 抓包确认信令/媒体通道（WebRTC：STUN/TURN、DTLS-SRTP）；核对 `fps`/`bitrate`/`cursor` 特性开关。
   - 用 API Monitor 观察 `nrd_input_send_event` 的参数与频率。
6. **权限与持久化**
   - `sc qc GameViewerService`、`schtasks /query`、`reg query HKCU\...\Run`、启动项/计划任务与自更新（`Upgrade.exe`）。

---

## 11. 关键逻辑恢复汇总

| 功能 | 已恢复内容 | 证据级 |
|---|---|---|
| 远程控制-采集 | DXGI/D3D11 采集、OpenH264 编码、Opus 音频、WebRTC 传输、码率/帧率自适应开关 | 字符串 + 导入 + 配置 |
| 远程控制-输入 | `nrd_input_send_event/text` → VHF HID 驱动 → 系统；ViGEmBus/XInput 手柄 | 导出符号 + 驱动字符串 |
| 远程控制-显示 | IddCx 虚拟显示器、EDID/NVAPI、动态分辨率 | 驱动字符串 + 导出 |
| 终端-Shell | `powershell` 与 `cmd` 选择、路径探测、失败降级、`shell_not_allowed` | Ghidra 反编译 |
| 终端-ConPTY | 动态解析 `CreatePseudoConsole/ResizePseudoConsole/ClosePseudoConsole` | Ghidra 反编译 |
| 终端-会话 | `uuyc-cli lterm/term`（new/attach/has/ls/kill/rename）、psmux 多路复用 | 帮助文本 + 符号 |
| 文件传输 | Ask→Confirm→Block→BlockConfirm→Complete 状态机、双引擎、FTP 备用 | RTTI 符号 + 字符串 |
| 剪贴板 | 文件描述符列表/分段/内容块 + 文本格式同步 | RTTI 符号 |
| 网络 | 主 API / 云电脑 / 事件上报 / CDN / WoL 端点 | 字符串提取 |
| 安装 | NSIS + 7 个插件、服务/驱动安装、PsExec 与 devcon | 解包目录 + 插件名 |

---

## 12. 风险与合规提示

1. **高权限远控能力**：内核态输入注入 + 虚拟显示 + 会话令牌操作 + SYSTEM 服务，一旦被滥用等价于商用 RAT 的能力面。
2. **捆绑 `PsExec64.exe`**：可用于远程/提权执行，需确认其具体调用场景（升级？服务拉起？）。建议在授权环境中审计其命令行参数。
3. **数据外发**：存在事件批量上报、设备/云电脑接口、反馈问卷与充值页；需在企业环境评估数据合规。
4. **自更新链路**：`Upgrade.exe` + CDN + 签名校验（`.sig` + WINTRUST）；升级通道应纳入供应链安全评估。
5. **本次分析未执行样本**，所有"运行时"结论均标注为推断；实际部署前请在隔离 Windows VM 完成动态验证。

---

## 13. IOC / 检测线索

**域名**

```
api.nrd.nie.163.com        api-event.nrd.nie.163.com
api-dcdn.nrd.nie.163.com   api-ipv4.nrd.nie.163.com
uuyc.163.com               uuyc.webapp.163.com
feedback-system.webapp.163.com   fcount-api.webapp.163.com
```

**文件/组件**

```
GameViewer.exe  GameViewerServer.exe  GameViewerService.exe  GameViewerHealthd.exe
streamer.dll  nrd_renderer_ipc.dll  conpty_bridge.exe  conpty.dll  OpenConsole.exe
uuyc-mux.exe  uuyc-cli.exe  aria2c.exe  PsExec64.exe  devcon.exe  DriverHelper.exe
uuycinput.sys  uuycinputmf.sys  GameViewerIddDriver.dll  nevaudio.sys
```

**驱动/服务名（待实机确认）**

```
uuycinput / uuycinputmf / GameViewerIddDriver / nevaudio / ViGEmBus
GameViewerService
```

**主机侧线索**

```
%USERPROFILE%\.config\uuyc-mux\uuyc-mux.conf
127.0.0.1 /healthd/config  /healthd/report
*.sig（GameViewerServer.exe.sig 等自定义签名块）
```

**网络特征**

```
User-Agent / 客户端标识：uuyc / GameViewer / nrd（需抓包确认）
WebRTC 媒体：H.264/H.265 + Opus（DTLS-SRTP）
HTTP 事件批量上报：/api/v1/event/report/batch
```

---

## 14. 附录：分析过程与限制

### 14.1 使用工具与关键命令

```bash
# REA 环境
rea inspect-artifact uuyc_4.46.0.exe --json
rea inspect-pe-imports <binary> --format json
rea inspect-pe-resources <binary> --format json
rea inspect-pe-certificates <binary> --format json
rea inspect-byte-entropy <binary> --format json
rea inspect-native-exports <dll> --format json
rea inspect <binary> --snapshot <dir> --provider ghidra
rea search <binary> --snapshot <dir> --provider ghidra --kind strings --pattern <s>
rea xrefs <binary> <addr> --snapshot <dir> --provider ghidra
rea decompile <binary> <addr> --snapshot <dir> --provider ghidra

# 解包与字符串
7z l -slt uuyc_4.46.0.exe
7z x uuyc_4.46.0.exe -o _extract
strings -a -n 8 <binary> | grep -Ei "<keyword>"
strings -el <binary> | grep -A1 FileVersion
```

### 14.2 证据文件（与本报告同目录）

```
analysis/evidence/endpoints.txt     # 20 条服务端点
analysis/evidence/classes.txt       # 149 个功能相关 RTTI 类名
analysis/evidence/sha256.txt        # 样本哈希
analysis/evidence/conpty_inspect.json
analysis/evidence/gvserver_inspect.err   # 33MB 二进制 Ghidra OOM 记录
```

### 14.3 已知限制

1. `GameViewer.exe`（73.8 MB）超过 REA 单文件 64 MB 上限，其导入表/证书未通过 REA 解析（结论来自字符串与 RTTI）。
2. `GameViewerServer.exe`（33.7 MB）在 5.9 GB 内存沙箱中被内核 OOM 终止，未能完成全量 Ghidra 反编译；终端逻辑改由 6.5 MB 的 `conpty_bridge.exe` 完成反编译验证。
3. 安装包 Authenticode 未在本次工具链内完整校验（89 MB > 上限）；组件签名已确认。
4. NSIS 安装脚本 `[0]` 未反编译，安装顺序与注册表细节以插件/组件推断为准。
5. 未执行样本：所有运行时行为需在 Windows VM 按第 10.4 节验证。

---

**报告结束**
