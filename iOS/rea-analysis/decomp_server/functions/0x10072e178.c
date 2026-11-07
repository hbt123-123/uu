// rea decompile_all
// name: SACorrectUserIdInterceptor::processWithInput:completion:
// address: 0x10072e178
// body: available
// range: 0x10072e178-0x10072e557 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10072e554 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SACorrectUserIdInterceptor::processWithInput_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,uint param_5)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  int iVar6;
  
  IVar2 = objc_stub::properties(param_3,param_3,param_4,(ulong)param_5);
  if (IVar2 == 0) {
    (**(code **)(param_4 + 0x10))(param_4,param_3);
  }
  else {
    IVar2 = objc_stub::eventObject(param_3);
    IVar3 = objc_stub::event(IVar2);
    IVar4 = objc_stub::properties(param_3);
    IVar4 = objc_stub::mutableCopy(IVar4);
    IVar5 = objc_stub::isEqualToString_(IVar3,&cf__ABTestTrigger);
    if ((IVar5 & 1) == 0) {
      IVar5 = objc_stub::isEqualToString_(IVar3,&cf__PlanPopupDisplay);
      iVar6 = (int)IVar5;
    }
    else {
      iVar6 = 1;
    }
    bVar1 = SAValidator::isValidString_((ID)&objc::class_t::SAValidator,IVar3);
    if ((bVar1 != 0) && (iVar6 != 0)) {
      IVar5 = objc_stub::isEqualToString_(IVar3,&cf__ABTestTrigger);
      if ((int)IVar5 != 0) {
        IVar5 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_sab_loginId);
        if (IVar5 != 0) {
          IVar5 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_sab_loginId);
          objc_stub::setLoginId_(IVar2,IVar5);
          objc_stub::removeObjectForKey_(IVar4,&cf_sab_loginId);
        }
        IVar5 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_sab_distinctId);
        if (IVar5 != 0) {
          IVar5 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_sab_distinctId);
          objc_stub::setDistinctId_(IVar2,IVar5);
          objc_stub::removeObjectForKey_(IVar4,&cf_sab_distinctId);
        }
        IVar5 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_sab_anonymousId);
        if (IVar5 != 0) {
          IVar5 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_sab_anonymousId);
          objc_stub::setAnonymousId_(IVar2,IVar5);
          objc_stub::removeObjectForKey_(IVar4,&cf_sab_anonymousId);
        }
      }
      IVar3 = objc_stub::isEqualToString_(IVar3,&cf__PlanPopupDisplay);
      if ((int)IVar3 != 0) {
        IVar3 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_sf_loginId);
        if (IVar3 != 0) {
          IVar3 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_sf_loginId);
          objc_stub::setLoginId_(IVar2,IVar3);
          objc_stub::removeObjectForKey_(IVar4,&cf_sf_loginId);
        }
        IVar3 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_sf_distinctId);
        if (IVar3 != 0) {
          IVar3 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_sf_distinctId);
          objc_stub::setDistinctId_(IVar2,IVar3);
          objc_stub::removeObjectForKey_(IVar4,&cf_sf_distinctId);
        }
        IVar3 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_sf_anonymousId);
        if (IVar3 != 0) {
          IVar3 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_sf_anonymousId);
          objc_stub::setAnonymousId_(IVar2,IVar3);
          objc_stub::removeObjectForKey_(IVar4,&cf_sf_anonymousId);
        }
      }
      IVar2 = objc_stub::copy(IVar4);
      objc_stub::setProperties_(param_3,IVar2);
    }
    (**(code **)(param_4 + 0x10))(param_4,param_3);
  }
  return;
}

