// rea decompile_all
// name: SentryTracer::initWithTransactionContext:hub:configuration:
// address: 0x10076d170
// body: available
// range: 0x10076d170-0x10076d75f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x28 bytes */

ID SentryTracer::initWithTransactionContext_hub_configuration_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID self;
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  class_t *self_00;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  objc_super local_70;
  
  local_70.super_class = &objc::class_t::SentryTracer;
  local_70.receiver = param_1;
  self = _objc_msgSendSuper2(&local_70,"initWithContext:",param_3);
  if (self != 0) {
    IVar1 = objc_stub::sharedInstance((ID)&objc::class_t::SentryDependencyContainer);
    IVar1 = objc_stub::dateProvider(IVar1);
    IVar1 = objc_stub::systemTime(IVar1);
    lVar6 = (long)_startSystemTime;
    *(ID *)(self + lVar6) = IVar1;
    lVar4 = (long)_configuration;
    *(ID *)(self + lVar4) = param_5;
    IVar1 = objc_stub::sharedInstance((ID)&objc::class_t::SentryDependencyContainer);
    IVar1 = objc_stub::dispatchQueueWrapper(IVar1);
    uVar5 = *(undefined8 *)(self + (long)_dispatchQueue);
    *(ID *)(self + (long)_dispatchQueue) = IVar1;
    IVar1 = objc_stub::sharedInstance((ID)&objc::class_t::SentryDependencyContainer,uVar5);
    IVar1 = objc_stub::debugImageProvider(IVar1);
    uVar5 = *(undefined8 *)(self + (long)_debugImageProvider);
    *(ID *)(self + (long)_debugImageProvider) = IVar1;
    objc_stub::FUN_1007f5320(self,uVar5,param_3);
    puVar2 = &_OBJC_CLASS___NSMutableArray;
    _objc_alloc();
    IVar1 = objc_stub::init((ID)puVar2);
    uVar5 = *(undefined8 *)(self + (long)_children);
    *(ID *)(self + (long)_children) = IVar1;
    objc_stub::setHub_(self,uVar5,param_4);
    objc_stub::FUN_1007f5700(self,0);
    puVar2 = &_OBJC_CLASS___NSMutableDictionary;
    _objc_alloc();
    IVar1 = objc_stub::init((ID)puVar2);
    uVar5 = *(undefined8 *)(self + (long)_measurements);
    *(ID *)(self + (long)_measurements) = IVar1;
    objc_stub::FUN_1007f2f40(self,uVar5,0);
    puVar2 = &_OBJC_CLASS___NSObject;
    _objc_alloc();
    IVar1 = objc_stub::init((ID)puVar2);
    uVar5 = *(undefined8 *)(self + (long)_dispatchTimeoutLock);
    *(ID *)(self + (long)_dispatchTimeoutLock) = IVar1;
    IVar1 = objc_stub::FUN_1007ead00(self,uVar5);
    if ((int)IVar1 != 0) {
      objc_stub::FUN_1007f5ee0(self);
    }
    IVar1 = objc_stub::FUN_1007ecc00(self);
    if ((int)IVar1 != 0) {
      objc_stub::FUN_1007f5ea0(self);
    }
    IVar1 = objc_stub::FUN_1007ef7c0(*(ID *)(self + lVar4));
    IVar1 = objc_stub::decision(IVar1);
    IVar3 = objc_stub::FUN_1007e6ba0(param_4);
    IVar3 = objc_stub::options(IVar3);
    IVar3 = objc_stub::isContinuousProfilingEnabled(IVar3);
    if ((DAT_100b3a870 != '\0') || (((IVar3 & 1) == 0 && (IVar1 == 1)))) {
      self_00 = &objc::class_t::_TtC6Sentry8SentryId;
      _objc_alloc();
      IVar1 = objc_stub::init((ID)self_00);
      lVar4 = (long)_internalID;
      *(ID *)(self + lVar4) = IVar1;
      IVar1 = objc_stub::FUN_1007f6160
                        ((ID)&objc::class_t::SentryTraceProfiler,*(undefined8 *)(self + lVar4));
      *(char *)(self + (long)_isProfiling) = (char)IVar1;
      if (((int)IVar1 != 0) &&
         (IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1),
         (int)IVar1 != 0)) {
        IVar1 = objc_stub::stringWithUTF8String_
                          ((ID)&_OBJC_CLASS___NSString,
                           "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTracer.m"
                          );
        IVar1 = objc_stub::lastPathComponent(IVar1);
        objc_stub::stringByDeletingPathExtension(IVar1);
        IVar1 = objc_stub::traceId(param_3);
        objc_stub::sentryIdString(IVar1);
        objc_stub::sentryIdString(*(ID *)(self + lVar4));
        objc_stub::stringWithFormat_
                  ((ID)&_OBJC_CLASS___NSString,&cf_Startedprofilerfortrace__withinternalid__);
        IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
        objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
      }
      IVar1 = objc_stub::sharedInstance((ID)&objc::class_t::SentryDependencyContainer);
      IVar1 = objc_stub::dateProvider(IVar1);
      IVar1 = objc_stub::systemTime(IVar1);
      *(ID *)(self + lVar6) = IVar1;
    }
    IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
    if ((int)IVar1 != 0) {
      IVar1 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTracer.m"
                        );
      IVar1 = objc_stub::lastPathComponent(IVar1);
      objc_stub::stringByDeletingPathExtension(IVar1);
      IVar1 = objc_stub::traceId(param_3);
      objc_stub::sentryIdString(IVar1);
      objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Startedtracerwithid___);
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
    }
  }
  return self;
}

