// rea decompile_all
// name: SentryEvent::serialize
// address: 0x1007b09f0
// body: available
// range: 0x1007b09f0-0x1007b0d5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007b0d54 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1007b0d58 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryEvent::serialize(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  ID local_70;
  ID local_68;
  cfstringStruct *pcStack_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar1 = objc_stub::timestamp(param_1);
  if (IVar1 == 0) {
    IVar1 = objc_stub::sharedInstance((ID)&objc::class_t::SentryDependencyContainer);
    IVar1 = objc_stub::dateProvider(IVar1);
    IVar1 = objc_stub::date(IVar1);
    objc_stub::setTimestamp_(param_1,IVar1);
  }
  local_88 = &cf_event_id;
  IVar1 = objc_stub::eventId(param_1);
  local_70 = objc_stub::sentryIdString(IVar1);
  local_80 = &cf_timestamp;
  IVar1 = objc_stub::timestamp(param_1);
  objc_stub::timeIntervalSince1970(IVar1);
  local_68 = objc_stub::numberWithDouble_((ID)&_OBJC_CLASS___NSNumber);
  local_78 = &cf_platform;
  pcStack_60 = &cf_cocoa;
  IVar1 = objc_stub::dictionaryWithObjects_forKeys_count_
                    ((ID)&_OBJC_CLASS___NSDictionary,&local_70,&local_88,3);
  IVar1 = objc_stub::mutableCopy(IVar1);
  IVar2 = objc_stub::level(param_1);
  if (IVar2 != 0) {
    IVar2 = objc_stub::level(param_1);
    FUN_10078990c();
    objc_stub::setValue_forKey_(IVar1,IVar2,&cf_level);
  }
  objc_stub::FUN_1007e51a0(param_1,IVar1);
  objc_stub::FUN_1007e50a0(param_1,IVar1);
  IVar2 = objc_stub::FUN_1007e97a0(param_1);
  FUN_10077cc54(IVar2);
  objc_stub::setValue_forKey_(IVar1,IVar2,&cf_extra);
  IVar2 = objc_stub::FUN_1007f6d40(param_1);
  objc_stub::setValue_forKey_(IVar1,IVar2,&cf_tags);
  IVar2 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
  if ((int)IVar2 != 0) {
    IVar2 = objc_stub::stringWithUTF8String_
                      ((ID)&_OBJC_CLASS___NSString,
                       "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryEvent.m");
    IVar2 = objc_stub::lastPathComponent(IVar2);
    objc_stub::stringByDeletingPathExtension(IVar2);
    objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Serializedevent___);
    IVar2 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
    objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar2,1);
    IVar2 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(IVar2);
}

