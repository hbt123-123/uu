// rea decompile_all
// name: FUN_10077b028
// address: 0x10077b028
// body: available
// range: 0x10077b028-0x10077b62b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10077b628 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10077b028(ID param_1)

{
  ID IVar1;
  ID IVar2;
  void *pvVar3;
  ID IVar4;
  ID IVar5;
  undefined1 auStack_8e0 [876];
  undefined4 local_574;
  undefined8 local_570;
  undefined1 auStack_565 [1232];
  undefined1 auStack_95 [37];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
  if ((int)IVar1 != 0) {
    IVar1 = objc_stub::stringWithUTF8String_
                      ((ID)&_OBJC_CLASS___NSString,
                       "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Monitors/SentryCrashMonitor_NSException.m"
                      );
    IVar1 = objc_stub::lastPathComponent(IVar1);
    objc_stub::stringByDeletingPathExtension(IVar1);
    objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Trappedexception__);
    IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
    objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
  }
  if (DAT_100b2de18 != '\0') {
    local_570 = 0;
    local_574 = 0;
    FUN_10079e954(&local_570,&local_574);
    FUN_1007656c0(0);
    IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
    if ((int)IVar1 != 0) {
      IVar1 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Monitors/SentryCrashMonitor_NSException.m"
                        );
      IVar1 = objc_stub::lastPathComponent(IVar1);
      objc_stub::stringByDeletingPathExtension(IVar1);
      objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Fillingoutcontext_);
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
    }
    IVar1 = objc_stub::FUN_1007e6340(param_1);
    IVar2 = objc_stub::count(IVar1);
    pvVar3 = _malloc(IVar2 << 3);
    if (pvVar3 == (void *)0x0) {
      FUN_10077b62c();
      goto LAB_10077b628;
    }
    if (IVar2 != 0) {
      IVar5 = 0;
      do {
        IVar4 = objc_stub::objectAtIndexedSubscript_(IVar1,IVar5);
        IVar4 = objc_stub::unsignedLongLongValue(IVar4);
        *(ID *)((long)pvVar3 + IVar5 * 8) = IVar4;
        IVar5 = IVar5 + 1;
      } while (IVar2 != IVar5);
    }
    FUN_100777df8(auStack_95);
    FUN_1007871b4();
    FUN_10079e6e8();
    FUN_10079f1e8(auStack_8e0,pvVar3,IVar2,0);
    uRam0000000100b2df28 = 0;
    _DAT_100b2df20 = 0;
    uRam0000000100b2df18 = 0;
    _DAT_100b2df10 = 0;
    uRam0000000100b2df08 = 0;
    _DAT_100b2df00 = 0;
    uRam0000000100b2def8 = 0;
    _DAT_100b2def0 = 0;
    uRam0000000100b2dee8 = 0;
    _DAT_100b2dee0 = 0;
    uRam0000000100b2ded8 = 0;
    _DAT_100b2ded0 = 0;
    uRam0000000100b2dec8 = 0;
    _DAT_100b2dec0 = 0;
    uRam0000000100b2deb8 = 0;
    _DAT_100b2deb0 = 0;
    uRam0000000100b2dea8 = 0;
    _DAT_100b2dea0 = 0;
    uRam0000000100b2de98 = 0;
    _DAT_100b2de90 = 0;
    DAT_100b2de88 = 0;
    DAT_100b2de80 = 0;
    uRam0000000100b2de78 = 0;
    _DAT_100b2de70 = 0;
    uRam0000000100b2de68 = 0;
    DAT_100b2de60 = (undefined1 *)0x0;
    DAT_100b2de58 = 0;
    DAT_100b2de50 = 0;
    _DAT_100b2de40 = 0;
    _DAT_100b2de30 = 0;
    uRam0000000100b2dfd8 = 0;
    _DAT_100b2dfd0 = 0;
    uRam0000000100b2dfe8 = 0;
    _DAT_100b2dfe0 = 0;
    uRam0000000100b2dfb8 = 0;
    _DAT_100b2dfb0 = 0;
    uRam0000000100b2dfc8 = 0;
    _DAT_100b2dfc0 = 0;
    uRam0000000100b2df98 = 0;
    _DAT_100b2df90 = 0;
    uRam0000000100b2dfa8 = 0;
    _DAT_100b2dfa0 = 0;
    uRam0000000100b2df78 = 0;
    _DAT_100b2df70 = 0;
    uRam0000000100b2df88 = 0;
    _DAT_100b2df80 = 0;
    uRam0000000100b2df58 = 0;
    _DAT_100b2df50 = 0;
    uRam0000000100b2df68 = 0;
    _DAT_100b2df60 = 0;
    uRam0000000100b2df38 = 0;
    _DAT_100b2df30 = 0;
    uRam0000000100b2df48 = 0;
    _DAT_100b2df40 = 0;
    _DAT_100b2de48 = 8;
    DAT_100b2de28 = auStack_95;
    DAT_100b2de38 = auStack_565;
    IVar1 = objc_stub::name(param_1);
    _objc_retainAutorelease();
    DAT_100b2de80 = objc_stub::UTF8String(IVar1);
    objc_stub::userInfo(param_1);
    IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf___);
    _objc_retainAutorelease();
    DAT_100b2de88 = objc_stub::UTF8String(IVar1);
    DAT_100b2de50 = DAT_100b2de80;
    IVar1 = objc_stub::reason(param_1);
    _objc_retainAutorelease();
    DAT_100b2de58 = objc_stub::UTF8String(IVar1);
    DAT_100b2de60 = auStack_8e0;
    IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
    if ((IVar1 & 1) != 0) {
      IVar1 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Monitors/SentryCrashMonitor_NSException.m"
                        );
      IVar1 = objc_stub::lastPathComponent(IVar1);
      objc_stub::stringByDeletingPathExtension(IVar1);
      objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Callingmaincrashhandler_);
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
    }
    FUN_100765730(&DAT_100b2de28);
    _free(pvVar3);
    if (DAT_100b2de20 != (code *)0x0) {
      IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
      if ((int)IVar1 != 0) {
        IVar1 = objc_stub::stringWithUTF8String_
                          ((ID)&_OBJC_CLASS___NSString,
                           "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Monitors/SentryCrashMonitor_NSException.m"
                          );
        IVar1 = objc_stub::lastPathComponent(IVar1);
        objc_stub::stringByDeletingPathExtension(IVar1);
        objc_stub::stringWithFormat_
                  ((ID)&_OBJC_CLASS___NSString,&cf_Callingoriginalexceptionhandler_);
        IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
        objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
      }
      (*DAT_100b2de20)(param_1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return 0;
  }
LAB_10077b628:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

