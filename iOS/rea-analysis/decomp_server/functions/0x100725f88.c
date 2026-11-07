// rea decompile_all
// name: SensorsAnalyticsSDK::setFlushInterval:
// address: 0x100725f88
// body: available
// range: 0x100725f88-0x100725fff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100725ffc to 0x10072433c SensorsAnalyticsSDK::startFlushTimer (external=false, thunk=false, hasNoReturn=false), 0x1007f5ec0 objc_stub::startFlushTimer (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SensorsAnalyticsSDK::setFlushInterval_(ID param_1,SEL param_2,long_long param_3)

{
  ID IVar1;
  
  _objc_sync_enter();
  IVar1 = configOptions(param_1);
  setFlushInterval_(IVar1,param_3);
  _objc_sync_exit(param_1);
  flush(param_1);
  stopFlushTimer(param_1);
  startFlushTimer(param_1);
  return;
}

