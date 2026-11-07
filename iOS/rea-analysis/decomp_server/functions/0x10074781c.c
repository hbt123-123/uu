// rea decompile_all
// name: SentrySerialization::dataWithEnvelope:
// address: 0x10074781c
// body: available
// range: 0x10074781c-0x100747e6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100747e6c to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentrySerialization::dataWithEnvelope_(ID param_1,SEL param_2,ID param_3)

{
  undefined *self;
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ulong uVar4;
  
  self = &_OBJC_CLASS___NSMutableData;
  _objc_alloc();
  IVar1 = objc_stub::init((ID)self);
  IVar2 = NSMutableDictionary::new((ID)&_OBJC_CLASS___NSMutableDictionary);
  IVar3 = objc_stub::header(param_3);
  IVar3 = objc_stub::eventId(IVar3);
  if (IVar3 != 0) {
    IVar3 = objc_stub::header(param_3);
    IVar3 = objc_stub::eventId(IVar3);
    IVar3 = objc_stub::sentryIdString(IVar3);
    NSMutableDictionary::setValue_forKey_(IVar2,IVar3,&cf_event_id);
  }
  IVar3 = objc_stub::header(param_3);
  IVar3 = objc_stub::sdkInfo(IVar3);
  if (IVar3 != 0) {
    IVar3 = objc_stub::serialize(IVar3);
    NSMutableDictionary::setValue_forKey_(IVar2,IVar3,&cf_sdk);
  }
  IVar3 = objc_stub::header(param_3);
  IVar3 = objc_stub::traceContext(IVar3);
  if (IVar3 != 0) {
    IVar3 = objc_stub::serialize(IVar3);
    NSMutableDictionary::setValue_forKey_(IVar2,IVar3,&cf_trace);
  }
  IVar3 = objc_stub::header(param_3);
  IVar3 = objc_stub::sentAt(IVar3);
  if (IVar3 != 0) {
    FUN_1007868c4(IVar3);
    NSMutableDictionary::setValue_forKey_(IVar2,IVar3,&cf_sent_at);
  }
  IVar2 = dataWithJSONObject_((ID)&objc::class_t::SentrySerialization,IVar2);
  if (IVar2 == 0) {
    IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,4);
    if ((int)IVar1 != 0) {
      IVar1 = NSString::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySerialization.m"
                        );
      IVar1 = NSString::lastPathComponent(IVar1);
      NSString::stringByDeletingPathExtension(IVar1);
      NSString::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,&cf_EnvelopeheadercannotbeconvertedtoJSON_);
      IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,4);
    }
    IVar1 = 0;
  }
  else {
    objc_stub::appendData_(IVar1,IVar2);
    IVar2 = objc_stub::items(param_3);
    IVar2 = objc_stub::count(IVar2);
    if (IVar2 != 0) {
      uVar4 = 0;
      do {
        IVar2 = objc_stub::dataUsingEncoding_(0x100a08230,4);
        objc_stub::appendData_(IVar1,IVar2);
        IVar2 = objc_stub::items(param_3);
        IVar2 = objc_stub::objectAtIndexedSubscript_(IVar2,uVar4);
        IVar2 = objc_stub::header(IVar2);
        IVar2 = objc_stub::serialize(IVar2);
        IVar2 = dataWithJSONObject_((ID)&objc::class_t::SentrySerialization,IVar2);
        if (IVar2 == 0) {
          IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,4);
          if ((int)IVar1 != 0) {
            IVar1 = NSString::stringWithUTF8String_
                              ((ID)&_OBJC_CLASS___NSString,
                               "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySerialization.m"
                              );
            IVar1 = NSString::lastPathComponent(IVar1);
            NSString::stringByDeletingPathExtension(IVar1);
            NSString::stringWithFormat_
                      ((ID)&_OBJC_CLASS___NSString,&cf_EnvelopeitemheadercannotbeconvertedtoJSON_);
            IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
            objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,4);
          }
          return 0;
        }
        objc_stub::appendData_(IVar1,IVar2);
        IVar2 = objc_stub::dataUsingEncoding_(0x100a08230,4);
        objc_stub::appendData_(IVar1,IVar2);
        IVar2 = objc_stub::items(param_3);
        IVar2 = objc_stub::objectAtIndexedSubscript_(IVar2,uVar4);
        IVar2 = objc_stub::data(IVar2);
        objc_stub::appendData_(IVar1,IVar2);
        uVar4 = uVar4 + 1;
        IVar2 = objc_stub::items(param_3);
        IVar2 = objc_stub::count(IVar2);
      } while (uVar4 < IVar2);
    }
  }
  return IVar1;
}

