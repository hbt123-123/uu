// rea decompile_all
// name: FUN_10053b234
// address: 0x10053b234
// body: available
// range: 0x10053b234-0x10053b34b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10053b234(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint unaff_w20;
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
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [40];
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_1000b142c(param_1,auStack_d8);
  puVar1 = &DAT_100aaa130;
  FUN_100004bb4(&DAT_100aaa130,&DAT_100836190);
  puVar2 = &local_160;
  _swift_dynamicCast(puVar2,auStack_d8,puVar1,&DAT_1009d7670,6);
  if ((int)puVar2 == 0) {
    FUN_1004c0d60(&local_1e0);
    uStack_118 = uStack_198;
    local_120 = local_1a0;
    uStack_108 = uStack_188;
    uStack_110 = uStack_190;
    uStack_f8 = uStack_178;
    local_100 = local_180;
    uStack_e8 = uStack_168;
    uStack_f0 = uStack_170;
    uStack_158 = uStack_1d8;
    local_160 = local_1e0;
    uStack_148 = uStack_1c8;
    uStack_150 = uStack_1d0;
    uStack_138 = uStack_1b8;
    local_140 = local_1c0;
    uStack_128 = uStack_1a8;
    uStack_130 = uStack_1b0;
    uStack_a8 = uStack_1d8;
    local_b0 = local_1e0;
    uStack_98 = uStack_1c8;
    uStack_a0 = uStack_1d0;
    uStack_88 = uStack_1b8;
    local_90 = local_1c0;
    uStack_78 = uStack_1a8;
    uStack_80 = uStack_1b0;
    uStack_68 = uStack_198;
    local_70 = local_1a0;
    uStack_58 = uStack_188;
    uStack_60 = uStack_190;
    uStack_48 = uStack_178;
    local_50 = local_180;
    uStack_38 = uStack_168;
    uStack_40 = uStack_170;
    FUN_100040bb4(&local_b0,&DAT_100aab478,&DAT_100837be8);
    unaff_w20 = 0;
  }
  else {
    FUN_100008290(&local_160);
    uStack_198 = uStack_118;
    local_1a0 = local_120;
    uStack_188 = uStack_108;
    uStack_190 = uStack_110;
    uStack_178 = uStack_f8;
    local_180 = local_100;
    uStack_168 = uStack_e8;
    uStack_170 = uStack_f0;
    uStack_1d8 = uStack_158;
    local_1e0 = local_160;
    uStack_1c8 = uStack_148;
    uStack_1d0 = uStack_150;
    uStack_1b8 = uStack_138;
    local_1c0 = local_140;
    uStack_1a8 = uStack_128;
    uStack_1b0 = uStack_130;
    uStack_a8 = uStack_158;
    local_b0 = local_160;
    uStack_98 = uStack_148;
    uStack_a0 = uStack_150;
    uStack_88 = uStack_138;
    local_90 = local_140;
    uStack_78 = uStack_128;
    uStack_80 = uStack_130;
    uStack_68 = uStack_118;
    local_70 = local_120;
    uStack_58 = uStack_108;
    uStack_60 = uStack_110;
    uStack_48 = uStack_f8;
    local_50 = local_100;
    uStack_38 = uStack_e8;
    uStack_40 = uStack_f0;
    thunk_FUN_1005c4240();
    FUN_100040bb4(&local_1e0,&DAT_100aab478,&DAT_100837be8);
  }
  return unaff_w20 & 1;
}

