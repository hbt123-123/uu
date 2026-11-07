// rea decompile_all
// name: FUN_1003ad12c
// address: 0x1003ad12c
// body: available
// range: 0x1003ad12c-0x1003ad1f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_1003ad12c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  ID IVar2;
  void *aBlock;
  undefined *local_60;
  undefined8 local_58;
  code *local_50;
  undefined *puStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  IVar2 = SensorsAnalyticsSDK::sharedInstance
                    ((ID)&objc::class_t::SensorsAnalyticsSDK,"sharedInstance");
  if (IVar2 != 0) {
    local_60 = PTR___NSConcreteStackBlock_100995490;
    local_58 = 0x42000000;
    local_50 = FUN_1003acbd8;
    puStack_48 = &DAT_1009b8170;
    local_40 = param_1;
    local_38 = param_2;
    aBlock = __Block_copy(&local_60);
    uVar1 = local_38;
    _swift_retain(param_2);
    _swift_release(uVar1);
    SensorsAnalyticsSDK::registerDynamicSuperProperties_
              (IVar2,"registerDynamicSuperProperties:",(ID)aBlock,param_4);
    __Block_release(aBlock);
  }
  return 0;
}

