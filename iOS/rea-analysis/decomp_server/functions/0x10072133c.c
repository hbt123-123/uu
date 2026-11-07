// rea decompile_all
// name: FUN_10072133c
// address: 0x10072133c
// body: available
// range: 0x10072133c-0x10072180f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10072180c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10072133c(long param_1)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  class_t *pcVar4;
  ID IVar5;
  long lVar6;
  ID IVar7;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  IVar1 = objc_stub::configOptions(*(ID *)(param_1 + 0x20));
  IVar1 = objc_stub::propertyPlugins(IVar1);
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(IVar1,&local_130,auStack_f0,0x10);
  if (IVar2 != 0) {
    lVar6 = *local_120;
    do {
      IVar7 = 0;
      do {
        if (*local_120 != lVar6) {
          _objc_enumerationMutation(IVar1);
        }
        IVar5 = *(ID *)(lStack_128 + IVar7 * 8);
        IVar3 = SAPropertyPluginManager::sharedInstance((ID)&objc::class_t::SAPropertyPluginManager)
        ;
        SAPropertyPluginManager::registerPropertyPlugin_(IVar3,IVar5);
        IVar7 = IVar7 + 1;
      } while (IVar2 != IVar7);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar1,&local_130,auStack_f0,0x10);
    } while (IVar2 != 0);
  }
  pcVar4 = &objc::class_t::SAPresetPropertyPlugin;
  _objc_alloc();
  IVar1 = objc_stub::initWithLibVersion_((ID)pcVar4,&cf_4_8_1);
  IVar2 = SAPropertyPluginManager::sharedInstance((ID)&objc::class_t::SAPropertyPluginManager);
  SAPropertyPluginManager::registerPropertyPlugin_(IVar2,IVar1);
  pcVar4 = &objc::class_t::SAAppVersionPropertyPlugin;
  _objc_alloc_init();
  IVar1 = SAPropertyPluginManager::sharedInstance((ID)&objc::class_t::SAPropertyPluginManager);
  SAPropertyPluginManager::registerPropertyPlugin_(IVar1,(ID)pcVar4);
  pcVar4 = &objc::class_t::SADeviceIDPropertyPlugin;
  _objc_alloc_init();
  IVar1 = objc_stub::configOptions(*(ID *)(param_1 + 0x20));
  IVar1 = objc_stub::disableDeviceId(IVar1);
  objc_stub::setDisableDeviceId_((ID)pcVar4,IVar1);
  IVar1 = SAPropertyPluginManager::sharedInstance((ID)&objc::class_t::SAPropertyPluginManager);
  SAPropertyPluginManager::registerPropertyPlugin_(IVar1,(ID)pcVar4);
  IVar1 = SAPropertyPluginManager::sharedInstance((ID)&objc::class_t::SAPropertyPluginManager);
  SAPropertyPluginManager::registerPropertyPlugin_(IVar1,*(ID *)(param_1 + 0x28));
  pcVar4 = &objc::class_t::SASuperPropertyPlugin;
  _objc_alloc_init();
  IVar1 = SAPropertyPluginManager::sharedInstance((ID)&objc::class_t::SAPropertyPluginManager);
  SAPropertyPluginManager::registerPropertyPlugin_(IVar1,(ID)pcVar4);
  IVar1 = SADynamicSuperPropertyPlugin::sharedDynamicSuperPropertyPlugin
                    ((ID)&objc::class_t::SADynamicSuperPropertyPlugin);
  IVar2 = SAPropertyPluginManager::sharedInstance((ID)&objc::class_t::SAPropertyPluginManager);
  SAPropertyPluginManager::registerPropertyPlugin_(IVar2,IVar1);
  IVar1 = SAPropertyPluginManager::sharedInstance((ID)&objc::class_t::SAPropertyPluginManager);
  SAPropertyPluginManager::registerPropertyPlugin_(IVar1,*(ID *)(param_1 + 0x30));
  pcVar4 = &objc::class_t::SAEventDurationPropertyPlugin;
  _objc_alloc();
  IVar1 = objc_stub::trackTimer(*(ID *)(param_1 + 0x20));
  IVar1 = objc_stub::initWithTrackTimer_((ID)pcVar4,IVar1);
  IVar2 = SAPropertyPluginManager::sharedInstance((ID)&objc::class_t::SAPropertyPluginManager);
  SAPropertyPluginManager::registerPropertyPlugin_(IVar2,IVar1);
  pcVar4 = &objc::class_t::SAReferrerTitlePropertyPlugin;
  _objc_alloc_init();
  IVar1 = SAPropertyPluginManager::sharedInstance((ID)&objc::class_t::SAPropertyPluginManager);
  SAPropertyPluginManager::registerPropertyPlugin_(IVar1,(ID)pcVar4);
  pcVar4 = &objc::class_t::SAFirstDayPropertyPlugin;
  _objc_alloc();
  IVar1 = objc_stub::readWriteQueue(*(ID *)(param_1 + 0x20));
  IVar1 = objc_stub::initWithQueue_((ID)pcVar4,IVar1);
  IVar2 = SAPropertyPluginManager::sharedInstance((ID)&objc::class_t::SAPropertyPluginManager);
  SAPropertyPluginManager::registerPropertyPlugin_(IVar2,IVar1);
  pcVar4 = &objc::class_t::SAModulePropertyPlugin;
  _objc_alloc_init();
  IVar1 = SAPropertyPluginManager::sharedInstance((ID)&objc::class_t::SAPropertyPluginManager);
  SAPropertyPluginManager::registerPropertyPlugin_(IVar1,(ID)pcVar4);
  IVar1 = objc_stub::sessionProperty(*(ID *)(param_1 + 0x20));
  if (IVar1 != 0) {
    pcVar4 = &objc::class_t::SASessionPropertyPlugin;
    _objc_alloc();
    IVar1 = objc_stub::sessionProperty(*(ID *)(param_1 + 0x20));
    IVar1 = objc_stub::initWithSessionProperty_((ID)pcVar4,IVar1);
    IVar2 = SAPropertyPluginManager::sharedInstance((ID)&objc::class_t::SAPropertyPluginManager);
    SAPropertyPluginManager::registerPropertyPlugin_(IVar2,IVar1);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

