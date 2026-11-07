# 网易 UU 远程 TV 版 3.5.0 逆向分析报告

> 分析对象：`UURemote-tvProduction-3.5.0-30500-2b0f97d4-TV_gwqd.apk`
> 分析工具：REA 6.8.0（JADX MCP + Apktool Provider + Ghidra 12.1.4）
> 分析方式：静态逆向为主；动态分析受运行环境限制未能执行，详见第 9 章
> 报告日期：2026-11-07

---

## 1. 结论摘要

| 功能 | 结论 |
| --- | --- |
| 远程控制 | TV 端作为**控制端（Controller）**：HTTP 信令取房间 → `LoginRoom` 建立房间句柄 → `Connect` 建立 WebRTC P2P 连接 → 通过 `SendControlData` 发送 JSON 输入事件与 Protobuf RPC，通过 `SendFileData` 走文件传输 RPC。核心媒体与信令由原生库 `libstreamer.so` / `libstreamer-jni.so` 实现。 |
| “全程终端” | **该样本不存在交互式 Shell / PTY / SSH / ADB / Telnet / 远程命令执行通道。** 样本中的 “terminal” 语义为“被控端设备”（`terminal_ip`、`TerminalUpgrade`），并非命令行终端。终端相关能力实际由**全键盘、虚拟按键方案、手柄映射、外接键鼠无障碍通道**构成。 |
| 文件传输 | 协议与引擎完整：`RpcFileTransfer$*`（FTP 风格 RPC）、`FileTransferSendReq/ReceiveReq/BlockReq/AskReq/CompleteReq`、分块确认、断点续传 Checkpoint。**TV 版没有暴露文件传输入口**：`send_file` 等字符串资源未被任何 smali 引用，传输引擎类 `ud.*` 未从 `com.remote.app` 侧被调用。 |
| 动态分析 | 沙箱无 `adb`、无 Android SDK/模拟器、无 `/dev/kvm`、无 `/dev/binder`、CPU 无 `vmx/svm`，无法启动真实或虚拟 Android 环境，因此动态行为未实测；报告给出可复现的动态验证方案与 Frida Hook 点。 |

---

## 2. 样本基础信息

| 项 | 值 |
| --- | --- |
| 文件名 | `UURemote-tvProduction-3.5.0-30500-2b0f97d4-TV_gwqd.apk` |
| SHA-256 | `d2905fca0441adb30a1ce6c308c35cce07abed7d352f838f60ea9e95bf4c74a6` |
| 文件大小 | 33,899,672 字节（约 32.3 MiB） |
| 包名 | `com.netease.uuremote` |
| 应用名 | `UU远程`（`@string/app_name`） |
| versionName | `3.5.0` |
| versionCode | `30500` |
| minSdkVersion | 23（Android 6.0） |
| targetSdkVersion | 34（Android 14） |
| compileSdkVersion | 34 |
| ABI | `arm64-v8a`、`armeabi-v7a` |
| 应用入口 | `com.remote.app.ui.activity.LaunchActivity`（`MAIN` + `LEANBACK_LAUNCHER`，`exported=true`） |
| Application 类 | `com.remote.app.BlinkApplication` |
| 加固/混淆 | 无壳；R8 混淆（类名缩写为 `bc`、`kf`、`le`、`ud`、`rc`、`tc` 等） |
| Dex | `classes.dex` 主 Dex + `assets/39285EFA.dex`（次级 Dex 容器） |
| 类数量 | 9,076 |
| 签名 | APK Signature Scheme v1(JAR) + v2 |
| 证书主体 | `O=netease, CN=LiZiQi` |
| 证书序列号 | `1282E221` |
| 证书有效期 | 2022-07-13 ~ 2047-07-07 |
| 证书算法 | RSA |
| 证书 SHA-256 | `bd6a3a04791d5ca2e08fb9d7bd82265893d25aa1cb0b6a205b5a2bb154874924` |

TV 特性声明：

```xml
<uses-feature android:name="android.software.leanback" android:required="true"/>
<uses-feature android:name="android.hardware.touchscreen" android:required="false"/>
<uses-feature android:name="android.hardware.gamepad" android:required="false"/>
```

说明该包专为 Android TV / Leanback 设备构建，触屏非必需、手柄可选，与手机版存在功能裁剪差异。

---

## 3. 权限、组件与攻击面

### 3.1 权限

| 类别 | 权限 |
| --- | --- |
| 网络 | `INTERNET`、`ACCESS_NETWORK_STATE`、`ACCESS_WIFI_STATE`、`CHANGE_NETWORK_STATE` |
| 存储 | `READ_EXTERNAL_STORAGE`、`WRITE_EXTERNAL_STORAGE` |
| 安装 | `INSTALL_PACKAGES`、`REQUEST_INSTALL_PACKAGES` |
| 音视频 | `CAMERA`、`RECORD_AUDIO`、`VIBRATE`、`WAKE_LOCK` |
| 设备/账号 | `READ_PHONE_STATE`、`USE_FINGERPRINT`、`USE_BIOMETRIC`、`FOREGROUND_SERVICE` |
| 厂商 | `com.asus.msa.SupplementaryDID.ACCESS`（华硕 OAID） |

值得注意：

- `INSTALL_PACKAGES` 属系统级权限，普通三方应用无法获得；该声明通常用于配合厂商 ROM 或 root 场景的静默安装逻辑。
- `requestLegacyExternalStorage="true"`，在 Android 10 上使用旧式外部存储模型。
- `allowBackup="false"`，降低 adb backup 数据导出风险。

### 3.2 组件

| 类型 | 组件 | exported | 说明 |
| --- | --- | --- | --- |
| Activity | `com.remote.app.ui.activity.LaunchActivity` | true | 唯一业务导出组件，TV Launcher 入口 |
| Activity | `TvMainActivity`、`TvControlActivity`、`TvLoginActivity` 等 | false | 业务页面 |
| Service | `androidx.work.impl.background.systemjob.SystemJobService` | true | 受 `BIND_JOB_SERVICE` 保护 |
| Service | `androidx.room.MultiInstanceInvalidationService` | false | Room 内部 |
| Service | `com.xuexiang.xupdate.service.DownloadService` | false | 升级下载 |
| Provider | `com.netease.uuremote.updateFileProvider` | false | 升级 FileProvider，`grantUriPermissions=true` |
| Provider | `com.netease.uuremote.feedback.sdk.provider` | false | 反馈 SDK |
| Receiver | `androidx.work.impl.diagnostics.DiagnosticsReceiver` | true | 受 `android.permission.DUMP` 保护 |
| Receiver | `androidx.profileinstaller.ProfileInstallReceiver` | true | 受 `android.permission.DUMP` 保护 |

