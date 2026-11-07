// rea decompile_all
// name: FUN_10072b7b8
// address: 0x10072b7b8
// body: available
// range: 0x10072b7b8-0x10072b957 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10072b954 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10072b7b8(ID param_1)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined8 local_38;
  
  IVar1 = objc_stub::rangeOfString_options_(param_1,&cf__uU__A_Fa_f0_9__4_,0x400);
  if (IVar1 != 0x7fffffffffffffff) {
    IVar1 = NSMutableString::stringWithString_((ID)&_OBJC_CLASS___NSMutableString,param_1);
    IVar2 = objc_stub::length(param_1);
    NSMutableString::replaceOccurrencesOfString_withString_options_range_
              (IVar1,&cf__u,&cf__U,0,0,IVar2);
    IVar2 = objc_stub::length(param_1);
    NSMutableString::replaceOccurrencesOfString_withString_options_range_
              (IVar1,&cf__,&cf___,0,0,IVar2);
    NSMutableString::insertString_atIndex_(IVar1,&cf__,0);
    NSMutableString::appendString_(IVar1,&cf__);
    IVar1 = NSMutableString::dataUsingEncoding_(IVar1,4);
    local_38 = 1;
    IVar1 = NSPropertyListSerialization::propertyListWithData_options_format_error_
                      ((ID)&_OBJC_CLASS___NSPropertyListSerialization,IVar1,0,&local_38,0);
    if (IVar1 != 0) {
      puVar3 = &_OBJC_CLASS___NSString;
      _objc_opt_class(&_OBJC_CLASS___NSString);
      IVar2 = IVar1;
      _objc_opt_isKindOfClass(IVar1,puVar3);
      if ((IVar2 & 1) != 0) {
        param_1 = NSPropertyListSerialization::stringByReplacingOccurrencesOfString_withString_
                            (IVar1,&cf__r_n,&cf_newline_s_);
      }
    }
  }
  return param_1;
}

