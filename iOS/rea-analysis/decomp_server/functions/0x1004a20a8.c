// rea decompile_all
// name: FUN_1004a20a8
// address: 0x1004a20a8
// body: available
// range: 0x1004a20a8-0x1004a21db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004a20a8(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_278 [136];
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 local_50;
  
  uStack_68 = unaff_x20[0xd];
  local_70 = unaff_x20[0xc];
  uStack_58 = unaff_x20[0xf];
  uStack_60 = unaff_x20[0xe];
  local_50 = *(undefined1 *)(unaff_x20 + 0x10);
  uStack_a8 = unaff_x20[5];
  local_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_88 = unaff_x20[9];
  local_90 = unaff_x20[8];
  uStack_78 = unaff_x20[0xb];
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  local_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  iVar1 = (int)&local_d0;
  FUN_1001241c4();
  uVar5 = 0xc000000000000000;
  uVar4 = 0;
  uVar6 = 0;
  uVar7 = 0;
  if (iVar1 == 1) {
    uVar3 = 0xf000000000000000;
    uVar8 = 0;
    uVar9 = 0;
  }
  else {
    uStack_f8 = uStack_68;
    local_100 = local_70;
    uStack_e8 = uStack_58;
    uStack_f0 = uStack_60;
    local_e0 = local_50;
    uStack_138 = uStack_a8;
    local_140 = local_b0;
    uStack_128 = uStack_98;
    uStack_130 = uStack_a0;
    uStack_118 = uStack_88;
    local_120 = local_90;
    uStack_108 = uStack_78;
    uStack_110 = uStack_80;
    uStack_158 = uStack_c8;
    local_160 = local_d0;
    uStack_148 = uStack_b8;
    uStack_150 = uStack_c0;
    iVar1 = (int)&local_160;
    FUN_1001241ec();
    if (iVar1 == 2) {
      puVar2 = &local_160;
      FUN_100124204();
      uVar7 = puVar2[1];
      uVar6 = *puVar2;
      uVar5 = puVar2[3];
      uVar4 = puVar2[2];
      uVar9 = puVar2[5];
      uVar8 = puVar2[4];
      uVar3 = puVar2[6];
      uStack_1e8 = unaff_x20[1];
      local_1f0 = *unaff_x20;
      uStack_1d8 = unaff_x20[3];
      uStack_1e0 = unaff_x20[2];
      uStack_188 = unaff_x20[0xd];
      local_190 = unaff_x20[0xc];
      uStack_178 = unaff_x20[0xf];
      uStack_180 = unaff_x20[0xe];
      local_170 = *(undefined1 *)(unaff_x20 + 0x10);
      uStack_1a8 = unaff_x20[9];
      local_1b0 = unaff_x20[8];
      uStack_198 = unaff_x20[0xb];
      uStack_1a0 = unaff_x20[10];
      uStack_1c8 = unaff_x20[5];
      local_1d0 = unaff_x20[4];
      uStack_1b8 = unaff_x20[7];
      uStack_1c0 = unaff_x20[6];
      FUN_1004a142c(&local_1f0,auStack_278);
    }
    else {
      uVar3 = 0xf000000000000000;
      uVar8 = 0;
      uVar9 = 0;
      uVar5 = 0xc000000000000000;
      uVar4 = 0;
      uVar6 = 0;
      uVar7 = 0;
    }
  }
  param_1[1] = uVar7;
  *param_1 = uVar6;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  param_1[5] = uVar9;
  param_1[4] = uVar8;
  param_1[6] = uVar3;
  return;
}

