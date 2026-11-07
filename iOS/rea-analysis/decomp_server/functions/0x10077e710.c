// rea decompile_all
// name: SentryAsyncLogWrapper::initializeAsyncLogFile
// address: 0x10077e710
// body: available
// range: 0x10077e710-0x10077ea53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryAsyncLogWrapper::initializeAsyncLogFile(ID param_1,SEL param_2)

{
  int iVar1;
  ID IVar2;
  ulong uVar3;
  int *piVar4;
  ID IVar5;
  
  FUN_1007aadc8();
  IVar2 = objc_stub::stringByAppendingPathComponent_(param_1,&cf_async_log);
  _objc_retainAutorelease();
  IVar2 = objc_stub::UTF8String(IVar2);
  uVar3 = 0;
  FUN_1007aadc8();
  FUN_1007a6d54();
  if ((uVar3 & 1) == 0) {
    IVar2 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,4);
    if ((int)IVar2 == 0) {
      return;
    }
    IVar2 = objc_stub::stringWithUTF8String_
                      ((ID)&_OBJC_CLASS___NSString,
                       "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryLogC.m");
    IVar2 = objc_stub::lastPathComponent(IVar2);
    objc_stub::stringByDeletingPathExtension(IVar2);
    objc_stub::stringWithFormat_
              ((ID)&_OBJC_CLASS___NSString,&cf_Failedtoinitializedirectoryforasynclogfile___);
  }
  else {
    piVar4 = ___error();
    *piVar4 = 0;
    FUN_1007b023c(IVar2,1);
    piVar4 = ___error();
    iVar1 = *piVar4;
    if ((iVar1 != 0) &&
       (IVar5 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,4),
       (int)IVar5 != 0)) {
      IVar5 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryLogC.m")
      ;
      IVar5 = objc_stub::lastPathComponent(IVar5);
      objc_stub::stringByDeletingPathExtension(IVar5);
      _strerror(iVar1);
      objc_stub::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,&cf__sfailedwithcode__d_description__s);
      IVar5 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar5,4);
    }
    if ((int)IVar2 == 0) {
      return;
    }
    IVar2 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,4);
    if ((int)IVar2 == 0) {
      return;
    }
    IVar2 = objc_stub::stringWithUTF8String_
                      ((ID)&_OBJC_CLASS___NSString,
                       "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryLogC.m");
    IVar2 = objc_stub::lastPathComponent(IVar2);
    objc_stub::stringByDeletingPathExtension(IVar2);
    objc_stub::stringWithFormat_
              ((ID)&_OBJC_CLASS___NSString,&cf_Couldnotopenahandletospecifiedpathforasynclogging_s);
  }
  IVar2 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
  objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar2,4);
  return;
}

