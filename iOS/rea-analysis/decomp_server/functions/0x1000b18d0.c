// rea decompile_all
// name: FUN_1000b18d0
// address: 0x1000b18d0
// body: available
// range: 0x1000b18d0-0x1000b1b0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000b18d0(undefined8 param_1,byte *param_2,long param_3)

{
  ID IVar1;
  undefined1 auStack_48 [24];
  
  if ((*param_2 & 1) == 0) {
    _swift_beginAccess(param_3 + 0x10,auStack_48,0,0);
    param_3 = param_3 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if ((param_3 != 0) &&
       (*(char *)(param_3 + _TtC14UURemoteServer17LockScreenManager::isSuspend) == '\x01')) {
      *(undefined1 *)(param_3 + _TtC14UURemoteServer17LockScreenManager::isSuspend) = 0;
      IVar1 = NSDistributedNotificationCenter::defaultCenter
                        ((ID)&_OBJC_CLASS___NSDistributedNotificationCenter,"defaultCenter");
      if (DAT_100a73b38 != -1) {
        _swift_once(&DAT_100a73b38,FUN_1000b1470);
      }
      NSDistributedNotificationCenter::addObserver_selector_name_object_
                (IVar1,"addObserver:selector:name:object:",param_3,"didReceiveScreenIsLocked:",
                 DAT_100a76eb8,0);
      if (DAT_100a73b40 != -1) {
        _swift_once(&DAT_100a73b40,FUN_1000b14a4);
      }
      NSDistributedNotificationCenter::addObserver_selector_name_object_
                (IVar1,"addObserver:selector:name:object:",param_3,"didReceiveScreenIsUnlocked:",
                 DAT_100a76ec0,0);
    }
  }
  else {
    _swift_beginAccess(param_3 + 0x10,auStack_48,0,0);
    param_3 = param_3 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if ((param_3 != 0) &&
       ((*(byte *)(param_3 + _TtC14UURemoteServer17LockScreenManager::isSuspend) & 1) == 0)) {
      *(undefined1 *)(param_3 + _TtC14UURemoteServer17LockScreenManager::isSuspend) = 1;
      IVar1 = NSDistributedNotificationCenter::defaultCenter
                        ((ID)&_OBJC_CLASS___NSDistributedNotificationCenter,"defaultCenter");
      if (DAT_100a73b38 != -1) {
        _swift_once(&DAT_100a73b38,FUN_1000b1470);
      }
      NSDistributedNotificationCenter::removeObserver_name_object_
                (IVar1,"removeObserver:name:object:",param_3,DAT_100a76eb8,0);
      if (DAT_100a73b40 != -1) {
        _swift_once(&DAT_100a73b40,FUN_1000b14a4);
      }
      NSDistributedNotificationCenter::removeObserver_name_object_
                (IVar1,"removeObserver:name:object:",param_3,DAT_100a76ec0,0);
    }
  }
  return;
}

