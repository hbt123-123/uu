// rea decompile_all
// name: FUN_10055d5b4
// address: 0x10055d5b4
// body: available
// range: 0x10055d5b4-0x10055d8e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10055d5b4(undefined8 *param_1,undefined8 param_2,byte param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined *local_1c0;
  undefined *puStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined *local_180;
  undefined8 uStack_178;
  byte local_170;
  undefined *local_168;
  undefined *puStack_160;
  undefined8 local_158;
  undefined8 local_150;
  long local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined *local_128;
  undefined8 uStack_120;
  byte local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  long local_f0;
  undefined1 auStack_e8 [24];
  long local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 auStack_70 [2];
  
  local_d0 = param_4;
  uStack_c8 = param_5;
  FUN_1000efc08(auStack_e8);
  (**(code **)(*(long *)(param_4 + -8) + 0x20))();
  FUN_1000b142c(auStack_e8,&local_1c0);
  puVar2 = &DAT_100aaa130;
  FUN_100004bb4(&DAT_100aaa130,&DAT_100836190);
  puVar3 = &DAT_100aabaf8;
  FUN_100004bb4(&DAT_100aabaf8,&DAT_1008388d8);
  puVar4 = &local_220;
  _swift_dynamicCast(puVar4,&local_1c0,puVar2,puVar3,6);
  if ((int)puVar4 == 0) {
    local_200 = 0;
    uStack_218 = 0;
    local_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    FUN_100040bb4(&local_220,&DAT_100aabb00,&DAT_1008388e0);
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar10 = 0;
    uVar11 = 0;
  }
  else {
    FUN_1000a0074(&local_220,&local_168);
    FUN_10003f030(&local_168,local_150);
    _swift_getDynamicType();
    (**(code **)(local_148 + 8))(&local_c0);
    FUN_10003f094(&local_168);
    local_78 = local_b0;
    auStack_70[0] = uStack_b8;
    local_88 = local_a0;
    uStack_80 = uStack_a8;
    local_90 = uStack_98;
    _swift_retain(local_c0);
    FUN_10007f314(auStack_70,&local_1c0,&DAT_100aaa400,&DAT_100837ad0);
    FUN_10007f314(&local_78,&local_1c0,&DAT_100aaa3e8,&DAT_100837fb0);
    FUN_10007f314(&uStack_80,&local_1c0,&DAT_100aaa3e8,&DAT_100837fb0);
    FUN_10007f314(&local_88,&local_1c0,&DAT_100aaa3f0,&DAT_100837ae0);
    FUN_10007f314(&local_90,&local_1c0,&DAT_100aaa3f8,&DAT_100837fc0);
    uVar6 = local_c0;
    uVar7 = uStack_b8;
    uVar8 = local_b0;
    uVar9 = uStack_a8;
    uVar10 = local_a0;
    uVar11 = uStack_98;
  }
  FUN_1000b142c(auStack_e8,&local_168);
  puVar3 = &DAT_100aab448;
  FUN_100004bb4(&DAT_100aab448,&DAT_100837b00);
  puVar4 = &local_110;
  _swift_dynamicCast(puVar4,&local_168,puVar2,puVar3,0xe);
  lVar1 = local_f0;
  uVar5 = local_f8;
  if ((int)puVar4 == 0) {
    local_f0 = 0;
    uStack_108 = 0;
    local_110 = 0;
    local_f8 = 0;
    uStack_100 = 0;
    FUN_100040bb4(&local_110,&DAT_100aab450,&DAT_1008388b0);
    uVar5 = 0;
  }
  else {
    FUN_10003f030(&local_110,local_f8);
    (**(code **)(lVar1 + 0x10))(uVar5,lVar1);
    FUN_10003f094(&local_110);
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_1005b9e0c();
  FUN_10052a5d0(uVar6,uVar7,uVar8,uVar9,uVar10,uVar11);
  FUN_10003f094(auStack_e8);
  local_170 = param_3 & 1;
  local_1c0 = puVar2;
  puStack_1b8 = puVar2;
  local_168 = puVar2;
  puStack_160 = puVar2;
  local_1b0 = uVar6;
  uStack_1a8 = uVar7;
  local_1a0 = uVar8;
  uStack_198 = uVar9;
  local_190 = uVar10;
  uStack_188 = uVar11;
  local_180 = puVar3;
  uStack_178 = uVar5;
  local_158 = uVar6;
  local_150 = uVar7;
  local_148 = uVar8;
  uStack_140 = uVar9;
  local_138 = uVar10;
  uStack_130 = uVar11;
  local_128 = puVar3;
  uStack_120 = uVar5;
  local_118 = local_170;
  FUN_10055da10(&local_1c0,&local_220);
  FUN_10053ac24(&local_168);
  param_1[5] = uStack_198;
  param_1[4] = local_1a0;
  param_1[7] = uStack_188;
  param_1[6] = local_190;
  param_1[9] = uStack_178;
  param_1[8] = local_180;
  *(byte *)(param_1 + 10) = local_170;
  param_1[1] = puStack_1b8;
  *param_1 = local_1c0;
  param_1[3] = uStack_1a8;
  param_1[2] = local_1b0;
  return;
}

