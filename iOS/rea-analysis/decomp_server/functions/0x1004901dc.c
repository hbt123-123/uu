// rea decompile_all
// name: FUN_1004901dc
// address: 0x1004901dc
// body: available
// range: 0x1004901dc-0x100490527 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100490434) */

void FUN_1004901dc(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long unaff_x21;
  ulong uVar14;
  code *pcVar15;
  long local_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  ulong local_190;
  long lStack_188;
  ulong uStack_180;
  long lStack_178;
  long local_170;
  long lStack_168;
  long local_160;
  long lStack_158;
  long local_150;
  long lStack_148;
  ulong local_140;
  long lStack_138;
  ulong local_130;
  long lStack_128;
  long local_120;
  long lStack_118;
  long local_110;
  long lStack_108;
  long local_100;
  long lStack_f8;
  ulong local_f0;
  long lStack_e8;
  ulong local_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  ulong local_a0;
  long lStack_98;
  ulong local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  
  lStack_88 = 0;
  local_90 = 0;
  lStack_78 = 0;
  local_80 = 0;
  lStack_a8 = 0;
  local_b0 = 0;
  lStack_98 = 0;
  local_a0 = 0;
  lStack_b8 = 0;
  local_c0 = 0;
  uVar11 = param_1[4];
  uVar10 = param_1[6];
  uVar14 = uVar11 & uVar10 & 0x3000000000000000;
  plVar7 = param_1;
  if ((uVar14 != 0x3000000000000000) &&
     (((uint)(uVar10 >> 0x3b) & 6 | (uint)(uVar11 >> 0x3d) & 1) == 2)) {
    lVar1 = *param_1;
    lVar4 = param_1[1];
    lVar2 = param_1[2];
    lVar5 = param_1[3];
    lVar12 = param_1[5];
    lVar3 = param_1[7];
    lVar6 = param_1[8];
    lVar13 = param_1[9];
    lStack_128 = 0;
    local_130 = 0;
    lStack_118 = 0;
    local_120 = 0;
    lStack_148 = 0;
    local_150 = 0;
    lStack_138 = 0;
    local_140 = 0;
    lStack_158 = 0;
    local_160 = 0;
    local_110 = lVar1;
    lStack_108 = lVar4;
    local_100 = lVar2;
    lStack_f8 = lVar5;
    local_f0 = uVar11;
    lStack_e8 = lVar12;
    local_e0 = uVar10;
    lStack_d8 = lVar3;
    local_d0 = lVar6;
    lStack_c8 = lVar13;
    FUN_100493064(&local_110,&local_1b0);
    plVar7 = &local_160;
    FUN_100040bb4(plVar7,&DAT_100aa1138,&DAT_10082f520);
    local_c0 = lVar1;
    lStack_b8 = lVar4;
    local_b0 = lVar2;
    lStack_a8 = lVar5;
    local_a0 = uVar11 & 0xdfffffffffffffff;
    lStack_98 = lVar12;
    local_90 = uVar10 & 0xcfffffffffffffff;
    lStack_88 = lVar3;
    local_80 = lVar6;
    lStack_78 = lVar13;
  }
  pcVar15 = *(code **)(param_4 + 0x198);
  FUN_1004947d4();
  (*pcVar15)(&local_c0,&DAT_1009c6630,plVar7,param_3,param_4);
  lVar13 = lStack_78;
  lVar12 = local_80;
  lVar6 = lStack_88;
  uVar11 = local_90;
  lVar5 = lStack_98;
  uVar10 = local_a0;
  lVar4 = lStack_a8;
  lVar3 = local_b0;
  lVar2 = lStack_b8;
  lVar1 = local_c0;
  if (unaff_x21 == 0) {
    lStack_108 = lStack_b8;
    local_110 = local_c0;
    lStack_f8 = lStack_a8;
    local_100 = local_b0;
    lStack_e8 = lStack_98;
    local_f0 = local_a0;
    lStack_d8 = lStack_88;
    local_e0 = local_90;
    lStack_c8 = lStack_78;
    local_d0 = local_80;
    if (local_c0 == 0) {
      lStack_138 = lStack_98;
      local_140 = local_a0;
      lStack_128 = lStack_88;
      local_130 = local_90;
      lStack_118 = lStack_78;
      local_120 = local_80;
      lStack_158 = lStack_b8;
      local_160 = local_c0;
      lStack_148 = lStack_a8;
      local_150 = local_b0;
      puVar8 = &DAT_100aa1138;
      puVar9 = &DAT_10082f520;
    }
    else {
      if (uVar14 == 0x3000000000000000) {
        lStack_138 = lStack_98;
        local_140 = local_a0;
        lStack_128 = lStack_88;
        local_130 = local_90;
        lStack_118 = lStack_78;
        local_120 = local_80;
        lStack_158 = lStack_b8;
        local_160 = local_c0;
        lStack_148 = lStack_a8;
        local_150 = local_b0;
        FUN_100493098(&local_160,&local_1b0);
      }
      else {
        pcVar15 = *(code **)(param_4 + 8);
        lStack_138 = lStack_98;
        local_140 = local_a0;
        lStack_128 = lStack_88;
        local_130 = local_90;
        lStack_118 = lStack_78;
        local_120 = local_80;
        lStack_158 = lStack_b8;
        local_160 = local_c0;
        lStack_148 = lStack_a8;
        local_150 = local_b0;
        FUN_100493098(&local_160,&local_1b0);
        (*pcVar15)(param_3,param_4);
      }
      lStack_188 = lStack_98;
      local_190 = local_a0;
      lStack_178 = lStack_88;
      uStack_180 = local_90;
      lStack_168 = lStack_78;
      local_170 = local_80;
      lStack_1a8 = lStack_b8;
      local_1b0 = local_c0;
      lStack_198 = lStack_a8;
      lStack_1a0 = local_b0;
      FUN_100040bb4(&local_1b0,&DAT_100aa1138,&DAT_10082f520);
      lStack_138 = param_1[5];
      local_140 = param_1[4];
      lStack_128 = param_1[7];
      local_130 = param_1[6];
      lStack_118 = param_1[9];
      local_120 = param_1[8];
      lStack_158 = param_1[1];
      local_160 = *param_1;
      lStack_148 = param_1[3];
      local_150 = param_1[2];
      param_1[1] = lVar2;
      *param_1 = lVar1;
      param_1[3] = lVar4;
      param_1[2] = lVar3;
      param_1[4] = uVar10 & 0xcfffffffffffffff;
      param_1[5] = lVar5;
      param_1[6] = uVar11 & 0xcfffffffffffffff | 0x1000000000000000;
      param_1[7] = lVar6;
      param_1[8] = lVar12;
      param_1[9] = lVar13;
      puVar8 = &DAT_100aa0b98;
      puVar9 = &DAT_10082dd80;
    }
    plVar7 = &local_160;
  }
  else {
    lStack_e8 = lStack_98;
    local_f0 = local_a0;
    lStack_d8 = lStack_88;
    local_e0 = local_90;
    lStack_c8 = lStack_78;
    local_d0 = local_80;
    lStack_108 = lStack_b8;
    local_110 = local_c0;
    lStack_f8 = lStack_a8;
    local_100 = local_b0;
    puVar8 = &DAT_100aa1138;
    puVar9 = &DAT_10082f520;
    plVar7 = &local_110;
  }
  FUN_100040bb4(plVar7,puVar8,puVar9);
  return;
}

