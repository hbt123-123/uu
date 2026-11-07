# UU远程 Android 客户端（4.46.0）逆向分析报告

> 分析对象：`/workspace/Android/uuyc_4.46.0 (7).apk`
> 分析重点：远程控制、终端（远程终端 / “全程终端”）、文件传输
> 分析方式：静态逆向 + 可执行的协议级动态验证
> 报告生成日期：2026-11-07
> 分析工具链：REA（Reverse Engineer Anything）6.8.0、JADX 1.5.1 / jadx-headless-mcp 0.7.1、Apktool 3.0.3、Ghidra 12.1.4、adb、Python 3.14

---

## 0. 结论摘要

1. **U U 远程（包名 `com.netease.uuremote`）是网易的跨平台远程控制产品**，Android 端同时具备“主控端（Controller）”和“被控端（Controlled）”两套角色代码。
2. **远程控制的媒体面由原生库 `libstreamer.so` 承担**：内部集成 WebRTC、QUIC（ngtcp2）、STUN/TURN/ICE、SRTP、H.264/H.265，Java 层只负责采集配置、会话管理、渲染与输入事件封装。
3. **远程控制的数据面被划分为四条逻辑通道**：`sendBinaryData`、`sendControlData`、`sendFileData`、`sendTextData`。触控走 control 通道，键盘/文本/剪贴板走 text 通道，文件块走 file 通道，终端帧走 binary 通道。
4. **终端功能是一套自定义二进制帧协议**：魔数 `TERM`、版本 1、16 字节头、小端序、最大 1 MiB payload，共 16 种帧类型（Open/Stdin/Resize/Close/Stdout/Exit/Signal/Error/ListSessions/KillSession/OpenResp/Unlock/Detach）。终端数据通过 `sendBinaryData` 传输，`Termux TerminalView` 仅负责渲染。
5. **文件传输是一套基于房间 RPC 的分块传输协议**：`Ask → Send → Block → Complete`，配套 `ReadDir`、`FileExist`、FTP 接收确认等消息；支持 zlib（`Deflater`）压缩、块级 ACK、断点续传检查点、重名策略（RENAME/SKIP/OVERRIDE），并由 `dataSync` 前台服务保活。
6. **动态分析受到沙箱环境限制**：无 adb 设备、无 `/dev/kvm`、无模拟器、x86_64 主机，无法运行 Android 双端远程控制场景。已完成**协议级动态验证**（终端帧编解码、zlib 分块压缩回环），并给出真机动态验证方案。
7. **高风险能力集中在被控端**：`MediaProjection` 屏幕采集、`AccessibilityService` 手势注入、`RECORD_AUDIO`、`SYSTEM_ALERT_WINDOW`、`REQUEST_INSTALL_PACKAGES`、`INSTALL_PACKAGES`（后者为签名/特权权限，普通安装通常不授予）。应用未开启 `debuggable`，`allowBackup=false`。

---

## 1. 样本信息

### 1.1 基本属性

| 项目 | 值 |
|---|---|
| 文件路径 | `/workspace/Android/uuyc_4.46.0 (7).apk` |
| 文件大小 | 26,665,590 字节（约 25.4 MiB） |
| SHA-256 | `68f41574b0074734647f4f314b47c157609ff6a1d528423871f1a0d6d9e79828` |
| 包名 | `com.netease.uuremote` |
| versionName | `4.46.0` |
| versionCode | `446000` |
| minSdkVersion | 26 |
| targetSdkVersion | 35 |
| DEX 类数量 | 14,566（JADX 可索引） |
| 资源数量 | 2,120 |
| 应用入口 | `com.remote.app.ui.activity.LaunchActivity`（MAIN/LAUNCHER） |
| Application 类 | `com.remote.app.BlinkApplication` |
| 架构 | `arm64-v8a`（同时包含其他 ABI 目录时以 arm64 为主分析对象） |

### 1.2 签名信息

| 项目 | 值 |
|---|---|
| 签名方案 | v1 / v2 / v3 均存在 |
| v1 签名文件 | `META-INF/BLINK.SF`、`META-INF/BLINK.RSA` |
| 证书 Subject | `ST=GZ, L=China, O=netease, OU=netease, CN=LiZiQi` |
| 证书 SHA-256 | `bd6a3a04791d5ca2e08fb9d7bd82265893d25aa1cb0b6a205b5a2bb154874924` |
| 有效期 | 2022-07-13 至 2047-07-07 |

> 证书 CN 为个人名（`LiZiQi`），O 为 `netease`，与包名/域名体系一致。v1/v2/v3 共存说明该 APK 兼容旧 Android 版本，并支持现代签名校验。

### 1.3 分析环境

| 工具 | 版本 / 路径 | 用途 |
|---|---|---|
| REA | 6.8.0，`/usr/local/bin/rea` | APK 解析、类/方法检索、证据记录、JADX 桥接 |
| JADX | 1.5.1 CLI / headless-mcp 0.7.1 | 全量反编译（14,557 个 `.java`，46 个反编译错误） |
| Apktool | 3.0.3，`/usr/local/bin/apktool` | Manifest / 资源解码 |
| Ghidra | 12.1.4 | Native 库符号与结构分析辅助 |
| adb | `/usr/bin/adb` | 动态分析探测（本环境无设备） |
| Python | 3.14.8 | 协议帧编解码与 zlib 回环验证 |

---

## 2. 静态分析

### 2.1 应用整体结构

JADX 反编译结果呈现典型的**多模块 + Compose + Kotlin 协程**结构：

```
com.remote.app            UI / 启动 / 前台服务
com.remote.room          房间、被控端前台服务、RPC
com.remote.streamer      媒体流控制（Controller / Controlled / JNI）
com.remote.provider      无障碍服务、系统能力
com.remote.inputmanager  MuMu / 本地输入注入 JNI
com.remote.proto         Protobuf 消息定义（远程控制/文件传输）
com.remote.device        设备、WOL 唤醒
com.remote.account       账号、扫码登录
com.remote.pay / web     支付、H5 容器
oc / nc / va / qa / Jb   终端协议、Presenter、文件传输、房间实现（R8 重命名）
```

代码经过 R8 混淆：大量类被重命名为 `a/b/c/...`，但**协议字段名、日志 TAG、JNI 符号、资源 JSON 保留了语义**，这是恢复关键逻辑的主要突破口。

### 2.2 AndroidManifest 关键组件