没有导出的业务 Service/Receiver；未声明 `networkSecurityConfig`，未显式开启 `usesCleartextTraffic`（targetSdk 34 默认禁止明文 HTTP，业务 API 均使用 HTTPS）。

### 3.3 第三方 SDK

| SDK/组件 | 证据 |
| --- | --- |
| 网易易盾（一键登录/风控） | `ye.dun.163yun.com`、`da.dun.163.com`、`com.netease.nis.quicklogin` |
| 中国电信一键登录 | `open.e.189.cn`、`api-e189.21cn.com`、`libCtaApiLib.so` |
| Sentry | `sentry.netease.com/191`，DSN `3d478ca1148b47a3b116ee65aad0ec47` |
| 神策（Sensors） | `shence-api.mumu.163.com/sa?project=uu_remote_prod` |
| 网易 crash | `crash.163.com` |
| MMKV / SQLCipher / Mars XLog | `libmmkv.so`、`libsqlcipher.so`、`libmarsxlog.so` |
| ARouter | `com.alibaba.android.arouter.facade.Postcard` |
| AndroidX Camera / WorkManager / Room / ProfileInstaller | 清单与类名 |
| ZXing C++ | `libzxingcpp_android.so` |

---

## 4. 整体架构

```
┌───────────────────────────────────────────────────────────────┐
│ UI 层                                                         │
│ TvMainActivity / TvControlActivity / TvToolBar*Fragment        │
│   ├─ 外设面板：手柄 / 键盘 / 鼠标（@string/attachment=外设）    │
│   ├─ 虚拟按键与全键盘（com.remote.virtual_key、vkplan）         │
│   └─ 网络状态（terminal_ip）                                   │
├───────────────────────────────────────────────────────────────┤
│ 应用控制层                                                     │
│ bc.h / bc.k / rc.g（StreamerControllerCallback 实现）          │
│ tc.l / de.a / le.a（输入事件组装与本地输入变换）                │
│ kf.v（控制事件 / RPC 发送门面）                                 │
├───────────────────────────────────────────────────────────────┤
│ 服务层                                                         │
│ IPluginStreamer → ControllerService（IControllerService）       │
│ StreamerControllerUtil（Java ↔ JNI 适配）                      │
├───────────────────────────────────────────────────────────────┤
│ 原生层                                                         │
│ libstreamer-jni.so  → JNI 注册与胶水                            │
│ libstreamer.so      → 信令 / WebRTC / 编解码 / 传输（16 MB）     │
│ libinputmanager.so  → 被控端输入注入（InputManagerStub）        │
├───────────────────────────────────────────────────────────────┤
│ 传输面                                                         │
│ HTTPS 信令 API（api.nrd.nie.163.com）                           │
│ WebRTC P2P 媒体面（视频/音频）                                  │
│ 控制面：JSON over SendControlData                               │
│ RPC 面：Protobuf over SendControlData / SendFileData            │
└───────────────────────────────────────────────────────────────┘
```

核心包规模（按类数量）：

| 包 | 类数 | 作用 |
| --- | --- | --- |
| `com.remote.store` | 179 | Protobuf/数据模型、数据库 |
| `com.remote.streamer` | 88 | 流会话、控制器、回调、推送 |
| `com.remote.app` | 50 | TV UI 与业务 |
| `com.remote.vkplan` | 39 | 虚拟键位方案 |
| `com.remote.virtual_key` | 39 | 虚拟按键/全键盘 |
| `com.remote.file` | 28 | 文件传输 RPC |
| `com.remote.gesture` | 26 | 输入事件模型 |
| `com.remote.room` | 10 | 房间/RPC 基类 |
| `com.remote.device` | 10 | 设备模型 |
| `com.remote.inputmanager` | 4 | 输入注入桥 |

### 4.1 原生库

| 库（arm64-v8a） | 大小 | 用途 |
| --- | --- | --- |
| `libstreamer.so` | 16 MB | WebRTC/信令/编解码/传输核心 |
| `libstreamer-jni.so` | 121 KB | Java JNI 桥 |
| `libinputmanager.so` | 1.3 MB | 被控端输入变换/注入 |
| `libsqlcipher.so` | 5.6 MB | 加密数据库 |
| `libmmkv.so` | 510 KB | KV 存储 |
| `libmarsxlog.so` | 639 KB | 日志 |
| `libsentry.so` / `libsentry-android.so` | 1.2 MB / 16 KB | 崩溃上报 |
| `libzxingcpp_android.so` | 1.8 MB | 二维码 |
| `libimageprocess.so` | 271 KB | 图像处理 |
| `libCtaApiLib.so` | 487 KB | 电信一键登录 |
| `lib39285EFA.so` | 151 KB | 次级 Dex 对应 native |
| `libc++_shared.so` | 899 KB | C++ 运行时 |

---

## 5. 服务端接口与配置

### 5.1 环境与基址

`re/h` 中硬编码：

| 环境 | 主机 |
| --- | --- |
| production（正式服） | `api.nrd.nie.163.com` |
| pre（正式服预发布） | `api-pre.nrd.nie.163.com` |
| dev（测试服） | `api-nrd.dev.webcgi.163.com` |
| 自定义 | MMKV `key_custom_host` |

`re/e` 拼接 `https://` + host + path；说明业务 API 全部 HTTPS。

### 5.2 API 路径（节选）

| 功能 | 路径 |
| --- | --- |
| 设备注册 | `/api/v1/device/android_tv/init`、`/api/v1/device/android/init` |
| 设备列表 | `/api/v1/device/list` |
| 应用列表 | `/api/v1/app/list/of/device/{deviceId}` |
| 创建房间 | `/api/v1/room/create` |
| 加入房间 | `/api/v1/room/join/by_device/{deviceId}` |
| 键位方案 | `/api/v1/keymapping/{list,add,update,delete,share,official/list,shared/info,add/by/shared}` |
| 登录 | `/api/v1/login/by_mobile`、`by_oneclick`、`by_qrcode` |
| 扫码登录 | `/api/v1/qrcode/{gen/login,login/action,login/status,scanned}` |
| 用户 | `/api/v1/user/info`、`/api/v1/user/logout` |
| 升级 | `/api/v1/release/fetch/update/force` |
| 安全 | `/api/v1/security/mobile/code` |
| 工具 | `/api/v1/tool/configures`、`/api/v1/tool/fp/token` |
| 埋点 | `/api/v1/event/report/batch`、`/api/v1/event/uni/report` |
| 日志上传 | `/api/v1/room/notify/user_device/upload_log` |

