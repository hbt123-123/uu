// rea decompile_all
// name: FUN_1004d7a28
// address: 0x1004d7a28
// body: available
// range: 0x1004d7a28-0x1004d7ddf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004d7cc4) */

void FUN_1004d7a28(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  bool bVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  long unaff_x21;
  code *pcVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  ulong local_200;
  undefined8 uStack_1f8;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  ulong local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  ulong local_180;
  undefined8 uStack_178;
  ulong local_170;
  undefined8 uStack_168;
  ulong local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  ulong local_140;
  undefined8 uStack_138;
  ulong local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong local_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  ulong local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined8 uStack_98;
  ulong local_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0x3000000000000000;
  uStack_88 = 0;
  local_90 = 0x1000000000000000;
  uStack_78 = 0;
  local_70 = 0;
  local_80 = 0x3000000000000000;
  uVar18 = param_1[0xc];
  uVar16 = param_1[0xe];
  bVar11 = (uVar16 & 0x3000000000000000) == 0;
  bVar12 = uVar18 >> 8 != 0xffffffff;
  puVar13 = param_1;
  if ((!bVar11 || bVar12) && (((uint)(uVar16 >> 0x39) & 0x18 | (uint)(uVar18 >> 0x3d)) == 3)) {
    uVar1 = *param_1;
    uVar6 = param_1[1];
    uVar2 = param_1[2];
    uVar7 = param_1[3];
    uVar3 = param_1[4];
    uVar8 = param_1[5];
    uVar4 = param_1[6];
    uVar9 = param_1[7];
    uVar5 = param_1[8];
    uVar10 = param_1[9];
    uStack_148 = param_1[0xb];
    uVar19 = param_1[10];
    uStack_f8 = 0;
    local_100 = 0x3000000000000000;
    uStack_e8 = 0;
    uStack_f0 = 0x1000000000000000;
    uStack_d8 = 0;
    local_e0 = 0x3000000000000000;
    local_d0 = 0;
    uStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    local_1a0 = uVar1;
    uStack_198 = uVar6;
    local_190 = uVar2;
    uStack_188 = uVar7;
    local_180 = uVar3;
    uStack_178 = uVar8;
    local_170 = uVar4;
    uStack_168 = uVar9;
    local_160 = uVar5;
    uStack_158 = uVar10;
    local_150 = uVar19;
    local_140 = uVar18;
    uStack_138 = param_1[0xd];
    local_130 = uVar16;
    FUN_1004df818(&local_1a0,&local_220);
    puVar13 = &local_120;
    FUN_100040bb4(puVar13,&DAT_100aa1ae8,&DAT_1008325b0);
    local_c0 = uVar1;
    uStack_b8 = uVar6;
    local_b0 = uVar2;
    uStack_a8 = uVar7;
    local_a0 = uVar3;
    uStack_98 = uVar8;
    local_90 = uVar4;
    uStack_88 = uVar9;
    local_80 = uVar5;
    uStack_78 = uVar10;
    local_70 = uVar19;
  }
  pcVar17 = *(code **)(param_4 + 0x198);
  FUN_10042fe98();
  (*pcVar17)(&local_c0,&DAT_1009bf148,puVar13,param_3,param_4);
  uVar19 = local_70;
  uVar10 = uStack_78;
  uVar3 = local_80;
  uVar9 = uStack_88;
  uVar18 = local_90;
  uVar8 = uStack_98;
  uVar16 = local_a0;
  uVar7 = uStack_a8;
  uVar6 = local_b0;
  uVar2 = uStack_b8;
  uVar1 = local_c0;
  if (unaff_x21 == 0) {
    uStack_218 = uStack_b8;
    local_220 = local_c0;
    uStack_208 = uStack_a8;
    uStack_210 = local_b0;
    uStack_1f8 = uStack_98;
    local_200 = local_a0;
    uStack_1e8 = uStack_88;
    uStack_1f0 = local_90;
    uStack_1d8 = uStack_78;
    local_1e0 = local_80;
    local_1d0 = local_70;
    if (((local_90 & 0x3000000000000000) != 0x1000000000000000) ||
       ((local_a0 & local_80 & 0x3000000000000000) != 0x3000000000000000)) {
      if (bVar11 && !bVar12) {
        uStack_178 = uStack_98;
        local_180 = local_a0;
        uStack_168 = uStack_88;
        local_170 = local_90;
        uStack_158 = uStack_78;
        local_160 = local_80;
        local_150 = local_70;
        uStack_198 = uStack_b8;
        local_1a0 = local_c0;
        uStack_188 = uStack_a8;
        local_190 = local_b0;
        FUN_1004df8bc(&local_1a0,&local_120);
      }
      else {
        pcVar17 = *(code **)(param_4 + 8);
        uStack_178 = uStack_98;
        local_180 = local_a0;
        uStack_168 = uStack_88;
        local_170 = local_90;
        uStack_158 = uStack_78;
        local_160 = local_80;
        local_150 = local_70;
        uStack_198 = uStack_b8;
        local_1a0 = local_c0;
        uStack_188 = uStack_a8;
        local_190 = local_b0;
        FUN_1004df8bc(&local_1a0,&local_120);
        (*pcVar17)(param_3,param_4);
      }
      uStack_f8 = uStack_98;
      local_100 = local_a0;
      uStack_e8 = uStack_88;
      uStack_f0 = local_90;
      uStack_d8 = uStack_78;
      local_e0 = local_80;
      local_d0 = local_70;
      uStack_118 = uStack_b8;
      local_120 = local_c0;
      uStack_108 = uStack_a8;
      uStack_110 = local_b0;
      FUN_100040bb4(&local_120,&DAT_100aa1ae8,&DAT_1008325b0);
      uStack_158 = param_1[9];
      local_160 = param_1[8];
      uStack_148 = param_1[0xb];
      local_150 = param_1[10];
      uStack_138 = param_1[0xd];
      local_140 = param_1[0xc];
      local_130 = param_1[0xe];
      uStack_198 = param_1[1];
      local_1a0 = *param_1;
      uStack_188 = param_1[3];
      local_190 = param_1[2];
      uStack_178 = param_1[5];
      local_180 = param_1[4];
      uStack_168 = param_1[7];
      local_170 = param_1[6];
      param_1[1] = uVar2;
      *param_1 = uVar1;
      param_1[3] = uVar7;
      param_1[2] = uVar6;
      param_1[5] = uVar8;
      param_1[4] = uVar16;
      param_1[7] = uVar9;
      param_1[6] = uVar18;
      param_1[8] = uVar3;
      param_1[9] = uVar10;
      param_1[10] = uVar19;
      param_1[0xc] = 0x6000000000000000;
      param_1[0xe] = 0;
      puVar14 = &DAT_100aa1988;
      puVar15 = &DAT_100832138;
      goto LAB_1004d7c44;
    }
  }
  uStack_178 = uStack_98;
  local_180 = local_a0;
  uStack_168 = uStack_88;
  local_170 = local_90;
  uStack_158 = uStack_78;
  local_160 = local_80;
  local_150 = local_70;
  uStack_198 = uStack_b8;
  local_1a0 = local_c0;
  uStack_188 = uStack_a8;
  local_190 = local_b0;
  puVar14 = &DAT_100aa1ae8;
  puVar15 = &DAT_1008325b0;
LAB_1004d7c44:
  FUN_100040bb4(&local_1a0,puVar14,puVar15);
  return;
}

