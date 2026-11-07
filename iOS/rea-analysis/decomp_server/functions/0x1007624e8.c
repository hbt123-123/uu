// rea decompile_all
// name: SentryNSURLRequest::initStoreRequestWithDsn:andEvent:didFailWithError:
// address: 0x1007624e8
// body: available
// range: 0x1007624e8-0x1007629bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

ID SentryNSURLRequest::initStoreRequestWithDsn_andEvent_didFailWithError_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID *param_5)

{
  ID IVar1;
  ID IVar2;
  undefined *self;
  
  IVar1 = objc_stub::serialize(param_4);
  IVar1 = objc_stub::dataWithJSONObject_((ID)&objc::class_t::SentrySerialization,IVar1);
  if (IVar1 == 0) {
    IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,4);
    if ((int)IVar1 != 0) {
      IVar1 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryNSURLRequest.m"
                        );
      IVar1 = objc_stub::lastPathComponent(IVar1);
      objc_stub::stringByDeletingPathExtension(IVar1);
      objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_EventcannotbeconvertedtoJSON);
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,4);
    }
    IVar1 = 0;
  }
  else {
    IVar2 = objc_stub::currentHub((ID)&objc::class_t::SentrySDK);
    IVar2 = objc_stub::getClient(IVar2);
    IVar2 = objc_stub::options(IVar2);
    IVar2 = objc_stub::FUN_1007e7de0(IVar2);
    if ((int)IVar2 != 0) {
      IVar2 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
      if ((int)IVar2 != 0) {
        IVar2 = objc_stub::stringWithUTF8String_
                          ((ID)&_OBJC_CLASS___NSString,
                           "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryNSURLRequest.m"
                          );
        IVar2 = objc_stub::lastPathComponent(IVar2);
        objc_stub::stringByDeletingPathExtension(IVar2);
        objc_stub::stringWithFormat_
                  ((ID)&_OBJC_CLASS___NSString,&cf_SendingJSON_______________________________);
        IVar2 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
        objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar2,1);
      }
      IVar2 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
      if ((int)IVar2 != 0) {
        IVar2 = objc_stub::stringWithUTF8String_
                          ((ID)&_OBJC_CLASS___NSString,
                           "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryNSURLRequest.m"
                          );
        IVar2 = objc_stub::lastPathComponent(IVar2);
        objc_stub::stringByDeletingPathExtension(IVar2);
        self = &_OBJC_CLASS___NSString;
        _objc_alloc();
        objc_stub::initWithData_encoding_((ID)self,IVar1,4);
        objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf___);
        IVar2 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
        objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar2,1);
      }
      IVar2 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
      if ((int)IVar2 != 0) {
        IVar2 = objc_stub::stringWithUTF8String_
                          ((ID)&_OBJC_CLASS___NSString,
                           "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryNSURLRequest.m"
                          );
        IVar2 = objc_stub::lastPathComponent(IVar2);
        objc_stub::stringByDeletingPathExtension(IVar2);
        objc_stub::stringWithFormat_
                  ((ID)&_OBJC_CLASS___NSString,&cf_____________________________________________);
        IVar2 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
        objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar2,1);
      }
    }
    IVar1 = objc_stub::FUN_1007eb3e0(param_1,param_3,IVar1,param_5);
  }
  return IVar1;
}

