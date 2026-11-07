// rea decompile_all
// name: FUN_1004a29c0
// address: 0x1004a29c0
// body: available
// range: 0x1004a29c0-0x1004a2aff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004a29c0(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined1 auStack_288 [136];
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
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 local_180;
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
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 local_f0;
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
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_60;
  
  uStack_78 = unaff_x20[0xd];
  local_80 = unaff_x20[0xc];
  uStack_68 = unaff_x20[0xf];
  uStack_70 = unaff_x20[0xe];
  local_60 = *(undefined1 *)(unaff_x20 + 0x10);
  uStack_b8 = unaff_x20[5];
  local_c0 = unaff_x20[4];
  uStack_a8 = unaff_x20[7];
  uStack_b0 = unaff_x20[6];
  uStack_98 = unaff_x20[9];
  local_a0 = unaff_x20[8];
  uStack_88 = unaff_x20[0xb];
  uStack_90 = unaff_x20[10];
  uStack_d8 = unaff_x20[1];
  local_e0 = *unaff_x20;
  uStack_c8 = unaff_x20[3];
  uStack_d0 = unaff_x20[2];
  iVar1 = (int)&local_e0;
  FUN_1001241c4();
  uStack_298 = 0xc000000000000000;
  local_2a0 = 0;
  if (iVar1 == 1) {
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0xe000000000000000;
    uVar6 = 0xe000000000000000;
  }
  else {
    uStack_298 = 0xc000000000000000;
    local_2a0 = 0;
    uStack_108 = uStack_78;
    local_110 = local_80;
    uStack_f8 = uStack_68;
    uStack_100 = uStack_70;
    local_f0 = local_60;
    uStack_148 = uStack_b8;
    local_150 = local_c0;
    uStack_138 = uStack_a8;
    uStack_140 = uStack_b0;
    uStack_128 = uStack_98;
    local_130 = local_a0;
    uStack_118 = uStack_88;
    uStack_120 = uStack_90;
    uStack_168 = uStack_d8;
    local_170 = local_e0;
    uStack_158 = uStack_c8;
    uStack_160 = uStack_d0;
    iVar1 = (int)&local_170;
    FUN_1001241ec();
    if (iVar1 == 4) {
      puVar2 = &local_170;
      FUN_100124204();
      uVar3 = *puVar2;
      uVar5 = puVar2[1];
      uVar4 = puVar2[2];
      uVar6 = puVar2[3];
      uStack_298 = puVar2[5];
      local_2a0 = puVar2[4];
      uStack_198 = unaff_x20[0xd];
      local_1a0 = unaff_x20[0xc];
      uStack_188 = unaff_x20[0xf];
      uStack_190 = unaff_x20[0xe];
      local_180 = *(undefined1 *)(unaff_x20 + 0x10);
      uStack_1d8 = unaff_x20[5];
      local_1e0 = unaff_x20[4];
      uStack_1c8 = unaff_x20[7];
      uStack_1d0 = unaff_x20[6];
      uStack_1b8 = unaff_x20[9];
      local_1c0 = unaff_x20[8];
      uStack_1a8 = unaff_x20[0xb];
      uStack_1b0 = unaff_x20[10];
      uStack_1f8 = unaff_x20[1];
      local_200 = *unaff_x20;
      uStack_1e8 = unaff_x20[3];
      uStack_1f0 = unaff_x20[2];
      FUN_1004a142c(&local_200,auStack_288);
    }
    else {
      uVar3 = 0;
      uVar4 = 0;
      uVar5 = 0xe000000000000000;
      uVar6 = 0xe000000000000000;
    }
  }
  *param_1 = uVar3;
  param_1[1] = uVar5;
  param_1[2] = uVar4;
  param_1[3] = uVar6;
  param_1[5] = uStack_298;
  param_1[4] = local_2a0;
  return;
}

