// rea decompile_all
// name: FUN_1000f1ee4
// address: 0x1000f1ee4
// body: available
// range: 0x1000f1ee4-0x1000f2327 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000f1ee4(void)

{
  long lVar1;
  ID IVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  code *pcVar6;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  long lStack_68;
  
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_1000f2328,0,0xd000000000000084,0x8000000100888f20,0x2928706f7473,
                0xe600000000000000,0xc5,0);
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  lVar1 = DAT_100b360a8;
  lVar3 = *(long *)(DAT_100b360a8 + 0x70);
  if ((*(byte *)(lVar3 + _TtC14UURemoteServer17LockScreenManager::isSuspend) & 1) == 0) {
    *(undefined1 *)(lVar3 + _TtC14UURemoteServer17LockScreenManager::isSuspend) = 1;
    IVar2 = NSDistributedNotificationCenter::defaultCenter
                      ((ID)&_OBJC_CLASS___NSDistributedNotificationCenter,"defaultCenter");
    if (DAT_100a73b38 != -1) {
      _swift_once(&DAT_100a73b38,FUN_1000b1470);
    }
    NSDistributedNotificationCenter::removeObserver_name_object_
              (IVar2,"removeObserver:name:object:",lVar3,DAT_100a76eb8,0);
    if (DAT_100a73b40 != -1) {
      _swift_once(&DAT_100a73b40,FUN_1000b14a4);
    }
    NSDistributedNotificationCenter::removeObserver_name_object_
              (IVar2,"removeObserver:name:object:",lVar3,DAT_100a76ec0,0);
  }
  uVar4 = *(undefined8 *)(lVar1 + 0x78);
  _swift_retain(uVar4);
  FUN_10021adac();
  _swift_release(uVar4);
  uVar4 = *(undefined8 *)(lVar1 + 0x58);
  FUN_100107ac8(0x81e5a18ae58d9ce6,0xac000000a2ade69c);
  FUN_1003fb48c(FUN_100107a70,0,0xd000000000000097,0x8000000100889170,0x28646e6570737573,
                0xe900000000000029,0x1d2,0);
  IVar2 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace,"sharedWorkspace");
  IVar2 = NSWorkspace::notificationCenter(IVar2,"notificationCenter");
  NSWorkspace::removeObserver_(IVar2,"removeObserver:",uVar4);
  if ((*(byte *)(*(long *)(lVar1 + 0x40) + _TtC14UURemoteServer14AppListManager::isSuspend) & 1) ==
      0) {
    *(undefined1 *)(*(long *)(lVar1 + 0x40) + _TtC14UURemoteServer14AppListManager::isSuspend) = 1;
    FUN_10060536c();
  }
  if ((*(byte *)(*(long *)(lVar1 + 0x68) + _TtC14UURemoteServer13HotkeyManager::isSuspend) & 1) == 0
     ) {
    *(undefined1 *)(*(long *)(lVar1 + 0x68) + _TtC14UURemoteServer13HotkeyManager::isSuspend) = 1;
    FUN_10060536c();
  }
  FUN_100006c68(*(undefined8 *)(lVar1 + 0x60));
  FUN_1000b142c(lVar1 + 200,auStack_88);
  FUN_10003f030(auStack_88,local_70);
  (**(code **)(lStack_68 + 0x18))(local_70,lStack_68);
  FUN_10003f094(auStack_88);
  uVar4 = *(undefined8 *)(lVar1 + 0xb0);
  _swift_retain(uVar4);
  FUN_1000b0ad0();
  _swift_release(uVar4);
  uVar4 = *(undefined8 *)(lVar1 + 0xb8);
  _swift_retain(uVar4);
  FUN_100183c5c();
  _swift_release(uVar4);
  uVar4 = *(undefined8 *)(lVar1 + 0x88);
  _swift_retain(uVar4);
  FUN_10008323c();
  _swift_release(uVar4);
  uVar4 = *(undefined8 *)(lVar1 + 0x10);
  _swift_retain(uVar4);
  FUN_1001b5aac();
  _swift_release(uVar4);
  FUN_1001d4678(*(undefined8 *)(lVar1 + 0x90));
  plVar5 = *(long **)(lVar1 + 0xc0);
  pcVar6 = *(code **)(*plVar5 + 0x1c0);
  _swift_retain(plVar5);
  (*pcVar6)();
  _swift_release(plVar5);
  IVar2 = NSNotificationCenter::defaultCenter
                    ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  NSNotificationCenter::removeObserver_(IVar2,"removeObserver:");
  FUN_1003fb48c(FUN_1000f2448,0,0xd000000000000084,0x8000000100888f20,0x2928706f7473,
                0xe600000000000000,0xd8,0);
  return;
}

