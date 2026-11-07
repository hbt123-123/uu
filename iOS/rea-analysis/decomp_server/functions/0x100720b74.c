// rea decompile_all
// name: SensorsAnalyticsSDK::initWithConfigOptions:
// address: 0x100720b74
// body: available
// range: 0x100720b74-0x100720f2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SensorsAnalyticsSDK::initWithConfigOptions_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID self;
  ID IVar2;
  class_t *pcVar3;
  char *pcVar4;
  dispatch_queue_t pdVar5;
  ID IVar6;
  undefined8 uVar7;
  ID local_60;
  class_t *pcStack_58;
  
  pcStack_58 = &objc::class_t::SensorsAnalyticsSDK;
  local_60 = param_1;
  self = NSObject::init((ID)&local_60,"init");
  if (self != 0) {
    IVar2 = objc_stub::copy(param_3);
    uVar7 = *(undefined8 *)(self + 0x48);
    *(ID *)(self + 0x48) = IVar2;
    IVar2 = objc_stub::disableSDK(*(ID *)(self + 0x48),uVar7);
    if (((IVar2 & 1) == 0) && (IVar2 = objc_stub::enableLog(*(ID *)(self + 0x48)), (int)IVar2 != 0))
    {
      IVar2 = objc_stub::enableLog(*(ID *)(self + 0x48));
      NSObject::enableLog_(self,IVar2);
    }
    NSObject::registerStorePlugins(self);
    pcVar3 = &objc::class_t::SAAppLifecycle;
    _objc_alloc_init();
    uVar7 = *(undefined8 *)(self + 0x70);
    *(class_t **)(self + 0x70) = pcVar3;
    IVar2 = NSString::stringWithFormat_
                      ((ID)&_OBJC_CLASS___NSString,uVar7,&cf_com_sensorsdata_serialQueue__p);
    _objc_retainAutorelease();
    pcVar4 = (char *)objc_stub::UTF8String(IVar2);
    pdVar5 = _dispatch_queue_create(pcVar4,(dispatch_queue_attr_t)0x0);
    *(dispatch_queue_t *)(self + 0x18) = pdVar5;
    _dispatch_queue_set_specific
              (*(dispatch_queue_t *)(self + 0x18),PTR_LOOP_100abaa08,&PTR_LOOP_100abaa08,
               (dispatch_function_t)0x0);
    IVar2 = NSString::stringWithFormat_
                      ((ID)&_OBJC_CLASS___NSString,&cf_com_sensorsdata_readWriteQueue__p);
    _objc_retainAutorelease();
    pcVar4 = (char *)objc_stub::UTF8String(IVar2);
    pdVar5 = _dispatch_queue_create(pcVar4,(dispatch_queue_attr_t)0x0);
    *(dispatch_queue_t *)(self + 0x20) = pdVar5;
    pcVar3 = &objc::class_t::SANetwork;
    _objc_alloc_init();
    *(class_t **)(self + 8) = pcVar3;
    IVar2 = SAFileStorePlugin::filePath_((ID)&objc::class_t::SAFileStorePlugin,(ID)&cf_message_v2);
    IVar6 = objc_stub::databaseFilePath(param_3);
    if (IVar6 != 0) {
      IVar6 = objc_stub::databaseFilePath(param_3);
      IVar6 = objc_stub::hasSuffix_(IVar6,&cf__plist);
      if ((int)IVar6 != 0) {
        IVar2 = objc_stub::databaseFilePath(param_3);
      }
    }
    IVar2 = SAEventStore::eventStoreWithFilePath_((ID)&objc::class_t::SAEventStore,IVar2);
    *(ID *)(self + 0x10) = IVar2;
    pcVar3 = &objc::class_t::SATrackTimer;
    _objc_alloc_init();
    *(class_t **)(self + 0x28) = pcVar3;
    pcVar3 = &objc::class_t::SAIdentifier;
    _objc_alloc();
    IVar2 = objc_stub::initWithQueue_((ID)pcVar3,*(undefined8 *)(self + 0x20));
    uVar7 = *(undefined8 *)(self + 0x58);
    *(ID *)(self + 0x58) = IVar2;
    IVar2 = objc_stub::enableSession(*(ID *)(self + 0x48),uVar7);
    pcVar3 = &objc::class_t::SASessionProperty;
    if ((int)IVar2 == 0) {
      SASessionProperty::removeSessionModel((ID)&objc::class_t::SASessionProperty);
    }
    else {
      _objc_alloc();
      IVar2 = objc_stub::eventSessionTimeout(*(ID *)(self + 0x48));
      IVar2 = objc_stub::initWithMaxInterval_((ID)pcVar3,IVar2 * 1000);
      *(ID *)(self + 0x60) = IVar2;
    }
    NSObject::registerPropertyPlugin(self);
    IVar2 = objc_stub::disableSDK(*(ID *)(self + 0x48));
    if ((IVar2 & 1) == 0) {
      IVar2 = SAReachability::sharedInstance((ID)&objc::class_t::SAReachability);
      SAReachability::startMonitoring(IVar2);
      NSObject::addRemoteConfigObservers(self);
    }
    bVar1 = SAApplication::isAppExtension((ID)&objc::class_t::SAApplication);
    if (bVar1 != 0) {
      NSObject::startFlushTimer(self);
    }
    IVar2 = NSObject::configOptions(self);
    IVar6 = SAFlowManager::sharedInstance((ID)&objc::class_t::SAFlowManager);
    SAFlowManager::setConfigOptions_(IVar6,IVar2);
    IVar2 = SAFlowManager::sharedInstance((ID)&objc::class_t::SAFlowManager);
    SAFlowManager::loadFlows(IVar2);
  }
  return self;
}

