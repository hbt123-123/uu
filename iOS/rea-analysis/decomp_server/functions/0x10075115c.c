// rea decompile_all
// name: FUN_10075115c
// address: 0x10075115c
// body: available
// range: 0x10075115c-0x10075179b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100751788 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100751798 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_10075115c(undefined8 param_1,ID param_2,ID param_3,ID param_4,undefined8 param_5)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  class_t *pcVar9;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  ID local_90;
  ID local_88;
  ID local_80;
  ID local_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar3 = objc_stub::sharedInstance((ID)&objc::class_t::SentryDependencyContainer);
  IVar3 = objc_stub::debugImageProvider(IVar3);
  IVar3 = objc_stub::FUN_1007ea500(IVar3);
  IVar4 = objc_stub::FUN_1007f5f40(param_4);
  IVar5 = objc_stub::FUN_1007e9100(param_4);
  IVar6 = objc_stub::FUN_1007f7800(param_2);
  pcVar1 = &cf_backgrounded;
  if (IVar6 != 2) {
    pcVar1 = &cf_normal;
  }
  pcVar2 = &cf_timeout;
  if (IVar6 != 1) {
    pcVar2 = pcVar1;
  }
  IVar6 = objc_stub::FUN_1007ee460(param_2);
  IVar7 = objc_stub::FUN_1007f5f40(param_4);
  IVar8 = objc_stub::FUN_1007e9100(param_4);
  IVar6 = objc_stub::FUN_1007f1740(IVar6,IVar7,IVar8);
  FUN_10074f98c(param_3,IVar4,IVar5,pcVar2,IVar6,IVar3,param_1);
  if (param_3 == 0) {
    IVar3 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
    if ((int)IVar3 != 0) {
      IVar3 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryProfilerSerialization.mm"
                        );
      IVar3 = objc_stub::lastPathComponent(IVar3);
      objc_stub::stringByDeletingPathExtension(IVar3);
      objc_stub::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,
                 &cf_Payloadwasempty_willnotcreateaprofilingenvelopeitem_);
      IVar3 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar3,1);
    }
    IVar3 = 0;
  }
  else {
    objc_stub::setObject_forKeyedSubscript_(param_3,&cf_cocoa,&cf_platform);
    local_b0 = &cf_id;
    IVar3 = objc_stub::eventId(param_4);
    local_90 = objc_stub::sentryIdString(IVar3);
    local_a8 = &cf_trace_id;
    IVar3 = objc_stub::trace(param_4);
    IVar3 = objc_stub::traceId(IVar3);
    local_88 = objc_stub::sentryIdString(IVar3);
    local_a0 = &cf_name;
    local_80 = objc_stub::FUN_1007f76e0(param_4);
    local_98 = &cf_active_thread_id;
    IVar3 = objc_stub::trace(param_4);
    IVar3 = objc_stub::FUN_1007f7700(IVar3);
    IVar3 = objc_stub::FUN_1007f1620(IVar3);
    local_78 = objc_stub::threadId(IVar3);
    IVar3 = objc_stub::dictionaryWithObjects_forKeys_count_
                      ((ID)&_OBJC_CLASS___NSDictionary,&local_90,&local_b0,4);
    objc_stub::setObject_forKeyedSubscript_(param_3,IVar3,&cf_transaction);
    FUN_1007868c4(param_5);
    objc_stub::setObject_forKeyedSubscript_(param_3,param_5,&cf_timestamp);
    IVar3 = objc_stub::dataWithJSONObject_((ID)&objc::class_t::SentrySerialization,param_3);
    if (IVar3 == 0) {
      IVar3 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
      if ((int)IVar3 == 0) {
        IVar3 = 0;
      }
      else {
        IVar3 = objc_stub::stringWithUTF8String_
                          ((ID)&_OBJC_CLASS___NSString,
                           "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryProfilerSerialization.mm"
                          );
        IVar3 = objc_stub::lastPathComponent(IVar3);
        objc_stub::stringByDeletingPathExtension(IVar3);
        objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_FailedtoencodeprofiletoJSON_);
        IVar3 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
        objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar3,1);
        IVar3 = 0;
      }
    }
    else {
      pcVar9 = &objc::class_t::SentryEnvelopeItemHeader;
      _objc_alloc();
      IVar4 = objc_stub::length(IVar3);
      IVar4 = objc_stub::initWithType_length_((ID)pcVar9,&cf_profile,IVar4);
      pcVar9 = &objc::class_t::SentryEnvelopeItem;
      _objc_alloc();
      IVar3 = objc_stub::initWithHeader_data_((ID)pcVar9,IVar4,IVar3);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar3;
}

