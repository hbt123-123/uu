// rea decompile_all
// name: SentryTraceProfiler::startWithTracer:
// address: 0x10076ae6c
// body: available
// range: 0x10076ae6c-0x10076b147 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool SentryTraceProfiler::startWithTracer_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  class_t *pcVar3;
  
  std::mutex::lock();
  IVar1 = objc_stub::FUN_1007ed3c0(DAT_100b2d4c0);
  if ((bool)IVar1 == 0) {
    pcVar3 = &objc::class_t::SentryProfiler;
    _objc_alloc();
    DAT_100b2d4c0 = objc_stub::FUN_1007ebd60((ID)pcVar3,0);
    if (DAT_100b2d4c0 != 0) {
      pcVar3 = &objc::class_t::_TtC6Sentry8SentryId;
      _objc_alloc();
      IVar1 = objc_stub::init((ID)pcVar3);
      objc_stub::FUN_1007f4280(DAT_100b2d4c0,IVar1);
      FUN_10078a144(DAT_100b2d4c0,param_3);
      std::mutex::unlock();
      objc_stub::FUN_1007f0da0(param_1);
      return 1;
    }
    IVar2 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,3);
    if ((int)IVar2 != 0) {
      IVar2 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryTraceProfiler.mm"
                        );
      IVar2 = objc_stub::lastPathComponent(IVar2);
      objc_stub::stringByDeletingPathExtension(IVar2);
      objc_stub::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,
                 &cf_Traceprofilerwasunabletobeinitialized_willnotproceed_);
      IVar2 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar2,3);
    }
  }
  else {
    IVar2 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
    if ((int)IVar2 != 0) {
      IVar2 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryTraceProfiler.mm"
                        );
      IVar2 = objc_stub::lastPathComponent(IVar2);
      objc_stub::stringByDeletingPathExtension(IVar2);
      objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Atraceprofilerisalreadyrunning_);
      IVar2 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar2,1);
    }
    FUN_10078a144(DAT_100b2d4c0,param_3);
    IVar2 = objc_stub::FUN_1007ee460(DAT_100b2d4c0);
    objc_stub::FUN_1007eff80(IVar2);
  }
  std::mutex::unlock();
  return (bool)IVar1;
}

