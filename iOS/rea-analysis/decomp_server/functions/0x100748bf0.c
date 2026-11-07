// rea decompile_all
// name: SentrySerialization::sessionWithData:
// address: 0x100748bf0
// body: available
// range: 0x100748bf0-0x100748f23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100748f0c to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentrySerialization::sessionWithData_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  class_t *self;
  ID IVar2;
  long local_68;
  
  local_68 = 0;
  IVar1 = NSJSONSerialization::JSONObjectWithData_options_error_
                    ((ID)&_OBJC_CLASS___NSJSONSerialization,param_3,0,&local_68);
  if (local_68 == 0) {
    self = &objc::class_t::SentrySession;
    _objc_alloc();
    IVar1 = objc_stub::initWithJSONObject_((ID)self,IVar1);
    if (IVar1 == 0) {
      IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,4);
      if ((int)IVar1 == 0) {
        return 0;
      }
      IVar1 = NSString::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySerialization.m"
                        );
      IVar1 = NSString::lastPathComponent(IVar1);
      NSString::stringByDeletingPathExtension(IVar1);
      NSString::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,&cf_Failedtoinitializesessionfromdictionary_Droppingit_
                );
    }
    else {
      IVar2 = objc_stub::releaseName(IVar1);
      if (IVar2 != 0) {
        IVar2 = objc_stub::releaseName(IVar1);
        IVar2 = objc_stub::isEqualToString_(IVar2,&cf___);
        if ((int)IVar2 == 0) {
          return IVar1;
        }
      }
      IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,4);
      if ((int)IVar1 == 0) {
        return 0;
      }
      IVar1 = NSString::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySerialization.m"
                        );
      IVar1 = NSString::lastPathComponent(IVar1);
      NSString::stringByDeletingPathExtension(IVar1);
      NSString::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,
                 &cf_Deserializedsessiondoesn_tcontainareleasename_Droppingit_);
    }
    IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
    objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,4);
  }
  else {
    IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,4);
    if ((int)IVar1 == 0) {
      return 0;
    }
    IVar1 = NSString::stringWithUTF8String_
                      ((ID)&_OBJC_CLASS___NSString,
                       "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySerialization.m"
                      );
    IVar1 = NSString::lastPathComponent(IVar1);
    NSString::stringByDeletingPathExtension(IVar1);
    NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Failedtodeserializesessiondata__);
    IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
    objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,4);
  }
  return 0;
}

