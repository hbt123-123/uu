// rea decompile_all
// name: SentryScope::applyToEvent:maxBreadcrumb:
// address: 0x100794ca4
// body: available
// range: 0x100794ca4-0x100795247 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100795244 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryScope::applyToEvent_maxBreadcrumb_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
  ID IVar4;
  
  IVar1 = objc_stub::isFatalEvent(param_3);
  if ((int)IVar1 == 0) {
    IVar1 = objc_stub::FUN_1007f6d40(param_3);
    if (IVar1 == 0) {
      IVar1 = objc_stub::FUN_1007f6d40(param_1);
    }
    else {
      IVar1 = objc_stub::new((ID)&_OBJC_CLASS___NSMutableDictionary);
      IVar2 = objc_stub::FUN_1007f6d40(param_1);
      objc_stub::addEntriesFromDictionary_(IVar1,IVar2);
      IVar2 = objc_stub::FUN_1007f6d40(param_3);
      objc_stub::addEntriesFromDictionary_(IVar1,IVar2);
    }
    objc_stub::FUN_1007f4f20(param_3,IVar1);
    IVar1 = objc_stub::FUN_1007e97a0(param_3);
    if (IVar1 == 0) {
      IVar1 = objc_stub::FUN_1007e9860(param_1);
    }
    else {
      IVar1 = objc_stub::new((ID)&_OBJC_CLASS___NSMutableDictionary);
      IVar2 = objc_stub::FUN_1007e9860(param_1);
      objc_stub::addEntriesFromDictionary_(IVar1,IVar2);
      IVar2 = objc_stub::FUN_1007e97a0(param_3);
      objc_stub::addEntriesFromDictionary_(IVar1,IVar2);
    }
    objc_stub::FUN_1007f2da0(param_3,IVar1);
    IVar1 = objc_stub::FUN_1007e9c40(param_1);
    IVar2 = objc_stub::count(IVar1);
    if ((IVar2 != 0) && (IVar2 = objc_stub::FUN_1007e9c20(param_3), IVar2 == 0)) {
      objc_stub::FUN_1007f2ec0(param_3,IVar1);
    }
    IVar1 = objc_stub::FUN_1007e5f00(param_3);
    if (IVar1 == 0) {
      IVar2 = objc_stub::FUN_1007e5f00(param_1);
      IVar1 = objc_stub::count(IVar2);
      if (param_4 <= IVar1) {
        IVar1 = param_4;
      }
      IVar1 = objc_stub::subarrayWithRange_(IVar2,0,IVar1);
      objc_stub::setBreadcrumbs_(param_3,IVar1);
    }
    IVar1 = objc_stub::userObject(param_1);
    IVar1 = objc_stub::copy(IVar1);
    if (IVar1 != 0) {
      objc_stub::setUser_(param_3,IVar1);
    }
    IVar1 = objc_stub::FUN_1007e8940(param_1);
    if ((IVar1 != 0) && (IVar2 = objc_stub::dist(param_3), IVar2 == 0)) {
      objc_stub::setDist_(param_3,IVar1);
    }
    IVar1 = objc_stub::FUN_1007e9320(param_1);
    if ((IVar1 != 0) && (IVar2 = objc_stub::environment(param_3), IVar2 == 0)) {
      objc_stub::setEnvironment_(param_3,IVar1);
    }
    IVar1 = objc_stub::FUN_1007eda60(param_1);
    if (IVar1 != 0) {
      objc_stub::setLevel_(param_3,IVar1);
    }
    IVar2 = objc_stub::span(param_1);
    IVar1 = 0;
    if (IVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      _objc_sync_enter();
      IVar1 = objc_stub::span(param_1);
      _objc_sync_exit(uVar3);
      if (IVar1 != 0) {
        IVar2 = objc_stub::type(param_3);
        IVar2 = objc_stub::isEqualToString_(IVar2,&cf_transaction);
        if ((IVar2 & 1) == 0) {
          IVar2 = objc_stub::class((ID)&objc::class_t::SentryTracer);
          IVar2 = objc_stub::isKindOfClass_(IVar1,IVar2);
          if ((int)IVar2 != 0) {
            IVar2 = objc_stub::FUN_1007f7700(IVar1);
            IVar2 = objc_stub::name(IVar2);
            objc_stub::FUN_1007f5300(param_3,IVar2);
          }
        }
      }
    }
    IVar2 = objc_stub::context(param_1);
    IVar2 = objc_stub::mutableCopy(IVar2);
    IVar4 = objc_stub::context(param_3);
    if (IVar4 != 0) {
      IVar4 = objc_stub::context(param_3);
      objc_stub::FUN_1007ee320((ID)&objc::class_t::SentryDictionary,IVar4,IVar2);
    }
    IVar1 = objc_stub::FUN_1007e6120(param_1,IVar1);
    objc_stub::setObject_forKeyedSubscript_(IVar2,IVar1,&cf_trace);
    objc_stub::setContext_(param_3,IVar2);
  }
  else {
    IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,3);
    if ((int)IVar1 != 0) {
      IVar1 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryScope.m"
                        );
      IVar1 = objc_stub::lastPathComponent(IVar1);
      objc_stub::stringByDeletingPathExtension(IVar1);
      objc_stub::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,
                 &
                 cf_Won_tapplyscopetoacrashevent_Thisisnotallowedascrasheventsarefromapreviousrunoftheappandthecurrentscopemighthavedifferentdatathanthescopethatwasactiveduringthecrash_
                );
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,3);
    }
  }
  return param_3;
}

