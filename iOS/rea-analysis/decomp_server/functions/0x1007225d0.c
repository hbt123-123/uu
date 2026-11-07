// rea decompile_all
// name: SensorsAnalyticsSDK::addAppLifecycleObservers
// address: 0x1007225d0
// body: available
// range: 0x1007225d0-0x1007226af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007226ac to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SensorsAnalyticsSDK::addAppLifecycleObservers(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ulong uVar3;
  
  IVar2 = configOptions(param_1);
  uVar3 = disableSDK(IVar2);
  if (((uVar3 & 1) == 0) &&
     (bVar1 = SAApplication::isAppExtension((ID)&objc::class_t::SAApplication), (bVar1 & 1) == 0)) {
    IVar2 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
    NSNotificationCenter::addObserver_selector_name_object_
              (IVar2,param_1,"appLifecycleStateWillChange:",
               &cf_com_sensorsdata_SAAppLifecycleStateWillChange,0);
    IVar2 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
    NSNotificationCenter::addObserver_selector_name_object_
              (IVar2,param_1,"appLifecycleStateDidChange:",
               &cf_com_sensorsdata_SAAppLifecycleStateDidChange,0);
    return;
  }
  return;
}

