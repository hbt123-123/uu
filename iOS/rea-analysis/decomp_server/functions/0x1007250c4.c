// rea decompile_all
// name: SensorsAnalyticsSDK::clearKeychainData
// address: 0x1007250c4
// body: available
// range: 0x1007250c4-0x1007250e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007250e4 to 0x1007e8360 objc_stub::deletePasswordWithAccount:service: (external=false, thunk=false, hasNoReturn=false), 0x10072f8fc SAKeyChainItemWrapper::deletePasswordWithAccount:service: (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

void SensorsAnalyticsSDK::clearKeychainData(ID param_1,SEL param_2)

{
  SAKeyChainItemWrapper::deletePasswordWithAccount_service_
            ((ID)&objc::class_t::SAKeyChainItemWrapper,(ID)&cf_com_sensorsdata_analytics_udid,
             (ID)&cf_com_sensorsdata_analytics_udid);
  return;
}

