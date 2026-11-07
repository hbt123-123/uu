// rea decompile_all
// name: FUN_1004c4f08
// address: 0x1004c4f08
// body: available
// range: 0x1004c4f08-0x1004c5027 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1004c4f08(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_2b8 [152];
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
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
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
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
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
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  uStack_78 = unaff_x20[0xd];
  local_80 = unaff_x20[0xc];
  uStack_68 = unaff_x20[0xf];
  uStack_70 = unaff_x20[0xe];
  uStack_58 = unaff_x20[0x11];
  local_60 = unaff_x20[0x10];
  local_50 = unaff_x20[0x12];
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
  FUN_100040934();
  puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (iVar1 != 1) {
    uStack_118 = uStack_78;
    local_120 = local_80;
    uStack_108 = uStack_68;
    uStack_110 = uStack_70;
    uStack_f8 = uStack_58;
    local_100 = local_60;
    local_f0 = local_50;
    uStack_158 = uStack_b8;
    local_160 = local_c0;
    uStack_148 = uStack_a8;
    uStack_150 = uStack_b0;
    uStack_138 = uStack_98;
    local_140 = local_a0;
    uStack_128 = uStack_88;
    uStack_130 = uStack_90;
    uStack_178 = uStack_d8;
    local_180 = local_e0;
    uStack_168 = uStack_c8;
    uStack_170 = uStack_d0;
    iVar1 = (int)&local_180;
    FUN_100040948();
    puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (iVar1 == 0xd) {
      puVar2 = &local_180;
      FUN_100040964();
      puVar3 = (undefined *)*puVar2;
      uStack_1b8 = unaff_x20[0xd];
      local_1c0 = unaff_x20[0xc];
      uStack_1a8 = unaff_x20[0xf];
      uStack_1b0 = unaff_x20[0xe];
      uStack_198 = unaff_x20[0x11];
      local_1a0 = unaff_x20[0x10];
      local_190 = unaff_x20[0x12];
      uStack_1f8 = unaff_x20[5];
      local_200 = unaff_x20[4];
      uStack_1e8 = unaff_x20[7];
      uStack_1f0 = unaff_x20[6];
      uStack_1d8 = unaff_x20[9];
      local_1e0 = unaff_x20[8];
      uStack_1c8 = unaff_x20[0xb];
      uStack_1d0 = unaff_x20[10];
      uStack_218 = unaff_x20[1];
      local_220 = *unaff_x20;
      uStack_208 = unaff_x20[3];
      uStack_210 = unaff_x20[2];
      FUN_1004df3f8(&local_220,auStack_2b8);
    }
  }
  return puVar3;
}

