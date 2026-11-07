// rea decompile_all
// name: FUN_10053b858
// address: 0x10053b858
// body: available
// range: 0x10053b858-0x10053b9bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10053b858(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint unaff_w20;
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
  undefined8 uStack_1a0;
  undefined8 uStack_18e;
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
  undefined8 uStack_fe;
  undefined1 auStack_e8 [40];
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
  undefined8 uStack_50;
  undefined8 uStack_3e;
  
  FUN_1000b142c(param_1,auStack_e8);
  puVar1 = &DAT_100aaa130;
  FUN_100004bb4(&DAT_100aaa130,&DAT_100836190);
  puVar2 = &local_180;
  _swift_dynamicCast(puVar2,auStack_e8,puVar1,&DAT_1009d4e68,6);
  if ((int)puVar2 == 0) {
    FUN_100541a24(&local_210);
    uStack_118 = uStack_1a8;
    local_120 = local_1b0;
    uStack_110 = uStack_1a0;
    uStack_fe = uStack_18e;
    uStack_158 = uStack_1e8;
    local_160 = local_1f0;
    uStack_148 = uStack_1d8;
    uStack_150 = uStack_1e0;
    uStack_138 = uStack_1c8;
    local_140 = local_1d0;
    uStack_128 = uStack_1b8;
    uStack_130 = uStack_1c0;
    uStack_178 = uStack_208;
    local_180 = local_210;
    uStack_168 = uStack_1f8;
    uStack_170 = uStack_200;
    uStack_58 = uStack_1a8;
    local_60 = local_1b0;
    uStack_50 = uStack_1a0;
    uStack_3e = uStack_18e;
    uStack_98 = uStack_1e8;
    local_a0 = local_1f0;
    uStack_88 = uStack_1d8;
    uStack_90 = uStack_1e0;
    uStack_78 = uStack_1c8;
    local_80 = local_1d0;
    uStack_68 = uStack_1b8;
    uStack_70 = uStack_1c0;
    uStack_b8 = uStack_208;
    local_c0 = local_210;
    uStack_a8 = uStack_1f8;
    uStack_b0 = uStack_200;
    FUN_100040bb4(&local_c0,&DAT_100aab4d0,&DAT_100837c40);
    unaff_w20 = 0;
  }
  else {
    FUN_100008290(&local_180);
    uStack_1a8 = uStack_118;
    local_1b0 = local_120;
    uStack_1a0 = uStack_110;
    uStack_18e = uStack_fe;
    uStack_1e8 = uStack_158;
    local_1f0 = local_160;
    uStack_1d8 = uStack_148;
    uStack_1e0 = uStack_150;
    uStack_1c8 = uStack_138;
    local_1d0 = local_140;
    uStack_1b8 = uStack_128;
    uStack_1c0 = uStack_130;
    uStack_208 = uStack_178;
    local_210 = local_180;
    uStack_1f8 = uStack_168;
    uStack_200 = uStack_170;
    uStack_58 = uStack_118;
    local_60 = local_120;
    uStack_50 = uStack_110;
    uStack_3e = uStack_fe;
    uStack_98 = uStack_158;
    local_a0 = local_160;
    uStack_88 = uStack_148;
    uStack_90 = uStack_150;
    uStack_78 = uStack_138;
    local_80 = local_140;
    uStack_68 = uStack_128;
    uStack_70 = uStack_130;
    uStack_b8 = uStack_178;
    local_c0 = local_180;
    uStack_a8 = uStack_168;
    uStack_b0 = uStack_170;
    thunk_FUN_1005a4cf4();
    FUN_100040bb4(&local_210,&DAT_100aab4d0,&DAT_100837c40);
  }
  return unaff_w20 & 1;
}

