// rea decompile_all
// name: SADynamicSuperPropertyInterceptor::processWithInput:completion:
// address: 0x100720484
// body: available
// range: 0x100720484-0x100720557 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100720554 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SADynamicSuperPropertyInterceptor::processWithInput_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  int iVar1;
  ID IVar2;
  
  IVar2 = SensorsAnalyticsSDK::sdkInstance((ID)&objc::class_t::SensorsAnalyticsSDK);
  IVar2 = SensorsAnalyticsSDK::serialQueue(IVar2);
  iVar1 = (int)IVar2;
  FUN_1007097a8();
  if (iVar1 == 0) {
    IVar2 = SADynamicSuperPropertyPlugin::sharedDynamicSuperPropertyPlugin
                      ((ID)&objc::class_t::SADynamicSuperPropertyPlugin);
    SADynamicSuperPropertyPlugin::buildDynamicSuperProperties(IVar2);
    (**(code **)(param_4 + 0x10))(param_4,param_3);
  }
  else {
    (**(code **)(param_4 + 0x10))(param_4,param_3);
  }
  return;
}

