// rea decompile_all
// name: SensorsAnalyticsSDK::profilePushKey:pushId:
// address: 0x1007246a4
// body: available
// range: 0x1007246a4-0x1007248a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007248a0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SensorsAnalyticsSDK::profilePushKey_pushId_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID local_68;
  ID IStack_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  puVar1 = &_OBJC_CLASS___NSString;
  _objc_opt_class(&_OBJC_CLASS___NSString);
  IVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if (((IVar2 & 1) != 0) && (IVar2 = objc_stub::length(param_3), IVar2 != 0)) {
    puVar1 = &_OBJC_CLASS___NSString;
    _objc_opt_class(&_OBJC_CLASS___NSString);
    IVar2 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar1);
    if (((IVar2 & 1) != 0) && (IVar2 = objc_stub::length(param_4), IVar2 != 0)) {
      IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_sa___);
      IVar3 = SAStoreManager::sharedInstance((ID)&objc::class_t::SAStoreManager);
      IVar3 = SABaseStoreManager::stringForKey_(IVar3,IVar2);
      distinctId(param_1);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______);
      IVar3 = objc_stub::isEqualToString_(IVar3,IVar4);
      if ((IVar3 & 1) == 0) {
        local_68 = param_3;
        IStack_60 = param_4;
        IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                          ((ID)&_OBJC_CLASS___NSDictionary,&IStack_60,&local_68,1);
        set_(param_1,IVar3);
        IVar3 = SAStoreManager::sharedInstance((ID)&objc::class_t::SAStoreManager);
        SABaseStoreManager::setObject_forKey_(IVar3,IVar4,IVar2);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

