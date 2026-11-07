// rea decompile_all
// name: FUN_10073a090
// address: 0x10073a090
// body: available
// range: 0x10073a090-0x10073a593 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10073a590 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10073a090(ID param_1)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  class_t *self;
  SEL extraout_x1;
  
  FUN_1007ab2f8();
  if ((int)param_1 != 0) {
    FUN_1007ab12c();
    IVar1 = objc_stub::objectForKeyedSubscript_(param_1,&cf_continuous_profiling);
    IVar1 = objc_stub::boolValue(IVar1);
    if ((int)IVar1 == 0) {
      IVar1 = objc_stub::objectForKeyedSubscript_(param_1,&cf_profiles);
      if (IVar1 == 0) {
        IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
        if ((int)IVar1 != 0) {
          IVar1 = objc_stub::stringWithUTF8String_
                            ((ID)&_OBJC_CLASS___NSString,
                             "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryLaunchProfiling.m"
                            );
          IVar1 = objc_stub::lastPathComponent(IVar1);
          objc_stub::stringByDeletingPathExtension(IVar1);
          objc_stub::stringWithFormat_
                    ((ID)&_OBJC_CLASS___NSString,
                     &
                     cf_Receivedanilconfiguredlaunchprofilesamplerate_willnotstarttraceprofilerforlaunch_
                    );
          IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
          objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
        }
      }
      else {
        IVar2 = objc_stub::objectForKeyedSubscript_(param_1,&cf_profiles_sample_rand);
        IVar3 = objc_stub::objectForKeyedSubscript_(param_1,&cf_traces);
        if (IVar3 == 0) {
          IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
          if ((int)IVar1 != 0) {
            IVar1 = objc_stub::stringWithUTF8String_
                              ((ID)&_OBJC_CLASS___NSString,
                               "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryLaunchProfiling.m"
                              );
            IVar1 = objc_stub::lastPathComponent(IVar1);
            objc_stub::stringByDeletingPathExtension(IVar1);
            objc_stub::stringWithFormat_
                      ((ID)&_OBJC_CLASS___NSString,
                       &
                       cf_Receivedanilconfiguredlaunchtracesamplerate_willnotstarttraceprofilerforlaunch_
                      );
            IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
            objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
          }
        }
        else {
          IVar4 = objc_stub::objectForKeyedSubscript_(param_1,&cf_traces_sample_rand);
          IVar5 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,2);
          if ((int)IVar5 != 0) {
            IVar5 = objc_stub::stringWithUTF8String_
                              ((ID)&_OBJC_CLASS___NSString,
                               "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryLaunchProfiling.m"
                              );
            IVar5 = objc_stub::lastPathComponent(IVar5);
            IVar5 = objc_stub::stringByDeletingPathExtension(IVar5);
            FUN_100744114(IVar5,extraout_x1);
            objc_stub::stringWithFormat_
                      ((ID)&_OBJC_CLASS___NSString,&cf_Startingapplaunchtraceprofileat_llu_);
            IVar5 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
            objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar5,2);
          }
          DAT_100b3a870 = 1;
          self = &objc::class_t::SentryTracer;
          _objc_alloc();
          FUN_100739ff0(IVar3,IVar4);
          FUN_100739a4c(IVar1,IVar2);
          DAT_100b3a878 = objc_stub::FUN_1007ec540((ID)self,IVar3,0,IVar1);
        }
      }
    }
    else {
      IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
      if ((int)IVar1 != 0) {
        IVar1 = objc_stub::stringWithUTF8String_
                          ((ID)&_OBJC_CLASS___NSString,
                           "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryLaunchProfiling.m"
                          );
        IVar1 = objc_stub::lastPathComponent(IVar1);
        objc_stub::stringByDeletingPathExtension(IVar1);
        objc_stub::stringWithFormat_
                  ((ID)&_OBJC_CLASS___NSString,&cf_Startinglaunchcontinuousprofile);
        IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
        objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
      }
      objc_stub::FUN_1007f5de0((ID)&objc::class_t::SentryContinuousProfiler);
    }
    return 0;
  }
  return param_1;
}

