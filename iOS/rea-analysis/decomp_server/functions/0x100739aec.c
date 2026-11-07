// rea decompile_all
// name: FUN_100739aec
// address: 0x100739aec
// body: available
// range: 0x100739aec-0x100739fef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100739fec to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 FUN_100739aec(undefined8 *param_1,ID param_2)

{
  ID IVar1;
  class_t *pcVar2;
  ID self;
  ID IVar3;
  ID IVar4;
  
  IVar1 = objc_stub::enableAppLaunchProfiling(param_2);
  if (((int)IVar1 == 0) ||
     (IVar1 = objc_stub::isContinuousProfilingEnabled(param_2), (int)IVar1 == 0)) {
    IVar1 = objc_stub::enableAppLaunchProfiling(param_2);
    if (((int)IVar1 == 0) || (IVar1 = objc_stub::enableTracing(param_2), (IVar1 & 1) == 0)) {
      IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
      if ((int)IVar1 != 0) {
        IVar1 = NSString::stringWithUTF8String_
                          ((ID)&_OBJC_CLASS___NSString,
                           "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryLaunchProfiling.m"
                          );
        IVar1 = NSString::lastPathComponent(IVar1);
        NSString::stringByDeletingPathExtension(IVar1);
        objc_stub::enableAppLaunchProfiling(param_2);
        objc_stub::enableTracing(param_2);
        NSString::stringWithFormat_
                  ((ID)&_OBJC_CLASS___NSString,
                   &
                   cf_Won_tprofilenextlaunchduetospecifiedoptionsconfiguration_options_enableAppLaunchProfiling__d_options_enableTracing__d
                  );
        IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
        objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
      }
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    else {
      pcVar2 = &objc::class_t::SentryTransactionContext;
      _objc_alloc();
      IVar1 = objc_stub::initWithName_operation_((ID)pcVar2,&cf_app_launch,&cf_profile);
      objc_stub::setForNextAppLaunch_(IVar1,1);
      pcVar2 = &objc::class_t::SentrySamplingContext;
      _objc_alloc();
      self = objc_stub::initWithTransactionContext_((ID)pcVar2,IVar1);
      IVar1 = self;
      FUN_100797824(self,param_2);
      IVar3 = objc_stub::decision(IVar1);
      if (IVar3 == 1) {
        FUN_100797ae0(self,IVar1,param_2);
        IVar3 = objc_stub::decision(self);
        IVar4 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
        if (IVar3 == 1) {
          if ((int)IVar4 != 0) {
            IVar3 = NSString::stringWithUTF8String_
                              ((ID)&_OBJC_CLASS___NSString,
                               "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryLaunchProfiling.m"
                              );
            IVar3 = NSString::lastPathComponent(IVar3);
            NSString::stringByDeletingPathExtension(IVar3);
            NSString::stringWithFormat_
                      ((ID)&_OBJC_CLASS___NSString,&cf_Willstarttraceprofilenextlaunch_);
            IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
            objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar3,1);
          }
          *(undefined1 *)param_1 = 1;
          param_1[1] = IVar1;
          param_1[2] = self;
        }
        else {
          if ((int)IVar4 != 0) {
            IVar1 = NSString::stringWithUTF8String_
                              ((ID)&_OBJC_CLASS___NSString,
                               "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryLaunchProfiling.m"
                              );
            IVar1 = NSString::lastPathComponent(IVar1);
            NSString::stringByDeletingPathExtension(IVar1);
            NSString::stringWithFormat_
                      ((ID)&_OBJC_CLASS___NSString,&cf_Samplingoutthelaunchtraceprofile_);
            IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
            objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
          }
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
        }
      }
      else {
        IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
        if ((int)IVar1 != 0) {
          IVar1 = NSString::stringWithUTF8String_
                            ((ID)&_OBJC_CLASS___NSString,
                             "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryLaunchProfiling.m"
                            );
          IVar1 = NSString::lastPathComponent(IVar1);
          NSString::stringByDeletingPathExtension(IVar1);
          NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Samplingoutthelaunchtrace_);
          IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
          objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
        }
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
      }
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined1 *)param_1 = 1;
  }
  return 0;
}

