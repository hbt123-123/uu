// rea decompile_all
// name: FUN_1000fc810
// address: 0x1000fc810
// body: available
// range: 0x1000fc810-0x1000fcad3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000fc810(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_390 [16];
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined1 local_360;
  undefined2 local_35b;
  undefined1 local_359;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long local_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined1 local_280;
  undefined8 local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined4 local_258;
  uint uStack_254;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  long local_220;
  undefined8 uStack_218;
  undefined8 local_210;
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
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 local_180;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long local_150;
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
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined2 local_9f;
  undefined1 local_9d;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  uVar1 = param_1;
  uVar4 = param_2;
  FUN_10047466c();
  local_360 = 1;
  local_170 = 0;
  uStack_168 = 0xe000000000000000;
  local_240 = CONCAT71(local_240._1_7_,(char)param_2);
  local_358 = uVar1;
  uStack_350 = uVar4;
  local_348 = param_3;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_240,&local_170,&DAT_10099cb68,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  _swift_bridgeObjectRelease(0xe000000000000000);
  uVar4 = uStack_168;
  uVar1 = local_170;
  local_278 = 1;
  uStack_270 = CONCAT31(uStack_270._1_3_,local_360);
  uStack_26c = 0xffffffff;
  local_268 = local_170;
  uStack_260 = uStack_168;
  local_258 = 0;
  uStack_368 = 0xc000000000000000;
  local_370 = 0;
  uStack_248 = 0xc000000000000000;
  local_250 = 0;
  local_220 = (ulong)uStack_254 << 0x20;
  uStack_228 = uStack_168;
  local_230 = local_170;
  uStack_218 = 0;
  local_210 = 0xc000000000000000;
  uStack_238 = CONCAT44(0xffffffff,uStack_270);
  local_240 = 1;
  FUN_1000fcad4(&local_240);
  uStack_c8 = uStack_198;
  local_d0 = local_1a0;
  uStack_b8 = uStack_188;
  uStack_c0 = uStack_190;
  local_b0 = local_180;
  uStack_108 = uStack_1d8;
  local_110 = local_1e0;
  uStack_f8 = uStack_1c8;
  uStack_100 = uStack_1d0;
  uStack_e8 = uStack_1b8;
  local_f0 = local_1c0;
  uStack_d8 = uStack_1a8;
  uStack_e0 = uStack_1b0;
  uStack_148 = uStack_218;
  local_150 = local_220;
  uStack_138 = uStack_208;
  uStack_140 = local_210;
  uStack_128 = uStack_1f8;
  local_130 = local_200;
  uStack_118 = uStack_1e8;
  uStack_120 = uStack_1f0;
  uStack_168 = uStack_238;
  local_170 = local_240;
  uStack_158 = uStack_228;
  uStack_160 = local_230;
  FUN_100008290(&local_170);
  uStack_298 = uStack_c8;
  local_2a0 = local_d0;
  uStack_288 = uStack_b8;
  uStack_290 = uStack_c0;
  local_280 = local_b0;
  uStack_2d8 = uStack_108;
  local_2e0 = local_110;
  uStack_2c8 = uStack_f8;
  uStack_2d0 = uStack_100;
  uStack_2b8 = uStack_e8;
  local_2c0 = local_f0;
  uStack_2a8 = uStack_d8;
  uStack_2b0 = uStack_e0;
  uStack_318 = uStack_148;
  local_320 = local_150;
  uStack_308 = uStack_138;
  uStack_310 = uStack_140;
  uStack_2f8 = uStack_128;
  local_300 = local_130;
  uStack_2e8 = uStack_118;
  uStack_2f0 = uStack_120;
  uStack_338 = uStack_168;
  local_340 = local_170;
  uStack_328 = uStack_158;
  uStack_330 = uStack_160;
  FUN_1000fcae0(&local_278,&local_a8);
  FUN_100467dcc(&local_340);
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  uVar2 = param_1;
  FUN_1001ad794(param_1,local_358,uStack_350,local_348,1);
  uVar3 = 0;
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)(uVar3);
  local_380 = (undefined4)param_1;
  uStack_37c = (undefined4)uVar2;
  FUN_1003fb48c(FUN_1000fcb1c,auStack_390,0xd0000000000000a2,0x80000001008898a0,0xd000000000000025,
                0x8000000100889ac0,0x195,0);
  uVar2 = local_348;
  FUN_100006cdc(local_358,uStack_350);
  _swift_release(uVar2);
  local_a8 = 1;
  local_a0 = local_360;
  local_9f = local_35b;
  local_9d = local_359;
  local_9c = 0xffffffff;
  local_98 = uVar1;
  uStack_90 = uVar4;
  local_88 = 0;
  uStack_78 = uStack_368;
  local_80 = local_370;
  FUN_1000fcb24(&local_a8);
  return;
}

