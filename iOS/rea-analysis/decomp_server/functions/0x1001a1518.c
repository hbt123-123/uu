// rea decompile_all
// name: FUN_1001a1518
// address: 0x1001a1518
// body: available
// range: 0x1001a1518-0x1001a173f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001a1518(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_3d0 [16];
  undefined4 local_3c0;
  undefined4 uStack_3bc;
  undefined1 auStack_3b0 [104];
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 local_270;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
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
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 local_130;
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
  
  uVar1 = param_1;
  FUN_10047466c();
  uStack_1a8 = *(undefined8 *)(unaff_x20 + 0x68);
  local_1b0 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_208 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_210 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_1b8 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_1c0 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_218 = *(undefined8 *)(unaff_x20 + 0x68);
  local_220 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_258 = *(undefined8 *)(unaff_x20 + 0x28);
  local_260 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_248 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_250 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_1e8 = *(undefined8 *)(unaff_x20 + 0x28);
  local_1f0 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_1d8 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_1e0 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_1c8 = *(undefined8 *)(unaff_x20 + 0x48);
  local_1d0 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_228 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_230 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_238 = *(undefined8 *)(unaff_x20 + 0x48);
  local_240 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_198 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_1a0 = *(undefined8 *)(unaff_x20 + 0x70);
  local_200 = *(undefined8 *)(unaff_x20 + 0x80);
  local_190 = *(undefined8 *)(unaff_x20 + 0x80);
  local_348 = uVar1;
  uStack_340 = param_2;
  local_338 = param_3;
  FUN_1001a3868(&local_1f0);
  uStack_78 = uStack_148;
  local_80 = local_150;
  uStack_68 = uStack_138;
  uStack_70 = uStack_140;
  local_60 = local_130;
  uStack_b8 = uStack_188;
  local_c0 = local_190;
  uStack_a8 = uStack_178;
  uStack_b0 = uStack_180;
  uStack_98 = uStack_168;
  local_a0 = local_170;
  uStack_88 = uStack_158;
  uStack_90 = uStack_160;
  uStack_f8 = uStack_1c8;
  local_100 = local_1d0;
  uStack_e8 = uStack_1b8;
  uStack_f0 = uStack_1c0;
  uStack_d8 = uStack_1a8;
  local_e0 = local_1b0;
  uStack_c8 = uStack_198;
  uStack_d0 = uStack_1a0;
  uStack_118 = uStack_1e8;
  local_120 = local_1f0;
  uStack_108 = uStack_1d8;
  uStack_110 = uStack_1e0;
  FUN_100008290(&local_120);
  uStack_288 = uStack_78;
  local_290 = local_80;
  uStack_278 = uStack_68;
  uStack_280 = uStack_70;
  local_270 = local_60;
  uStack_2c8 = uStack_b8;
  local_2d0 = local_c0;
  uStack_2b8 = uStack_a8;
  uStack_2c0 = uStack_b0;
  uStack_2a8 = uStack_98;
  local_2b0 = local_a0;
  uStack_298 = uStack_88;
  uStack_2a0 = uStack_90;
  uStack_308 = uStack_f8;
  local_310 = local_100;
  uStack_2f8 = uStack_e8;
  uStack_300 = uStack_f0;
  uStack_2e8 = uStack_d8;
  local_2f0 = local_e0;
  uStack_2d8 = uStack_c8;
  uStack_2e0 = uStack_d0;
  uStack_328 = uStack_118;
  local_330 = local_120;
  uStack_318 = uStack_108;
  uStack_320 = uStack_110;
  FUN_1001a37f8(&local_260,auStack_3b0);
  FUN_100467dcc(&local_330);
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  uVar1 = param_1;
  FUN_1001ad794(param_1,local_348,uStack_340,local_338,1);
  uVar2 = 0;
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)(uVar2);
  local_3c0 = (undefined4)param_1;
  uStack_3bc = (undefined4)uVar1;
  FUN_1003fb48c(FUN_1001a3874,auStack_3d0,0xd00000000000009e,0x8000000100885b90,0xd000000000000015,
                0x800000010089a270,0x6c,0);
  uVar1 = local_338;
  FUN_100006cdc(local_348,uStack_340);
  _swift_release(uVar1);
  return;
}

