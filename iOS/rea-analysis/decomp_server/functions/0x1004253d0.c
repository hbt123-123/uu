// rea decompile_all
// name: FUN_1004253d0
// address: 0x1004253d0
// body: available
// range: 0x1004253d0-0x100425747 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010042564c) */

void FUN_1004253d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x21;
  ulong uVar12;
  ulong uVar13;
  code *pcVar14;
  undefined8 local_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  ulong local_180;
  undefined8 uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  ulong local_160;
  undefined8 local_150;
  undefined8 uStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  ulong local_130;
  undefined8 uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  ulong local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  ulong local_f0;
  undefined8 uStack_e8;
  ulong local_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulong local_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 local_80;
  ulong uStack_78;
  
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0xf000000000000000;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uVar13 = param_1[4];
  uVar9 = param_1[6];
  uVar8 = param_1[8];
  uVar12 = uVar13 & uVar9 & uVar8 & 0x3000000000000000;
  puVar5 = param_1;
  if (uVar12 != 0x3000000000000000 && ((uint)(uVar8 >> 0x3b) & 6 | (uint)(uVar9 >> 0x3d) & 1) == 4)
  {
    uVar1 = *param_1;
    uVar3 = param_1[1];
    uVar2 = param_1[2];
    uVar4 = param_1[3];
    uVar10 = param_1[5];
    uVar11 = param_1[7];
    uStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    local_110 = 0;
    uStack_148 = 0;
    local_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0xf000000000000000;
    local_100 = uVar1;
    uStack_f8 = uVar3;
    local_f0 = uVar2;
    uStack_e8 = uVar4;
    local_e0 = uVar13;
    uStack_d8 = uVar10;
    local_d0 = uVar9;
    uStack_c8 = uVar11;
    local_c0 = uVar8;
    FUN_10042d20c(&local_100,&local_1a0);
    puVar5 = &local_150;
    FUN_100040bb4(puVar5,&DAT_100a9f348,&DAT_100827708);
    local_b8 = uVar1;
    uStack_b0 = uVar3;
    local_a8 = uVar2;
    local_a0 = uVar4;
    uStack_98 = uVar13;
    local_90 = uVar10;
    uStack_88 = uVar9 & 0xdfffffffffffffff;
    local_80 = uVar11;
    uStack_78 = uVar8 & 0xcfffffffffffffff;
  }
  pcVar14 = *(code **)(param_4 + 0x198);
  FUN_10042f880();
  (*pcVar14)(&local_b8,&DAT_1009bed98,puVar5,param_3,param_4);
  uVar2 = uStack_78;
  uVar11 = local_80;
  uVar13 = uStack_88;
  uVar10 = local_90;
  uVar9 = uStack_98;
  uVar4 = local_a0;
  uVar8 = local_a8;
  uVar3 = uStack_b0;
  uVar1 = local_b8;
  if (unaff_x21 == 0) {
    uStack_f8 = uStack_b0;
    local_100 = local_b8;
    uStack_e8 = local_a0;
    local_f0 = local_a8;
    uStack_d8 = local_90;
    local_e0 = uStack_98;
    uStack_c8 = local_80;
    local_d0 = uStack_88;
    local_c0 = uStack_78;
    if (local_a8 >> 0x3c < 0xf) {
      if (uVar12 == 0x3000000000000000) {
        uStack_128 = local_90;
        local_130 = uStack_98;
        uStack_118 = local_80;
        uStack_120 = uStack_88;
        local_110 = uStack_78;
        uStack_148 = uStack_b0;
        local_150 = local_b8;
        uStack_138 = local_a0;
        uStack_140 = local_a8;
        FUN_10042d240(&local_150,&local_1a0);
      }
      else {
        pcVar14 = *(code **)(param_4 + 8);
        uStack_128 = local_90;
        local_130 = uStack_98;
        uStack_118 = local_80;
        uStack_120 = uStack_88;
        local_110 = uStack_78;
        uStack_148 = uStack_b0;
        local_150 = local_b8;
        uStack_138 = local_a0;
        uStack_140 = local_a8;
        FUN_10042d240(&local_150,&local_1a0);
        (*pcVar14)(param_3,param_4);
      }
      uStack_178 = local_90;
      local_180 = uStack_98;
      uStack_168 = local_80;
      uStack_170 = uStack_88;
      local_160 = uStack_78;
      uStack_198 = uStack_b0;
      local_1a0 = local_b8;
      uStack_188 = local_a0;
      uStack_190 = local_a8;
      FUN_100040bb4(&local_1a0,&DAT_100a9f348,&DAT_100827708);
      uStack_128 = param_1[5];
      local_130 = param_1[4];
      uStack_118 = param_1[7];
      uStack_120 = param_1[6];
      local_110 = param_1[8];
      uStack_148 = param_1[1];
      local_150 = *param_1;
      uStack_138 = param_1[3];
      uStack_140 = param_1[2];
      param_1[1] = uVar3;
      *param_1 = uVar1;
      param_1[3] = uVar4;
      param_1[2] = uVar8;
      param_1[4] = uVar9 & 0xcfffffffffffffff;
      param_1[5] = uVar10;
      param_1[6] = uVar13 & 0xcfffffffffffffff;
      param_1[7] = uVar11;
      param_1[8] = uVar2 & 0xcfffffffffffffff | 0x2000000000000000;
      puVar6 = &DAT_100a9eea8;
      puVar7 = &DAT_100825d80;
    }
    else {
      uStack_128 = local_90;
      local_130 = uStack_98;
      uStack_118 = local_80;
      uStack_120 = uStack_88;
      local_110 = uStack_78;
      uStack_148 = uStack_b0;
      local_150 = local_b8;
      uStack_138 = local_a0;
      uStack_140 = local_a8;
      puVar6 = &DAT_100a9f348;
      puVar7 = &DAT_100827708;
    }
    puVar5 = &local_150;
  }
  else {
    uStack_d8 = local_90;
    local_e0 = uStack_98;
    uStack_c8 = local_80;
    local_d0 = uStack_88;
    local_c0 = uStack_78;
    uStack_f8 = uStack_b0;
    local_100 = local_b8;
    uStack_e8 = local_a0;
    local_f0 = local_a8;
    puVar6 = &DAT_100a9f348;
    puVar7 = &DAT_100827708;
    puVar5 = &local_100;
  }
  FUN_100040bb4(puVar5,puVar6,puVar7);
  return;
}

