// rea decompile_all
// name: FUN_10076b920
// address: 0x10076b920
// body: available
// range: 0x10076b920-0x10076bcb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10076bcb4 to 0x10079f1e8 FUN_10079f1e8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10076b920(long param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ID IVar4;
  ulong uVar5;
  
  iVar2 = 1;
  FUN_1007070fc(1,0xc,0,0);
  cVar1 = DAT_100b2d4c8;
  if (iVar2 == 0) {
    IVar4 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
    if ((int)IVar4 != 0) {
      IVar4 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashStackCursor_SelfThread.m"
                        );
      IVar4 = objc_stub::lastPathComponent(IVar4);
      objc_stub::stringByDeletingPathExtension(IVar4);
      objc_stub::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,
                 &cf_Retrievingbacktracewithoutasyncswiftstitching_oldplatformversions____);
LAB_10076bb4c:
      IVar4 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar4,1);
    }
  }
  else {
    IVar4 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
    if (cVar1 != '\0') {
      if ((int)IVar4 != 0) {
        IVar4 = objc_stub::stringWithUTF8String_
                          ((ID)&_OBJC_CLASS___NSString,
                           "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashStackCursor_SelfThread.m"
                          );
        IVar4 = objc_stub::lastPathComponent(IVar4);
        objc_stub::stringByDeletingPathExtension(IVar4);
        objc_stub::stringWithFormat_
                  ((ID)&_OBJC_CLASS___NSString,&cf_Retrievingbacktracewithasyncswiftstitching___);
        IVar4 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
        objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar4,1);
      }
      uVar5 = param_1 + 0x58;
      _backtrace_async(uVar5,0x61,0);
      goto LAB_10076bbb4;
    }
    if ((int)IVar4 != 0) {
      IVar4 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashStackCursor_SelfThread.m"
                        );
      IVar4 = objc_stub::lastPathComponent(IVar4);
      objc_stub::stringByDeletingPathExtension(IVar4);
      objc_stub::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,&cf_Retrievingbacktracewithoutasyncswiftstitching___);
      goto LAB_10076bb4c;
    }
  }
  uVar3 = _backtrace((void **)(param_1 + 0x58),0x61);
  uVar5 = (ulong)uVar3;
LAB_10076bbb4:
  IVar4 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
  if ((int)IVar4 != 0) {
    IVar4 = objc_stub::stringWithUTF8String_
                      ((ID)&_OBJC_CLASS___NSString,
                       "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashStackCursor_SelfThread.m"
                      );
    IVar4 = objc_stub::lastPathComponent(IVar4);
    objc_stub::stringByDeletingPathExtension(IVar4);
    objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Finishedretrievingbacktrace_);
    IVar4 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
    objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar4,1);
  }
  FUN_10079f1e8(param_1,param_1 + 0x58,uVar5,param_2 + 1);
  return;
}

