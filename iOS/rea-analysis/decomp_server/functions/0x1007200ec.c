// rea decompile_all
// name: SASessionProperty::sessionPropertiesWithEventTime:
// address: 0x1007200ec
// body: available
// range: 0x1007200ec-0x1007203bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007203b8 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1007203bc to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SASessionProperty::sessionPropertiesWithEventTime_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  long_long lVar2;
  ID IVar3;
  cfstringStruct *local_68;
  ID local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar1 = sessionModel(param_1);
  IVar1 = objc_stub::lastEventTime(IVar1);
  IVar1 = objc_stub::unsignedLongLongValue(IVar1);
  lVar2 = sessionMaxInterval(param_1);
  IVar1 = NSNumber::numberWithUnsignedLongLong_((ID)&_OBJC_CLASS___NSNumber,lVar2 + IVar1);
  IVar3 = sessionModel(param_1);
  IVar3 = objc_stub::firstEventTime(IVar3);
  IVar3 = objc_stub::unsignedLongLongValue(IVar3);
  IVar3 = NSNumber::numberWithUnsignedLongLong_((ID)&_OBJC_CLASS___NSNumber,IVar3 + 43200000);
  IVar1 = objc_stub::compare_(param_3,IVar1);
  if ((IVar1 == 1) || (IVar1 = objc_stub::compare_(param_3,IVar3), IVar1 == 1)) {
    IVar1 = NSUUID::UUID((ID)&_OBJC_CLASS___NSUUID);
    IVar1 = NSUUID::UUIDString(IVar1);
    IVar3 = sessionModel(param_1);
    objc_stub::setSessionID_(IVar3,IVar1);
    IVar1 = sessionModel(param_1);
    objc_stub::setFirstEventTime_(IVar1,param_3);
  }
  IVar1 = sessionModel(param_1);
  objc_stub::setLastEventTime_(IVar1,param_3);
  IVar1 = SAStoreManager::sharedInstance((ID)&objc::class_t::SAStoreManager);
  IVar3 = sessionModel(param_1);
  SABaseStoreManager::setObject_forKey_(IVar1,IVar3,0x1009f0c10);
  local_68 = &cf__event_session_id;
  IVar1 = sessionModel(param_1);
  local_60 = objc_stub::sessionID(IVar1);
  IVar1 = NSDictionary::dictionaryWithObjects_forKeys_count_
                    ((ID)&_OBJC_CLASS___NSDictionary,&local_60,&local_68,1);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

