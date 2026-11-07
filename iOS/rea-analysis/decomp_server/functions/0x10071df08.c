// rea decompile_all
// name: SAFlushInterceptor::eventTransportEncryptLogsWithInput:
// address: 0x10071df08
// body: available
// range: 0x10071df08-0x10071e027 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10071e020 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10071e024 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SAFlushInterceptor::eventTransportEncryptLogsWithInput_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar1 = objc_stub::json(param_3);
  IVar2 = objc_stub::hasPrefix_(IVar1,&cf__);
  if (((int)IVar2 == 0) || (IVar2 = objc_stub::hasSuffix_(IVar1,&cf__), (int)IVar2 == 0)) {
    IVar1 = 0;
  }
  else {
    IVar2 = objc_stub::length(IVar1);
    IVar1 = objc_stub::substringWithRange_(IVar1,1,IVar2 - 2);
    IVar1 = SAJSONUtil::JSONObjectWithString_((ID)&objc::class_t::SAJSONUtil,IVar1);
    if (IVar1 == 0) {
      IVar1 = 0;
    }
    else {
      local_40 = IVar1;
      IVar1 = NSArray::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_40,1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar1;
}

