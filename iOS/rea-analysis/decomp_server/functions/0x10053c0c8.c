// rea decompile_all
// name: FUN_10053c0c8
// address: 0x10053c0c8
// body: available
// range: 0x10053c0c8-0x10053c25f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10053c0c8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint unaff_w20;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 local_1f0;
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
  undefined1 local_120;
  undefined1 auStack_118 [40];
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 local_30;
  
  FUN_1000b142c(param_1,auStack_118);
  puVar1 = &DAT_100aaa130;
  FUN_100004bb4(&DAT_100aaa130,&DAT_100836190);
  puVar2 = &local_1e0;
  _swift_dynamicCast(puVar2,auStack_118,puVar1,&DAT_1009d4610,6);
  if ((int)puVar2 == 0) {
    FUN_100541a70(&local_2b0);
    uStack_138 = uStack_208;
    local_140 = local_210;
    uStack_128 = uStack_1f8;
    uStack_130 = uStack_200;
    uStack_178 = uStack_248;
    local_180 = local_250;
    uStack_168 = uStack_238;
    uStack_170 = uStack_240;
    uStack_158 = uStack_228;
    local_160 = local_230;
    uStack_148 = uStack_218;
    uStack_150 = uStack_220;
    uStack_1b8 = uStack_288;
    local_1c0 = local_290;
    uStack_1a8 = uStack_278;
    uStack_1b0 = uStack_280;
    uStack_198 = uStack_268;
    local_1a0 = local_270;
    uStack_188 = uStack_258;
    uStack_190 = uStack_260;
    uStack_1d8 = uStack_2a8;
    local_1e0 = local_2b0;
    uStack_1c8 = uStack_298;
    uStack_1d0 = uStack_2a0;
    uStack_48 = uStack_208;
    local_50 = local_210;
    uStack_38 = uStack_1f8;
    uStack_40 = uStack_200;
    uStack_88 = uStack_248;
    local_90 = local_250;
    uStack_78 = uStack_238;
    uStack_80 = uStack_240;
    uStack_68 = uStack_228;
    local_70 = local_230;
    uStack_58 = uStack_218;
    uStack_60 = uStack_220;
    uStack_c8 = uStack_288;
    local_d0 = local_290;
    uStack_b8 = uStack_278;
    uStack_c0 = uStack_280;
    uStack_a8 = uStack_268;
    local_b0 = local_270;
    uStack_98 = uStack_258;
    uStack_a0 = uStack_260;
    local_120 = local_1f0;
    local_30 = local_1f0;
    uStack_e8 = uStack_2a8;
    local_f0 = local_2b0;
    uStack_d8 = uStack_298;
    uStack_e0 = uStack_2a0;
    FUN_100040bb4(&local_f0,&DAT_100aab508,&DAT_100837c78);
    unaff_w20 = 0;
  }
  else {
    FUN_100008290(&local_1e0);
    uStack_208 = uStack_138;
    local_210 = local_140;
    uStack_1f8 = uStack_128;
    uStack_200 = uStack_130;
    uStack_248 = uStack_178;
    local_250 = local_180;
    uStack_238 = uStack_168;
    uStack_240 = uStack_170;
    uStack_228 = uStack_158;
    local_230 = local_160;
    uStack_218 = uStack_148;
    uStack_220 = uStack_150;
    uStack_288 = uStack_1b8;
    local_290 = local_1c0;
    uStack_278 = uStack_1a8;
    uStack_280 = uStack_1b0;
    uStack_268 = uStack_198;
    local_270 = local_1a0;
    uStack_258 = uStack_188;
    uStack_260 = uStack_190;
    uStack_2a8 = uStack_1d8;
    local_2b0 = local_1e0;
    uStack_298 = uStack_1c8;
    uStack_2a0 = uStack_1d0;
    uStack_48 = uStack_138;
    local_50 = local_140;
    uStack_38 = uStack_128;
    uStack_40 = uStack_130;
    uStack_88 = uStack_178;
    local_90 = local_180;
    uStack_78 = uStack_168;
    uStack_80 = uStack_170;
    uStack_68 = uStack_158;
    local_70 = local_160;
    uStack_58 = uStack_148;
    uStack_60 = uStack_150;
    uStack_c8 = uStack_1b8;
    local_d0 = local_1c0;
    uStack_b8 = uStack_1a8;
    uStack_c0 = uStack_1b0;
    uStack_a8 = uStack_198;
    local_b0 = local_1a0;
    uStack_98 = uStack_188;
    uStack_a0 = uStack_190;
    local_1f0 = local_120;
    local_30 = local_120;
    uStack_e8 = uStack_1d8;
    local_f0 = local_1e0;
    uStack_d8 = uStack_1c8;
    uStack_e0 = uStack_1d0;
    thunk_FUN_1005a54ac();
    FUN_100040bb4(&local_2b0,&DAT_100aab508,&DAT_100837c78);
  }
  return unaff_w20 & 1;
}