| 组件 | 类型 | 关键属性 | 作用 |
|---|---|---|---|
| `com.remote.app.ui.activity.LaunchActivity` | Activity | `exported=true`，MAIN/LAUNCHER | 启动入口 |
| `com.remote.deeplink.ui.DeepLinkActivity` | Activity | `exported=true`，singleTask | 外部深链入口 |
| `com.remote.app.ui.activity.ScreenActivity` | Activity | 未导出，singleTask | 远程控制主界面 |
| `com.remote.app.ui.activity.TerminalActivity` | Activity | 未导出，portrait | 终端界面 |
| `com.remote.app.ui.activity.ControlledStatusActivity` | Activity | 未导出，singleTask | 被控状态页 |
| `com.remote.provider.service.UURemoteAccessibilityService` | Service | `BIND_ACCESSIBILITY_SERVICE` | 无障碍/输入注入 |
| `com.remote.room.service.ControlledForegroundService` | Service | `foregroundServiceType=mediaProjection` | 被控端屏幕采集保活 |
| `com.remote.app.service.TransferForegroundService` | Service | `foregroundServiceType=dataSync` | 文件传输保活 |
| `com.remote.device.service.wol.WolForegroundService` | Service | `foregroundServiceType=0x40000000`（specialUse） | 网络唤醒 |
| `com.remote.perf.service.WatchDogService` | Service | `process=":watchdog"` | 独立进程看门狗 |
| `com.netease.uuremote.fileprovider` | Provider | `exported=false`，grantUriPermissions | 文件共享 |
| `com.remote.pay.sdk.wx.WXPayEntryActivity` | Activity | `exported=true` | 微信支付回调 |
| `com.remote.wechat.EntryActivity` | Activity | `exported=true` | 微信回调 |
| `com.alipay.sdk.app.PayResultActivity` 等 | Activity | `exported=true` | 支付宝回调 |
| `com.huawei.hms.support.api.push.PushMsgReceiver` 等 | Receiver | `exported=true` + 厂商权限 | 推送 |

> 注：Manifest 中 `LaunchActivity`、`DeepLinkActivity` 以及支付/推送回调为导出组件；核心远程控制/终端页面均未导出，需登录后由应用内部路由进入。

### 2.3 权限清单（按风险归类）

**网络与设备状态**

- `INTERNET`、`ACCESS_NETWORK_STATE`、`CHANGE_NETWORK_STATE`
- `ACCESS_WIFI_STATE`、`CHANGE_WIFI_STATE`

**远程控制 / 采集**

- `RECORD_AUDIO`：音频采集
- `CAMERA`：摄像头（扫码/视频）
- `FOREGROUND_SERVICE`、`FOREGROUND_SERVICE_MEDIA_PROJECTION`、`FOREGROUND_SERVICE_DATA_SYNC`、`FOREGROUND_SERVICE_SPECIAL_USE`
- `SYSTEM_ALERT_WINDOW`：悬浮窗
- `WAKE_LOCK`：保持唤醒

**文件与安装**

- `READ_EXTERNAL_STORAGE`、`WRITE_EXTERNAL_STORAGE`
- `REQUEST_INSTALL_PACKAGES`：请求安装未知来源应用
- `INSTALL_PACKAGES`：**系统级/签名级权限**，普通安装通常不会授予；若被授予，应用可直接发起安装

**生物识别 / 通知 / 其他**

- `USE_BIOMETRIC`、`USE_FINGERPRINT`
- `POST_NOTIFICATIONS`、`VIBRATE`
- `READ_PHONE_STATE`
- 各推送厂商权限（小米/华为/OPPO/vivo/魅族/荣耀）

> `android:allowBackup="false"`、`android:debuggable` 未出现（默认 false）、`requestLegacyExternalStorage="true"`、`extractNativeLibs="true"`、`largeHeap="true"`。

### 2.4 Native 库

| 库 | 大小（字节） | SHA-256（前 16 位） | 作用 |
|---|---|---|---|
| `libstreamer.so` | 15,997,032 | `988c700249d6ecab` | 媒体引擎：WebRTC + QUIC + SRTP + STUN/TURN + H.264/H.265 |
| `libstreamer-jni.so` | 1,037,632 | `532fd7289dd0450c` | `AndroidStreamerControlled` / `StreamerControlled` JNI 绑定 |
| `libinputmanager.so` | 1,313,056 | `ded97159271364e6` | MuMu/本地输入注入（触摸、按键、IME） |
| `libsqlcipher.so` | 5,797,528 | `d63a8d6bc0bb1bb1` | SQLCipher 加密数据库 |
| `libmmkv.so` | 597,000 | `3850acf55b2c29bd` | MMKV 键值存储 |
| `libNgModules.so` | 845,344 | `68093f696c6cb680` | 网易通用模块 |
| `libnrdsign.so` | 7,632 | `2cd214374c4ba236` | 网易风控/签名 |
| `libmarsxlog.so` | 552,280 | — | 微信 XLog 日志 |
| `libsentry.so` / `libsentry-android.so` | 681,784 / 16,832 | — | Sentry 崩溃上报 |
| `libZXing.so` / `libbarcode_util.so` | 1,940,712 / 47,032 | — | 扫码 |
| `libimageprocess.so` | 277,304 | — | 图像处理 |

**`libstreamer.so` 关键符号/字符串（证据等级 B）**

```
ExchangeControlledInterface
ExchangeControllerInterface
JNI_OnLoad / JNI_OnUnload
Java_org_webrtc_NetworkMonitor_nativeNotifyConnectionTypeChanged
streamer::device::MediaProjectionStopped
streamer::device::MediaProjectionContentResized
streamer::device::VirtualDisplayPaused / Resumed / Stopped
streamer::device::DisplayRotationChanged
SRTP session: invalid key
ngtcp2_* / QUIC / STUN / TURN
WebRTC-SwitchEncoderOnInitializationFailures
```

**`libstreamer-jni.so` 关键 JNI 入口（证据等级 A）**

```
Java_com_remote_streamer_controlled_AndroidStreamerControlled_Initialize
Java_com_remote_streamer_controlled_AndroidStreamerControlled_CreateRoom
Java_com_remote_streamer_controlled_AndroidStreamerControlled_DestroyRoom
Java_com_remote_streamer_controlled_AndroidStreamerControlled_CheckAlive
Java_com_remote_streamer_controlled_AndroidStreamerControlled_SendBinaryData
Java_com_remote_streamer_controlled_AndroidStreamerControlled_SendControlData
Java_com_remote_streamer_controlled_AndroidStreamerControlled_SendFileData
Java_com_remote_streamer_controlled_AndroidStreamerControlled_SendTextData
Java_com_remote_streamer_StreamerMediaProjectionCallback_nativeOnStop
Java_com_remote_streamer_StreamerVirtualDisplayCallback_nativeOnPaused
```

**`libinputmanager.so` 关键 JNI 入口（证据等级 A）**

```
Java_com_remote_inputmanager_InputManagerStub_onTouchStart
Java_com_remote_inputmanager_InputManagerStub_onTouchUpdate
Java_com_remote_inputmanager_InputManagerStub_onTouchEnd
Java_com_remote_inputmanager_InputManagerStub_onTouchReset
Java_com_remote_inputmanager_InputManagerStub_onKeyAction
Java_com_remote_inputmanager_InputManagerStub_OnIMEText
Java_com_remote_inputmanager_InputManagerStub_OnIMEControl
Java_com_remote_inputmanager_InputManagerStub_registerDevice / removeDevice
Java_com_remote_inputmanager_InputManagerStub_transformEvent
```

### 2.5 关键 Assets

| 文件 | 作用 |
|---|---|
| `assets/streamer/streamer-config.json` | 编解码回退策略：Windows 旧 N 卡禁用 H.265；联想 TB371FC 限制解码能力；旧驱动强制软解 |
| `assets/device/default_controlled_ability_map.json` | 被控端能力协商表（见 2.6） |
| `assets/terminal_keyboard_page1.json` / `page2.json` | 终端键盘键位与 keyCode 映射（Esc=111、`~`、数字、字母等） |
| `assets/fullkeyboard/*` | 完整键盘布局 |
| `assets/39285EFA.dex` | 71KB 内嵌 DEX（需进一步确认加载方式） |
| `assets/grs_sdk_*` | 网易 GRS 路由配置 |
| `assets/*.bks` | 证书信任库 |
| `assets/key_codes.json`、`region_codes.json` | 键码、区域码 |

