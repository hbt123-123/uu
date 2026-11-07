// rea decompile_all
// name: SAFlushHTTPBodyInterceptor::buildBodyWithInput:
// address: 0x100732310
// body: available
// range: 0x100732310-0x1007324d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007324d0 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SAFlushHTTPBodyInterceptor::buildBodyWithInput_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  
  IVar1 = buildBodyWithFlowData_(param_1,param_3);
  IVar2 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_gzip);
  IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_data_list);
  objc_stub::sensorsdata_hashCode(IVar1);
  IVar3 = NSCharacterSet::alphanumericCharacterSet((ID)&_OBJC_CLASS___NSCharacterSet);
  objc_stub::stringByAddingPercentEncodingWithAllowedCharacters_(IVar1,IVar3);
  objc_stub::intValue(IVar2);
  IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_crc__d_gzip__d_data_list___);
  IVar1 = objc_stub::isInstantEvent(param_3);
  if ((int)IVar1 != 0) {
    IVar2 = NSString::stringByAppendingString_(IVar2,&cf__instant_event_true);
  }
  IVar1 = objc_stub::isAdsEvent(param_3);
  if ((int)IVar1 != 0) {
    IVar2 = NSString::stringByAppendingString_(IVar2,&cf__sink_name_mirror);
  }
  IVar1 = NSString::dataUsingEncoding_(IVar2,4);
  return IVar1;
}

