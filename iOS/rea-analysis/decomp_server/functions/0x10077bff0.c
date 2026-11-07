// rea decompile_all
// name: SentryReachability::addObserver:
// address: 0x10077bff0
// body: available
// range: 0x10077bff0-0x10077c467 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10077c464 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryReachability::addObserver_(ID param_1,SEL param_2,ID param_3)

{
  dispatch_queue_t pdVar1;
  ID IVar2;
  ID IVar3;
  dispatch_queue_t pdVar4;
  long lVar5;
  
  IVar2 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
  if ((int)IVar2 != 0) {
    IVar2 = objc_stub::stringWithUTF8String_
                      ((ID)&_OBJC_CLASS___NSString,
                       "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryReachability.m"
                      );
    IVar2 = objc_stub::lastPathComponent(IVar2);
    objc_stub::stringByDeletingPathExtension(IVar2);
    objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Addingobserver___);
    IVar2 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
    objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar2,1);
  }
  IVar2 = DAT_100b2dff0;
  _objc_sync_enter();
  IVar3 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
  if ((int)IVar3 != 0) {
    IVar3 = objc_stub::stringWithUTF8String_
                      ((ID)&_OBJC_CLASS___NSString,
                       "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryReachability.m"
                      );
    IVar3 = objc_stub::lastPathComponent(IVar3);
    objc_stub::stringByDeletingPathExtension(IVar3);
    objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Synchronizedtoaddobserver___);
    IVar3 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
    objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar3,1);
  }
  IVar3 = objc_stub::containsObject_(DAT_100b2dff0,param_3);
  if ((int)IVar3 == 0) {
    objc_stub::addObject_(DAT_100b2dff0,param_3);
    IVar3 = objc_stub::count(DAT_100b2dff0);
    if (IVar3 < 2) {
      pdVar4 = _dispatch_queue_create("io.sentry.cocoa.connectivity",(dispatch_queue_attr_t)0x0);
      pdVar1 = DAT_100b2dff8;
      lVar5 = 0;
      DAT_100b2dff8 = pdVar4;
      _SCNetworkReachabilityCreateWithName(pdVar1,0,"sentry.io");
      *(long *)(param_1 + 8) = lVar5;
      if (lVar5 != 0) {
        IVar3 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
        if ((int)IVar3 != 0) {
          IVar3 = objc_stub::stringWithUTF8String_
                            ((ID)&_OBJC_CLASS___NSString,
                             "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryReachability.m"
                            );
          IVar3 = objc_stub::lastPathComponent(IVar3);
          objc_stub::stringByDeletingPathExtension(IVar3);
          objc_stub::stringWithFormat_
                    ((ID)&_OBJC_CLASS___NSString,&cf_registeringcallbackforreachabilityref__);
          IVar3 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
          objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar3,1);
        }
        _SCNetworkReachabilitySetCallback(*(undefined8 *)(param_1 + 8),FUN_10077be70,0);
        _SCNetworkReachabilitySetDispatchQueue(*(undefined8 *)(param_1 + 8),DAT_100b2dff8);
      }
    }
  }
  else {
    IVar3 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
    if ((int)IVar3 != 0) {
      IVar3 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryReachability.m"
                        );
      IVar3 = objc_stub::lastPathComponent(IVar3);
      objc_stub::stringByDeletingPathExtension(IVar3);
      objc_stub::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,&cf_Observeralreadyadded_Doingnothing_);
      IVar3 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar3,1);
    }
  }
  _objc_sync_exit(IVar2);
  return;
}