`default_controlled_ability_map.json` 中与本次分析直接相关的能力项：

```
full_screen, fps_90, fps_144, screen_hdr, screen_super, screen_privacy,
screen_privacy_enhanced, screen_virtual, screen_chroma, multi_screen,
remote_clipboard_v1/v2/v3, file_trans_v1/v2/v3/v4,
virtual_mouse, simulate_mouse, smart_mouse, mouse_cursor,
device_keyboard, device_mouse, device_gamepad, device_microphone,
mumu_control, remote_mute, auto_unlock, controlled_update,
device_reboot, device_shutdown, device_task_manager
```

> 能力表说明：文件传输存在四个代际（v1–v4），剪贴板存在三代（v1–v3），远程控制支持 90/144 FPS、HDR、隐私屏、虚拟屏、多屏、MuMu 模拟器控制等。

### 2.6 网络端点与第三方 SDK

对反编译源码进行域名聚合（字符串级证据，**不代表全部为运行时实际连接**）：

| 域名 | 归类 |
|---|---|
| `uuyc.163.com` | UU 远程主站 / API |
| `uuyc.webapp.163.com` / `uuyc-test.webapp.163.com` | Web 容器 / H5 |
| `adl.netease.com` | 网易广告/统计 |
| `mbdl.update.netease.com` | 更新下载 |
| `g0.gsf.netease.com` / `g0.gsf.easebar.com` | GRS 服务路由 |
| `applog.matrix.netease.com` / `applog.matrix.easebar.com` | 埋点日志 |
| `crash.163.com` | 崩溃上报 |
| `ye.dun.163yun.com` | 网易易盾（验证码/风控） |
| `api-push.meizu.com` / `api-push.in.meizu.com` | 魅族推送 |
| `mobilegw.alipay.com` | 支付宝 |
| `10.63.77.10` | 内网地址（测试/调试残留，需注意） |

第三方 SDK 识别：Sentry（崩溃）、Sensors Analytics（埋点）、网易云信/推送（`com.netease.pushservice`）、华为/小米/OPPO/vivo/魅族/荣耀推送、支付宝/微信支付、ZXing、SQLCipher、MMKV、Termux 终端组件。

---

## 3. 关键逻辑恢复

### 3.1 远程控制

#### 3.1.1 双端架构

```
主控端 (Controller)                         被控端 (Controlled)
┌───────────────────────┐                  ┌───────────────────────────┐
│ ScreenActivity        │                  │ ControlledStatusActivity  │
│ ScreenGestureFragment │                  │ ControlledForegroundService│
│ ControllerService     │                  │ ControlledService         │
│ StreamerController    │  WebRTC/QUIC     │ StreamerControlled        │
│  ├ sendControlData    │◄────────────────►│  ├ SendControlData        │
│  ├ sendTextData       │   STUN/TURN/ICE  │  ├ SendTextData           │
│  ├ sendBinaryData     │   SRTP           │  ├ SendBinaryData         │
│  └ sendFileData       │                  │  └ SendFileData           │
└───────────────────────┘                  └───────────────────────────┘
        │                                             │
        │ 渲染 SurfaceView                            │ MediaProjection
        │ 输入事件封装                                │ VirtualDisplay / AudioRecord
        ▼                                             ▼
   Remote video/audio                          Screen + Audio capture
```

**核心抽象类** `com.remote.streamer.controller.StreamerController`（证据等级 A）：

```java
public abstract class StreamerController {
    public abstract int initialize(String logPath, String configPath);
    public abstract long loginRoom(StreamerRoomConfig config);
    public abstract long createRoom(...);          // 被控端
    public abstract int connect(long handle, byte[] offer, String str, String str2);
    public abstract int disconnect(long handle);
    public abstract int exitRoom(long handle);
    public abstract int sendBinaryData(long handle, byte[] data);  // 终端
    public abstract int sendControlData(long handle, byte[] data); // 触控
    public abstract int sendFileData(long handle, byte[] data);    // 文件
    public abstract int sendTextData(long handle, byte[] data);    // 文本/JSON
    public abstract int startAudioCapture(long handle, AudioCaptureConfig config);
    public abstract int startAudioRender(long handle, AudioRendererConfig config);
    public abstract int stopVideoRender(long handle, int index);
    public abstract int switchIceNetwork(long handle, IceNetworkConfig config);
}
```

- `ControllerService` 实现主控侧，调用 `sendControlData(handle, L3.a())` 发送 Protobuf 序列化数据；`sendTextData` 在协程中执行。
- `ControlledService` 实现被控侧，`createRoom(StreamerRoomConfig)` 调用 native `CreateRoom`。
- `AndroidStreamerControlled` 的每个发送方法都是一层 JNI 转发：

```java
@Override public int sendBinaryData(long j, byte[] bArr) { return SendBinaryData(j, bArr); }
@Override public int sendControlData(long j, byte[] bArr) { return SendControlData(j, bArr); }
@Override public int sendFileData(long j, byte[] bArr) { return SendFileData(j, bArr); }
@Override public int sendTextData(long j, byte[] bArr) { return SendTextData(j, bArr); }
```

#### 3.1.2 屏幕与音频采集

`VideoCaptureConfig` 字段（证据等级 A）：

```
captureTarget, chromaSampling, codecType, cursorCapture, fps,
frameQuality, hdr, maxScaleHeight, maxScaleWidth, mediaProjection,
resolutionWidth, resolutionHeight, screenId, screenSourceType, videoTrackIndex
```

`ControlledForegroundService`（证据等级 A）：

```java
MediaProjection mediaProjection =
    ((MediaProjectionManager) getSystemService(MediaProjectionManager.class))
        .getMediaProjection(resultCode, data);
mediaProjection.registerCallback(callback, Handler);
startForeground(..., notification);   // foregroundServiceType=mediaProjection
```

- 通过 `MediaProjection` + `VirtualDisplay` 获取屏幕纹理，再交给 native `streamer::device::MediaProjection*` / `VirtualDisplay*` 回调。
- `libstreamer-jni.so` 中存在 `StreamerMediaProjectionCallback_nativeOnStop`、`StreamerVirtualDisplayCallback_nativeOnPaused/Resumed/Stopped`，说明采集生命周期由 native 层统一管理。
- 音频通过 `startAudioCapture` / `startAudioRender` 与 `RECORD_AUDIO` 配合；`AudioCaptureConfig` / `AudioRendererConfig` 控制采样与渲染。

#### 3.1.3 编码与传输

| 能力 | 证据 |
|---|---|
| WebRTC | `libstreamer.so` 含 `org.webrtc.NetworkMonitor` JNI、`WebRTC-SwitchEncoderOnInitializationFailures` |
| QUIC | `libstreamer.so` 含 `ngtcp2_*`、`OnQuicChannelClosed`、`QUIC` 日志字段 |
| STUN/TURN/ICE | 含 `STUN`、`TURN`、`low-priority TURN ports`、`retries for STUN_ERROR_ALLOCATION_MISMATCH` |
| SRTP | 含 `SRTP session: invalid key`、`srtp_protect` / `srtp_unprotect` |
| H.264/H.265 | `WebRTC-SpsPpsIdrIsH264Keyframe`、`streamer-config.json` 的 `disable_h265_codec` |
| 硬件/软件解码回退 | `set_max_decoder_cap`、`force_software_decoder` |

