// rea decompile_all
// name: SAItemEventObject::validateEventWithError:
// address: 0x100733e94
// body: available
// range: 0x100733e94-0x100734127 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100734124 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autorelease replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

void SAItemEventObject::validateEventWithError_(ID param_1,SEL param_2,ID *param_3)

{
  ID IVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 local_78;
  ID local_70;
  undefined8 local_68;
  ID local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar1 = itemType(param_1);
  SAValidator::validKey_error_((ID)&objc::class_t::SAValidator,IVar1,param_3);
  if ((*param_3 != 0) && (IVar1 = objc_stub::code(*param_3), IVar1 != 0x4e26)) {
    setItemType_(param_1,0);
  }
  uVar2 = itemID(param_1);
  puVar3 = &_OBJC_CLASS___NSString;
  _objc_opt_class(&_OBJC_CLASS___NSString);
  _objc_opt_isKindOfClass(uVar2,puVar3);
  if ((uVar2 & 1) == 0) {
    local_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_100995300;
    local_60 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Item_idmustbeastring);
    IVar1 = NSDictionary::dictionaryWithObjects_forKeys_count_
                      ((ID)&_OBJC_CLASS___NSDictionary,&local_60,&local_68,1);
    IVar1 = NSError::errorWithDomain_code_userInfo_
                      ((ID)&_OBJC_CLASS___NSError,&cf_SensorsAnalyticsErrorDomain,0x4e22,IVar1);
    *param_3 = IVar1;
    uVar4 = setItemID_(param_1,0);
  }
  else {
    IVar1 = itemID(param_1);
    IVar1 = objc_stub::length(IVar1);
    uVar4 = 0;
    if (DAT_100aba5e0 < IVar1) {
      local_78 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_100995300;
      itemID(param_1);
      local_70 = NSString::stringWithFormat_
                           ((ID)&_OBJC_CLASS___NSString,&cf____slengthislongerthan_ld);
      IVar1 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,&local_70,&local_78,1);
      IVar1 = NSError::errorWithDomain_code_userInfo_
                        ((ID)&_OBJC_CLASS___NSError,&cf_SensorsAnalyticsErrorDomain,0x4e26,IVar1);
      *param_3 = IVar1;
      uVar4 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar4);
}

