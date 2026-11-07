// rea decompile_all
// name: SentryCrashReportSink::filterReports:onCompletion:
// address: 0x10079fdc0
// body: available
// range: 0x10079fdc0-0x1007a00c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryCrashReportSink::filterReports_onCompletion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,uint param_5)

{
  bool bVar1;
  bool bVar2;
  ID IVar3;
  double extraout_d0;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  ID local_88;
  ID local_80;
  ID local_78;
  
  IVar3 = objc_stub::FUN_1007e7520(param_1,param_3,param_4,(ulong)param_5);
  objc_stub::FUN_1007e8a20(IVar3);
  bVar1 = false;
  bVar2 = true;
  if (0.0 < extraout_d0) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(extraout_d0)) {
      bVar1 = extraout_d0 == 2.0;
      bVar2 = 2.0 <= extraout_d0;
    }
  }
  if (!bVar2 || bVar1) {
    IVar3 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,3);
    if ((int)IVar3 != 0) {
      IVar3 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryCrashReportSink.m"
                        );
      IVar3 = objc_stub::lastPathComponent(IVar3);
      objc_stub::stringByDeletingPathExtension(IVar3);
      objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Startupcrash_detected_);
      IVar3 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar3,3);
    }
    objc_stub::FUN_1007f25a0((ID)&objc::class_t::SentrySDK,1);
    objc_stub::sendReports_onCompletion_(param_1,param_3,param_4);
    objc_stub::flush_((ID)&objc::class_t::SentrySDK,0x4014000000000000);
    IVar3 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
    if ((int)IVar3 != 0) {
      IVar3 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryCrashReportSink.m"
                        );
      IVar3 = objc_stub::lastPathComponent(IVar3);
      objc_stub::stringByDeletingPathExtension(IVar3);
      objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Startupcrash_Finishedflushing_);
      IVar3 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar3,1);
    }
  }
  else {
    IVar3 = objc_stub::FUN_1007e8880(param_1);
    local_a8 = PTR___NSConcreteStackBlock_100995490;
    local_a0 = 0xc2000000;
    local_98 = FUN_1007a00c4;
    puStack_90 = &DAT_1009ea0b8;
    local_88 = param_1;
    local_80 = param_3;
    local_78 = param_4;
    objc_stub::dispatchAsyncWithBlock_(IVar3,&local_a8);
  }
  return;
}

