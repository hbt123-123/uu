// rea decompile_all
// name: FUN_1000b3ea8
// address: 0x1000b3ea8
// body: available
// range: 0x1000b3ea8-0x1000b416f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000b3ea8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  ulong uVar6;
  undefined1 auStack_460 [16];
  undefined4 local_450;
  undefined1 local_44c;
  int local_448;
  ulong local_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined1 local_330;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  ulong local_2d0 [6];
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 local_278;
  ulong local_270;
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
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 local_1b0;
  ulong local_1a0;
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
  undefined1 local_e0;
  ulong local_d0 [7];
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  uVar3 = param_1;
  uVar5 = param_2;
  FUN_10047466c();
  uVar1 = (uint)param_2 & 1;
  uVar6 = (ulong)uVar1 | 0xffffffff00000000;
  uStack_318 = 0;
  local_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f0 = 0;
  local_2f8 = 0;
  uStack_2e0 = 0;
  local_2e8 = 0;
  local_300 = 0xffffffff00000000;
  local_2d8 = 0;
  FUN_100040bb4(&local_320,&DAT_100a75368,&DAT_10080bbd0);
  local_2d0[2] = 0;
  local_2d0[1] = 0x1ffffffff;
  local_2d0[4] = 2;
  local_2d0[3] = 0xc000000000000000;
  local_298 = 0;
  uStack_288 = 0;
  uStack_280 = 0;
  local_278 = 0xc000000000000000;
  uStack_248 = local_2d0[5];
  local_250 = 2;
  uStack_238 = 0;
  uStack_240 = uStack_2a0;
  uStack_228 = 0;
  local_230 = local_290;
  uStack_218 = 0xc000000000000000;
  uStack_220 = 0;
  uStack_268 = 0x1ffffffff;
  uStack_258 = 0xc000000000000000;
  uStack_260 = 0;
  local_2d0[0] = uVar6;
  local_270 = uVar6;
  FUN_100008284(&local_270);
  uStack_f8 = uStack_1c8;
  local_100 = local_1d0;
  uStack_e8 = uStack_1b8;
  uStack_f0 = uStack_1c0;
  local_e0 = local_1b0;
  uStack_138 = uStack_208;
  local_140 = local_210;
  uStack_128 = uStack_1f8;
  uStack_130 = uStack_200;
  uStack_118 = uStack_1e8;
  local_120 = local_1f0;
  uStack_108 = uStack_1d8;
  uStack_110 = uStack_1e0;
  uStack_178 = uStack_248;
  local_180 = local_250;
  uStack_168 = uStack_238;
  uStack_170 = uStack_240;
  uStack_158 = uStack_228;
  local_160 = local_230;
  uStack_148 = uStack_218;
  uStack_150 = uStack_220;
  uStack_198 = uStack_268;
  local_1a0 = local_270;
  uStack_188 = uStack_258;
  uStack_190 = uStack_260;
  FUN_100008290(&local_1a0);
  uStack_358 = uStack_108;
  local_360 = uStack_110;
  uStack_348 = uStack_f8;
  uStack_350 = local_100;
  uStack_338 = uStack_e8;
  local_340 = uStack_f0;
  local_330 = local_e0;
  uStack_378 = uStack_128;
  local_380 = uStack_130;
  uStack_368 = uStack_118;
  uStack_370 = local_120;
  uStack_3c8 = uStack_178;
  local_3d0 = local_180;
  uStack_3b8 = uStack_168;
  uStack_3c0 = uStack_170;
  uStack_398 = uStack_148;
  local_3a0 = uStack_150;
  uStack_388 = uStack_138;
  uStack_390 = local_140;
  uStack_3a8 = uStack_158;
  local_3b0 = local_160;
  uStack_3e8 = uStack_198;
  local_3f0 = local_1a0;
  uStack_3d8 = uStack_188;
  uStack_3e0 = uStack_190;
  FUN_100008294(local_2d0,local_d0);
  FUN_100467dcc(&local_3f0);
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  uVar4 = param_1;
  FUN_1001ad794(param_1,uVar3,uVar5,param_3,0);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_450 = (undefined4)param_1;
  uVar2 = (undefined1)uVar1;
  local_44c = uVar2;
  local_448 = (int)uVar4;
  FUN_1003fb48c(FUN_1000b65b8,auStack_460,0xd000000000000099,0x8000000100881de0,0xd000000000000026,
                0x8000000100882ae0,0x204,0);
  local_d0[2] = 0;
  local_d0[1] = 0x1ffffffff;
  local_d0[4] = 2;
  local_d0[3] = 0xc000000000000000;
  local_98 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0xc000000000000000;
  local_d0[0] = uVar6;
  FUN_1000082dc(local_d0);
  if ((int)uVar4 == 0) {
    *(undefined1 *)(unaff_x20 + _TtC14UURemoteServer17LockScreenManager::lastReportedLocked) = uVar2
    ;
  }
  FUN_100006cdc(uVar3,uVar5);
  _swift_release(param_3);
  return;
}

