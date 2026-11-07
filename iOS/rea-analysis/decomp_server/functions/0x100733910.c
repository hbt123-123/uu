// rea decompile_all
// name: SAProfileAppendEventObject::sensorsdata_validKey:value:error:
// address: 0x100733910
// body: available
// range: 0x100733910-0x100733ac3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100733abc to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100733ac0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autorelease replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID SAProfileAppendEventObject::sensorsdata_validKey_value_error_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID *param_5)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  objc_super local_68;
  undefined8 local_58;
  ID local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_68.super_class = &objc::class_t::SAProfileAppendEventObject;
  local_68.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_68,"sensorsdata_validKey:value:error:",param_3,param_4,param_5)
  ;
  puVar2 = &_OBJC_CLASS___NSArray;
  _objc_opt_class(&_OBJC_CLASS___NSArray);
  IVar3 = IVar1;
  _objc_opt_isKindOfClass(IVar1,puVar2);
  if ((IVar3 & 1) == 0) {
    puVar2 = &_OBJC_CLASS___NSSet;
    _objc_opt_class(&_OBJC_CLASS___NSSet);
    IVar3 = IVar1;
    _objc_opt_isKindOfClass(IVar1,puVar2);
    if ((IVar3 & 1) == 0) {
      local_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_100995300;
      _objc_opt_class();
      local_50 = NSString::stringWithFormat_
                           ((ID)&_OBJC_CLASS___NSString,
                            &cf___profile_appendvaluemustbeNSSet_NSArray_got____);
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,&local_50,&local_58,1);
      IVar3 = NSError::errorWithDomain_code_userInfo_
                        ((ID)&_OBJC_CLASS___NSError,&cf_SensorsAnalyticsErrorDomain,0x2716,IVar3);
      *param_5 = IVar3;
      IVar1 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar1;
}

