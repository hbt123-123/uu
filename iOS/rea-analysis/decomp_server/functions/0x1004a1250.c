// rea decompile_all
// name: FUN_1004a1250
// address: 0x1004a1250
// body: available
// range: 0x1004a1250-0x1004a142b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004a1250(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auStack_2a8 [136];
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 local_1a0;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 local_80;
  
  uStack_98 = unaff_x20[0xd];
  local_a0 = unaff_x20[0xc];
  uStack_88 = unaff_x20[0xf];
  uStack_90 = unaff_x20[0xe];
  local_80 = *(undefined1 *)(unaff_x20 + 0x10);
  uStack_d8 = unaff_x20[5];
  local_e0 = unaff_x20[4];
  uStack_c8 = unaff_x20[7];
  uStack_d0 = unaff_x20[6];
  uStack_b8 = unaff_x20[9];
  local_c0 = unaff_x20[8];
  uStack_a8 = unaff_x20[0xb];
  uStack_b0 = unaff_x20[10];
  uStack_f8 = unaff_x20[1];
  local_100 = *unaff_x20;
  uStack_e8 = unaff_x20[3];
  uStack_f0 = unaff_x20[2];
  iVar1 = (int)&local_100;
  FUN_1001241c4();
  uVar18 = 0xc000000000000000;
  uVar15 = 0;
  uVar13 = 0;
  uVar16 = 0;
  if (iVar1 == 1) {
    uVar10 = 0;
    uVar9 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0xf000000000000000;
    uVar11 = 1;
    uVar6 = 0xe000000000000000;
    uVar8 = 0xe000000000000000;
    uVar7 = 0xe000000000000000;
    puVar12 = PTR___swiftEmptyArrayStorage_100995ea0;
    uVar14 = uVar15;
    uVar17 = uVar18;
  }
  else {
    uStack_128 = uStack_98;
    local_130 = local_a0;
    uStack_118 = uStack_88;
    uStack_120 = uStack_90;
    local_110 = local_80;
    uStack_168 = uStack_d8;
    local_170 = local_e0;
    uStack_158 = uStack_c8;
    uStack_160 = uStack_d0;
    uStack_148 = uStack_b8;
    local_150 = local_c0;
    uStack_138 = uStack_a8;
    uStack_140 = uStack_b0;
    uStack_188 = uStack_f8;
    local_190 = local_100;
    uStack_178 = uStack_e8;
    uStack_180 = uStack_f0;
    iVar1 = (int)&local_190;
    FUN_1001241ec();
    if (iVar1 == 0) {
      puVar2 = &local_190;
      FUN_100124204();
      uVar16 = puVar2[0xe];
      uVar13 = puVar2[0xd];
      uVar3 = puVar2[0xf];
      uVar17 = puVar2[0xc];
      uVar14 = puVar2[0xb];
      uVar4 = puVar2[9];
      uVar7 = puVar2[10];
      uVar18 = puVar2[8];
      uVar15 = puVar2[7];
      uVar5 = puVar2[5];
      uVar8 = puVar2[6];
      uVar11 = *(undefined1 *)(puVar2 + 4);
      puVar12 = (undefined *)puVar2[2];
      uVar9 = puVar2[3];
      uVar10 = *puVar2;
      uVar6 = puVar2[1];
      local_1a0 = *(undefined1 *)(unaff_x20 + 0x10);
      uStack_1b8 = unaff_x20[0xd];
      local_1c0 = unaff_x20[0xc];
      uStack_1a8 = unaff_x20[0xf];
      uStack_1b0 = unaff_x20[0xe];
      uStack_1f8 = unaff_x20[5];
      local_200 = unaff_x20[4];
      uStack_1e8 = unaff_x20[7];
      uStack_1f0 = unaff_x20[6];
      uStack_218 = unaff_x20[1];
      local_220 = *unaff_x20;
      uStack_208 = unaff_x20[3];
      uStack_210 = unaff_x20[2];
      uStack_1d8 = unaff_x20[9];
      local_1e0 = unaff_x20[8];
      uStack_1c8 = unaff_x20[0xb];
      uStack_1d0 = unaff_x20[10];
      FUN_1004a142c(&local_220,auStack_2a8);
    }
    else {
      uVar10 = 0;
      uVar9 = 0;
      uVar5 = 0;
      uVar4 = 0;
      uVar3 = 0xf000000000000000;
      uVar11 = 1;
      uVar6 = 0xe000000000000000;
      uVar8 = 0xe000000000000000;
      uVar7 = 0xe000000000000000;
      uVar18 = 0xc000000000000000;
      uVar15 = 0;
      uVar13 = 0;
      uVar16 = 0;
      puVar12 = PTR___swiftEmptyArrayStorage_100995ea0;
      uVar14 = uVar15;
      uVar17 = uVar18;
    }
  }
  *param_1 = uVar10;
  param_1[1] = uVar6;
  param_1[2] = puVar12;
  param_1[3] = uVar9;
  *(undefined1 *)(param_1 + 4) = uVar11;
  param_1[5] = uVar5;
  param_1[6] = uVar8;
  param_1[8] = uVar18;
  param_1[7] = uVar15;
  param_1[9] = uVar4;
  param_1[10] = uVar7;
  param_1[0xc] = uVar17;
  param_1[0xb] = uVar14;
  param_1[0xe] = uVar16;
  param_1[0xd] = uVar13;
  param_1[0xf] = uVar3;
  return;
}

