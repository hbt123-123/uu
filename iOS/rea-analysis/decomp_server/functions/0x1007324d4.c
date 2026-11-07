// rea decompile_all
// name: SAFlushHTTPBodyInterceptor::buildBodyWithFlowData:
// address: 0x1007324d4
// body: available
// range: 0x1007324d4-0x10073261f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100732618 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10073261c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SAFlushHTTPBodyInterceptor::buildBodyWithFlowData_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  ID IStack_48;
  ID local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar1 = objc_stub::json(param_3);
  IVar1 = objc_stub::dataUsingEncoding_(IVar1,4);
  IVar1 = SAGzipUtility::gzipData_((ID)&objc::class_t::SAGzipUtility,IVar1);
  IVar1 = objc_stub::base64EncodedStringWithOptions_(IVar1,0x10);
  local_58 = &cf_gzip;
  IStack_48 = NSNumber::numberWithInteger_((ID)&_OBJC_CLASS___NSNumber,1);
  local_50 = &cf_data_list;
  local_40 = IVar1;
  IVar1 = NSDictionary::dictionaryWithObjects_forKeys_count_
                    ((ID)&_OBJC_CLASS___NSDictionary,&IStack_48,&local_58,2);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

