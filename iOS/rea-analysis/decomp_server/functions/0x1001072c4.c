// rea decompile_all
// name: FUN_1001072c4
// address: 0x1001072c4
// body: available
// range: 0x1001072c4-0x1001074f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 FUN_1001072c4(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  ID IVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_68 [24];
  
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  lVar5 = *(long *)(DAT_100b360a8 + 0x10);
  _swift_beginAccess(lVar5 + 0x10,auStack_68,0,0);
  plVar6 = *(long **)(lVar5 + 0x10);
  puVar1 = &DAT_10099d478;
  _swift_allocObject(&DAT_10099d478,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10);
  FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
  plVar2 = plVar6;
  _swift_retain();
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
  puVar3 = &DAT_100a77428;
  FUN_100004bb4(&DAT_100a77428,&DAT_10080d8b0);
  FUN_10039f61c(plVar2,FUN_10010a3e4,puVar1,puVar3);
  _swift_release(plVar6);
  _swift_release(puVar1);
  (**(code **)(*plVar2 + 0x78))();
  _swift_release(plVar2);
  IVar4 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace,"sharedWorkspace");
  IVar4 = NSWorkspace::notificationCenter(IVar4,"notificationCenter");
  NSWorkspace::addObserver_selector_name_object_(IVar4,"addObserver:selector:name:object:");
  IVar4 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace,"sharedWorkspace");
  IVar4 = NSWorkspace::notificationCenter(IVar4,"notificationCenter");
  NSWorkspace::addObserver_selector_name_object_(IVar4,"addObserver:selector:name:object:");
  return 0;
}

