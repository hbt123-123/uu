// rea decompile_all
// name: SensorsAnalyticsSDK::appLifecycleStateWillChange:
// address: 0x1007226b0
// body: available
// range: 0x1007226b0-0x100722883 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SensorsAnalyticsSDK::appLifecycleStateWillChange_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  ID local_80;
  ID IStack_78;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  ID local_50;
  ID IStack_48;
  
  IVar1 = objc_stub::userInfo(param_3);
  IVar2 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_new);
  IVar2 = objc_stub::integerValue(IVar2);
  IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_old);
  IVar1 = objc_stub::integerValue(IVar1);
  if (IVar1 == 1 || IVar2 != 2) {
    if (IVar2 == 4) {
      IVar1 = ::SAModuleManager::sharedInstance((ID)&objc::class_t::SAModuleManager);
      objc_stub::clearUtmProperties(IVar1);
      stopFlushTimer(param_1);
      IVar1 = param_1;
      _objc_opt_class();
      IVar1 = objc_stub::getSystemUpTime(IVar1);
      IVar2 = serialQueue(param_1);
      local_a0 = PTR___NSConcreteStackBlock_100995490;
      local_98 = 0xc2000000;
      local_90 = FUN_1007228c0;
      puStack_88 = &DAT_1009e7ef8;
      local_80 = param_1;
      IStack_78 = IVar1;
      _dispatch_async(IVar2,&local_a0);
      IVar1 = SAReferrerManager::sharedInstance((ID)&objc::class_t::SAReferrerManager);
      SAReferrerManager::clearReferrer(IVar1);
    }
  }
  else {
    IVar1 = param_1;
    _objc_opt_class();
    IVar1 = objc_stub::getSystemUpTime(IVar1);
    IVar2 = serialQueue(param_1);
    local_70 = PTR___NSConcreteStackBlock_100995490;
    local_68 = 0xc2000000;
    local_60 = FUN_100722884;
    puStack_58 = &DAT_1009e7ef8;
    local_50 = param_1;
    IStack_48 = IVar1;
    _dispatch_async(IVar2,&local_70);
  }
  return;
}

