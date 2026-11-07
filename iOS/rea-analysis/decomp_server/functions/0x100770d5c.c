// rea decompile_all
// name: SentryContinuousProfiler::start
// address: 0x100770d5c
// body: available
// range: 0x100770d5c-0x10077103f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100770f2c to 0x1007f0dc0 objc_stub::FUN_1007f0dc0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100771024 to 0x1007ddeb8 /usr/lib/libc++.1.dylib::std::mutex::unlock (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryContinuousProfiler::start(ID param_1,SEL param_2)

{
  ID IVar1;
  class_t *self;
  undefined *self_00;
  ID IVar2;
  
  std::mutex::lock();
  IVar1 = objc_stub::FUN_1007ed3c0(DAT_100b2ddd8);
  if ((int)IVar1 == 0) {
    self = &objc::class_t::SentryProfiler;
    _objc_alloc();
    DAT_100b2ddd8 = objc_stub::FUN_1007ebd60((ID)self,1);
    if (DAT_100b2ddd8 != 0) {
      DAT_100b2ddf0 = 0;
      if (DAT_100b2ddf8 != -1) {
        _dispatch_once(&DAT_100b2ddf8,&PTR___NSConcreteGlobalBlock_1009e9220);
      }
      objc_stub::FUN_1007f4280(DAT_100b2ddd8,DAT_100b2dde8);
      std::mutex::unlock();
      IVar1 = objc_stub::sharedInstance((ID)&objc::class_t::SentryDependencyContainer);
      IVar1 = objc_stub::FUN_1007ee960(IVar1);
      self_00 = &_OBJC_CLASS___NSNotification;
      _objc_alloc();
      IVar2 = objc_stub::FUN_1007ebe00
                        ((ID)self_00,&cf_io_sentry_notification_continuous_profile_started,0,0);
      objc_stub::FUN_1007ef300(IVar1,IVar2);
      objc_stub::FUN_1007f0dc0(param_1);
      return;
    }
    IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,3);
    if ((int)IVar1 != 0) {
      IVar1 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryContinuousProfiler.mm"
                        );
      IVar1 = objc_stub::lastPathComponent(IVar1);
      objc_stub::stringByDeletingPathExtension(IVar1);
      objc_stub::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,&cf_Continuousprofilerwasunabletobeinitialized_);
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,3);
    }
  }
  else {
    IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
    if ((int)IVar1 != 0) {
      IVar1 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryContinuousProfiler.mm"
                        );
      IVar1 = objc_stub::lastPathComponent(IVar1);
      objc_stub::stringByDeletingPathExtension(IVar1);
      objc_stub::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,&cf_Acontinuousprofilerisalreadyrunning_);
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
    }
  }
  std::mutex::unlock();
  return;
}

