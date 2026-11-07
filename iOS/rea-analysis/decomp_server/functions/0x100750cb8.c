// rea decompile_all
// name: FUN_100750cb8
// address: 0x100750cb8
// body: available
// range: 0x100750cb8-0x100751047 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10075102c to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100750cb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  class_t *pcVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  
  pcVar1 = &objc::class_t::_TtC6Sentry8SentryId;
  _objc_alloc();
  IVar2 = objc_stub::init((ID)pcVar1);
  IVar3 = objc_stub::sharedInstance((ID)&objc::class_t::SentryDependencyContainer);
  IVar3 = objc_stub::debugImageProvider(IVar3);
  IVar3 = objc_stub::FUN_1007ea500(IVar3);
  IVar4 = objc_stub::currentHub((ID)&objc::class_t::SentrySDK);
  FUN_100750570(param_1,IVar2,param_2,param_3,IVar3,IVar4);
  if (param_1 == 0) {
    IVar2 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
    if ((int)IVar2 == 0) {
      return 0;
    }
    IVar2 = objc_stub::stringWithUTF8String_
                      ((ID)&_OBJC_CLASS___NSString,
                       "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryProfilerSerialization.mm"
                      );
    IVar2 = objc_stub::lastPathComponent(IVar2);
    objc_stub::stringByDeletingPathExtension(IVar2);
    objc_stub::stringWithFormat_
              ((ID)&_OBJC_CLASS___NSString,&cf_Payloadwasempty_willnotcreateaprofilingenvelopeitem_)
    ;
    IVar2 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
    objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar2,1);
  }
  else {
    IVar3 = objc_stub::dataWithJSONObject_((ID)&objc::class_t::SentrySerialization,param_1);
    if (IVar3 != 0) {
      pcVar1 = &objc::class_t::SentryEnvelopeItemHeader;
      _objc_alloc();
      IVar4 = objc_stub::length(IVar3);
      IVar4 = objc_stub::initWithType_length_((ID)pcVar1,&cf_profile_chunk,IVar4);
      pcVar1 = &objc::class_t::SentryEnvelopeItem;
      _objc_alloc();
      IVar3 = objc_stub::initWithHeader_data_((ID)pcVar1,IVar4,IVar3);
      pcVar1 = &objc::class_t::SentryEnvelope;
      _objc_alloc();
      IVar2 = objc_stub::FUN_1007ebb00((ID)pcVar1,IVar2,IVar3);
      return IVar2;
    }
    IVar2 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
    if ((int)IVar2 == 0) {
      return 0;
    }
    IVar2 = objc_stub::stringWithUTF8String_
                      ((ID)&_OBJC_CLASS___NSString,
                       "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryProfilerSerialization.mm"
                      );
    IVar2 = objc_stub::lastPathComponent(IVar2);
    objc_stub::stringByDeletingPathExtension(IVar2);
    objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_FailedtoencodeprofiletoJSON_);
    IVar2 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
    objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar2,1);
  }
  return 0;
}