### 5.3 资产配置

| 资产 | 内容 |
| --- | --- |
| `assets/streamer-config.json` | 按平台/显卡/机型禁用 H.265、限制解码能力、强制软解（Windows 控制器 GTX 7/9 系、Lenovo TB371FC 等） |
| `assets/fullkeyboard/default_full_keyboard_main.json` | 全键盘主区：`keyRowList` + `standardParam`，键位含 `keyCode/displayName/startMargin/width` |
| `assets/fullkeyboard/default_full_keyboard_func.json` | 功能键区（PrtSc/Scroll/Pause/Ins/Home/PageUp 等） |
| `assets/fullkeyboard/default_full_keyboard_num_main.json` | 数字键盘区 |
| `assets/key_codes.json` | 26 字母 + 数字 + 功能键的 Android KeyCode 映射 |
| `assets/vkplan/default_vk_plan.json` | 默认虚拟按键方案：WASD、MOUSE_PRIMARY、`direction_swipehold`、`single_key` |

---

## 6. 远程控制功能静态分析

### 6.1 会话建立时序

```
TV(控制端)                         服务端                        被控端(PC/Android)
   │  HTTPS /api/v1/device/list      │                              │
   │───────────────────────────────>│                              │
   │  HTTPS /api/v1/room/create      │                              │
   │  or /room/join/by_device/{id}   │                              │
   │───────────────────────────────>│                              │
   │<──────── RoomConfig(signaling_server, token, signaling_list) ─│
   │                                │                              │
   │  StreamerControllerUtil.loginRoom(RoomConfig)                 │
   │  └─ native LoginRoom(roomConfig) → roomHandle (long)          │
   │                                │                              │
   │  createConnection(handle, ConnectOptions, appControlId)       │
   │  └─ native Connect(handle, ByteBuffer(options), appControlId) │
   │                                │                              │
   │<──────── onRoomState / onConnectionState(kPeerConnected) ─────│
   │<──────── onNatInfo / onQosStats / onFrameChange ──────────────│
   │                                │                              │
   │  startVideoRender(VideoRendererConfig) / startAudioRender     │
   │                                │                              │
   │  SendControlData(JSON 输入事件) ─────────────────────────────>│
   │  SendControlData(Protobuf RPC) ─────────────────────────────>│
   │  SendFileData(Protobuf 文件传输 RPC) ───────────────────────>│
   └────────────────────────────────┴──────────────────────────────┘
```

关键调用点：

| 步骤 | 类/方法 | 行为 |
| --- | --- | --- |
| 登录房间 | `com.remote.streamer.controller.StreamerControllerUtil.loginRoom` | `streamerController.LoginRoom(streamerRoomConfig)` 返回 `long` 句柄；`UnsatisfiedLinkError` 时返回 0 |
| 建立连接 | `StreamerControllerUtil.createConnection` | 将 `ConnectOptions.toByteArray()` 放入 direct `ByteBuffer`，调用 `Connect(handle, buffer, appControlId)` |
| 控制事件 | `StreamerControllerUtil.sendControlEvent(long, String)` | UTF-8 字节 → direct ByteBuffer → `SendControlData(handle, buffer)` |
| 控制消息 | `ControllerService.sendControlData(long, Main$Message)` | 校验房间句柄后转 `StreamerControllerUtil.sendControlData` |
| 文件数据 | `ControllerService.sendFileData(long, Main$Message)` | 转 `SendFileData`；句柄无效返回 -1 |

`StreamerController` 的 JNI 方法全集：

```text
Initialize(String, String)
LoginRoom(StreamerRoomConfig) : long
Connect(long, ByteBuffer, String) : int
Disconnect(long) : int
ExitRoom(long) : int
SendControlData(long, ByteBuffer) : int
SendFileData(long, ByteBuffer) : int
SendTextData(long, ByteBuffer) : int
StartVideoRender(long, VideoRendererConfig) : int
StopVideoRender(long, String) : int
StartAudioRender(long, AudioRendererConfig) : int
StopAudioRender(long, String) : int
GetConnectionStats(long) : int
GetDecodeCapability() : String
Finalize() : int
```

原生库加载：

- `com.remote.streamer.Streamer` → `System.loadLibrary("streamer-jni")`
- `le.a` → `System.loadLibrary("inputmanager")`
- `com.remote.store.MainDataBase` → `System.loadLibrary("sqlcipher")`

### 6.2 房间与连接配置模型

`RoomConfig`（`com.remote.room.api.model.RoomConfig`）：

| 字段 | 类型 | 含义 |
| --- | --- | --- |
| `signaling_server` | String | 信令服务器 |
| `token` | String | 房间令牌 |
| `signaling_list` | List | 备用信令列表 |
| `ws_connect_timeout_ms` | int | WebSocket 连接超时 |
| `streamer_retry_delta_ms` | int | 流重试退避 |
| `report_token` | String | 上报令牌 |
| `report_url` | String | 上报地址 |

`ConnectOptions`（`Connect$ConnectOptions`，Protobuf）：

| 字段 | 说明 |
| --- | --- |
| `captureType` / `typeValue` | 采集类型 |
| `captureParams` | 采集参数 |
| `decoderCapList` | 解码能力列表 |
| `forceVirtualDisplay` | 是否强制虚拟屏 |
| `virtualDisplayModes` | 虚拟屏模式 |
| `virtualDisplayInitResolution` | 虚拟屏初始分辨率 |
| `clientType` | 客户端类型 |

`CaptureConfig`（`General$CaptureConfig`）：

| 字段 | 说明 |
| --- | --- |
| `client` | 采集客户端 |
| `fps` | 帧率 |
| `frameQuality` | 画质 |
| `cursorCapture` | 是否采集光标 |
| `screenId` | 屏幕 ID |
| `resolutionWidth/Height` | 分辨率 |
| `configFlag` | 配置标志位（long） |

