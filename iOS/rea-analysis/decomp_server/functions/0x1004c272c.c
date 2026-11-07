// rea decompile_all
// name: FUN_1004c272c
// address: 0x1004c272c
// body: available
// range: 0x1004c272c-0x1004c289b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004c272c(undefined1 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined1 auStack_2d8 [152];
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
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
  undefined8 local_1b0;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
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
  undefined8 local_110;
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
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  uStack_98 = unaff_x20[0xd];
  local_a0 = unaff_x20[0xc];
  uStack_88 = unaff_x20[0xf];
  uStack_90 = unaff_x20[0xe];
  uStack_78 = unaff_x20[0x11];
  local_80 = unaff_x20[0x10];
  local_70 = unaff_x20[0x12];
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
  FUN_100040934();
  uStack_2e8 = 0xc000000000000000;
  local_2f0 = 0;
  if (iVar1 == 1) {
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0xe000000000000000;
    uVar7 = 1;
  }
  else {
    uStack_2e8 = 0xc000000000000000;
    local_2f0 = 0;
    uStack_138 = uStack_98;
    local_140 = local_a0;
    uStack_128 = uStack_88;
    uStack_130 = uStack_90;
    uStack_118 = uStack_78;
    local_120 = local_80;
    local_110 = local_70;
    uStack_178 = uStack_d8;
    local_180 = local_e0;
    uStack_168 = uStack_c8;
    uStack_170 = uStack_d0;
    uStack_158 = uStack_b8;
    local_160 = local_c0;
    uStack_148 = uStack_a8;
    uStack_150 = uStack_b0;
    uStack_198 = uStack_f8;
    local_1a0 = local_100;
    uStack_188 = uStack_e8;
    uStack_190 = uStack_f0;
    iVar1 = (int)&local_1a0;
    FUN_100040948();
    if (iVar1 == 5) {
      puVar2 = &local_1a0;
      FUN_100040964();
      uVar3 = *(undefined1 *)puVar2;
      uVar4 = puVar2[1];
      uVar7 = *(undefined1 *)(puVar2 + 2);
      uVar5 = puVar2[3];
      uVar6 = puVar2[4];
      uStack_2e8 = puVar2[6];
      local_2f0 = puVar2[5];
      uStack_1d8 = unaff_x20[0xd];
      local_1e0 = unaff_x20[0xc];
      uStack_1c8 = unaff_x20[0xf];
      uStack_1d0 = unaff_x20[0xe];
      uStack_1b8 = unaff_x20[0x11];
      local_1c0 = unaff_x20[0x10];
      local_1b0 = unaff_x20[0x12];
      uStack_218 = unaff_x20[5];
      local_220 = unaff_x20[4];
      uStack_208 = unaff_x20[7];
      uStack_210 = unaff_x20[6];
      uStack_1f8 = unaff_x20[9];
      local_200 = unaff_x20[8];
      uStack_1e8 = unaff_x20[0xb];
      uStack_1f0 = unaff_x20[10];
      uStack_238 = unaff_x20[1];
      local_240 = *unaff_x20;
      uStack_228 = unaff_x20[3];
      uStack_230 = unaff_x20[2];
      FUN_1004df3f8(&local_240,auStack_2d8);
    }
    else {
      uVar3 = 0;
      uVar4 = 0;
      uVar5 = 0;
      uVar6 = 0xe000000000000000;
      uVar7 = 1;
    }
  }
  *param_1 = uVar3;
  *(undefined8 *)(param_1 + 8) = uVar4;
  param_1[0x10] = uVar7;
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  *(undefined8 *)(param_1 + 0x20) = uVar6;
  *(undefined8 *)(param_1 + 0x30) = uStack_2e8;
  *(undefined8 *)(param_1 + 0x28) = local_2f0;
  return;
}

