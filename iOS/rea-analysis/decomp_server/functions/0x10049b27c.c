// rea decompile_all
// name: FUN_10049b27c
// address: 0x10049b27c
// body: available
// range: 0x10049b27c-0x10049b62b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010049b4f8) */

void FUN_10049b27c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long unaff_x21;
  ulong uVar15;
  code *pcVar16;
  ulong uVar17;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  ulong uStack_198;
  ulong local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  undefined8 local_170;
  ulong uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  ulong local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  undefined8 local_120;
  ulong uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulong uStack_f8;
  ulong local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  ulong local_d8;
  undefined8 local_d0;
  ulong uStack_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulong uStack_a0;
  ulong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulong uStack_80;
  undefined8 local_78;
  ulong uStack_70;
  
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0xf000000000000000;
  uStack_90 = 0;
  local_98 = 0;
  uStack_80 = 0;
  local_88 = 0;
  uStack_70 = 0;
  local_78 = 0;
  uVar15 = param_1[4];
  uVar13 = param_1[7];
  uVar11 = param_1[9];
  bVar6 = (uVar11 & 0x3000000000000000) == 0;
  bVar7 = uVar13 >> 0x20 == 0;
  puVar8 = param_1;
  if (((!bVar6 || !bVar7) || 0xfffffffeffffffff >= uVar15) &&
      ((uint)(uVar11 >> 0x3b) & 6 | (uint)(uVar13 >> 0x3f)) == 1) {
    uVar1 = *param_1;
    uVar4 = param_1[1];
    uVar2 = param_1[2];
    uVar12 = param_1[3];
    uVar3 = param_1[5];
    uVar5 = param_1[6];
    uVar14 = param_1[8];
    uStack_138 = 0;
    local_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    local_120 = 0;
    uStack_158 = 0;
    local_160 = 0;
    uStack_148 = 0xf000000000000000;
    uStack_150 = 0;
    local_110 = uVar1;
    uStack_108 = uVar4;
    local_100 = uVar2;
    uStack_f8 = uVar12;
    local_f0 = uVar15;
    uStack_e8 = uVar3;
    local_e0 = uVar5;
    local_d8 = uVar13;
    local_d0 = uVar14;
    uStack_c8 = uVar11;
    FUN_10049d5cc(&local_110,&local_1b0);
    puVar8 = &local_160;
    FUN_100040bb4(puVar8,&DAT_100aa1310,&DAT_10082fee8);
    local_b8 = uVar1;
    uStack_b0 = uVar4;
    local_a8 = uVar2;
    uStack_a0 = uVar12;
    local_98 = uVar15;
    uStack_90 = uVar3;
    local_88 = uVar5;
    uStack_80 = uVar13 & 0x7fffffffffffffff;
    local_78 = uVar14;
    uStack_70 = uVar11 & 0xcfffffffffffffff;
  }
  pcVar16 = *(code **)(param_4 + 0x198);
  FUN_10049dd3c();
  (*pcVar16)(&local_b8,&DAT_1009c7190,puVar8,param_3,param_4);
  uVar13 = uStack_70;
  uVar14 = local_78;
  uVar5 = local_88;
  uVar4 = uStack_90;
  uVar11 = uStack_a0;
  uVar3 = local_a8;
  uVar2 = uStack_b0;
  uVar1 = local_b8;
  if (unaff_x21 == 0) {
    uStack_108 = uStack_b0;
    local_110 = local_b8;
    uStack_f8 = uStack_a0;
    local_100 = local_a8;
    uStack_e8 = uStack_90;
    local_f0 = local_98;
    local_d8 = uStack_80;
    local_e0 = local_88;
    uStack_c8 = uStack_70;
    local_d0 = local_78;
    if (uStack_a0 >> 0x3c < 0xf) {
      uVar12 = local_98 & 0xffffffff;
      uVar17 = uStack_80 & 0xffffffff;
      if ((bVar6 && bVar7) && 0xfffffffeffffffff < uVar15) {
        uStack_138 = uStack_90;
        local_140 = local_98;
        uStack_128 = uStack_80;
        uStack_130 = local_88;
        uStack_118 = uStack_70;
        local_120 = local_78;
        uStack_158 = uStack_b0;
        local_160 = local_b8;
        uStack_148 = uStack_a0;
        uStack_150 = local_a8;
        FUN_10049d660(&local_160,&local_1b0);
      }
      else {
        pcVar16 = *(code **)(param_4 + 8);
        uStack_138 = uStack_90;
        local_140 = local_98;
        uStack_128 = uStack_80;
        uStack_130 = local_88;
        uStack_118 = uStack_70;
        local_120 = local_78;
        uStack_158 = uStack_b0;
        local_160 = local_b8;
        uStack_148 = uStack_a0;
        uStack_150 = local_a8;
        FUN_10049d660(&local_160,&local_1b0);
        (*pcVar16)(param_3,param_4);
      }
      uStack_188 = uStack_90;
      local_190 = local_98;
      uStack_178 = uStack_80;
      uStack_180 = local_88;
      uStack_168 = uStack_70;
      local_170 = local_78;
      uStack_1a8 = uStack_b0;
      local_1b0 = local_b8;
      uStack_198 = uStack_a0;
      uStack_1a0 = local_a8;
      FUN_100040bb4(&local_1b0,&DAT_100aa1310,&DAT_10082fee8);
      uStack_138 = param_1[5];
      local_140 = param_1[4];
      uStack_128 = param_1[7];
      uStack_130 = param_1[6];
      uStack_118 = param_1[9];
      local_120 = param_1[8];
      uStack_158 = param_1[1];
      local_160 = *param_1;
      uStack_148 = param_1[3];
      uStack_150 = param_1[2];
      param_1[1] = uVar2;
      *param_1 = uVar1;
      param_1[3] = uVar11;
      param_1[2] = uVar3;
      param_1[4] = uVar12;
      param_1[5] = uVar4;
      param_1[6] = uVar5;
      param_1[7] = uVar17 | 0x8000000000000000;
      param_1[8] = uVar14;
      param_1[9] = uVar13 & 0xcfffffffffffffff;
      puVar9 = &DAT_100aa0b88;
      puVar10 = &DAT_10082dd70;
    }
    else {
      uStack_138 = uStack_90;
      local_140 = local_98;
      uStack_128 = uStack_80;
      uStack_130 = local_88;
      uStack_118 = uStack_70;
      local_120 = local_78;
      uStack_158 = uStack_b0;
      local_160 = local_b8;
      uStack_148 = uStack_a0;
      uStack_150 = local_a8;
      puVar9 = &DAT_100aa1310;
      puVar10 = &DAT_10082fee8;
    }
    puVar8 = &local_160;
  }
  else {
    uStack_e8 = uStack_90;
    local_f0 = local_98;
    local_d8 = uStack_80;
    local_e0 = local_88;
    uStack_c8 = uStack_70;
    local_d0 = local_78;
    uStack_108 = uStack_b0;
    local_110 = local_b8;
    uStack_f8 = uStack_a0;
    local_100 = local_a8;
    puVar9 = &DAT_100aa1310;
    puVar10 = &DAT_10082fee8;
    puVar8 = &local_110;
  }
  FUN_100040bb4(puVar8,puVar9,puVar10);
  return;
}