`ScreenDisplayInfo` / `ScreenQualityCapability` 承载被控端屏幕分辨率、FPS、画质能力，用于协商档位。

### 6.3 控制通道（JSON）

输入事件模型位于 `com.remote.gesture.contract.event`，由 Moshi 序列化为单层 JSON 对象，统一含 `action` 字段。

| action | JSON 字段 | 模型类 | 含义 |
| --- | --- | --- | --- |
| `finger_down` | `action`, `button` | `PressEvent` | 指针按下 |
| `finger_up` | `action`, `button` | `ReleaseEvent` | 指针抬起 |
| `finger_move_absolute` | `action`, `abs_x`, `abs_y` | `MoveAbsoluteEvent` | 绝对坐标移动 |
| `finger_move_relative` | `action`, `delta_x`, `delta_y` | `MoveViewportEvent` | 相对位移 |
| `two_fingers_scroll` | `action`, `delta_x`, `delta_y` | `MouseRollerEvent` | 双指/滚轮滚动 |
| `kbd_press` | `action`, `key` | `KeyPressEvent` | 键盘按下 |
| `kbd_release` | `action`, `key` | `KeyReleaseEvent` | 键盘抬起 |
| `virtual_keys_press` | `action`, `virtual_keys_config` | `VKPressEvent` | 虚拟键按下 |
| `virtual_keys_release` | `action`, `virtual_keys_config` | `VKReleaseEvent` | 虚拟键抬起 |
| `gpd_connect` | `action`, `index` | `GamepadConnectEvent` | 手柄接入 |
| `gpd_disconnect` | `action`, `index` | `GamepadDisconnectEvent` | 手柄断开 |
| `gpd_update` | `action`, `index`, `buttons`, `left_trigger`, `right_trigger`, `left_thumb_x/y`, `right_thumb_x/y` | `GamepadKeyEvent` | 手柄状态更新 |
| `cursor_change` | `action` | `bc.p` | 光标形态变更 |
| `gpd_vibration` | — | `bc.p` | 手柄震动反馈 |

示例：

```json
{"action":"finger_move_absolute","abs_x":960.0,"abs_y":540.0}
{"action":"kbd_press","key":29}
{"action":"two_fingers_scroll","delta_x":0.0,"delta_y":-120.0}
{"action":"gpd_update","index":0,"buttons":4096,"left_trigger":0.0,
 "right_trigger":0.0,"left_thumb_x":0.0,"left_thumb_y":0.0,
 "right_thumb_x":0.0,"right_thumb_y":0.0}
```

发送链路：

```
物理输入 / 触摸 / 手柄
  → TvControlActivity.dispatchKeyEvent / onKeyDown
  → ve.a 事件总线（bc.t 转发鼠标键/移动/滚轮/缩放）
  → tc.l.m(List<String>)
  → kf.v.q(String)
  → IPluginStreamer.getControllerService().sendControlEvent(roomHandle, json)
  → ControllerService → StreamerControllerUtil
  → native SendControlData
```

`tc.l.m` 实现即为逐条调用 `e().q(...)`；`kf.v.q` 从插件注册表取 `IPluginStreamer`，未注册时抛 `IllegalStateException("No IPlugin of ... was found! Has you register it?")`。

### 6.4 RPC 通道（Protobuf）

RPC 复用控制通道，通过 `Main$Message.rpcRequest` 发送，`rpcResponse` 返回。请求/响应基类为 `com.remote.room.api.controller.rpc.BaseRpcRequest` / `BaseRpcResponse`。

`kf.v.t` 的发送逻辑（恢复）：

```java
void sendRpc(BaseRpcRequest req, Callback cb) {
    req.remoteFeatureFlag = currentFeatureFlag();   // f7672e
    req.callback = wrap(cb);                        // f7673f
    if (req.timeoutMs(currentFeatureFlag()) > 0) {  // G0()
        handler.sendMessage(Message.obtain(handler, 0, req));
        return;
    }
    BaseRpcResponse resp = req.createResponse();
    resp.featureFlag = req.remoteFeatureFlag;
    resp.errorCode = -2;                            // 能力不支持
    cb.onResult(resp);
}
```

要点：

- 每个请求携带 `FeatureFlag`，对端可据此判定是否支持该 RPC。
- `G0()` 返回超时时间（毫秒）；文件传输类请求统一为 `0xEA60 = 60000 ms`。
- 不支持时返回 `-2`，而不是网络错误。
- 请求通过 `Handler` 投递，避免在回调线程直接阻塞。

`RpcMain$RpcRequest` 分支：

| 分支 | 说明 |
| --- | --- |
| `CAPTURE_SETTING` | 采集参数设置 |
| `CURSOR_SETTING` | 光标显示/采集设置 |
| `FILE_TRANSFER_FTP_REQUEST` | 文件传输 FTP 请求 |
| `FPS_SETTING` | 帧率设置 |
| `PRIVATE_SCREEN_SETTING` | 隐私屏设置 |
| `REQUEST_HEADER` | RPC 头 |
| `RESOLUTION_SETTING` | 分辨率设置 |
| `VIDEO_QUALITY_SETTING` | 画质设置 |

`RpcMain$RpcResponse` 分支：`CAPTURE_SETTING`、`FILE_TRANSFER_FTP_RESPONSE`、`PRIVATE_SCREEN_SETTING`、`RESPONSE_HEADER`。

`RpcMessage` 设置类（`com.remote.store.proto.RpcMessage$*`）：

| 类 | 方向 | 关键字段/语义 |
| --- | --- | --- |
| `CaptureSettingRequest` / `Response` | 双向 | 采集参数 |
| `CursorSettingReqeust`（源码拼写如此） | 控制端→被控端 | 光标 |
| `FpsSettingRequest` | 控制端→被控端 | 帧率 |
| `PrivateScreenSettingRequest` / `Response` | 双向 | 隐私屏开关 |
| `ResolutionSettingRequest` | 控制端→被控端 | 分辨率 |
| `VideoQualitySettingReqeust` | 控制端→被控端 | 画质 |

### 6.5 输入事件与本地注入

除远程下发外，TV 端自身也做输入归一化：

