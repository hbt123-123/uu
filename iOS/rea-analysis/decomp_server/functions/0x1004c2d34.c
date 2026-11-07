// rea decompile_all
// name: FUN_1004c2d34
// address: 0x1004c2d34
// body: available
// range: 0x1004c2d34-0x1004c2efb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004c2d34(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined1 local_230;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
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
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
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
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  uStack_68 = unaff_x20[0xd];
  local_70 = unaff_x20[0xc];
  uStack_58 = unaff_x20[0xf];
  uStack_60 = unaff_x20[0xe];
  uStack_48 = unaff_x20[0x11];
  local_50 = unaff_x20[0x10];
  local_40 = unaff_x20[0x12];
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
  FUN_100040934();
  if (iVar1 != 1) {
    uStack_108 = uStack_68;
    local_110 = local_70;
    uStack_f8 = uStack_58;
    uStack_100 = uStack_60;
    uStack_e8 = uStack_48;
    local_f0 = local_50;
    local_e0 = local_40;
    uStack_148 = uStack_a8;
    local_150 = local_b0;
    uStack_138 = uStack_98;
    uStack_140 = uStack_a0;
    uStack_128 = uStack_88;
    local_130 = local_90;
    uStack_118 = uStack_78;
    uStack_120 = uStack_80;
    uStack_168 = uStack_c8;
    local_170 = local_d0;
    uStack_158 = uStack_b8;
    uStack_160 = uStack_c0;
    iVar1 = (int)&local_170;
    FUN_100040948();
    if (iVar1 == 6) {
      puVar2 = &local_170;
      FUN_100040964();
      uVar4 = puVar2[0x12];
      uVar3 = puVar2[0x11];
      local_180 = unaff_x20[0x12];
      uStack_198 = unaff_x20[0xf];
      local_1a0 = unaff_x20[0xe];
      uStack_188 = unaff_x20[0x11];
      uStack_190 = unaff_x20[0x10];
      uStack_1a8 = unaff_x20[0xd];
      uStack_1b0 = unaff_x20[0xc];
      uStack_1e8 = unaff_x20[5];
      local_1f0 = unaff_x20[4];
      uStack_1d8 = unaff_x20[7];
      uStack_1e0 = unaff_x20[6];
      uStack_1c8 = unaff_x20[9];
      local_1d0 = unaff_x20[8];
      uStack_1b8 = unaff_x20[0xb];
      local_1c0 = unaff_x20[10];
      uStack_208 = unaff_x20[1];
      local_210 = *unaff_x20;
      uStack_1f8 = unaff_x20[3];
      uStack_200 = unaff_x20[2];
      FUN_1004df3f8(&local_210,&local_2b0);
      uStack_258 = puVar2[0xb];
      local_260 = puVar2[10];
      uStack_248 = puVar2[0xd];
      local_250 = puVar2[0xc];
      uStack_238 = puVar2[0xf];
      local_240 = puVar2[0xe];
      local_230 = *(undefined1 *)(puVar2 + 0x10);
      uStack_298 = puVar2[3];
      local_2a0 = puVar2[2];
      uStack_288 = puVar2[5];
      local_290 = puVar2[4];
      uStack_278 = puVar2[7];
      local_280 = puVar2[6];
      uStack_268 = puVar2[9];
      local_270 = puVar2[8];
      uStack_2a8 = puVar2[1];
      local_2b0 = *puVar2;
      goto LAB_1004c2ea4;
    }
  }
  FUN_10017d248(&local_170);
  uStack_248 = uStack_108;
  local_250 = local_110;
  uStack_238 = uStack_f8;
  local_240 = uStack_100;
  local_230 = (undefined1)local_f0;
  uStack_288 = uStack_148;
  local_290 = local_150;
  uStack_278 = uStack_138;
  local_280 = uStack_140;
  uStack_268 = uStack_128;
  local_270 = local_130;
  uStack_258 = uStack_118;
  local_260 = uStack_120;
  uStack_2a8 = uStack_168;
  local_2b0 = local_170;
  uStack_298 = uStack_158;
  local_2a0 = uStack_160;
  uVar4 = 0xc000000000000000;
  uVar3 = 0;
LAB_1004c2ea4:
  local_f0 = CONCAT71(local_f0._1_7_,local_230);
  param_1[0xd] = uStack_248;
  param_1[0xc] = local_250;
  param_1[0xf] = uStack_238;
  param_1[0xe] = local_240;
  param_1[5] = uStack_288;
  param_1[4] = local_290;
  param_1[7] = uStack_278;
  param_1[6] = local_280;
  param_1[9] = uStack_268;
  param_1[8] = local_270;
  param_1[0xb] = uStack_258;
  param_1[10] = local_260;
  param_1[1] = uStack_2a8;
  *param_1 = local_2b0;
  param_1[3] = uStack_298;
  param_1[2] = local_2a0;
  param_1[0x10] = local_f0;
  param_1[0x12] = uVar4;
  param_1[0x11] = uVar3;
  return;
}

