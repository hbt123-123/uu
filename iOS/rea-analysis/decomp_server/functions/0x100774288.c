// rea decompile_all
// name: SentrySpan::finishWithStatus:
// address: 0x100774288
// body: available
// range: 0x100774288-0x10077461f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007745fc to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

void SentrySpan::finishWithStatus_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  undefined8 uVar1;
  ID IVar2;
  
  objc_stub::FUN_1007f62e0(param_1);
  objc_stub::setStatus_(param_1,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_sync_enter();
  *(undefined1 *)(param_1 + 0x20) = 1;
  _objc_sync_exit(uVar1);
  IVar2 = objc_stub::timestamp(param_1);
  if (IVar2 == 0) {
    IVar2 = objc_stub::sharedInstance((ID)&objc::class_t::SentryDependencyContainer);
    IVar2 = objc_stub::dateProvider(IVar2);
    IVar2 = objc_stub::date(IVar2);
    objc_stub::setTimestamp_(param_1,IVar2);
    IVar2 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
    if ((int)IVar2 != 0) {
      IVar2 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySpan.m")
      ;
      IVar2 = objc_stub::lastPathComponent(IVar2);
      objc_stub::stringByDeletingPathExtension(IVar2);
      objc_stub::timestamp(param_1);
      IVar2 = objc_stub::sharedInstance((ID)&objc::class_t::SentryDependencyContainer);
      IVar2 = objc_stub::dateProvider(IVar2);
      objc_stub::systemTime(IVar2);
      objc_stub::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,&cf_Settingspantimestamp___atsystemtime_llu);
      IVar2 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar2,1);
    }
  }
  IVar2 = objc_stub::FUN_1007f73a0(param_1);
  if (IVar2 == 0) {
    IVar2 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
    if ((int)IVar2 == 0) {
      return;
    }
    IVar2 = objc_stub::stringWithUTF8String_
                      ((ID)&_OBJC_CLASS___NSString,
                       "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySpan.m");
    IVar2 = objc_stub::lastPathComponent(IVar2);
    objc_stub::stringByDeletingPathExtension(IVar2);
    IVar2 = objc_stub::FUN_1007f5c00(param_1);
    objc_stub::FUN_1007f1600(IVar2);
    objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Notracerassociatedwithspanwithid__)
    ;
    IVar2 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
    objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar2,1);
  }
  else {
    IVar2 = objc_stub::FUN_1007f73a0(param_1);
    objc_stub::FUN_1007f5bc0(IVar2,param_1);
  }
  return;
}