| 类 | 作用 |
| --- | --- |
| `com.remote.app.ui.activity.TvControlActivity` | `dispatchKeyEvent` / `onKeyDown`；手柄组合键（106/107、108/23）双键长按检测；`isFromSource(513)` 时转发到 `ve.a` |
| `bc.t` | 鼠标按键、移动、滚轮、缩放转发到事件总线 |
| `rc.g` | `onMousePressEvent` / `onScrollRoller` / `onUpdatePointer` / `onCursorShapeChange` |
| `tc.l` | 将事件对象转为 JSON 字符串并下发 |
| `de.a.c(int keyCode, boolean press)` | 构造 `KeyPressEvent` / `KeyReleaseEvent` 并序列化 |
| `le.a.c(String)` | 调用 `le.a.b()` 取 `InputManagerStub`，执行 `transformEvent(platform, code, event)`（`libinputmanager.so`） |

`le.a` 静态初始化：

```java
System.loadLibrary("inputmanager");
// 三个 lazy：InputManagerStub、平台参数、变换入口
```

`InputManagerStub` 相关模型：`InputManagerDisplayInfo`、`MuMuSystemKey`、`MuMuTouchPointInfo`，说明输入层还兼容 MuMu 模拟器的系统键/触点注入。

### 6.6 全键盘、虚拟按键与手柄

| 能力 | 证据 |
| --- | --- |
| 全键盘 | `com.remote.virtual_key.model.FullKeyboardConfig/Row/Item/StandardParam`；Compose UI `sg.b/e/h/j`；资产三套 JSON |
| 虚拟按键方案 | `com.remote.vkplan.api.model.*`（`VKPlanContent`、`VKPlanKeysConfig`、`VKPlanViewControl*`）；`assets/vkplan/default_vk_plan.json` |
| 键位映射 | `/api/v1/keymapping/*` 服务端接口；`com.remote.virtual_key.ui.fragment.VKPickFragment` 等 |
| 手柄 | `Gamepad*Event`、`gpd_*` action、`TvGamePadContainerFragment`、`toolbar_peripherals_gamepad` |
| 外设面板 | `TvToolBarAttachmentFragment`，标题 `@string/attachment`（中文“外设”），含手柄/键盘/鼠标三项 |
| 外接键盘 | `@string/keyboard_accessibility_label`、`toolbar_keyboard_accessibility_*` 引导开启系统“UU远程键盘外设”权限；代码只检测 `enabled_accessibility_services` 是否包含服务简单名，未在清单声明 AccessibilityService |

`attachment` 资源的中文值为“外设”，因此 `TvToolBarAttachmentFragment` 不是“文件附件”，而是外设管理面板。

### 6.7 画面、隐私与系统消息

`Main$Message` 分支（Protobuf oneof）：

| 分支 | 说明 |
| --- | --- |
| `captureConfig` / `captureConfigResponse` / `captureChange` | 采集配置协商与变更 |
| `codecNegotiation` | 编解码协商 |
| `screens` | 屏幕列表 |
| `activeWindowChange` | 活动窗口变化 |
| `clipboardChange` | 剪贴板同步 |
| `showApp` / `launchApp` | 应用展示/启动 |
| `simpleAction` | `General$SimpleAction`：`action`、`args`、`keyToggle`、`value`、`featureFlag`，用于特性开关 |
| `systemMetrics` / `systemStateChange` / `querySystemState` | 系统指标与状态 |
| `mumuOperate` | MuMu 直控相关操作 |
| `sendToRom` / `romMessage` | 厂商 ROM 通道 |
| `reportError` / `reportQosStats` | 错误与 QoS 上报 |
| `seq` / `timestamp` | 序号与时间戳 |

`RpcMessage` 还包含隐私屏、光标、FPS、分辨率、画质等设置类，对应工具栏中的“帧率与画面”“隐私屏”等入口。

### 6.8 关键逻辑恢复（伪代码）

**A. 建立会话**

```java
long handle = streamer.LoginRoom(roomConfig);          // JNI
if (handle <= 0) return FAIL;
ConnectOptions opts = buildOptions(clientType, caps, virtualDisplay);
int rc = streamer.Connect(handle, directBuffer(opts.toByteArray()), appControlId);
if (rc != 0) return FAIL;
controllerService.startVideoRender(handle, videoCfg);
controllerService.startAudioRender(handle, audioCfg);
```

**B. 发送输入事件**

```java
void sendInput(String json) {
    if (json.isEmpty() || roomHandle <= 0) return;
    byte[] b = json.getBytes(UTF_8);
    ByteBuffer buf = ByteBuffer.allocateDirect(b.length);
    buf.put(b); buf.flip();
    streamer.SendControlData(roomHandle, buf);
}
```

**C. 发送 RPC**

```java
void rpc(BaseRpcRequest req, Callback cb) {
    req.featureFlag = featureFlag.get();
    req.callback = cb;
    if (req.timeout(featureFlag.get()) > 0) {
        handler.sendMessage(Message.obtain(handler, 0, req));
    } else {
        BaseRpcResponse r = req.createResponse();
        r.featureFlag = req.featureFlag;
        r.errorCode = -2;
        cb.onResult(r);
    }
}
```

**D. 收到 RPC（文件传输服务端式分发）**

```java
void onReceiveRpcRequest(RpcRequest req) {
    if (!req.hasFileTransferFtpRequest()) return;
    FtpRequest ftp = req.getFileTransferFtpRequest();
    int taskId;
    switch (ftp.getWhichCase()) {
        case FILE_ASK:   taskId = ftp.getFileAsk().getId().getTaskId(); break;
        case FILE_BLOCK: taskId = ftp.getFileBlock().getId().getTaskId(); break;
        case COMPLETE:   taskId = ftp.getComplete().getId().getTaskId(); break;
        default: return;
    }
    launchCoroutine(taskId, ftp);   // ud.l / ud.k
}
```

---

## 7. “终端”能力核查

### 7.1 结论

**未发现远程命令行终端。** 该 APK 不含 PTY、交互式 Shell、SSH、Telnet、ADB 通道，也没有把 `Runtime.exec` 的结果回传控制端的逻辑。样本中所有 “terminal” 标识均指“被控端设备/终端设备”，而非 shell。

### 7.2 证据

