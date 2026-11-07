// rea decompile_all
// name: SensorsAnalyticsSDK::loginWithKey:loginId:
// address: 0x100721f70
// body: available
// range: 0x100721f70-0x100721f77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100721f74 to 0x1007edee0 objc_stub::loginWithKey:loginId:properties: (external=false, thunk=false, hasNoReturn=false), 0x100721f78 SensorsAnalyticsSDK::loginWithKey:loginId:properties: (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

void SensorsAnalyticsSDK::loginWithKey_loginId_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  loginWithKey_loginId_properties_(param_1,param_3,param_4,0);
  return;
}

