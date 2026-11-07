// rea decompile_all
// name: FUN_1007243d8
// address: 0x1007243d8
// body: available
// range: 0x1007243d8-0x1007245eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007245e8 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1007243d8(long param_1)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  double dVar4;
  
  IVar2 = objc_stub::timer(*(ID *)(param_1 + 0x20));
  if (IVar2 != 0) {
    IVar2 = objc_stub::timer(*(ID *)(param_1 + 0x20));
    IVar2 = objc_stub::isValid(IVar2);
    if ((IVar2 & 1) != 0) {
      return 0;
    }
  }
  bVar1 = SAApplication::isAppExtension((ID)&objc::class_t::SAApplication);
  if ((bVar1 & 1) == 0) {
    IVar2 = objc_stub::appLifecycle(*(ID *)(param_1 + 0x20));
    IVar2 = objc_stub::state(IVar2);
    if (IVar2 != 2) {
      return 0;
    }
  }
  IVar2 = SAModuleManager::sharedInstance((ID)&objc::class_t::SAModuleManager);
  IVar2 = objc_stub::isDisableSDK(IVar2);
  if ((IVar2 & 1) == 0) {
    IVar2 = objc_stub::configOptions(*(ID *)(param_1 + 0x20));
    IVar2 = objc_stub::flushInterval(IVar2);
    if (0 < (long)IVar2) {
      IVar2 = objc_stub::configOptions(*(ID *)(param_1 + 0x20));
      IVar2 = objc_stub::flushInterval(IVar2);
      if ((long)IVar2 < 0x65) {
        dVar4 = 0.10000000149011612;
      }
      else {
        IVar2 = objc_stub::configOptions(*(ID *)(param_1 + 0x20));
        IVar2 = objc_stub::flushInterval(IVar2);
        dVar4 = (double)(long)IVar2 / 1000.0;
      }
      IVar2 = NSTimer::scheduledTimerWithTimeInterval_target_selector_userInfo_repeats_
                        ((ID)&_OBJC_CLASS___NSTimer,dVar4,*(undefined8 *)(param_1 + 0x20),"flush",0,
                         1);
      objc_stub::setTimer_(*(ID *)(param_1 + 0x20),IVar2);
      IVar2 = NSRunLoop::currentRunLoop((ID)&_OBJC_CLASS___NSRunLoop);
      IVar3 = objc_stub::timer(*(ID *)(param_1 + 0x20));
      NSRunLoop::addTimer_forMode_(IVar2,IVar3,*(undefined8 *)PTR__NSRunLoopCommonModes_100995350);
      return 0;
    }
  }
  return 0;
}