| 检查项 | 结果 |
| --- | --- |
| `Runtime.exec` / `ProcessBuilder` | 仅 6 处：`m/f`（root 静默安装助手，执行 `su`/`sh` + `pm get-install-location` / `pm install --user 0`）；`ze.m`（`logcat -t 1000 *:I`）；Sentry、神策、MSA、电信 SDK 的设备信息采集；均非交互式终端 |
| `pty` / `/bin/sh` 常驻 / `ssh` / `telnet` / `busybox` | 无相关字符串与类 |
| 导出的 Service | 无业务 Service 导出 |
| 终端模拟器 UI | 无 Terminal/Console/Session 类 |
| `terminal_ip` | `WebRTCConnectionEvent$WebRtcConnectionInfo` 字段，展示于 `TvNetworkStatusFragment` 的“被控端IP” |
| `TerminalUpgrade` | 推送类型 `terminal_upgrade`，用于被控端升级 |
| `PushType` | 包含 `terminal_upgrade` |

`TvNetworkStatusFragment` 直接引用 `@string/detail_terminal_ip`（`0x7f1400fb`，“被控端IP：”），进一步说明“terminal”是设备语义。

### 7.3 实际存在的“终端/外设”能力

1. **全键盘**：三套 JSON 布局 + `FullKeyboardConfig` 模型 + Compose 渲染，支持主区/功能区/数字区。
2. **虚拟按键方案**：`vkplan` 模型与服务端 `keymapping` 接口，支持 `single_key`、`direction_swipehold` 等类型与相对坐标布局。
3. **手柄映射**：Xbox/PS4/PS5/Switch Pro，最多 4 个手柄；`gpd_connect/disconnect/update` 与震动反馈。
4. **外接键鼠**：`attachment`（外设）面板；系统级“键盘外设”权限引导，用于绕过厂商 ROM 的快捷键拦截。
5. **本地输入注入桥**：`libinputmanager.so` 的 `transformEvent`，用于把 TV 端输入标准化后下发。

因此，若产品口径中的“全程终端”指“全程可控的终端外设/键鼠能力”，其实现即上述 1–5；若指“远程 Shell 终端”，则本样本不支持。

---

## 8. 文件传输功能静态分析

### 8.1 角色与方向

| 请求 | 方向 | 语义 |
| --- | --- | --- |
| `FileTransferSendReq` | 控制端 → 被控端 | 请求被控端“发送”文件，即控制端**拉取/下载** |
| `FileTransferReceiveReq` | 控制端 → 被控端 | 请求被控端“接收”文件，即控制端**推送/上传** |
| `FileTransferBlockReq` | 双向 | 数据块传输 |
| `FileTransferAskReq` | 双向 | 询问文件大小/元信息 |
| `FileTransferCompleteReq` | 双向 | 传输完成/错误 |

构造签名（smali 还原）：

```java
FileTransferSendReq(String targetDir, List<TransferFile> files, int taskId)
FileTransferReceiveReq(String taskId, int ?, String targetPath, boolean ?,
                       DuplicateFileAction action, List<FileInfo> fileInfos)
FileTransferBlockReq(int taskId, int fileIndex, int blockId, byte[] bytes, int ?)
FileTransferAskReq(int taskId, long fileSize)
FileTransferCompleteReq(int taskId, int fileIndex, Error error)
```

### 8.2 协议消息表

`RpcFileTransfer$FileTransferFtpRequest` 分支：

| 分支 | 说明 |
| --- | --- |
| `SEND_REQUEST` | 拉取请求 |
| `RECEIVE_REQUEST` | 推送请求 |
| `FILE_ASK` | 文件询问 |
| `FILE_BLOCK` | 数据块 |
| `COMPLETE` | 完成 |
| `READ_DIR` | 读目录 |
| `REMOVE_FILE` / `REMOVE_DIR` | 删除 |
| `RENAME` | 重命名 |
| `DIR_CREATE` | 建目录 |
| `DIR_SIZE_READ` | 目录大小 |
| `FILE_EXIST` | 存在性检查 |
| `CLEAR_SEND_TEMP` | 清理发送临时文件 |

`RpcFileTransfer$FileTransferFtpResponse` 分支：

| 分支 | 说明 |
| --- | --- |
| `SEND_RESPONSE` / `RECEIVE_RESPONSE` | 请求应答 |
| `FILE_CONFIRM` | 文件确认 |
| `FILE_DIRECTORY` | 目录数据 |
| `FILE_EXIST_RESPONSE` | 存在性应答 |
| `OPERATION_RESULT` | 操作结果 |
| `RESULT` | 通用结果 |
| `BLOCK_CONFIRM` | 块确认 |

### 8.3 关键数据结构

`TaskId`：

| 字段 | 说明 |
| --- | --- |
| `task_id` | 任务 ID |
| `file_index` | 文件序号 |

`FileInfo`：`rel_path`、`size`、`modified_time`。

`FileTransferBlock`：`id`（TaskId）、`block_id`、`data`（bytes）。

`FileTransferBlockConfirm`：`id`、`block_id`、`block_len`、`err`。

`FileTransferComplete`：`id`、`error`。

### 8.4 下载流程（控制端拉取）

```
控制端                                        被控端
  │ FileTransferSendReq(targetDir, [TransferFile]) │
  │───────────────────────────────────────────────>│
  │<──────────────── FileTransferSendResponse ─────│
  │                                                │
  │ 逐文件：FileTransferAskReq(taskId, size)        │
  │───────────────────────────────────────────────>│
  │<──────────────── FileAsk(size, mtime) ─────────│
  │                                                │
  │ FileTransferBlockReq(taskId, fileIndex, blockId, data)
  │<───────────────────────────────────────────────│
  │<──────────────── FileTransferBlockConfirm ─────│
  │  (block_len, err)                              │
  │                                                │
  │ 全部块完成 → FileTransferCompleteReq             │
  │───────────────────────────────────────────────>│
```

下载引擎 `ud.x0`（日志 TAG `TransferDownloader2`）：

- 目标文件写入 `RandomAccessFile`，按块 `seek` 写入，支持断点。
- 使用 `.dltmp` 临时文件，完成后重命名；重命名前检查目标是否存在，失败记录 `rename file: ... exist` / `rename to ... error`。
- 进度使用 EWMA 平滑。
- 维护 `FileTransferBlockConfirm` 回调与失败重试。

### 8.5 断点续传 Checkpoint