`streamer-config.json` 的三条策略：

1. Windows 主控端 + GTX/GT 7/9 系显卡 → 禁用 H.265；
2. Android 联想 `TB371FC` → 限制最大解码能力；
3. Windows 主控端 + 2024 年前驱动 → 强制软件解码。

#### 3.1.4 四条数据通道

| 通道 | Java API | 承载内容 | 序列化 |
|---|---|---|---|
| `sendControlData` | `ControllerService.sendControlData(long, L3)` | 触控、鼠标、Control 事件 | Protobuf `L3` |
| `sendTextData` | `ControllerService.sendTextData(long, L3)` | 键盘/文本输入、部分 JSON 控制 | Protobuf / 文本 |
| `sendFileData` | `ControllerService.sendFileData(long, L3)` | 文件传输 RPC/块 | Protobuf |
| `sendBinaryData` | `ControllerService.sendBinaryData(long, byte[])` | 终端帧 | 原始字节（TERM 帧） |

主控房间实现 `Jb.r`（证据等级 A）：

```java
// 触控
public final void x(f msg) {
    if (this.f7179o.b()) {
        p().getControllerService().sendControlData(this.f7168b.f36446a, msg.h());
    }
}
// 文本/键盘
public final void A(f msg) {
    if (this.f7180p.b()) {
        p().getControllerService().sendTextData(this.f7168b.f36446a, msg.h());
    }
}
// 文件块：交给 RpcHandler 后走 sendFileData
public final Object g(FileTransferBlockSendReq req, ...) {
    return r().b(new v(req, ...), continuation);
}
```

`Jb.z` 的 RPC 提交逻辑最终调用：

```java
getControllerService().sendFileData(handle, request.h(), continuation)
```

#### 3.1.5 控制输入类型

**触控**：`com.remote.proto.MultiTouchEvent`

- 字段：`Z6`（action 类型）+ `List<i>`（触点，含 id/x/y）；
- 序列化为 Protobuf `L3`（`D3` / `C3013a7`），由 `ScreenGestureFragment` 构造并通过 `Jb.r.x` 发送；
- 典型 action：按下、移动、抬起、取消（`Z6.f39879e` / `f39880f` / `f39881g` 等）。

**键盘/文本**：`com.remote.proto.SendInputToRoom`

- 字段：`inputType`（int）+ `msg`（String）；
- 序列化为 `C3147q6(EnumC3139p6, msg, inputType)`；
- 由 `s9.N` 构造，经 `Jb.r.A` 发送。

**剪贴板**：`com.remote.proto.ClipboardTextChangeReq` / `qb.N0`

- 对应能力 `remote_clipboard_v1/v2/v3`；
- 文本变更通过房间 RPC 同步。

**虚拟鼠标 / MuMu**：

- `InputManagerStub` 声明 JNI：`onTouchStart/Update/End`、`onKeyAction`、`OnIMEText`、`OnIMEControl`、`registerDevice`、`transformEvent`；
- `ScreenGestureFragment` / `ScreenToolbarFragment` 在 MuMu 场景调用 `Ma.c.c()` 获取 `InputManagerStub`；
- 能力表含 `virtual_mouse`、`simulate_mouse`、`smart_mouse`、`mumu_control`。

**画质档位**：`Lb.o` / `Lb.p` 将蓝光/超清/高清/流畅映射为 `VideoCaptureConfig(fps, quality, cursor, codecType, maxScaleWidth/Height, ...)`。

#### 3.1.6 被控端输入注入

| 路径 | 实现 | 证据 |
|---|---|---|
| 无障碍手势 | `AccessibilityService.dispatchGesture(GestureDescription)` | `Lb.q`、`Ta.b` |
| 窗口/按键事件 | `UURemoteAccessibilityService.onAccessibilityEvent` 收集包名/类名/事件 | `com.remote.provider.service.UURemoteAccessibilityService` |
| MuMu 本地注入 | `libinputmanager.so` JNI → `InputManager` 单例 | `nm -D` 符号 |
| 系统级注入 | 若具备特权/系统签名，`INSTALL_PACKAGES` 等权限可进一步扩权 | Manifest |

`Lb.q` 关键逻辑（证据等级 A）：

```java
GestureDescription.StrokeDescription stroke =
    new GestureDescription.StrokeDescription(path, startTime, duration);
GestureDescription.Builder builder = new GestureDescription.Builder();
builder.addStroke(stroke);
accessibilityService.dispatchGesture(builder.build(), null, null);
```

> 这意味着被控端在用户开启无障碍服务后，可以在不依赖 root 的情况下模拟点击、滑动、长按等手势。

#### 3.1.7 会话建立与协商（恢复的调用顺序）

```
1. 登录账号，获取设备列表 / 设备 ID
2. 主控端选择设备 → 创建 ControllerRoom（Jb.r）
3. 被控端创建房间（ControlledService.createRoom → native CreateRoom）
4. 信令交换：connect(handle, offer, ...)，native 完成 ICE/QUIC 协商
5. 协商结果回调：onNegotiateResult / onNatInfo / onConnectionError
6. 建立媒体轨：startVideoRender / startAudioRender
7. 建立数据通道：binary / control / file / text
8. 输入事件按类型分发到对应通道
9. 退出：exitRoom → disconnect → 清理 Surface / MediaProjection
```

相关回调接口（`StreamerController.Delegate`）：

```
onControllerPush, onEventReport, onFrameChange, onNatInfo,
onNegotiateResult, onQosStats, onReceiveBinaryData, onReceiveControlData,
onReceiveDataChannel, onReceiveFileData, onReceiveMediaTrack,
onReceiveTextData, onRemoveMediaTrack, onSignalData, onConnectionError
```

### 3.2 终端功能

#### 3.2.1 组件与职责

| 类 | 职责 |
|---|---|
| `com.remote.app.ui.activity.TerminalActivity` | 终端界面、键盘、会话入口 |
| `nc.b`（TerminalPresenter） | 设备 ID、sessionId、TerminalView、帧发送/接收 |
| `com.termux.view.TerminalView` | 仅负责终端渲染与键盘输入，不含远端逻辑 |
| `oc.AbstractC2773A` | TERM 帧编解码 |
| `oc.EnumC2782g` | 16 种帧类型 |
| `oc.z` | 帧模型 `(type, sessionId, payload)` |
| `oc.p` | `OpenPayload(shell, cols, rows, option)` |
| `oc.C2778c` | `ErrorPayload(code, message)` |
| `oc.C2781f` | `ExitPayload(exitCode)` |
| `oc.C2775C` / `C2776a` / `C2779d` 等 | `Resize` / `KillSession` / `Unlock` 等 payload |
| `Jb.r` | 房间发送入口 |
| `com.remote.streamer.controller.StreamerController` | `sendBinaryData` |

**关键结论**：终端不是本地 shell，而是**通过远程房间的 binary 数据通道，在主控端与被控端之间传输 TERM 帧**；`Termux` 只做显示。

#### 3.2.2 TERM 帧格式

`oc.AbstractC2773A` 恢复出的格式：

