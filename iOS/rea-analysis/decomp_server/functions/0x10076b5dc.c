// rea decompile_all
// name: SentryTraceProfiler::timeoutTimerExpired
// address: 0x10076b5dc
// body: available
// range: 0x10076b5dc-0x10076b80b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10076b808 to 0x1007ddeb8 /usr/lib/libc++.1.dylib::std::mutex::unlock (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryTraceProfiler::timeoutTimerExpired(ID param_1,SEL param_2)

{
  ID IVar1;
  
  std::mutex::lock();
  DAT_100b3a890 = 0;
  IVar1 = objc_stub::FUN_1007ed3c0(DAT_100b2d4c0);
  if ((IVar1 & 1) == 0) {
    IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,3);
    if ((int)IVar1 != 0) {
      IVar1 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryTraceProfiler.mm"
                        );
      IVar1 = objc_stub::lastPathComponent(IVar1);
      objc_stub::stringByDeletingPathExtension(IVar1);
      objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Currentprofilerisnotrunning_);
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,3);
    }
  }
  else {
    IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
    if ((int)IVar1 != 0) {
      IVar1 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryTraceProfiler.mm"
                        );
      IVar1 = objc_stub::lastPathComponent(IVar1);
      objc_stub::stringByDeletingPathExtension(IVar1);
      objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Stoppingprofiler__duetotimeout_);
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
    }
    objc_stub::FUN_1007f62a0(DAT_100b2d4c0,1);
  }
  std::mutex::unlock();
  return;
}