| Checkpoint | 字段 |
| --- | --- |
| `DownloadCheckpoint` | `version`、`transferred_file_list_buffer_size`、`transferring_file_list`、`transferring_tmp_file_list` |
| `SenderCheckpoint` | `version`、`is_started_transfer_data`、`is_transfer_file_end` |
| `TaskExt` | `progress`、`is_manual_pause` |
| `TaskType` | `uri`、`device_name`、`target_uri`、`total_buffer_size`、`total_transfer_files_count` |
| `TransferFile` | `name`、`uri`、`type`、`modify_timestamp`、`size`、`icon_type` |

### 8.6 TV 版可用性

| 检查 | 结果 |
| --- | --- |
| `@string/send_file`（`0x7f1403de`）在 smali 中引用 | 0 处 |
| `@string/file_transfer_*` 系列在 TV 业务代码中引用 | 0 处 |
| `com.remote.app.*` 对 `ud.*`（传输引擎）的引用 | 0 处 |
| `Lud/x0;` / `Lud/u0;` 在 `ud` 包外的引用 | 0 处 |
| `ud.q`（FTP RPC 分发器）构造点 | 仅 `ud.x0` 内部（下载器自身） |
| `TvToolBarAttachmentFragment` | 实为“外设”面板（手柄/键盘/鼠标），非文件附件 |

结论：**协议与引擎随包编译，但 TV 版未接线**。手机版/PC 端的文件传输入口在 TV 构建中被裁剪或未启用。若需在 TV 上使用，需要外部调用 `ud.u0`/`ud.x0` 或由对端主动发起 FTP RPC，但 TV 侧 `onReceiveRpcRequest` 实现均委托默认空实现（`StreamerControllerCallback$DefaultImpls`），因此对端主动发起的文件传输也不会被 TV 处理。

### 8.7 安全观察

静态代码中未发现对 `rel_path`、`targetPath` 的规范化/越界校验逻辑（未看到 `getCanonicalPath`、`..` 过滤、根目录白名单）。下载临时文件名为目标名 + `.dltmp`，重命名前仅检查存在性。由于 TV 版未接线，实际暴露面有限；但若其他构建启用该协议，建议重点审计路径穿越（`../`、绝对路径、符号链接）与目标目录逃逸。该结论需动态验证，静态阶段仅标记为“待确认”。

---

## 9. 动态分析

### 9.1 环境可用性

| 依赖 | 状态 |
| --- | --- |
| `adb` | 不存在 |
| Android Emulator / `emulator` | 不存在 |
| Android SDK | 未安装 |
| `/dev/kvm` | 不存在 |
| `/dev/binder`、`/dev/ashmem` | 不存在 |
| CPU 硬件虚拟化 | `/proc/cpuinfo` 无 `vmx`/`svm` |
| `qemu-system-*` | 不存在 |
| Frida CLI | 未安装（但 REA 内置 `frida_binding.node` 可用，需目标设备 `frida-server`） |
| 可用静态工具 | `apktool 3.0.3`、REA 6.8.0（JADX/Ghidra provider） |

结论：该沙箱是无特权容器，既无 Android 运行时，也无硬件虚拟化，无法启动任何可执行的 Android 实例。因此**本次未进行运行时动态分析**，不以推测替代实测。

### 9.2 可复现的动态验证方案

**环境要求**

- 一台 Android TV / 电视盒子（arm64，Android 7+），或具备 KVM 的 x86_64 主机 + Android Emulator（API 30+，带 Leanback 镜像）。
- 主机安装 `adb`、`frida`、`mitmproxy`。
- 测试账号与一台可登录的被控端（Windows PC 或 Android 设备）。

**安装与启动**

```bash
adb install -r UURemote-tvProduction-3.5.0-30500-2b0f97d4-TV_gwqd.apk
adb shell am start -n com.netease.uuremote/com.remote.app.ui.activity.LaunchActivity
adb logcat -c
adb logcat | grep -E "Streamer|Transfer|uuRemote|Remote"
```

**网络抓包**

```bash
# 1. 设备与主机同网段，设置设备代理
adb shell settings put global http_proxy <host_ip>:8080
# 2. mitmproxy 启动
mitmproxy -p 8080
# 3. Android 7+ 需把用户 CA 装入系统信任区（root 设备）或使用 Frida 绕过校验
```

关注域名：`api.nrd.nie.163.com`、`sentry.netease.com`、`shence-api.mumu.163.com`。

**Frida Hook（Java 层）**

```javascript
Java.perform(function () {
  var SC = Java.use("com.remote.streamer.controller.StreamerController");
  SC.LoginRoom.overload("com.remote.streamer.model.StreamerRoomConfig").implementation = function (cfg) {
    var h = this.LoginRoom(cfg);
    console.log("[LoginRoom] handle=" + h + " cfg=" + cfg);
    return h;
  };
  SC.Connect.overload("long", "java.nio.ByteBuffer", "java.lang.String").implementation = function (h, buf, appId) {
    console.log("[Connect] handle=" + h + " appControlId=" + appId);
    return this.Connect(h, buf, appId);
  };
  SC.SendControlData.overload("long", "java.nio.ByteBuffer").implementation = function (h, buf) {
    try {
      var arr = Java.array("byte", buf.array());
      console.log("[SendControlData] " + h + " " + Java.use("java.lang.String").$new(arr));
    } catch (e) {}
    return this.SendControlData(h, buf);
  };
  SC.SendFileData.overload("long", "java.nio.ByteBuffer").implementation = function (h, buf) {
    console.log("[SendFileData] handle=" + h + " bytes=" + buf.remaining());
    return this.SendFileData(h, buf);
  };

  var CS = Java.use("com.remote.streamer.service.ControllerService");
  CS.sendControlEvent.overload("long", "java.lang.String").implementation = function (h, json) {
    console.log("[sendControlEvent] " + h + " " + json);
    return this.sendControlEvent(h, json);
  };
});
```

**Frida Hook（Native 层）**

```javascript
var lib = Process.findModuleByName("libstreamer.so");
if (lib) {
  ["LoginRoom", "Connect", "SendControlData", "SendFileData", "StartVideoRender"]
    .forEach(function (name) {
      var p = Module.findExportByName("libstreamer.so", name);
      if (!p) return;
      Interceptor.attach(p, {
        onEnter: function (args) {
          console.log("[native] " + name + " args=" + args[0] + "," + args[1] + "," + args[2]);
        }
      });
    });
}
```

注意：`libstreamer-jni.so` 只是 JNI 胶水，业务符号在 `libstreamer.so`；若导出被裁剪，改用 `frida-trace -U -I libstreamer.so -f com.netease.uuremote`，或对 `libstreamer.so` 做 Ghidra 符号恢复后按地址 Hook。

