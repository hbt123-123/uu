// rea decompile_all
// name: SensorsAnalyticsSDK::removeWebViewUserAgent
// address: 0x1007256b4
// body: available
// range: 0x1007256b4-0x1007257d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007257bc to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SensorsAnalyticsSDK::removeWebViewUserAgent(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = addWebViewUserAgent(param_1);
  if (IVar1 != 0) {
    IVar1 = SACommonUtility::currentUserAgent((ID)&objc::class_t::SACommonUtility);
    IVar2 = addWebViewUserAgent(param_1);
    IVar2 = objc_stub::containsString_(IVar1,IVar2);
    if ((int)IVar2 != 0) {
      IVar2 = addWebViewUserAgent(param_1);
      IVar1 = objc_stub::stringByReplacingOccurrencesOfString_withString_(IVar1,IVar2,&cf___);
      setUserAgent_(param_1,IVar1);
      IVar1 = userAgent(param_1);
      SACommonUtility::saveUserAgent_((ID)&objc::class_t::SACommonUtility,IVar1);
    }
    return;
  }
  return;
}

