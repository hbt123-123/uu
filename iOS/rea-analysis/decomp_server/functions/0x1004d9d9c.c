// rea decompile_all
// name: FUN_1004d9d9c
// address: 0x1004d9d9c
// body: available
// range: 0x1004d9d9c-0x1004da0c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004d9fc8) */

void FUN_1004d9d9c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  bool bVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  long unaff_x21;
  code *pcVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 local_200;
  undefined8 uStack_1f8;
  long local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_180;
  undefined8 uStack_178;
  long local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong local_120;
  undefined8 uStack_118;
  ulong local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uVar16 = param_1[0xc];
  uVar14 = param_1[0xe];
  bVar9 = (uVar14 & 0x3000000000000000) == 0;
  bVar10 = uVar16 >> 8 != 0xffffffff;
  puVar11 = param_1;
  if ((!bVar9 || bVar10) && (((uint)(uVar14 >> 0x39) & 0x18 | (uint)(uVar16 >> 0x3d)) == 0x12)) {
    uVar1 = *param_1;
    uVar5 = param_1[1];
    lVar2 = param_1[2];
    uVar6 = param_1[3];
    uVar3 = param_1[4];
    uVar7 = param_1[5];
    uVar4 = param_1[6];
    uVar8 = param_1[7];
    uStack_138 = param_1[9];
    uVar17 = param_1[8];
    uStack_128 = param_1[0xb];
    uStack_130 = param_1[10];
    local_c0 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_f8 = 0;
    local_100 = 0;
    uStack_e8 = 0;
    lStack_f0 = 0;
    local_180 = uVar1;
    uStack_178 = uVar5;
    local_170 = lVar2;
    uStack_168 = uVar6;
    local_160 = uVar3;
    uStack_158 = uVar7;
    local_150 = uVar4;
    uStack_148 = uVar8;
    local_140 = uVar17;
    local_120 = uVar16;
    uStack_118 = param_1[0xd];
    local_110 = uVar14;
    FUN_1004df818(&local_180,&local_200);
    puVar11 = &local_100;
    FUN_100040bb4(puVar11,&DAT_100aa1af0,&DAT_1008325b8);
    local_b0 = uVar1;
    uStack_a8 = uVar5;
    local_a0 = lVar2;
    uStack_98 = uVar6;
    local_90 = uVar3;
    uStack_88 = uVar7;
    local_80 = uVar4;
    uStack_78 = uVar8;
    local_70 = uVar17;
  }
  pcVar15 = *(code **)(param_4 + 0x198);
  FUN_1004e1b6c();
  (*pcVar15)(&local_b0,&DAT_1009cd288,puVar11,param_3,param_4);
  uVar17 = local_70;
  uVar8 = uStack_78;
  uVar7 = local_80;
  uVar6 = uStack_88;
  uVar5 = local_90;
  uVar4 = uStack_98;
  lVar2 = local_a0;
  uVar3 = uStack_a8;
  uVar1 = local_b0;
  if (unaff_x21 == 0) {
    uStack_1f8 = uStack_a8;
    local_200 = local_b0;
    uStack_1e8 = uStack_98;
    local_1f0 = local_a0;
    uStack_1d8 = uStack_88;
    local_1e0 = local_90;
    uStack_1c8 = uStack_78;
    local_1d0 = local_80;
    local_1c0 = local_70;
    if (local_a0 != 0) {
      if (bVar9 && !bVar10) {
        uStack_158 = uStack_88;
        local_160 = local_90;
        uStack_148 = uStack_78;
        local_150 = local_80;
        local_140 = local_70;
        uStack_178 = uStack_a8;
        local_180 = local_b0;
        uStack_168 = uStack_98;
        local_170 = local_a0;
        FUN_1004df92c(&local_180,&local_100);
      }
      else {
        pcVar15 = *(code **)(param_4 + 8);
        uStack_158 = uStack_88;
        local_160 = local_90;
        uStack_148 = uStack_78;
        local_150 = local_80;
        local_140 = local_70;
        uStack_178 = uStack_a8;
        local_180 = local_b0;
        uStack_168 = uStack_98;
        local_170 = local_a0;
        FUN_1004df92c(&local_180,&local_100);
        (*pcVar15)(param_3,param_4);
      }
      uStack_d8 = uStack_88;
      local_e0 = local_90;
      uStack_c8 = uStack_78;
      uStack_d0 = local_80;
      local_c0 = local_70;
      uStack_f8 = uStack_a8;
      local_100 = local_b0;
      uStack_e8 = uStack_98;
      lStack_f0 = local_a0;
      FUN_100040bb4(&local_100,&DAT_100aa1af0,&DAT_1008325b8);
      uStack_138 = param_1[9];
      local_140 = param_1[8];
      uStack_128 = param_1[0xb];
      uStack_130 = param_1[10];
      uStack_118 = param_1[0xd];
      local_120 = param_1[0xc];
      local_110 = param_1[0xe];
      uStack_178 = param_1[1];
      local_180 = *param_1;
      uStack_168 = param_1[3];
      local_170 = param_1[2];
      uStack_158 = param_1[5];
      local_160 = param_1[4];
      uStack_148 = param_1[7];
      local_150 = param_1[6];
      param_1[1] = uVar3;
      *param_1 = uVar1;
      param_1[3] = uVar4;
      param_1[2] = lVar2;
      param_1[5] = uVar6;
      param_1[4] = uVar5;
      param_1[7] = uVar8;
      param_1[6] = uVar7;
      param_1[8] = uVar17;
      param_1[0xc] = 0x4000000000000000;
      param_1[0xe] = 0x2000000000000000;
      puVar12 = &DAT_100aa1988;
      puVar13 = &DAT_100832138;
      goto LAB_1004d9f1c;
    }
  }
  uStack_158 = uStack_88;
  local_160 = local_90;
  uStack_148 = uStack_78;
  local_150 = local_80;
  local_140 = local_70;
  uStack_178 = uStack_a8;
  local_180 = local_b0;
  uStack_168 = uStack_98;
  local_170 = local_a0;
  puVar12 = &DAT_100aa1af0;
  puVar13 = &DAT_1008325b8;
LAB_1004d9f1c:
  FUN_100040bb4(&local_180,puVar12,puVar13);
  return;
}