**建议观测点**

| 观测点 | 预期 |
| --- | --- |
| `LoginRoom` 返回值 | > 0 的房间句柄 |
| `Connect` 返回码 | 0 成功；非 0 失败 |
| `SendControlData` 内容 | 输入事件 JSON（见 6.3） |
| `onConnectionState` | `kPeerConnected` → 首帧 |
| `onReceiveRpcRequest` | FTP 请求分支与 taskId |
| `ud.x0` 日志 | `TransferDownloader2` 块写入、`.dltmp` 重命名 |
| HTTP 请求 | 房间创建/加入、设备列表、键位方案 |

**验证判定**

1. 进入 `TvControlActivity` 且 `Connect` 返回 0，`onConnectionState` 到达 `kPeerConnected`，首帧渲染成功。
2. 按键/鼠标/手柄操作能在被控端产生对应动作，且 `SendControlData` 捕获到的 JSON 与 6.3 表一致。
3. 若从手机端向 TV 发起文件传输，TV 侧无 UI 响应、`onReceiveRpcRequest` 无 FTP 分支处理，验证“TV 未接线”的静态结论。

---

## 10. 风险与建议

| 风险 | 说明 | 建议 |
| --- | --- | --- |
| 自签名证书 | `O=netease, CN=LiZiQi`，非公共 CA | 企业内部分发可接受；对外发布应使用受信证书并固定公钥 |
| 签名方案 | v1+v2，无 v3 | 建议启用 v3 与密钥轮换 |
| `INSTALL_PACKAGES` | 系统级权限声明 | 审计静默安装路径（`m/f` 的 `pm install --user 0`），确保仅用于可信升级包 |
| 旧存储模型 | `requestLegacyExternalStorage=true` | 迁移至 scoped storage，减少路径穿越与越权读写 |
| 文件传输路径校验 | 静态未见规范化校验 | 启用传输功能前增加 canonical path + 白名单校验 |
| 第三方 SDK 较多 | 易盾、电信、Sentry、神策、MSA | 做隐私合规清单与最小化采集审计 |
| 原生库体积大 | `libstreamer.so` 16 MB，符号可能被裁剪 | 发布前做符号剥离与字符串清理，减少协议细节暴露 |
| 无证书固定 | 未发现 pinning 配置 | 信令与 API 增加证书/公钥固定，防中间人 |

---

## 11. 附录

### 11.1 关键类/方法速查

| 功能 | 类/方法 |
| --- | --- |
| 房间登录 | `StreamerControllerUtil.loginRoom` → `StreamerController.LoginRoom` |
| 建立连接 | `StreamerControllerUtil.createConnection` → `StreamerController.Connect` |
| 控制事件 | `kf.v.q` → `ControllerService.sendControlEvent` → `SendControlData` |
| 控制消息 | `kf.v.p` → `ControllerService.sendControlData` |
| RPC 发送 | `kf.v.t` → `Handler` → `BaseRpcRequest.G0()` |
| RPC 分发 | `ud.q.onReceiveRpcRequest` |
| 下载引擎 | `ud.x0`（`TransferDownloader2`）、`ud.u0.invokeSuspend` |
| 块请求 | `com.remote.file.rpc.FileTransferBlockReq` |
| 输入事件模型 | `com.remote.gesture.contract.event.*` |
| 输入注入 | `le.a.c` → `InputManagerStub.transformEvent` |
| TV 按键 | `TvControlActivity.onKeyDown` / `dispatchKeyEvent` |
| 键位 JSON | `de.a.c(int, boolean)` |
| 外设面板 | `TvToolBarAttachmentFragment` |
| 网络状态 | `TvNetworkStatusFragment`（`terminal_ip`） |
| 全键盘 | `com.remote.virtual_key.model.FullKeyboard*`、`sg.*` |
| 虚拟键方案 | `com.remote.vkplan.api.model.*` |
| JNI 桥 | `com.remote.streamer.controller.StreamerController` |
| 原生核心 | `libstreamer.so`、`libstreamer-jni.so` |
| 输入原生 | `libinputmanager.so` |

### 11.2 REA 复现命令

```bash
# 环境检查
rea doctor

# 包信息
rea inspect-android-package --path /workspace/TV/UURemote-tvProduction-3.5.0-30500-2b0f97d4-TV_gwqd.apk

# 签名
rea inspect-apk-signature --path /workspace/TV/UURemote-tvProduction-3.5.0-30500-2b0f97d4-TV_gwqd.apk

# 资源解码
rea decode-android-resources --path /workspace/TV/UURemote-tvProduction-3.5.0-30500-2b0f97d4-TV_gwqd.apk --output /tmp/apktool_out

# 类检索
rea search-android-classes --path <apk> --query StreamerController

# 类/方法反编译
rea inspect-android-class --path <apk> --class com.remote.streamer.controller.StreamerController
rea inspect-android-method --path <apk> --class com.remote.streamer.controller.StreamerControllerUtil --method sendControlEvent

# 引用追踪
rea trace-android-references --path <apk> --class com.remote.store.proto.RpcFileTransfer\$FileTransferFtpRequest
```

### 11.3 静态证据文件

| 文件/目录 | 内容 |
| --- | --- |
| `/tmp/classes.txt` | 9,076 个类清单 |
| `/tmp/strings.txt` | 资源字符串清单（含 `file_transfer_*`、`send_file`） |
| `/tmp/apk_pkg.json` | 包信息与哈希 |
| `/tmp/manifest.xml` | 解码后的 AndroidManifest |
| `/tmp/apktool_full/` | 全量 smali、资源、assets、lib |
| `/tmp/code/*.java` | REA/JADX 反编译片段（63 个关键方法） |

### 11.4 分析限制

1. R8 混淆导致类名无语义，调用链依赖引用追踪与字符串锚点。
2. 原生层仅做符号/字符串级检查，未对 `libstreamer.so` 做完整反汇编；协议细节以 Java/Protobuf/Moshi 模型为准。
3. 动态行为未实测，运行时分支、服务端实际返回、TV 端文件传输是否被远端触发，需按 9.2 方案验证。
4. “全程终端”无产品内对应功能名，本报告按“终端/被控端 + 全键盘外设”两种语义分别核查，并给出否定性结论（无远程 Shell）。

---

**报告结束**
