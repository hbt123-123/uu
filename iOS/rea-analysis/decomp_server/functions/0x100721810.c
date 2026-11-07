// rea decompile_all
// name: SensorsAnalyticsSDK::enableLoggers
// address: 0x100721810
// body: available
// range: 0x100721810-0x10072187f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10072187c to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SensorsAnalyticsSDK::enableLoggers(ID param_1,SEL param_2)

{
  ID IVar1;
  class_t *pcVar2;
  
  IVar1 = consoleLogger(param_1);
  if (IVar1 != 0) {
    return;
  }
  pcVar2 = &objc::class_t::SAConsoleLogger;
  _objc_alloc_init();
  objc_stub::addLogger_((ID)&objc::class_t::SALog,pcVar2);
  setConsoleLogger_(param_1,(ID)pcVar2);
  return;
}

