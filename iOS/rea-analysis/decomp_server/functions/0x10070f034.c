// rea decompile_all
// name: SAValidator::validKey:error:
// address: 0x10070f034
// body: available
// range: 0x10070f034-0x10070f34b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10070f348 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autorelease replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

void SAValidator::validKey_error_(ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  ID local_90;
  undefined8 local_88;
  ID local_80;
  undefined8 local_78;
  ID local_70;
  undefined8 local_68;
  ID local_60;
  undefined8 local_58;
  ID local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (param_3 == 0) {
    local_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_100995300;
    local_50 = NSString::stringWithFormat_
                         ((ID)&_OBJC_CLASS___NSString,&cf_PropertykeyorEventnameshouldnotbenil);
    IVar2 = NSDictionary::dictionaryWithObjects_forKeys_count_
                      ((ID)&_OBJC_CLASS___NSDictionary,&local_50,&local_58,1);
    uVar3 = 0x4e21;
  }
  else {
    puVar1 = &_OBJC_CLASS___NSString;
    _objc_opt_class(&_OBJC_CLASS___NSString);
    IVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((IVar2 & 1) == 0) {
      local_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_100995300;
      _objc_opt_class();
      local_60 = NSString::stringWithFormat_
                           ((ID)&_OBJC_CLASS___NSString,&cf_PropertykeyorEventnamemustbestring_not__
                           );
      IVar2 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,&local_60,&local_68,1);
      uVar3 = 0x4e22;
    }
    else {
      IVar2 = objc_stub::length(param_3);
      if (IVar2 != 0) {
        local_90 = 0;
        reservedKeywordCheckForObject_error_(param_1,param_3,&local_90);
        IVar2 = local_90;
        if (local_90 == 0) {
          IVar2 = objc_stub::length(param_3);
          if (DAT_100aba5d8 < IVar2) {
            local_88 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_100995300;
            local_80 = NSString::stringWithFormat_
                                 ((ID)&_OBJC_CLASS___NSString,
                                  &cf_PropertykeyorEventname___slengthislongerthan_ld);
            IVar2 = NSDictionary::dictionaryWithObjects_forKeys_count_
                              ((ID)&_OBJC_CLASS___NSDictionary,&local_80,&local_88,1);
            IVar2 = NSError::errorWithDomain_code_userInfo_
                              ((ID)&_OBJC_CLASS___NSError,&cf_SensorsAnalyticsErrorDomain,0x4e26,
                               IVar2);
            *param_4 = IVar2;
          }
          else {
            *param_4 = 0;
          }
        }
        else {
          _objc_retainAutorelease(local_90);
          *param_4 = IVar2;
        }
        goto LAB_10070f250;
      }
      local_78 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_100995300;
      local_70 = NSString::stringWithFormat_
                           ((ID)&_OBJC_CLASS___NSString,&cf_PropertykeyorEventnameisempty);
      IVar2 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,&local_70,&local_78,1);
      uVar3 = 0x4e23;
    }
  }
  IVar2 = NSError::errorWithDomain_code_userInfo_
                    ((ID)&_OBJC_CLASS___NSError,&cf_SensorsAnalyticsErrorDomain,uVar3,IVar2);
  *param_4 = IVar2;
LAB_10070f250:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

