// rea decompile_all
// name: FUN_1004c6ec0
// address: 0x1004c6ec0
// body: available
// range: 0x1004c6ec0-0x1004c6fe7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1004c6ec0(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_2c8 [152];
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
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
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
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
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
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
  undefined8 local_60;
  
  uStack_88 = unaff_x20[0xd];
  local_90 = unaff_x20[0xc];
  uStack_78 = unaff_x20[0xf];
  uStack_80 = unaff_x20[0xe];
  uStack_68 = unaff_x20[0x11];
  local_70 = unaff_x20[0x10];
  local_60 = unaff_x20[0x12];
  uStack_c8 = unaff_x20[5];
  local_d0 = unaff_x20[4];
  uStack_b8 = unaff_x20[7];
  uStack_c0 = unaff_x20[6];
  uStack_a8 = unaff_x20[9];
  local_b0 = unaff_x20[8];
  uStack_98 = unaff_x20[0xb];
  uStack_a0 = unaff_x20[10];
  uStack_e8 = unaff_x20[1];
  local_f0 = *unaff_x20;
  uStack_d8 = unaff_x20[3];
  uStack_e0 = unaff_x20[2];
  iVar1 = (int)&local_f0;
  FUN_100040934();
  if (iVar1 != 1) {
    uStack_128 = uStack_88;
    local_130 = local_90;
    uStack_118 = uStack_78;
    uStack_120 = uStack_80;
    uStack_108 = uStack_68;
    local_110 = local_70;
    local_100 = local_60;
    uStack_168 = uStack_c8;
    local_170 = local_d0;
    uStack_158 = uStack_b8;
    uStack_160 = uStack_c0;
    uStack_148 = uStack_a8;
    local_150 = local_b0;
    uStack_138 = uStack_98;
    uStack_140 = uStack_a0;
    uStack_188 = uStack_e8;
    local_190 = local_f0;
    uStack_178 = uStack_d8;
    uStack_180 = uStack_e0;
    iVar1 = (int)&local_190;
    FUN_100040948();
    if (iVar1 == 0x14) {
      puVar2 = &local_190;
      FUN_100040964();
      uVar3 = *puVar2;
      uStack_1c8 = unaff_x20[0xd];
      local_1d0 = unaff_x20[0xc];
      uStack_1b8 = unaff_x20[0xf];
      uStack_1c0 = unaff_x20[0xe];
      uStack_1a8 = unaff_x20[0x11];
      local_1b0 = unaff_x20[0x10];
      local_1a0 = unaff_x20[0x12];
      uStack_208 = unaff_x20[5];
      local_210 = unaff_x20[4];
      uStack_1f8 = unaff_x20[7];
      uStack_200 = unaff_x20[6];
      uStack_1e8 = unaff_x20[9];
      local_1f0 = unaff_x20[8];
      uStack_1d8 = unaff_x20[0xb];
      uStack_1e0 = unaff_x20[10];
      uStack_228 = unaff_x20[1];
      local_230 = *unaff_x20;
      uStack_218 = unaff_x20[3];
      uStack_220 = unaff_x20[2];
      FUN_1004df3f8(&local_230,auStack_2c8);
      return uVar3;
    }
  }
  return 0;
}

