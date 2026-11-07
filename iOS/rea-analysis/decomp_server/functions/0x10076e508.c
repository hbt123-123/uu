// rea decompile_all
// name: SentryTracer::startChildWithParentId:operation:description:
// address: 0x10076e508
// body: available
// range: 0x10076e508-0x10076e90f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10076e90c to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID SentryTracer::startChildWithParentId_operation_description_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  class_t *pcVar2;
  class_t *self;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  long lVar6;
  
  objc_stub::FUN_1007e6460(param_1);
  IVar1 = objc_stub::FUN_1007ecf80(param_1);
  if ((int)IVar1 == 0) {
    pcVar2 = &objc::class_t::SentrySpanContext;
    _objc_alloc();
    IVar1 = objc_stub::traceId(param_1);
    self = &objc::class_t::SentrySpanId;
    _objc_alloc();
    IVar3 = objc_stub::init((ID)self);
    IVar4 = objc_stub::FUN_1007f0c20(param_1);
    IVar1 = objc_stub::FUN_1007ec460((ID)pcVar2,IVar1,IVar3,param_3,param_4,param_5,IVar4);
    pcVar2 = &objc::class_t::SentrySpan;
    _objc_alloc();
    IVar1 = objc_stub::FUN_1007ec4a0((ID)pcVar2,param_1,IVar1);
    IVar3 = objc_stub::sharedInstance((ID)&objc::class_t::SentryDependencyContainer);
    IVar3 = objc_stub::dateProvider(IVar3);
    IVar3 = objc_stub::date(IVar3);
    objc_stub::FUN_1007f4d40(IVar1,IVar3);
    IVar3 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
    if ((int)IVar3 != 0) {
      IVar3 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTracer.m"
                        );
      IVar3 = objc_stub::lastPathComponent(IVar3);
      objc_stub::stringByDeletingPathExtension(IVar3);
      IVar3 = objc_stub::FUN_1007f5c00(IVar1);
      objc_stub::FUN_1007f1600(IVar3);
      objc_stub::FUN_1007f1600(param_3);
      objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Startedchildspan__under__);
      IVar3 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar3,1);
    }
    lVar6 = (long)_children;
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    _objc_sync_enter();
    objc_stub::addObject_(*(ID *)(param_1 + lVar6),IVar1);
    _objc_sync_exit(uVar5);
  }
  else {
    IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,3);
    if ((int)IVar1 != 0) {
      IVar1 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTracer.m"
                        );
      IVar1 = objc_stub::lastPathComponent(IVar1);
      objc_stub::stringByDeletingPathExtension(IVar1);
      objc_stub::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,
                 &cf_Startingachildonafinishedspanisnotsupported_itwon_tbesenttoSentry_);
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,3);
    }
    IVar1 = objc_stub::shared((ID)&objc::class_t::SentryNoOpSpan);
  }
  return IVar1;
}

