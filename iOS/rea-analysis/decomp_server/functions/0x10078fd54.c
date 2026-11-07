// rea decompile_all
// name: SentrySDK::startWithOptions:
// address: 0x10078fd54
// body: available
// range: 0x10078fd54-0x100790313 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentrySDK::startWithOptions_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  class_t *pcVar3;
  ID IVar4;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  ID local_78;
  ID local_70;
  ID local_68;
  
  DAT_100b2e160 = param_3;
  IVar1 = objc_stub::sharedInstance((ID)&objc::class_t::SentryDependencyContainer);
  IVar1 = objc_stub::FUN_1007ef620(IVar1);
  IVar1 = objc_stub::environment(IVar1);
  IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_XCODE_RUNNING_FOR_PREVIEWS);
  IVar1 = objc_stub::isEqualToString_(IVar1,&cf_1);
  if ((int)IVar1 == 0) {
    IVar1 = objc_stub::FUN_1007e7de0(param_3);
    IVar2 = objc_stub::FUN_1007e85a0(param_3);
    objc_stub::FUN_1007e6ee0((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,IVar2);
    IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
    if ((int)IVar1 != 0) {
      IVar1 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySDK.m");
      IVar1 = objc_stub::lastPathComponent(IVar1);
      objc_stub::stringByDeletingPathExtension(IVar1);
      objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_StartingSDK___);
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
    }
    objc_stub::class((ID)&objc::class_t::SentryCrashExceptionApplication);
    DAT_100b2e148 = DAT_100b2e148 + 1;
    IVar1 = objc_stub::sharedInstance((ID)&objc::class_t::SentryDependencyContainer);
    IVar1 = objc_stub::dateProvider(IVar1);
    DAT_100b2e128 = objc_stub::date(IVar1);
    pcVar3 = &objc::class_t::SentryClient;
    _objc_alloc();
    IVar1 = objc_stub::initWithOptions_((ID)pcVar3,param_3);
    IVar2 = objc_stub::fileManager(IVar1);
    objc_stub::FUN_1007ee6a0(IVar2);
    IVar2 = objc_stub::fileManager(IVar1);
    objc_stub::FUN_1007ee6c0(IVar2);
    IVar4 = objc_stub::FUN_1007ec780(param_3);
    pcVar3 = &objc::class_t::SentryScope;
    _objc_alloc();
    IVar2 = objc_stub::maxBreadcrumbs(param_3);
    IVar2 = objc_stub::FUN_1007ebce0((ID)pcVar3,IVar2);
    (**(code **)(IVar4 + 0x10))(IVar4,IVar2);
    IVar2 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
    if ((int)IVar2 != 0) {
      IVar2 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySDK.m");
      IVar2 = objc_stub::lastPathComponent(IVar2);
      objc_stub::stringByDeletingPathExtension(IVar2);
      objc_stub::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,&cf_Dispatchinginitworkrequiredtorunonmainthread_);
      IVar2 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar2,1);
    }
    IVar2 = objc_stub::sharedInstance((ID)&objc::class_t::SentryDependencyContainer);
    IVar2 = objc_stub::dispatchQueueWrapper(IVar2);
    local_98 = PTR___NSConcreteStackBlock_100995490;
    local_90 = 0xc2000000;
    local_88 = FUN_100790314;
    puStack_80 = &DAT_1009e9898;
    local_78 = IVar1;
    local_70 = IVar4;
    local_68 = param_3;
    objc_stub::FUN_1007e87c0(IVar2,&local_98);
    IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
    if ((int)IVar1 != 0) {
      IVar1 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySDK.m");
      IVar1 = objc_stub::lastPathComponent(IVar1);
      objc_stub::stringByDeletingPathExtension(IVar1);
      objc_stub::FUN_1007f8120((ID)&objc::class_t::SentryMeta);
      objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_SDKinitialized_Version___);
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
    }
  }
  else {
    _NSLog(&cf__SENTRY__WARNING_SentrySDKnotstarted_RunningfromXcodepreview_);
  }
  return;
}

