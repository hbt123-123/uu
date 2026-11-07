// rea decompile_all
// name: SentrySpan::initWithContext:
// address: 0x1007735e8
// body: available
// range: 0x1007735e8-0x1007739b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentrySpan::initWithContext_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID IVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  objc_super local_60;
  
  local_60.super_class = &objc::class_t::SentrySpan;
  local_60.receiver = param_1;
  self = _objc_msgSendSuper2(&local_60,"init");
  if (self != 0) {
    IVar1 = objc_stub::sharedInstance((ID)&objc::class_t::SentryDependencyContainer);
    IVar1 = objc_stub::dateProvider(IVar1);
    IVar1 = objc_stub::systemTime(IVar1);
    *(ID *)(self + 0x28) = IVar1;
    IVar1 = objc_stub::sharedInstance((ID)&objc::class_t::SentryDependencyContainer);
    IVar1 = objc_stub::dateProvider(IVar1);
    IVar1 = objc_stub::date(IVar1);
    objc_stub::FUN_1007f4d40(self,IVar1);
    puVar2 = &_OBJC_CLASS___NSMutableDictionary;
    _objc_alloc();
    IVar1 = objc_stub::init((ID)puVar2);
    uVar3 = *(undefined8 *)(self + 8);
    *(ID *)(self + 8) = IVar1;
    uVar4 = 0;
    FUN_1007871b4(uVar3,0);
    IVar1 = objc_stub::FUN_1007eeb00((ID)&_OBJC_CLASS___NSNumber,uVar4);
    objc_stub::setObject_forKeyedSubscript_(*(ID *)(self + 8),IVar1,&cf_thread_id);
    IVar1 = objc_stub::isMainThread((ID)&_OBJC_CLASS___NSThread);
    if ((int)IVar1 == 0) {
      IVar1 = objc_stub::sharedInstance((ID)&objc::class_t::SentryDependencyContainer);
      IVar1 = objc_stub::threadInspector(IVar1);
      IVar1 = objc_stub::FUN_1007ea9e0(IVar1,uVar4);
      objc_stub::setObject_forKeyedSubscript_(*(ID *)(self + 8),IVar1,&cf_thread_name);
    }
    else {
      objc_stub::setObject_forKeyedSubscript_(*(ID *)(self + 8),&cf_main,&cf_thread_name);
    }
    puVar2 = &_OBJC_CLASS___NSMutableDictionary;
    _objc_alloc();
    IVar1 = objc_stub::init((ID)puVar2);
    *(ID *)(self + 0x10) = IVar1;
    puVar2 = &_OBJC_CLASS___NSObject;
    _objc_alloc();
    IVar1 = objc_stub::init((ID)puVar2);
    uVar4 = *(undefined8 *)(self + 0x18);
    *(ID *)(self + 0x18) = IVar1;
    *(undefined1 *)(self + 0x20) = 0;
    *(undefined8 *)(self + 0x70) = 0;
    IVar1 = objc_stub::FUN_1007eefc0(param_3,uVar4);
    uVar4 = *(undefined8 *)(self + 0x48);
    *(ID *)(self + 0x48) = IVar1;
    IVar1 = objc_stub::traceId(param_3,uVar4);
    uVar4 = *(undefined8 *)(self + 0x38);
    *(ID *)(self + 0x38) = IVar1;
    IVar1 = objc_stub::FUN_1007eed80(param_3,uVar4);
    uVar4 = *(undefined8 *)(self + 0x58);
    *(ID *)(self + 0x58) = IVar1;
    IVar1 = objc_stub::FUN_1007f5ba0(param_3,uVar4);
    uVar4 = *(undefined8 *)(self + 0x60);
    *(ID *)(self + 0x60) = IVar1;
    IVar1 = objc_stub::FUN_1007f5c00(param_3,uVar4);
    uVar4 = *(undefined8 *)(self + 0x40);
    *(ID *)(self + 0x40) = IVar1;
    IVar1 = objc_stub::FUN_1007f0c20(param_3,uVar4);
    *(ID *)(self + 0x50) = IVar1;
    IVar1 = objc_stub::FUN_1007eee20(param_3);
    *(ID *)(self + 0x68) = IVar1;
    IVar1 = objc_stub::options((ID)&objc::class_t::SentrySDK);
    IVar1 = objc_stub::isContinuousProfilingEnabled(IVar1);
    *(char *)(self + 0x30) = (char)IVar1;
    if (*(char *)(self + 0x30) != '\0') {
      IVar1 = objc_stub::FUN_1007e7880((ID)&objc::class_t::SentryContinuousProfiler);
      IVar1 = objc_stub::sentryIdString(IVar1);
      *(ID *)(self + 0x98) = IVar1;
      if (*(long *)(self + 0x98) == 0) {
        IVar1 = objc_stub::sharedInstance((ID)&objc::class_t::SentryDependencyContainer);
        IVar1 = objc_stub::FUN_1007ee960(IVar1);
        objc_stub::FUN_1007e5020
                  (IVar1,self,"linkProfiler",&cf_io_sentry_notification_continuous_profile_started);
      }
    }
  }
  return self;
}

