// rea decompile_all
// name: SentryMetricKitIntegration::uninstall
// address: 0x100745400
// body: available
// range: 0x100745400-0x100745463 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100745460 to 0x1007f3c80 objc_stub::setMetricKitManager: (external=false, thunk=false, hasNoReturn=false), 0x1007474e8 SentryMetricKitIntegration::setMetricKitManager: (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryMetricKitIntegration::uninstall(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = metricKitManager(param_1);
  objc_stub::pauseReports(IVar1);
  IVar1 = metricKitManager(param_1);
  objc_stub::setDelegate_(IVar1,0);
  setMetricKitManager_(param_1,0);
  return;
}

