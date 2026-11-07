// rea decompile_all
// name: FUN_1000ace60
// address: 0x1000ace60
// body: available
// range: 0x1000ace60-0x1000ad0d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_1000ace60(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_248 [88];
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a0;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined1 local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_60;
  
  local_c8 = param_1;
  _swift_errorRetain();
  puVar1 = &DAT_100104828;
  FUN_10000eb08(&DAT_100104828,&DAT_1000d5ba0);
  puVar2 = &local_128;
  _swift_dynamicCast(puVar2,&local_c8,puVar1,&DAT_1000fa8c8,0);
  local_190 = param_2;
  uStack_188 = param_3;
  local_c0 = param_2;
  uStack_b8 = param_3;
  if ((int)puVar2 == 0) {
    _swift_errorRelease(local_c8);
    local_c8 = param_1;
    _swift_errorRetain(param_1);
    puVar2 = &local_128;
    _swift_dynamicCast(puVar2,&local_c8,puVar1,&DAT_1000f9e40,0);
    if ((int)puVar2 == 0) {
      _swift_errorRelease(local_c8);
      puVar2 = (undefined8 *)0x0;
      puVar3 = (undefined1 *)0x0;
      goto LAB_1000ad0b4;
    }
    uStack_1b8 = uStack_f0;
    local_1c0 = local_f8;
    uStack_1b0 = local_e8;
    uStack_1a0 = local_d8;
    uStack_1e8 = uStack_120;
    local_1f0 = local_128;
    uStack_1d8 = uStack_110;
    local_1e0 = local_118;
    uStack_1c8 = uStack_100;
    uStack_1d0 = local_108;
    uStack_178 = local_118;
    local_180 = uStack_120;
    uStack_168 = local_108;
    local_170 = uStack_110;
    uStack_140 = CONCAT71(uStack_df,uStack_e0);
    local_130 = local_d0;
    uStack_148 = local_e8;
    local_150 = uStack_f0;
    uStack_158 = local_f8;
    local_160 = uStack_100;
    uStack_98 = local_108;
    local_a0 = uStack_110;
    uStack_a8 = local_118;
    local_b0 = uStack_120;
    local_60 = local_d0;
    uStack_78 = local_e8;
    local_80 = uStack_f0;
    uStack_88 = local_f8;
    local_90 = uStack_100;
    local_70 = uStack_140;
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(param_3);
    puVar2 = (undefined8 *)((ulong)&local_1f0 | 8);
    puVar3 = auStack_248;
    FUN_100095794(puVar2,puVar3);
    (*param_4)();
    FUN_1000b0af8(&local_190);
    FUN_1000ac034(&local_1f0);
  }
  else {
    uStack_1b8 = uStack_f0;
    local_1c0 = local_f8;
    uStack_1b0 = local_e8;
    uStack_1a0 = local_d8;
    uStack_1e8 = uStack_120;
    local_1f0 = local_128;
    uStack_1d8 = uStack_110;
    local_1e0 = local_118;
    uStack_1c8 = uStack_100;
    uStack_1d0 = local_108;
    uStack_178 = uStack_120;
    local_180 = local_128;
    uStack_168 = uStack_110;
    local_170 = local_118;
    local_130 = local_d8;
    uStack_148 = uStack_f0;
    local_150 = local_f8;
    uStack_140 = local_e8;
    uStack_158 = uStack_100;
    local_160 = local_108;
    uStack_98 = uStack_110;
    local_a0 = local_118;
    uStack_a8 = uStack_120;
    local_b0 = local_128;
    local_60 = local_d8;
    local_70 = local_e8;
    uStack_78 = uStack_f0;
    local_80 = local_f8;
    uStack_88 = uStack_100;
    local_90 = local_108;
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(param_3);
    puVar2 = &local_1f0;
    puVar3 = auStack_248;
    FUN_100095794(puVar2,puVar3);
    (*param_4)();
    FUN_1000b0af8(&local_190);
    FUN_1000837f4(&local_1f0);
  }
  _swift_errorRelease(local_c8);
LAB_1000ad0b4:
  auVar4._8_8_ = puVar3;
  auVar4._0_8_ = puVar2;
  return auVar4;
}

