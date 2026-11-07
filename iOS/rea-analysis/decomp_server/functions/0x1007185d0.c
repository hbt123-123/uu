// rea decompile_all
// name: FUN_1007185d0
// address: 0x1007185d0
// body: available
// range: 0x1007185d0-0x10071881b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100718814 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100718818 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autorelease replaced with injection: _objc_retain_fixup */

ID FUN_1007185d0(undefined8 param_1,undefined8 param_2,ID param_3,ID param_4,ID *param_5)

{
  ID IVar1;
  undefined8 local_68;
  ID local_60;
  undefined8 local_58;
  ID local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar1 = objc_stub::conformsToProtocol_(param_3,&objc::protocol_t::SAPropertyKeyProtocol);
  if ((IVar1 & 1) == 0) {
    local_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_100995300;
    local_50 = NSString::stringWithFormat_
                         ((ID)&_OBJC_CLASS___NSString,&cf_PropertyKey___mustbeNSString);
    IVar1 = NSDictionary::dictionaryWithObjects_forKeys_count_
                      ((ID)&_OBJC_CLASS___NSDictionary,&local_50,&local_58,1);
    IVar1 = NSError::errorWithDomain_code_userInfo_
                      ((ID)&_OBJC_CLASS___NSError,&cf_SensorsAnalyticsErrorDomain,0x2714,IVar1);
    *param_5 = IVar1;
  }
  else {
    objc_stub::sensorsdata_isValidPropertyKeyWithError_(param_3,param_5);
    if ((*param_5 == 0) || (IVar1 = objc_stub::code(*param_5), IVar1 == 0x4e26)) {
      IVar1 = objc_stub::conformsToProtocol_(param_4,&objc::protocol_t::SAPropertyValueProtocol);
      if ((IVar1 & 1) != 0) {
        IVar1 = objc_stub::sensorsdata_propertyValueWithKey_error_(param_4,param_3,param_5);
        goto LAB_1007187d4;
      }
      local_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_100995300;
      _objc_opt_class();
      local_60 = NSString::stringWithFormat_
                           ((ID)&_OBJC_CLASS___NSString,
                            &
                            cf___propertyvaluesmustbeNSString_NSNumber_NSSet_NSArrayorNSDate_got_____
                           );
      IVar1 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,&local_60,&local_68,1);
      IVar1 = NSError::errorWithDomain_code_userInfo_
                        ((ID)&_OBJC_CLASS___NSError,&cf_SensorsAnalyticsErrorDomain,0x2715,IVar1);
      *param_5 = IVar1;
    }
  }
  IVar1 = 0;
LAB_1007187d4:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar1;
}