```
偏移  长度  字段            说明
0     4     magic          "TERM" = 0x54 0x45 0x52 0x4D
4     1     version        固定 0x01
5     1     type           帧类型（见下表）
6     2     reserved       固定 0x00 0x00
8     4     sessionId      int32 little-endian（通道/会话 ID）
12    4     payloadLength  int32 little-endian，最大 0x00100000（1 MiB）
16    N     payload        原始字节 / JSON / Protobuf
```

编码约束（证据等级 A）：

- 长度小于 16 字节 → `null`；
- magic/version 不匹配 → `null`；
- 未知 type → `null`;
- `payloadLength < 0 || > 1048576` → `null`；
- `bArr.length < payloadLength + 16` → `null`。

#### 3.2.3 帧类型表（byte[5]）

| 值 | 名称 | 方向（主控视角） | 说明 |
|---|---|---|---|
| 1 | `Open` | 主控 → 被控 | 打开会话，payload 为 JSON |
| 2 | `Stdin` | 主控 → 被控 | 标准输入，最大 512 KiB（超出截断） |
| 3 | `Resize` | 主控 → 被控 | 终端尺寸变化 |
| 4 | `Close` | 双向 | 关闭会话 |
| 5 | `Stdout` | 被控 → 主控 | 标准输出 |
| 6 | `Exit` | 被控 → 主控 | 进程退出，payload 含 exitCode |
| 7 | `Signal` | 双向 | 信号 |
| 8 | `Error` | 被控 → 主控 | `ErrorPayload(code, message)` |
| 9 | `ListSessionsReq` | 主控 → 被控 | 请求会话列表 |
| 10 | `ListSessionsResp` | 被控 → 主控 | 会话列表响应 |
| 11 | `KillSessionReq` | 主控 → 被控 | 结束指定会话 |
| 12 | `KillSessionResp` | 被控 → 主控 | 结束响应 |
| 13 | `OpenResp` | 被控 → 主控 | 打开响应 |
| 14 | `UnlockReq` | 主控 → 被控 | 解锁请求 |
| 15 | `UnlockResp` | 被控 → 主控 | 解锁响应 |
| 16 | `Detach` | 双向 | 分离会话（保留后台进程） |

#### 3.2.4 会话流程（恢复）

```
主控 TerminalActivity
  └─ O(activity, shell)
       ├─ 读取 TerminalView 当前 cols/rows（默认 80x24）
       ├─ new oc.p(shell, cols, rows)
       ├─ kotlinx.serialization JSON 序列化
       └─ b.n(new oc.z(Open, sessionId, jsonBytes))
            └─ AbstractC2773A.b(frame)
                 └─ Jb.r.getControllerService().sendBinaryData(handle, bytes)

被控端
  └─ onReceiveBinaryData(bytes)
       ├─ AbstractC2773A.c(bytes)  // 快速 magic 检查
       ├─ AbstractC2773A.a(bytes)  // 完整解码
       └─ 按 type 分发：
            Open → 创建 pty/shell 进程
            Stdin → 写入 stdin
            Resize → 调整 pty 尺寸
            Close/Detach → 关闭/分离
            ListSessionsReq → 返回列表
            KillSessionReq → 结束会话
            UnlockReq → 解锁
```

`OpenPayload` 的 JSON 结构（示例；`cols`/`rows` 由 `TerminalView` 实际尺寸决定，代码默认 80x24）：

```json
{"shell":null,"cols":80,"rows":24,"option":null}
```

- `shell`：目标 shell 路径；`null` 表示使用被控端默认 shell；
- `cols` / `rows`：终端尺寸；
- `option`：扩展选项，默认 `PushConstantsImpl.NONE`（空/无）。

#### 3.2.5 键盘映射

`assets/terminal_keyboard_page1.json` 提供终端专用键盘：

```json
{ "keyCode": 111, "displayName": "Esc", "startMargin": 0.0, "width": 1.0 }
{ "keyCode": 68,  "displayName": "`", "shiftDisplayName": "~", ... }
{ "keyCode": 45,  "displayName": "Q", ... }
```

这些 `keyCode` 是 Android `KeyEvent` 键码，经 `SendInputToRoom` 或终端输入路径发送到被控端。

#### 3.2.6 协议级动态验证（已执行）

在沙箱中用 Python 按恢复出的格式编码/解码，验证结果一致：

```
Open : 5445524d010100002a000000310000007b227368656c6c223a6e756c6c2c22636f6c73223a3132302c22726f7773223a33302c226f7074696f6e223a6e756c6c7d
Stdin: 5445524d010200002a000000170000006c73202d6c61202f646174612f6c6f63616c2f746d700a
decode Open : (1, 42, 49, b'{"shell":null,"cols":120,"rows":30,"option":null}')
decode Stdin: (2, 42, 23, b'ls -la /data/local/tmp\n')
zlib 64KB -> 85 bytes; frame hdr: 5445524d010600002a00000055000000 total: 101
```

- `0x2a` = 42，为示例 `sessionId`；
- `0x31` = 49 = Open payload 长度；
- `0x17` = 23 = Stdin payload 长度；
- `0x55` = 85 = zlib 压缩后长度；
- 帧头 `54 45 52 4d 01 06 0000 2a000000 55000000` 与代码完全吻合。

#### 3.2.7 终端相关安全观察

- 帧内**没有看到应用层鉴权字段**，安全性依赖房间/设备会话的传输层与登录态；
- `sessionId` 为 32 位整数，服务端需防止会话 ID 碰撞/越权；
- `Stdin` 仅按 512 KiB 截断，未做速率限制（在应用层可见范围内）；
- `Open` 允许指定 `shell`，若被控端未做白名单，存在命令执行面扩大风险（需结合实际被控端实现确认）；
- 终端数据走 `sendBinaryData`，与媒体/文件通道隔离，便于审计但也可被滥用于任意二进制隧道。

### 3.3 文件传输

#### 3.3.1 架构

```
Controller (发送端)                                Controlled (接收端)
┌────────────────────────────┐                  ┌────────────────────────────┐
│ FileTransferComposeFragment│                  │ TransferForegroundService   │
│ RemoteExplorerComposeFragment                 │  (dataSync 前台服务)        │
│ TransferTask (qa.g)        │                  │ TransferTask (qa.g)         │
│ TransferTaskStatus (qa.k)  │                  │ TransferTaskStatus (qa.k)   │
│ SenderCheckpoint (va...)   │                  │ DownloadCheckpoint          │
│ va.C3641o0 (状态机)        │  sendFileData    │ va.H (接收器)               │
│ Nb.k (块发送协程)          │◄────────────────►│ 写入 ContentResolver/文件   │
└────────────────────────────┘   file 通道      └────────────────────────────┘
```

- 前台服务：`com.remote.app.service.TransferForegroundService`
  - `foregroundServiceType="dataSync"`
  - 通知通道 `file_transfer_service_channel`
  - 启动 Intent extra：`device_id`
- 文件读取：`m5.AbstractC2549d`（`ContentResolver` / `FileDescriptor` / `InputStream`）
- 压缩：`Ga.b`（`Deflater`，zlib）
- 检查点：`E8.T`（下载/发送 checkpoint JSON 持久化）
- 任务数据库：`ua.n`（`getAllNotFinishTask` 等）

#### 3.3.2 文件传输 RPC 消息

| 消息类 | 关键字段 | 方向 | 作用 |
|---|---|---|---|
| `FileTransferAskSendReq` | `fileId`, `count=1`, `totalSize` | 发送 → 接收 | 询问是否接收/空间 |
| `FileTransferAskSendResp` | — | 接收 → 发送 | 应答 |
| `FileTransferSendSendReq` | `fileId`, `path`, `compressFlag`, `List<TransferFile>` | 发送 → 接收 | 宣告文件列表/路径 |
| `FileTransferBlockSendReq` | `fileId`, `blockIndex`, `field3=0`, `data` | 发送 → 接收 | 发送文件块 |
| `FileTransferBlockSendResp` | — | 接收 → 发送 | 块确认 |
| `FileTransferCompleteSendReq` | `fileId`, `count`, `EnumC3072h3` | 发送 → 接收 | 完成传输 |
| `FileTransferCompleteSendResp` | — | 接收 → 发送 | 完成确认 |
| `FileTransferConfirmRecvResp` | `f26012e`（long） | 接收 → 发送 | 确认接收（含偏移/大小） |
| `FileTransferFtpSendReq` | `f26014c`（long，基类字段，语义未完全确认） | 发送 → 接收 | FTP 基类 |
| `FileTransferFtpRecvResp` | — | 接收 → 发送 | FTP 响应 |
| `FileTransferFtpSendResp` | — | 接收 → 发送 | FTP 发送响应 |
| `ReadDirReq` / `ReadDirResp` | 路径 / 列表 | 双向 | 远程文件浏览 |
| `FileExistSendReq` | 路径 | 发送 → 接收 | 存在性检查 |
| `ClipboardTextChangeReq` | 文本 | 双向 | 剪贴板同步 |

> `FileTransferBlockSendReq` 构造器为 `(fileId, blockIndex, field3, ByteString data)`，其中 `field3` 默认 0；`FileTransferAskSendReq(fileId, totalSize)` 内部固定 `count=1`。

#### 3.3.3 发送流程（恢复）

```
1. 用户选择文件
   └─ TransferTask / TransferTaskTypeJsonObj
        (uri, device_name, target_uri, total_buffer_size, total_transfer_files_count)

