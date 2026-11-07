// rea decompile_all
// name: FUN_1000f17ac
// address: 0x1000f17ac
// body: available
// range: 0x1000f17ac-0x1000f1ca3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1000f17ac(void)

{
  long lVar1;
  long unaff_x20;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  ID IVar6;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  long lStack_68;
  
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_1000f1ca4,0,0xd000000000000084,0x8000000100888f20,0x29287472617473,
                0xe700000000000000,0xa9,0);
  plVar2 = *(long **)(unaff_x20 + 0xc0);
  pcVar5 = *(code **)(*plVar2 + 0x1b8);
  _swift_retain(plVar2);
  (*pcVar5)();
  _swift_release(plVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x78);
  _swift_retain(uVar3);
  FUN_10021abf0();
  _swift_release(uVar3);
  FUN_1000fce34(*(undefined8 *)(unaff_x20 + 0xa8));
  lVar4 = *(long *)(unaff_x20 + 0x10);
  IVar6 = *(ID *)(lVar4 + 0x40);
  _swift_retain(lVar4);
  _objc_msgSend(IVar6,"lock");
  FUN_1001b6b60();
  FUN_1001b5f48(0x90e5a18ae59ab8e4,0xac000000a88ae5af);
  FUN_1001b629c();
  _objc_msgSend(*(ID *)(lVar4 + 0x40),"unlock");
  _swift_release(lVar4);
  FUN_1003fb48c(FUN_1001aec58,0,0xd000000000000095,0x8000000100877f50,0x2928656d75736572,
                0xe800000000000000,0x46,0);
  FUN_1001aec84();
  FUN_1000b142c(unaff_x20 + 200,auStack_88);
  FUN_10003f030(auStack_88,local_70);
  (**(code **)(lStack_68 + 0x10))(local_70,lStack_68);
  FUN_10003f094(auStack_88);
  FUN_1000f68b4();
  FUN_1000f6bc0();
  lVar4 = *(long *)(unaff_x20 + 0x68);
  if (*(char *)(lVar4 + _TtC14UURemoteServer13HotkeyManager::isSuspend) == '\x01') {
    *(undefined1 *)(lVar4 + _TtC14UURemoteServer13HotkeyManager::isSuspend) = 0;
    lVar1 = lVar4;
    FUN_10019d20c();
    uVar3 = *(undefined8 *)(lVar4 + _TtC14UURemoteServer13HotkeyManager::hotKeys);
    *(long *)(lVar4 + _TtC14UURemoteServer13HotkeyManager::hotKeys) = lVar1;
    _swift_bridgeObjectRelease(uVar3);
    FUN_10019b770();
  }
  lVar4 = *(long *)(unaff_x20 + 0x40);
  if (*(char *)(lVar4 + _TtC14UURemoteServer14AppListManager::isSuspend) == '\x01') {
    *(undefined1 *)(lVar4 + _TtC14UURemoteServer14AppListManager::isSuspend) = 0;
    FUN_1001a4294(lVar4);
    FUN_1001a4648();
  }
  FUN_100104518(*(undefined8 *)(unaff_x20 + 0x58));
  lVar4 = *(long *)(unaff_x20 + 0x70);
  if (*(char *)(lVar4 + _TtC14UURemoteServer17LockScreenManager::isSuspend) == '\x01') {
    *(undefined1 *)(lVar4 + _TtC14UURemoteServer17LockScreenManager::isSuspend) = 0;
    IVar6 = NSDistributedNotificationCenter::defaultCenter
                      ((ID)&_OBJC_CLASS___NSDistributedNotificationCenter,"defaultCenter");
    if (DAT_100a73b38 != -1) {
      _swift_once(&DAT_100a73b38,FUN_1000b1470);
    }
    NSDistributedNotificationCenter::addObserver_selector_name_object_
              (IVar6,"addObserver:selector:name:object:",lVar4,"didReceiveScreenIsLocked:",
               DAT_100a76eb8,0);
    if (DAT_100a73b40 != -1) {
      _swift_once(&DAT_100a73b40,FUN_1000b14a4);
    }
    NSDistributedNotificationCenter::addObserver_selector_name_object_
              (IVar6,"addObserver:selector:name:object:",lVar4,"didReceiveScreenIsUnlocked:",
               DAT_100a76ec0,0);
  }
  lVar4 = *(long *)(unaff_x20 + 0x60);
  if (*(char *)(lVar4 + _TtC14UURemoteServer13CursorManager::isSuspend) == '\x01') {
    *(undefined1 *)(lVar4 + _TtC14UURemoteServer13CursorManager::isSuspend) = 0;
    FUN_1000069ac(lVar4);
    FUN_100006af4();
  }
  lVar4 = *(long *)(unaff_x20 + 0x90);
  FUN_1003fb48c(FUN_1001d87a0,0,0xd000000000000095,0x8000000100889250,0x29287472617473,
                0xe700000000000000,0x131,0);
  if (*(char *)(lVar4 + _TtC14UURemoteServer15TerminalManager::isSuspend) == '\x01') {
    *(undefined1 *)(lVar4 + _TtC14UURemoteServer15TerminalManager::isSuspend) = 0;
    FUN_1003fb48c(FUN_1001d87cc,0,0xd000000000000095,0x8000000100889250,0x2928656d75736572,
                  0xe800000000000000,0x138,0);
  }
  uVar3 = *(undefined8 *)(unaff_x20 + 0xb0);
  _swift_retain(uVar3);
  FUN_1000b0a0c();
  FUN_10010357c();
  _swift_release(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xb8);
  _swift_retain(uVar3);
  FUN_100183a44();
  _swift_release(uVar3);
  FUN_1003a8798(0);
  FUN_1003a7e18(0,0);
  FUN_1003fb48c(FUN_1000f1dc4,0,0xd000000000000084,0x8000000100888f20,0x29287472617473,
                0xe700000000000000,0xc0,0);
  return;
}

