// rea decompile_all
// name: FUN_100720734
// address: 0x100720734
// body: available
// range: 0x100720734-0x1007207b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007207b0 to 0x1007e4d20 objc_stub::addAppLifecycleObservers (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100720734(long param_1)

{
  class_t *self;
  ID IVar1;
  
  self = &objc::class_t::SensorsAnalyticsSDK;
  _objc_alloc();
  DAT_100b2c7f0 = objc_stub::initWithConfigOptions_((ID)self,*(undefined8 *)(param_1 + 0x20));
  IVar1 = objc_stub::configOptions(DAT_100b2c7f0);
  SAModuleManager::startWithConfigOptions_((ID)&objc::class_t::SAModuleManager,IVar1);
  objc_stub::addAppLifecycleObservers(DAT_100b2c7f0);
  return;
}

