// rea decompile_all
// name: FUN_1001aea14
// address: 0x1001aea14
// body: available
// range: 0x1001aea14-0x1001aeb5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001aea14(void)

{
  ID IVar1;
  long unaff_x20;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  
  _swift_getObjectType();
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_1001aeb5c,0,0xd000000000000095,0x8000000100877f50,0x74696e696564,
                0xe600000000000000,0x3b,0);
  lVar2 = *(long *)(unaff_x20 + _TtC14UURemoteServer15StreamerManager::wakeReconnectWorkItem);
  if (lVar2 != 0) {
    _swift_retain(lVar2);
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
    _swift_release(lVar2);
  }
  plVar3 = *(long **)(unaff_x20 + _TtC14UURemoteServer15StreamerManager::networkReachabilityManager)
  ;
  if (plVar3 != (long *)0x0) {
    pcVar4 = *(code **)(*plVar3 + 0xa0);
    _swift_retain(plVar3);
    (*pcVar4)();
    _swift_release(plVar3);
  }
  IVar1 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace,"sharedWorkspace");
  IVar1 = NSWorkspace::notificationCenter(IVar1,"notificationCenter");
  NSWorkspace::removeObserver_(IVar1,"removeObserver:");
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"dealloc");
  return;
}

