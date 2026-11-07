// rea decompile_all
// name: FUN_10071103c
// address: 0x10071103c
// body: available
// range: 0x10071103c-0x1007110f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007110f4 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10071103c(ID param_1)

{
  undefined *puVar1;
  ID IVar2;
  
  puVar1 = &_OBJC_CLASS___NSString;
  _objc_opt_class(&_OBJC_CLASS___NSString);
  IVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  if ((IVar2 & 1) == 0) {
    puVar1 = &_OBJC_CLASS___NSDate;
    _objc_opt_class(&_OBJC_CLASS___NSDate);
    IVar2 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    if ((IVar2 & 1) == 0) {
      param_1 = objc_stub::description(param_1);
    }
    else {
      IVar2 = SADateFormatter::dateFormatterFromString_
                        ((ID)&objc::class_t::SADateFormatter,(ID)&cf_yyyy_MM_ddHH_mm_ss_SSS);
      param_1 = objc_stub::stringFromDate_(IVar2,param_1);
    }
  }
  return param_1;
}

