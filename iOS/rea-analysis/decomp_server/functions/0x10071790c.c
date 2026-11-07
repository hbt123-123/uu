// rea decompile_all
// name: SASerialQueueInterceptor::processWithInput:completion:
// address: 0x10071790c
// body: available
// range: 0x10071790c-0x100717a87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SASerialQueueInterceptor::processWithInput_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  ID local_80;
  ID local_78;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  ID local_50;
  ID local_48;
  
  IVar2 = SensorsAnalyticsSDK::sdkInstance((ID)&objc::class_t::SensorsAnalyticsSDK);
  IVar3 = SensorsAnalyticsSDK::serialQueue(IVar2);
  IVar2 = IVar3;
  FUN_1007097a8();
  if ((int)IVar2 == 0) {
    bVar1 = isSync(param_1);
    if (bVar1 == 0) {
      local_a0 = PTR___NSConcreteStackBlock_100995490;
      local_98 = 0xc2000000;
      local_90 = FUN_100717a98;
      puStack_88 = &DAT_1009e7550;
      local_80 = param_3;
      local_78 = param_4;
      _dispatch_async(IVar3,&local_a0);
    }
    else {
      local_70 = PTR___NSConcreteStackBlock_100995490;
      local_68 = 0xc2000000;
      local_60 = FUN_100717a88;
      puStack_58 = &DAT_1009e7550;
      local_50 = param_3;
      local_48 = param_4;
      _dispatch_sync(IVar3,&local_70);
    }
  }
  else {
    (**(code **)(param_4 + 0x10))(param_4,param_3);
  }
  return;
}