2. 建立任务
   └─ Task 写入数据库（ua.n）
   └─ 启动 TransferForegroundService(device_id)
   └─ 创建 TransferSender2（va.C3641o0）

3. 询问
   └─ FileTransferAskSendReq(fileId, totalSize)
        └─ RPC → sendFileData

4. 宣告文件
   └─ FileTransferSendSendReq(fileId, path, files, compressFlag)
        └─ 文件列表可经 Deflater 压缩

5. 分块
   └─ 读取本地文件块 → Gb.u 事件
   └─ FileTransferBlockSendReq(fileId, blockIndex, 0, data)
        └─ Nb.k 协程 → RPC → sendFileData
        └─ 等待 FileTransferFtpRecvResp / 块 ACK
        └─ 日志：["TransferSender2"] ... "Send block"

6. 完成
   └─ FileTransferCompleteSendReq(fileId, count, result)
        └─ 对端 CompleteRecv → 落盘/重命名 → 返回确认

7. 状态
   └─ TransferTaskStatus(state, errorCode, errorMsg, progress,
                         speed, remainTime, isManualPause, isTransferringData)
```

#### 3.3.4 接收流程（恢复）

```
onReceiveFileData(bytes)
  └─ 解析 RPC
       ├─ Ask → 检查空间/权限 → FileTransferAskSendResp
       ├─ Send → 建立临时文件/目标 URI → 记录文件列表
       ├─ Block → 写入临时文件（顺序/偏移由 blockIndex 决定）
       │            └─ FileTransferBlockSendResp（ACK）
       ├─ Complete → flush/close → 校验 → 重命名/覆盖
       │            └─ FileTransferCompleteSendResp
       └─ ReadDir / FileExist → 读取目录 / 检查存在性
```

接收端核心：`va.H`（`InterfaceC3632k` 实现）、`FileTransferBlockRecvReq`、`FileTransferCompleteRecvReq`、`FileTransferBlockSendResp`。

#### 3.3.5 断点续传与检查点

- **发送检查点** `SenderCheckpoint(sender_token, platform, device_id, exists_check_...)`，由 `va.C3626h` / `va.C3630j` 描述；
- **下载检查点** `DownloadCheckpoint(version, ...)`，由 `va.C3612a` 描述；
- 持久化：`E8.T` 提供 `save download checkpoint`、`save send checkpoint`；
- 恢复：`E8.T` 读取 checkpoint 后恢复任务；`ua.n.getAllNotFinishTask` 拉取未完成任务；
- 任务状态机：`va.C3641o0`（TransferSender2）支持 `prepare`、`resumeTransfer`、`pause`、`stop`、`close`、`recycleTransferringResource`。

#### 3.3.6 压缩与冲突策略

- **压缩**：`Ga.b` 使用 `java.util.zip.Deflater` 对文件列表/文件块进行 zlib 压缩；`FileTransferSendSendReq` 的 `compressFlag` 控制是否压缩；
- **冲突策略**：`qa.EnumC2991a`：
  - `RENAME`（重命名）
  - `SKIP`（跳过）
  - `OVERRIDE`（覆盖）

#### 3.3.7 通道选择

- 文件列表、块、完成等 RPC 走 `sendFileData`（`Jb.z` 中 `getControllerService().sendFileData(handle, request.h(), ...)`）；
- 文件浏览 `ReadDir` 也可能走 control/text 通道（取决于上层 RPC 路由），但最终由 `SendRpcRequest` 子类统一封装；
- 终端数据走 `sendBinaryData`，与文件传输隔离，避免大块文件阻塞终端交互。

### 3.4 三大功能协议总表

| 功能 | 传输通道 | 封装 | 关键标识 | 分块/流控 | 典型消息 |
|---|---|---|---|---|---|
| 远程控制（媒体） | WebRTC/QUIC 媒体轨 | RTP/SRTP | SSRC、媒体类型 | 编码器自适应 | 视频/音频帧 |
| 远程控制（触控） | `sendControlData` | Protobuf `L3` | action + 触点 | 事件级 | `MultiTouchEvent` |
| 远程控制（键盘/文本） | `sendTextData` | Protobuf `L3` | inputType + msg | 事件级 | `SendInputToRoom` |
| 远程控制（剪贴板） | `sendTextData` / RPC | Protobuf | 文本 | 变更级 | `ClipboardTextChangeReq` |
| 终端 | `sendBinaryData` | TERM 帧 | magic + sessionId | 1 MiB / 512 KiB | Open/Stdin/Stdout/... |
| 文件传输 | `sendFileData` | Protobuf RPC | fileId + blockIndex | 块级 ACK | Ask/Send/Block/Complete |

---

## 4. 动态分析

### 4.1 环境探测结果（已执行）

```
arch = x86_64
/dev/kvm: No such file or directory
adb devices: List of devices attached   （无设备）
emulator: not found
frida: not found
python: Python 3.14.8
```

**结论**：

- 无 Android 真机/模拟器，无法安装 APK；
- 无 KVM，无法启动 x86 Android 模拟器；
- 远程控制功能需要**双端登录 + 设备绑定 + 房间协商**，单端静态环境无法复现完整链路；
- 因此，动态分析限定为**协议级动态验证**与**可在真机执行的动态方案设计**。

### 4.2 已完成的动态验证

| 验证项 | 方法 | 结果 |
|---|---|---|
| TERM 帧编码 | Python 按 `AbstractC2773A.b` 复现 | Open/Stdin 帧 hex 与预期一致 |
| TERM 帧解码 | Python 按 `AbstractC2773A.a` 复现 | `(type, sessionId, length, payload)` 正确 |
| 边界检查 | 长度/magic/版本/上限 | 代码路径与规则一致 |
| zlib 分块压缩 | `zlib.compress(raw, 9)` | 64 KiB → 85 字节，帧长 101 字节 |
| 通道映射 | 对照 `Jb.r` / `ControllerService` | binary/control/file/text 四通道确认 |

> 这属于“协议实现级动态验证”，不是 APK 运行时动态分析；报告明确区分两者。

### 4.3 真机动态验证方案

#### 4.3.1 准备

```bash
# 1. 连接设备
adb devices
adb shell getprop ro.product.cpu.abi
adb shell getprop ro.build.version.sdk

