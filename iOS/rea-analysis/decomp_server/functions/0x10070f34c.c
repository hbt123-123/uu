// rea decompile_all
// name: SAValidator::reservedKeywordCheckForObject:error:
// address: 0x10070f34c
// body: available
// range: 0x10070f34c-0x10070f513 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10070f510 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autorelease replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SAValidator::reservedKeywordCheckForObject_error_
               (ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 uStack_68;
  ID local_60;
  undefined8 local_58;
  ID local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (DAT_100b2c740 != -1) {
    FUN_100735034();
  }
  if (DAT_100b2c748 == 0) {
    local_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_100995300;
    local_50 = NSString::stringWithFormat_
                         ((ID)&_OBJC_CLASS___NSString,
                          &
                          cf_PropertyKeyvalidateregularexpressioninitfailed_pleasechecktheregularexpression_ssyntax
                         );
    IVar1 = NSDictionary::dictionaryWithObjects_forKeys_count_
                      ((ID)&_OBJC_CLASS___NSDictionary,&local_50,&local_58,1);
    uVar2 = 0x4e24;
  }
  else {
    IVar1 = objc_stub::length(param_3);
    IVar1 = objc_stub::numberOfMatchesInString_options_range_(DAT_100b2c748,param_3,0,0,IVar1);
    if (IVar1 != 0) goto LAB_10070f4d0;
    uStack_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_100995300;
    local_60 = NSString::stringWithFormat_
                         ((ID)&_OBJC_CLASS___NSString,&cf_PropertyKeyorEventname_____isinvalid_);
    IVar1 = NSDictionary::dictionaryWithObjects_forKeys_count_
                      ((ID)&_OBJC_CLASS___NSDictionary,&local_60,&uStack_68,1);
    uVar2 = 0x4e25;
  }
  IVar1 = NSError::errorWithDomain_code_userInfo_
                    ((ID)&_OBJC_CLASS___NSError,&cf_SensorsAnalyticsErrorDomain,uVar2,IVar1);
  *param_4 = IVar1;
LAB_10070f4d0:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

