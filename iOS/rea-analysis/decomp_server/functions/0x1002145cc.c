// rea decompile_all
// name: FUN_1002145cc
// address: 0x1002145cc
// body: available
// range: 0x1002145cc-0x1002149e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1002145cc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined1 auStack_550 [16];
  undefined8 *local_540;
  long *plStack_538;
  undefined8 *local_530;
  undefined8 *local_528;
  char *local_520;
  char *pcStack_518;
  undefined1 auStack_510 [167];
  char local_469;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined1 local_3c0;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined1 local_310;
  long local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 local_258;
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
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  
  uStack_108 = param_2[1];
  local_110 = *param_2;
  uStack_f8 = param_2[3];
  uStack_100 = param_2[2];
  uStack_e8 = param_2[5];
  local_f0 = param_2[4];
  uStack_d8 = param_2[7];
  uStack_e0 = param_2[6];
  local_300 = 0;
  local_530 = param_1;
  local_528 = param_2;
  FUN_100218074(&local_110);
  uStack_138 = uStack_a8;
  local_140 = local_b0;
  uStack_128 = uStack_98;
  uStack_130 = uStack_a0;
  local_120 = local_90;
  uStack_178 = uStack_e8;
  local_180 = local_f0;
  uStack_168 = uStack_d8;
  uStack_170 = uStack_e0;
  uStack_158 = uStack_c8;
  local_160 = local_d0;
  uStack_148 = uStack_b8;
  uStack_150 = uStack_c0;
  local_520 = "success(responseMismatch)";
  pcStack_518 = "handleSessionDisconnected()";
  uStack_198 = uStack_108;
  local_1a0 = local_110;
  uStack_188 = uStack_f8;
  uStack_190 = uStack_100;
  do {
    FUN_100212e9c(&local_2f8,&local_1a0,param_3,2);
    uStack_328 = uStack_270;
    local_330 = local_278;
    uStack_318 = uStack_260;
    uStack_320 = local_268;
    uStack_368 = uStack_2b0;
    local_370 = local_2b8;
    uStack_358 = uStack_2a0;
    uStack_360 = local_2a8;
    uStack_348 = uStack_290;
    local_350 = local_298;
    uStack_338 = uStack_280;
    uStack_340 = local_288;
    uStack_3a8 = uStack_2f0;
    local_3b0 = local_2f8;
    uStack_398 = uStack_2e0;
    uStack_3a0 = uStack_2e8;
    uStack_388 = uStack_2d0;
    local_390 = local_2d8;
    uStack_378 = uStack_2c0;
    uStack_380 = local_2c8;
    uStack_1c8 = uStack_270;
    local_1d0 = local_278;
    uStack_1b8 = uStack_260;
    uStack_1c0 = local_268;
    uStack_208 = uStack_2b0;
    local_210 = local_2b8;
    uStack_1f8 = uStack_2a0;
    uStack_200 = local_2a8;
    uStack_1e8 = uStack_290;
    local_1f0 = local_298;
    uStack_1d8 = uStack_280;
    uStack_1e0 = local_288;
    uStack_248 = uStack_2f0;
    local_250 = local_2f8;
    uStack_238 = uStack_2e0;
    uStack_240 = uStack_2e8;
    local_310 = local_258;
    local_1b0 = local_258;
    uStack_228 = uStack_2d0;
    local_230 = local_2d8;
    uStack_218 = uStack_2c0;
    uStack_220 = local_2c8;
    iVar3 = (int)&local_250;
    FUN_100217ac0();
    if (iVar3 != 1) {
      FUN_100008290(&local_250);
LAB_10021490c:
      if (0 < local_300) {
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        plStack_538 = &local_300;
        local_540 = local_528;
        FUN_1003fb48c(FUN_100218088,auStack_550,0xd0000000000000b2,
                      (ulong)pcStack_518 | 0x8000000000000000,0xd00000000000002e,
                      (ulong)local_520 | 0x8000000000000000,0x1a9,0);
      }
      local_530[0x11] = uStack_270;
      local_530[0x10] = local_278;
      local_530[0x13] = uStack_260;
      local_530[0x12] = local_268;
      *(undefined1 *)(local_530 + 0x14) = local_258;
      local_530[9] = uStack_2b0;
      local_530[8] = local_2b8;
      local_530[0xb] = uStack_2a0;
      local_530[10] = local_2a8;
      local_530[0xd] = uStack_290;
      local_530[0xc] = local_298;
      local_530[0xf] = uStack_280;
      local_530[0xe] = local_288;
      local_530[1] = uStack_2f0;
      *local_530 = local_2f8;
      local_530[3] = uStack_2e0;
      local_530[2] = uStack_2e8;
      local_530[5] = uStack_2d0;
      local_530[4] = local_2d8;
      local_530[7] = uStack_2c0;
      local_530[6] = local_2c8;
      return;
    }
    puVar4 = &local_250;
    FUN_100008290();
    local_468 = *puVar4;
    uStack_458 = uStack_3a8;
    local_460 = local_3b0;
    uStack_448 = uStack_398;
    uStack_450 = uStack_3a0;
    uStack_418 = uStack_368;
    local_420 = local_370;
    uStack_408 = uStack_358;
    uStack_410 = uStack_360;
    uStack_438 = uStack_388;
    local_440 = local_390;
    uStack_428 = uStack_378;
    uStack_430 = uStack_380;
    local_3c0 = local_310;
    uStack_3d8 = uStack_328;
    local_3e0 = local_330;
    uStack_3c8 = uStack_318;
    uStack_3d0 = uStack_320;
    uStack_3f8 = uStack_348;
    local_400 = local_350;
    uStack_3e8 = uStack_338;
    uStack_3f0 = uStack_340;
    puVar4 = &local_460;
    FUN_100008290();
    uVar7 = *puVar4;
    FUN_10007f314(&local_2f8,auStack_510,&DAT_100a7dca8,&DAT_100812f58);
    _swift_errorRetain(uVar7);
    puVar5 = &DAT_100a75b40;
    FUN_100004bb4(&DAT_100a75b40,&DAT_100809bd0);
    pcVar6 = &local_469;
    _swift_dynamicCast(pcVar6,&local_468,puVar5,&DAT_10099c0d0,6);
    if ((((ulong)pcVar6 & 1) == 0) || (local_469 != '\x05')) {
      FUN_100040bb4(&local_2f8,&DAT_100a7dca8,&DAT_100812f58);
      goto LAB_10021490c;
    }
    lVar1 = local_300 + 1;
    if (SCARRY8(local_300,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1002149e4);
      (*pcVar2)();
    }
    local_300 = lVar1;
    if ((lVar1 == 1) || (lVar1 % 100 == 0)) {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      plStack_538 = &local_300;
      local_540 = local_528;
      FUN_1003fb45c(FUN_100218090,auStack_550,0xd0000000000000b2,
                    (ulong)pcStack_518 | 0x8000000000000000,0xd00000000000002e,
                    (ulong)local_520 | 0x8000000000000000,0x1a3,0);
    }
    NSThread::sleepForTimeInterval_
              ((ID)&_OBJC_CLASS___NSThread,"sleepForTimeInterval:",0x3f847ae147ae147b);
    FUN_100040bb4(&local_2f8,&DAT_100a7dca8,&DAT_100812f58);
    FUN_100040bb4(&local_2f8,&DAT_100a7dca8,&DAT_100812f58);
  } while( true );
}

