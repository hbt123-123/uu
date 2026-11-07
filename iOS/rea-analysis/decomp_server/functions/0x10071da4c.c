// rea decompile_all
// name: SAFlushInterceptor::buildFlushRequestWithInput:
// address: 0x10071da4c
// body: available
// range: 0x10071da4c-0x10071dc83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10071dc80 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SAFlushInterceptor::buildFlushRequestWithInput_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = serverURL(param_1);
  if (IVar1 == 0) {
    IVar1 = objc_stub::configOptions(param_3);
    IVar1 = objc_stub::serverURL(IVar1);
  }
  IVar2 = objc_stub::isAdsEvent(param_3);
  if ((int)IVar2 == 0) {
    IVar2 = objc_stub::configOptions(param_3);
    IVar2 = objc_stub::debugMode(IVar2);
    IVar1 = SAURLUtils::buildServerURLWithURLString_debugMode_
                      ((ID)&objc::class_t::SAURLUtils,IVar1,IVar2);
  }
  else {
    IVar1 = SAURLUtils::buildServerURLWithURLString_debugMode_
                      ((ID)&objc::class_t::SAURLUtils,IVar1,0);
  }
  IVar1 = NSMutableURLRequest::requestWithURL_((ID)&_OBJC_CLASS___NSMutableURLRequest,IVar1);
  NSMutableURLRequest::setTimeoutInterval_(IVar1,0x403e000000000000);
  NSMutableURLRequest::setHTTPMethod_(IVar1,&cf_POST);
  IVar2 = objc_stub::HTTPBody(param_3);
  NSMutableURLRequest::setHTTPBody_(IVar1,IVar2);
  NSMutableURLRequest::setValue_forHTTPHeaderField_(IVar1,&cf_SensorsAnalyticsiOSSDK,&cf_User_Agent)
  ;
  IVar2 = objc_stub::configOptions(param_3);
  IVar2 = objc_stub::debugMode(IVar2);
  if (IVar2 == 1) {
    NSMutableURLRequest::setValue_forHTTPHeaderField_(IVar1,&cf_true,&cf_Dry_Run);
  }
  IVar2 = objc_stub::cookie(param_3);
  if (IVar2 != 0) {
    IVar2 = objc_stub::cookie(param_3);
    NSMutableURLRequest::setValue_forHTTPHeaderField_(IVar1,IVar2,&cf_Cookie);
  }
  return IVar1;
}