# 2. 安装
adb install -r "uuyc_4.46.0 (7).apk"

# 3. 查看包信息
adb shell dumpsys package com.netease.uuremote | head -80

# 4. 清空日志并启动
adb logcat -c
adb shell monkey -p com.netease.uuremote -c android.intent.category.LAUNCHER 1
```

#### 4.3.2 运行时观测点

| 目标 | 命令 / Hook | 预期 |
|---|---|---|
| 终端帧 | Hook `oc.AbstractC2773A.a/b` | 看到 `TERM` 帧、type、sessionId |
| 终端发送 | Hook `ControllerService.sendBinaryData` | 确认终端走 binary 通道 |
| 触控 | Hook `Jb.r.x` / `sendControlData` | `MultiTouchEvent` 序列化 |
| 键盘 | Hook `Jb.r.A` / `sendTextData` | `SendInputToRoom` |
| 文件传输 | Hook `Jb.z` / `sendFileData` | `FileTransferBlockSendReq` |
| 屏幕采集 | Hook `ControlledForegroundService` / `MediaProjection` | 采集启动、VirtualDisplay |
| 无障碍注入 | Hook `Lb.q.dispatchGesture` | 手势注入参数 |
| 网络 | `tcpdump` / `mitmproxy` | QUIC/UDP 443、STUN/TURN、HTTPS |

#### 4.3.3 Frida Hook 示例（终端帧）

```javascript
Java.perform(function () {
    var A = Java.use("oc.A");          // AbstractC2773A
    var Z = Java.use("oc.z");          // 帧模型

    A.a.overload("[B").implementation = function (buf) {
        var frame = this.a(buf);
        if (frame !== null) {
            console.log("[TERM] type=" + frame.f38067a + " sid=" + frame.f38068b
                        + " len=" + frame.f38069c.length);
        }
        return frame;
    };

    A.b.overload("oc.z").implementation = function (frame) {
        console.log("[TERM-OUT] type=" + frame.f38067a + " sid=" + frame.f38068b);
        return this.b(frame);
    };
});
```

> 混淆类名可能随版本变化；应以 JADX 当前版本的实际类名为准（本例为 `oc.A` / `oc.z`）。

#### 4.3.4 网络抓包

```bash
# 抓 UDP（QUIC / STUN / TURN）
adb shell su -c "tcpdump -i any -n -s 0 -w /sdcard/uuyc.pcap udp"

# 抓 HTTPS（需要设备证书/或使用 Frida 绕过 pinning）
adb shell settings put global http_proxy <proxy-host>:8080
```

预期看到：

- UDP 443 / 3478 / 5349（QUIC、STUN、TURN）；
- TCP 443（HTTPS API、更新、埋点）；
- 房间信令与媒体分离。

### 4.4 动态分析限制说明

- 未能执行：APK 安装、双端登录、房间建立、真实远程控制、真实终端会话、真实文件传输；
- 原因：沙箱无 Android 运行时、无 KVM、无设备、无网络对端；
- 替代：协议级验证 + 静态调用链恢复 + 真机方案；
- 建议：在具备真机与测试账号的环境中，按 4.3 执行，并将结果回填本报告第 3 章。

---

## 5. 安全评估（基于静态证据）

| 风险点 | 说明 | 等级 |
|---|---|---|
| 屏幕采集 | `MediaProjection` + `FOREGROUND_SERVICE_MEDIA_PROJECTION`，需用户授权；前台服务常驻 | 高（功能本身） |
| 无障碍注入 | `UURemoteAccessibilityService` + `dispatchGesture`，可模拟点击/滑动 | 高 |
| 音频采集 | `RECORD_AUDIO`，远程语音/环境音 | 中高 |
| 安装能力 | `REQUEST_INSTALL_PACKAGES` 普通授权；`INSTALL_PACKAGES` 需系统/签名权限 | 中高 |
| 悬浮窗 | `SYSTEM_ALERT_WINDOW`，可用于覆盖/引导 | 中 |
| 导出组件 | `LaunchActivity`、`DeepLinkActivity`、支付回调、推送 Receiver | 中（需校验输入） |
| 文件传输 | 任意路径/URI 传输，需确认目标路径白名单与覆盖策略 | 中高 |
| 终端 shell | `OpenPayload.shell` 可指定；需确认被控端白名单与鉴权 | 高 |
| 内网地址 | 源码含 `10.63.77.10`，可能为测试残留 | 低（信息泄漏） |
| 调试/备份 | `allowBackup=false`，未显式 `debuggable` | 低 |
| 第三方 SDK | Sentry、Sensors、多家推送、支付 | 中（数据出境/隐私合规需单独评估） |

> 本报告仅从逆向角度描述能力与攻击面，不构成漏洞利用结论；实际风险需结合服务端鉴权、房间权限、设备绑定与用户授权流程评估。

---

## 6. 证据索引与复现

### 6.1 关键源码位置（JADX 输出）

| 主题 | 文件 |
|---|---|
| 终端 UI | `/tmp/jadx_out/sources/com/remote/app/ui/activity/TerminalActivity.java` |
| 终端 Presenter | `/tmp/jadx_out/sources/nc/b.java` |
| TERM 编解码 | `/tmp/jadx_out/sources/oc/AbstractC2773A.java` |
| 帧类型 | `/tmp/jadx_out/sources/oc/EnumC2782g.java` |
| 帧模型 | `/tmp/jadx_out/sources/oc/z.java` |
| OpenPayload | `/tmp/jadx_out/sources/oc/p.java` |
| ErrorPayload | `/tmp/jadx_out/sources/oc/C2778c.java` |
| ExitPayload | `/tmp/jadx_out/sources/oc/C2781f.java` |
| 媒体控制器 | `/tmp/jadx_out/sources/com/remote/streamer/controller/StreamerController.java` |
| 主控服务 | `/tmp/jadx_out/sources/com/remote/streamer/service/ControllerService.java` |
| 被控 JNI | `/tmp/jadx_out/sources/com/remote/streamer/controlled/AndroidStreamerControlled.java` |
| 房间实现 | `/tmp/jadx_out/sources/Jb/r.java`、`/tmp/jadx_out/sources/Jb/z.java` |
| 触控 Proto | `/tmp/jadx_out/sources/com/remote/proto/MultiTouchEvent.java` |
| 键盘 Proto | `/tmp/jadx_out/sources/com/remote/proto/SendInputToRoom.java` |
| 文件传输 Proto | `/tmp/jadx_out/sources/com/remote/proto/FileTransfer*.java` |
| 文件发送状态机 | `/tmp/jadx_out/sources/va/C3641o0.java`、`/tmp/jadx_out/sources/Nb/k.java` |
| 文件接收 | `/tmp/jadx_out/sources/va/H.java` |
| 任务模型 | `/tmp/jadx_out/sources/qa/g.java`、`/tmp/jadx_out/sources/qa/k.java` |
| 冲突策略 | `/tmp/jadx_out/sources/qa/EnumC2991a.java` |
| 检查点 | `/tmp/jadx_out/sources/E8/T.java` |
| 传输前台服务 | `/tmp/jadx_out/sources/com/remote/app/service/TransferForegroundService.java` |
| 屏幕前台服务 | `/tmp/jadx_out/sources/com/remote/room/service/ControlledForegroundService.java` |
| 无障碍服务 | `/tmp/jadx_out/sources/com/remote/provider/service/UURemoteAccessibilityService.java` |
| 手势注入 | `/tmp/jadx_out/sources/Lb/q.java`、`/tmp/jadx_out/sources/Ta/b.java` |
| MuMu 输入 | `/tmp/jadx_out/sources/com/remote/inputmanager/InputManagerStub.java` |
| 压缩 | `/tmp/jadx_out/sources/Ga/b.java` |

### 6.2 关键文件哈希（IOC）

```
APK       68f41574b0074734647f4f314b47c157609ff6a1d528423871f1a0d6d9e79828
libstreamer.so       988c700249d6ecab983720cee40e6ff27aa0dec4e6a9186b6f16abe0061b929c
libstreamer-jni.so   532fd7289dd0450c71907e6830d210566ea98e467e56cb0d462fadf7f8bfe8c3
libinputmanager.so   ded97159271364e6e6e559371f41f99b2e6bbaf79c8ce385e2320eb16027d36c
libsqlcipher.so      d63a8d6bc0bb1bb1575e201f5c4d6bbcda7b9464bb309fb2f88daa6e1ee4a57b
libmmkv.so           3850acf55b2c29bd3a3714ac84b7ab6ef402fedc61d9646209dd273d604d1bd1
libNgModules.so      68093f696c6cb6807e3452b8b85401367da81a15a097d4802e5c8e95bc2e31cd
libnrdsign.so        2cd214374c4ba236b93fd004af73d65d89d0bf690cffc767fb64bb091a162af7
streamer-config.json bfc7f1e68742d3e9251018290f765ad88c32c1343159552cf6306b01b05116f0
ability_map.json     9cb0e6a58dca227d60504ab8d1488cdaee0612f997450f983590b99db1905a98
terminal_keyboard_page1.json d2d788767ca0026f9989a5f770aa316b925e8252e95bbb357a3c66eba0ae6f2b
terminal_keyboard_page2.json 9682f5c49afaec32a9b109335a434aee384b33a7dc6d1c03780556af5f732669
39285EFA.dex        0b9c032080788add7f5989d0ce145e66a4686ff3a43b0e48dec60bf18bf75701
```

### 6.3 复现命令

```bash
# 1. APK 基础信息
rea inspect-android-package --path "/workspace/Android/uuyc_4.46.0 (7).apk"
rea inspect-apk-signature --path "/workspace/Android/uuyc_4.46.0 (7).apk"

