// rea decompile_all
// name: SentryHub::updateSessionState:startNewSession:
// address: 0x100768d04
// body: available
// range: 0x100768d04-0x100769077 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100769074 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x1c bytes */

ID SentryHub::updateSessionState_startNewSession_(ID param_1,SEL param_2,ID param_3,bool param_4)

{
  ID IVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined *self;
  class_t *pcVar4;
  char local_61;
  
  local_61 = '\x01';
  IVar1 = objc_stub::items(param_3);
  IVar1 = objc_stub::FUN_1007e9240(param_1,IVar1,&local_61);
  if ((int)IVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_sync_enter();
    if (local_61 == '\0') {
      IVar1 = objc_stub::copy(*(ID *)(param_1 + 0x58));
    }
    else {
      IVar1 = objc_stub::incrementSessionErrors(param_1);
    }
    if (IVar1 == 0) {
      _objc_sync_exit(uVar2);
    }
    else {
      if (local_61 == '\0') {
        IVar3 = objc_stub::sharedInstance((ID)&objc::class_t::SentryDependencyContainer);
        IVar3 = objc_stub::dateProvider(IVar3);
        IVar3 = objc_stub::date(IVar3);
        objc_stub::FUN_1007e90a0(IVar1,IVar3);
        IVar3 = objc_stub::options(*(ID *)(param_1 + 0x28));
        IVar3 = objc_stub::FUN_1007e85a0(IVar3);
        if ((IVar3 == 1) &&
           (IVar3 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1),
           (int)IVar3 != 0)) {
          IVar3 = objc_stub::stringWithUTF8String_
                            ((ID)&_OBJC_CLASS___NSString,
                             "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHub.m"
                            );
          IVar3 = objc_stub::lastPathComponent(IVar3);
          objc_stub::stringByDeletingPathExtension(IVar3);
          objc_stub::FUN_1007e7720(param_1,IVar1);
          objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Endingsessionwithstatus___);
          IVar3 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
          objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar3,1);
        }
        if (param_4 != 0) {
          *(undefined8 *)(param_1 + 0x58) = 0;
          objc_stub::FUN_1007f5f20(param_1);
        }
      }
      _objc_sync_exit(uVar2);
      self = &_OBJC_CLASS___NSMutableArray;
      _objc_alloc();
      IVar3 = objc_stub::items(param_3);
      IVar3 = objc_stub::FUN_1007eb460((ID)self,IVar3);
      pcVar4 = &objc::class_t::SentryEnvelopeItem;
      _objc_alloc();
      IVar1 = objc_stub::initWithSession_((ID)pcVar4,IVar1);
      objc_stub::addObject_(IVar3,IVar1);
      pcVar4 = &objc::class_t::SentryEnvelope;
      _objc_alloc();
      IVar1 = objc_stub::header(param_3);
      param_3 = objc_stub::initWithHeader_items_((ID)pcVar4,IVar1,IVar3);
    }
  }
  return param_3;
}

