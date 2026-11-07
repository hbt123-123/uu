// rea decompile_all
// name: SentryCrashReportFilterPipeline::filterReports:onCompletion:
// address: 0x100758a18
// body: available
// range: 0x100758a18-0x100758c93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_storeWeak replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryCrashReportFilterPipeline::filterReports_onCompletion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,uint param_5)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined *local_178;
  undefined8 local_170;
  code *local_168;
  undefined *puStack_160;
  ID local_158;
  ID local_150;
  ID local_148;
  ID local_140;
  undefined8 *puStack_138;
  undefined8 *local_130;
  ID local_128;
  undefined *local_120;
  undefined8 local_118;
  code *local_110;
  undefined *puStack_108;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  code *local_e0;
  code *pcStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  code *local_b0;
  code *pcStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  
  IVar2 = objc_stub::FUN_1007e9c00(param_1,param_3,param_4,(ulong)param_5);
  IVar3 = objc_stub::count(IVar2);
  puVar1 = PTR___NSConcreteStackBlock_100995490;
  if (IVar3 == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,param_3,1,0);
    }
  }
  else {
    local_98 = 0;
    local_88 = 0x2020000000;
    local_80 = 0;
    local_100 = &local_c8;
    local_c8 = 0;
    local_b8 = 0x3032000000;
    local_b0 = FUN_1007580bc;
    pcStack_a8 = FUN_1007580e4;
    local_a0 = 0;
    local_f8 = 0;
    local_e8 = 0x3042000000;
    local_e0 = FUN_1007580ec;
    pcStack_d8 = FUN_1007580f8;
    local_d0 = 0;
    local_120 = PTR___NSConcreteStackBlock_100995490;
    local_118 = 0xc2000000;
    local_110 = FUN_100758cd0;
    puStack_108 = &DAT_1009e8d80;
    local_f0 = &local_f8;
    local_c0 = local_100;
    local_90 = &local_98;
    local_140 = objc_stub::copy((ID)&local_120);
    local_178 = puVar1;
    local_170 = 0xc2000000;
    local_168 = FUN_100758d40;
    puStack_160 = &DAT_1009e8e10;
    local_158 = param_1;
    local_150 = IVar2;
    local_148 = param_4;
    puStack_138 = &local_98;
    local_130 = &local_f8;
    local_128 = IVar3;
    IVar3 = objc_stub::copy((ID)&local_178);
    local_c0[5] = IVar3;
    local_f0[5] = local_c0[5];
    IVar2 = objc_stub::objectAtIndex_(IVar2,local_90[3]);
    objc_stub::filterReports_onCompletion_(IVar2,param_3,local_c0[5]);
    __Block_object_dispose(&local_f8,8);
    _objc_destroyWeak(&local_d0);
    __Block_object_dispose(&local_c8,8);
    __Block_object_dispose(&local_98,8);
  }
  return;
}