# 2. 资源与 Manifest
apktool d -f -s -o /tmp/uuyc_apktool "/workspace/Android/uuyc_4.46.0 (7).apk"

# 3. 全量反编译
jadx -d /tmp/jadx_out --no-res "/workspace/Android/uuyc_4.46.0 (7).apk"

# 4. 关键类定位
grep -rn "sendBinaryData\|sendControlData\|sendFileData\|sendTextData" /tmp/jadx_out/sources | head
grep -rn "TERM\|EnumC2782g\|AbstractC2773A" /tmp/jadx_out/sources/oc | head

# 5. Native 符号
nm -D --defined-only /tmp/uuyc_lib/lib/arm64-v8a/libstreamer-jni.so | grep Java_com_remote_streamer
nm -D --defined-only /tmp/uuyc_lib/lib/arm64-v8a/libinputmanager.so | grep Java_com_remote_inputmanager

# 6. 字符串
strings -a /tmp/uuyc_lib/lib/arm64-v8a/libstreamer.so | grep -iE "webrtc|ngtcp2|stun|turn|srtp|h264"
```

---

## 7. 附录

### 7.1 关键类索引（混淆名 → 语义）

| 混淆名 | 语义 |
|---|---|
| `oc.AbstractC2773A` | TERM 帧编解码器 |
| `oc.EnumC2782g` | 终端帧类型枚举 |
| `oc.z` | 终端帧模型 |
| `oc.p` | OpenPayload |
| `oc.C2778c` | ErrorPayload |
| `oc.C2781f` | ExitPayload |
| `nc.b` | TerminalPresenter |
| `Jb.r` | ControllerRoom（主控房间） |
| `Jb.z` | RpcHandler（RPC 分发/提交） |
| `va.C3641o0` | TransferSender2（发送状态机） |
| `va.C3639n0` | 文件块发送协程 |
| `va.H` | 文件接收器 |
| `va.C3616c` / `va.Q0` | `TransferTaskTypeJsonObj` |
| `va.N0` | `TransferTaskStateExtJsonObj` |
| `va.C3612a` | `DownloadCheckpoint` |
| `va.C3626h` / `va.C3630j` | `SenderCheckpoint` |
| `qa.g` | `TransferTask` |
| `qa.k` | `TransferTaskStatus` |
| `qa.EnumC2991a` | 文件冲突策略 |
| `Nb.k` | 文件块 ACK 协程 |
| `Ga.b` | zlib 压缩辅助 |
| `E8.T` | 检查点持久化 |
| `Lb.o` / `Lb.p` | 画质档位映射 |
| `Lb.q` / `Ta.b` | 无障碍手势注入 |

### 7.2 术语

| 术语 | 含义 |
|---|---|
| Controller | 主控端（观看/操作方） |
| Controlled | 被控端（被观看/被操作方） |
| TERM | 终端自定义帧协议 |
| L3 | Protobuf 顶层消息容器（RPC 封装） |
| ICE/STUN/TURN | NAT 穿透与中继 |
| QUIC / ngtcp2 | 低延迟 UDP 传输 |
| SRTP | 媒体加密 |
| MediaProjection | Android 屏幕采集 API |
| VirtualDisplay | 虚拟显示，用于采集屏幕内容 |
| TransferSender2 | 文件发送状态机 |
| Checkpoint | 断点续传检查点 |

### 7.3 分析局限

1. JADX 全量反编译存在 46 个错误，部分协程方法（如 `va.C3639n0.invokeSuspend`）未能完整恢复，文件块发送的精确循环/重试参数需结合 smali 或真机 Hook 进一步确认。
2. `libstreamer.so` 为 16 MB 的 C++ 库，本报告基于符号、字符串与 JNI 入口做结构性判断，未做完整函数级反编译。
3. 动态分析未在真实 Android 环境执行，远程控制/终端/文件传输的运行时行为（重试、超时、加密参数、服务端鉴权）仍需真机验证。
4. 域名列表来自源码字符串聚合，不能等同于运行时实际连接列表。
5. 本报告不包含漏洞利用代码；Frida 示例仅用于授权测试环境。

---

**报告结束**
