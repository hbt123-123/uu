// rea decompile_all
// name: FUN_10073a654
// address: 0x10073a654
// body: available
// range: 0x10073a654-0x10073a993 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10073a990 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10073a654(long param_1)

{
  ID self;
  ID IVar1;
  char local_68 [8];
  ID local_60;
  ID local_58;
  
  FUN_100739aec(local_68,*(undefined8 *)(param_1 + 0x20));
  if (local_68[0] == '\0') {
    FUN_1007ab4d8();
  }
  else {
    self = objc_stub::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
    IVar1 = objc_stub::isContinuousProfilingEnabled(*(ID *)(param_1 + 0x20));
    if ((int)IVar1 == 0) {
      IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
      if ((int)IVar1 != 0) {
        IVar1 = objc_stub::stringWithUTF8String_
                          ((ID)&_OBJC_CLASS___NSString,
                           "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryLaunchProfiling.m"
                          );
        IVar1 = objc_stub::lastPathComponent(IVar1);
        objc_stub::stringByDeletingPathExtension(IVar1);
        objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Configuringlaunchtraceprofile);
        IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
        objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
      }
      IVar1 = objc_stub::sampleRate(local_60);
      objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_traces);
      IVar1 = objc_stub::FUN_1007f0be0(local_60);
      objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_traces_sample_rand);
      IVar1 = objc_stub::sampleRate(local_58);
      objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_profiles);
      IVar1 = objc_stub::FUN_1007f0be0(local_58);
      objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_profiles_sample_rand);
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
                  ((ID)&_OBJC_CLASS___NSString,&cf_Configuringlaunchcontinuousprofile);
        IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
        objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
      }
      IVar1 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,1);
      objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_continuous_profiling);
    }
    FUN_1007ab36c(self);
  }
  return 0;
}

