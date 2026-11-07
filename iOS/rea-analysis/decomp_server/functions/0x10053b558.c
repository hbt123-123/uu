// rea decompile_all
// name: FUN_10053b558
// address: 0x10053b558
// body: available
// range: 0x10053b558-0x10053b667 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10053b558(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint unaff_w20;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
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
  undefined8 local_150;
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
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined1 auStack_c8 [40];
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
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  FUN_1000b142c(param_1,auStack_c8);
  puVar1 = &DAT_100aaa130;
  FUN_100004bb4(&DAT_100aaa130,&DAT_100836190);
  puVar2 = &local_140;
  _swift_dynamicCast(puVar2,auStack_c8,puVar1,&DAT_1009d26e0,6);
  if ((int)puVar2 == 0) {
    uStack_138 = 0;
    local_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    local_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    local_d0 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    local_50 = 0;
    uStack_38 = 0;
    local_40 = 0;
    local_30 = 0;
    FUN_100040bb4(&local_a0,&DAT_100aab518,&DAT_100837c88);
    unaff_w20 = 0;
  }
  else {
    uStack_178 = uStack_f8;
    local_180 = local_100;
    uStack_168 = uStack_e8;
    uStack_170 = uStack_f0;
    uStack_158 = uStack_d8;
    local_160 = local_e0;
    local_150 = local_d0;
    uStack_1b8 = uStack_138;
    local_1c0 = local_140;
    uStack_1a8 = uStack_128;
    uStack_1b0 = uStack_130;
    uStack_198 = uStack_118;
    local_1a0 = local_120;
    uStack_188 = uStack_108;
    uStack_190 = uStack_110;
    uStack_98 = uStack_138;
    local_a0 = local_140;
    uStack_88 = uStack_128;
    uStack_90 = uStack_130;
    uStack_78 = uStack_118;
    local_80 = local_120;
    uStack_68 = uStack_108;
    uStack_70 = uStack_110;
    local_30 = local_d0;
    uStack_48 = uStack_e8;
    local_50 = uStack_f0;
    uStack_38 = uStack_d8;
    local_40 = local_e0;
    uStack_58 = uStack_f8;
    local_60 = local_100;
    thunk_FUN_100569208();
    FUN_100040bb4(&local_1c0,&DAT_100aab518,&DAT_100837c88);
  }
  return unaff_w20 & 1;
}

