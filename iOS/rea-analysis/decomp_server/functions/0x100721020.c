// rea decompile_all
// name: SensorsAnalyticsSDK::registerStorePlugins
// address: 0x100721020
// body: available
// range: 0x100721020-0x10072121b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100721218 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SensorsAnalyticsSDK::registerStorePlugins(ID param_1,SEL param_2)

{
  class_t *pcVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
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
  pcVar1 = &objc::class_t::SAMacHistoryFileStorePlugin;
  _objc_alloc_init();
  IVar2 = SAStoreManager::sharedInstance((ID)&objc::class_t::SAStoreManager);
  SABaseStoreManager::registerStorePlugin_(IVar2,(ID)pcVar1);
  pcVar1 = &objc::class_t::SAFileStorePlugin;
  _objc_alloc_init();
  IVar2 = SAStoreManager::sharedInstance((ID)&objc::class_t::SAStoreManager);
  SABaseStoreManager::registerStorePlugin_(IVar2,(ID)pcVar1);
  pcVar1 = &objc::class_t::SAUserDefaultsStorePlugin;
  _objc_alloc_init();
  IVar2 = SAStoreManager::sharedInstance((ID)&objc::class_t::SAStoreManager);
  SABaseStoreManager::registerStorePlugin_(IVar2,(ID)pcVar1);
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  IVar2 = configOptions(param_1);
  IVar2 = objc_stub::storePlugins(IVar2);
  IVar3 = objc_stub::countByEnumeratingWithState_objects_count_(IVar2,&local_130,auStack_f0,0x10);
  if (IVar3 != 0) {
    lVar6 = *local_120;
    do {
      IVar7 = 0;
      do {
        if (*local_120 != lVar6) {
          _objc_enumerationMutation(IVar2);
        }
        IVar5 = *(ID *)(lStack_128 + IVar7 * 8);
        IVar4 = SAStoreManager::sharedInstance((ID)&objc::class_t::SAStoreManager);
        SABaseStoreManager::registerStorePlugin_(IVar4,IVar5);
        IVar7 = IVar7 + 1;
      } while (IVar3 != IVar7);
      IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar2,&local_130,auStack_f0,0x10);
    } while (IVar3 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

