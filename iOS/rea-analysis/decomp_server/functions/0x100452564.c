// rea decompile_all
// name: FUN_100452564
// address: 0x100452564
// body: available
// range: 0x100452564-0x100452853 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100452760) */

void FUN_100452564(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x21;
  code *pcVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  ulong uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  ulong uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 local_80;
  ulong local_78;
  
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  local_80 = 0;
  local_78 = 0xf000000000000000;
  uVar12 = param_1[9];
  uVar8 = param_1[0xb];
  uVar9 = uVar8 & 0x3000000000000000 & uVar12;
  puVar5 = param_1;
  if ((uVar8 & 0x3000000000000000) == 0x1000000000000000 && uVar9 != 0x3000000000000000) {
    uVar13 = param_1[10];
    uVar1 = param_1[7];
    uVar3 = param_1[8];
    uVar2 = param_1[5];
    uVar4 = param_1[6];
    uVar11 = param_1[4];
    uStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0xf000000000000000;
    uStack_100 = 0;
    local_f0 = uVar11;
    uStack_e8 = uVar2;
    local_e0 = uVar4;
    uStack_d8 = uVar1;
    local_d0 = uVar3;
    uStack_c8 = uVar12;
    local_c0 = uVar13;
    local_b8 = uVar8;
    FUN_10045e614(&local_f0,&local_170);
    puVar5 = &local_130;
    FUN_100040bb4(puVar5,&DAT_100a9f380,&DAT_10082d5a0);
    local_b0 = uVar11;
    uStack_a8 = uVar2;
    local_a0 = uVar4;
    uStack_98 = uVar1;
    local_90 = uVar3;
    uStack_88 = uVar12;
    local_80 = uVar13;
    local_78 = uVar8 & 0xcfffffffffffffff;
  }
  pcVar10 = *(code **)(param_4 + 0x198);
  FUN_10043e46c();
  (*pcVar10)(&local_b0,&DAT_1009c2330,puVar5,param_3,param_4);
  uVar12 = local_78;
  uVar13 = local_80;
  uVar8 = uStack_88;
  uVar11 = local_90;
  uVar4 = uStack_98;
  uVar3 = local_a0;
  uVar2 = uStack_a8;
  uVar1 = local_b0;
  if (unaff_x21 == 0) {
    uStack_e8 = uStack_a8;
    local_f0 = local_b0;
    uStack_d8 = uStack_98;
    local_e0 = local_a0;
    uStack_c8 = uStack_88;
    local_d0 = local_90;
    local_b8 = local_78;
    local_c0 = local_80;
    if (local_78 >> 0x3c < 0xf) {
      if (uVar9 == 0x3000000000000000) {
        uStack_128 = uStack_a8;
        local_130 = local_b0;
        uStack_118 = uStack_98;
        uStack_120 = local_a0;
        uStack_108 = uStack_88;
        local_110 = local_90;
        uStack_f8 = local_78;
        uStack_100 = local_80;
        FUN_100438e60(&local_130,&local_170);
      }
      else {
        pcVar10 = *(code **)(param_4 + 8);
        uStack_128 = uStack_a8;
        local_130 = local_b0;
        uStack_118 = uStack_98;
        uStack_120 = local_a0;
        uStack_108 = uStack_88;
        local_110 = local_90;
        uStack_f8 = local_78;
        uStack_100 = local_80;
        FUN_100438e60(&local_130,&local_170);
        (*pcVar10)(param_3,param_4);
      }
      uStack_168 = uStack_a8;
      local_170 = local_b0;
      uStack_158 = uStack_98;
      uStack_160 = local_a0;
      uStack_148 = uStack_88;
      local_150 = local_90;
      uStack_138 = local_78;
      uStack_140 = local_80;
      FUN_100040bb4(&local_170,&DAT_100a9f380,&DAT_10082d5a0);
      uStack_128 = param_1[5];
      local_130 = param_1[4];
      uStack_118 = param_1[7];
      uStack_120 = param_1[6];
      uStack_108 = param_1[9];
      local_110 = param_1[8];
      uStack_f8 = param_1[0xb];
      uStack_100 = param_1[10];
      param_1[5] = uVar2;
      param_1[4] = uVar1;
      param_1[7] = uVar4;
      param_1[6] = uVar3;
      param_1[8] = uVar11;
      param_1[9] = uVar8 & 0xcfffffffffffffff;
      param_1[10] = uVar13;
      param_1[0xb] = uVar12 & 0xcfffffffffffffff | 0x1000000000000000;
      puVar6 = &DAT_100a9ff68;
      puVar7 = &DAT_10082b0d0;
    }
    else {
      uStack_128 = uStack_a8;
      local_130 = local_b0;
      uStack_118 = uStack_98;
      uStack_120 = local_a0;
      uStack_108 = uStack_88;
      local_110 = local_90;
      uStack_f8 = local_78;
      uStack_100 = local_80;
      puVar6 = &DAT_100a9f380;
      puVar7 = &DAT_10082d5a0;
    }
    puVar5 = &local_130;
  }
  else {
    uStack_e8 = uStack_a8;
    local_f0 = local_b0;
    uStack_d8 = uStack_98;
    local_e0 = local_a0;
    uStack_c8 = uStack_88;
    local_d0 = local_90;
    local_b8 = local_78;
    local_c0 = local_80;
    puVar6 = &DAT_100a9f380;
    puVar7 = &DAT_10082d5a0;
    puVar5 = &local_f0;
  }
  FUN_100040bb4(puVar5,puVar6,puVar7);
  return;
}

