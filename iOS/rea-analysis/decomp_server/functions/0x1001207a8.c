// rea decompile_all
// name: FUN_1001207a8
// address: 0x1001207a8
// body: available
// range: 0x1001207a8-0x10012183b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100120cb4) */

void FUN_1001207a8(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  void *aBlock;
  undefined **ppuVar9;
  ID IVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined8 uVar14;
  long lVar15;
  undefined *puVar16;
  undefined1 *puVar17;
  long lVar18;
  undefined1 auStack_6d0 [16];
  undefined8 auStack_6c0 [2];
  long alStack_6b0 [2];
  undefined1 auStack_6a0 [8];
  long local_698;
  long local_690;
  undefined4 local_684;
  undefined *local_670;
  undefined *puStack_668;
  undefined *local_660;
  undefined *puStack_658;
  undefined *local_650;
  undefined *puStack_648;
  undefined *puStack_640;
  undefined *puStack_638;
  undefined *local_630;
  undefined1 auStack_5f0 [24];
  undefined *local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined1 local_518;
  undefined *local_510;
  undefined *puStack_508;
  undefined *local_500;
  undefined *puStack_4f8;
  undefined *local_4f0;
  undefined *puStack_4e8;
  undefined *local_4e0;
  undefined *local_4d8;
  undefined *local_4d0;
  undefined *puStack_4c8;
  undefined *local_4c0;
  undefined *puStack_4b8;
  undefined *local_4b0;
  undefined *puStack_4a8;
  undefined *local_4a0;
  undefined *puStack_498;
  undefined *local_490;
  undefined *puStack_488;
  undefined *puStack_480;
  undefined *puStack_478;
  undefined *local_470;
  undefined *puStack_468;
  undefined *puStack_460;
  undefined3 uStack_450;
  undefined8 uStack_44d;
  undefined *local_440;
  undefined *puStack_438;
  undefined *local_430;
  undefined *puStack_428;
  undefined *local_420;
  undefined *puStack_418;
  undefined *local_410;
  undefined *puStack_408;
  undefined *local_400;
  undefined *puStack_3f8;
  undefined *local_3f0;
  undefined *puStack_3e8;
  undefined *local_3e0;
  undefined *puStack_3d8;
  undefined *local_3d0;
  undefined *puStack_3c8;
  undefined *local_3c0;
  undefined *puStack_3b8;
  undefined *local_3b0;
  undefined *puStack_3a8;
  undefined *local_3a0;
  undefined *puStack_398;
  undefined *local_390;
  undefined3 uStack_388;
  undefined5 uStack_385;
  undefined1 local_380;
  undefined2 uStack_37f;
  undefined8 uStack_37d;
  undefined *local_370;
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
  undefined1 local_2b0;
  undefined *local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
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
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 local_1e0;
  undefined *local_1d0;
  undefined *local_1c8;
  undefined *local_1c0;
  undefined *local_1b8;
  undefined *local_1b0;
  undefined *local_1a8;
  ulong local_1a0;
  undefined *local_198;
  ulong local_190;
  undefined *local_188;
  undefined *local_180;
  code *local_178;
  undefined *local_170;
  code *local_168;
  undefined *local_160;
  undefined *local_158;
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
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
  undefined1 local_80;
  
  lVar7 = 0;
  local_684 = param_1;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_698 = *(long *)(lVar7 + -8);
  local_690 = lVar7;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_698 + 0x40));
  puVar17 = auStack_6a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar15 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar15 + 0x40));
  lVar18 = (long)puVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_100467d10(&local_5d8,param_2,param_3,param_4);
  uStack_98 = uStack_530;
  local_a0 = local_538;
  uStack_88 = uStack_520;
  uStack_90 = local_528;
  uStack_d8 = uStack_570;
  local_e0 = local_578;
  uStack_c8 = uStack_560;
  uStack_d0 = local_568;
  uStack_b8 = uStack_550;
  local_c0 = local_558;
  uStack_a8 = uStack_540;
  uStack_b0 = local_548;
  uStack_118 = uStack_5b0;
  local_120 = local_5b8;
  uStack_108 = uStack_5a0;
  uStack_110 = local_5a8;
  uStack_f8 = uStack_590;
  local_100 = local_598;
  uStack_e8 = uStack_580;
  uStack_f0 = local_588;
  uStack_138 = uStack_5d0;
  local_140 = local_5d8;
  uStack_128 = uStack_5c0;
  uStack_130 = local_5c8;
  uStack_2c8 = uStack_530;
  local_2d0 = local_538;
  uStack_2b8 = uStack_520;
  uStack_2c0 = local_528;
  uStack_308 = uStack_570;
  local_310 = local_578;
  uStack_2f8 = uStack_560;
  uStack_300 = local_568;
  uStack_2e8 = uStack_550;
  local_2f0 = local_558;
  uStack_2d8 = uStack_540;
  uStack_2e0 = local_548;
  uStack_348 = uStack_5b0;
  local_350 = local_5b8;
  uStack_338 = uStack_5a0;
  uStack_340 = local_5a8;
  uStack_328 = uStack_590;
  local_330 = local_598;
  uStack_318 = uStack_580;
  uStack_320 = local_588;
  local_80 = local_518;
  local_2b0 = local_518;
  uStack_368 = uStack_5d0;
  local_370 = local_5d8;
  uStack_358 = uStack_5c0;
  uStack_360 = local_5c8;
  iVar6 = (int)&local_370;
  FUN_1001218ec();
  if (iVar6 == 1) {
    return;
  }
  uStack_1f8 = uStack_2c8;
  local_200 = local_2d0;
  uStack_1e8 = uStack_2b8;
  uStack_1f0 = uStack_2c0;
  local_1e0 = local_2b0;
  uStack_238 = uStack_308;
  local_240 = local_310;
  uStack_228 = uStack_2f8;
  uStack_230 = uStack_300;
  uStack_218 = uStack_2e8;
  local_220 = local_2f0;
  uStack_208 = uStack_2d8;
  uStack_210 = uStack_2e0;
  uStack_278 = uStack_348;
  local_280 = local_350;
  uStack_268 = uStack_338;
  uStack_270 = uStack_340;
  uStack_258 = uStack_328;
  local_260 = local_330;
  uStack_248 = uStack_318;
  uStack_250 = uStack_320;
  uStack_298 = uStack_368;
  local_2a0 = local_370;
  uStack_288 = uStack_358;
  uStack_290 = uStack_360;
  iVar6 = (int)&local_2a0;
  FUN_100121900();
  if (iVar6 < 0x11) {
    if (iVar6 < 2) {
      if (iVar6 == 0) {
        ppuVar12 = &local_2a0;
        FUN_100008290();
        puStack_408 = ppuVar12[7];
        local_410 = ppuVar12[6];
        puStack_3f8 = ppuVar12[9];
        local_400 = ppuVar12[8];
        puStack_3e8 = ppuVar12[0xb];
        local_3f0 = ppuVar12[10];
        puStack_3d8 = ppuVar12[0xd];
        local_3e0 = ppuVar12[0xc];
        puStack_438 = ppuVar12[1];
        local_440 = *ppuVar12;
        puStack_428 = ppuVar12[3];
        local_430 = ppuVar12[2];
        puStack_418 = ppuVar12[5];
        local_420 = ppuVar12[4];
        FUN_10011e468(local_684,param_2,param_3,param_4,&local_440);
      }
      else if (iVar6 == 1) {
        ppuVar12 = &local_2a0;
        FUN_100008290();
        puVar11 = *ppuVar12;
        puVar16 = ppuVar12[1];
        puVar13 = ppuVar12[4];
        puVar3 = ppuVar12[5];
        puVar5 = ppuVar12[6];
        puVar4 = ppuVar12[7];
        _swift_beginAccess(unaff_x20 + 0x10,&local_440,0,0);
        lVar7 = unaff_x20 + 0x10;
        _swift_unknownObjectWeakLoadStrong();
        if (lVar7 != 0) {
          FUN_1000c817c();
          _swift_release(lVar7);
          if (DAT_100a73b60 != -1) {
            _swift_once(&DAT_100a73b60,FUN_1000efc4c);
          }
          FUN_1001a39f4(puVar11,puVar16,puVar13,puVar3,puVar5,puVar4);
LAB_100121740:
          FUN_100040bb4(&local_5d8,&DAT_100a79590,&DAT_10080e570);
          return;
        }
      }
    }
    else if (iVar6 == 2) {
      ppuVar12 = &local_2a0;
      FUN_100008290();
      puVar11 = *ppuVar12;
      puVar5 = ppuVar12[1];
      puVar13 = ppuVar12[4];
      puVar16 = ppuVar12[5];
      _swift_beginAccess(unaff_x20 + 0x10,&local_670,0,0);
      lVar7 = unaff_x20 + 0x10;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar7 != 0) {
        FUN_1000c817c();
        _swift_release(lVar7);
        if (DAT_100a73b60 != -1) {
          _swift_once(&DAT_100a73b60,FUN_1000efc4c);
        }
        _swift_bridgeObjectRetain(puVar16);
        FUN_1001a743c(&local_510,puVar11,puVar5,puVar13,puVar16);
        puStack_3a8 = puStack_478;
        local_3b0 = puStack_480;
        puStack_398 = puStack_468;
        local_3a0 = local_470;
        local_390 = puStack_460;
        uStack_37d = uStack_44d;
        local_380 = (undefined1)uStack_450;
        uStack_37f = (undefined2)((uint3)uStack_450 >> 8);
        puStack_3d8 = puStack_4a8;
        local_3e0 = local_4b0;
        puStack_3c8 = puStack_498;
        local_3d0 = local_4a0;
        puStack_3b8 = puStack_488;
        local_3c0 = local_490;
        puStack_418 = puStack_4e8;
        local_420 = local_4f0;
        puStack_408 = local_4d8;
        local_410 = local_4e0;
        puStack_3f8 = puStack_4c8;
        local_400 = local_4d0;
        puStack_3e8 = puStack_4b8;
        local_3f0 = local_4c0;
        puStack_438 = puStack_508;
        local_440 = local_510;
        puStack_428 = puStack_4f8;
        local_430 = local_500;
        ppuVar12 = &local_440;
        FUN_1000efaa0();
        puVar5 = local_3e0;
        puVar11 = puStack_3e8;
        if ((int)ppuVar12 != 1) {
          _swift_bridgeObjectRelease(puVar16);
          _swift_bridgeObjectRetain(puVar5);
          ppuVar12 = &local_510;
          FUN_100040bb4(ppuVar12,&DAT_100a781a8,&DAT_10080d410);
          puVar13 = puVar11;
          puVar16 = puVar5;
        }
        uVar2 = (ulong)puVar13 & 0xffffffffffff;
        if (((ulong)puVar16 & 0x2000000000000000) != 0) {
          uVar2 = (ulong)puVar16 >> 0x38 & 0xf;
        }
        if (uVar2 != 0) {
          IVar10 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
          puVar11 = puVar13;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar13,puVar16);
          IVar10 = NSFileManager::fileExistsAtPath_(IVar10,"fileExistsAtPath:",puVar11);
          ppuVar12 = (undefined **)0x0;
          if ((int)IVar10 != 0) {
            FUN_1001a9e24(puVar13,puVar16);
            _swift_bridgeObjectRelease(puVar16);
            if (puVar13 != (undefined *)0x0) {
              FUN_1001aa090(puVar13);
              FUN_100040bb4(&local_5d8,&DAT_100a79590,&DAT_10080e570);
              return;
            }
            goto LAB_100121740;
          }
        }
        FUN_1000efab8();
        puVar11 = &DAT_1009a2038;
        _swift_allocError(&DAT_1009a2038,ppuVar12,0,0);
        _swift_willThrow();
        _swift_bridgeObjectRelease(puVar16);
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(undefined **)(lVar18 + -0x10) = puVar11;
        FUN_1003fb4ec(FUN_1001219b8,lVar18 + -0x20,0xd00000000000009f,0x8000000100888c10,
                      0xd000000000000025,0x8000000100888ce0,0x45,0);
        FUN_100040bb4(&local_5d8,&DAT_100a79590,&DAT_10080e570);
        _swift_errorRelease(puVar11);
        return;
      }
    }
    else if (iVar6 == 10) {
      ppuVar12 = &local_2a0;
      FUN_100008290();
      puStack_3b8 = ppuVar12[0x11];
      local_3c0 = ppuVar12[0x10];
      puStack_3a8 = ppuVar12[0x13];
      local_3b0 = ppuVar12[0x12];
      puStack_398 = ppuVar12[0x15];
      local_3a0 = ppuVar12[0x14];
      local_390 = ppuVar12[0x16];
      uStack_388 = SUB83(ppuVar12[0x17],0);
      uStack_385 = (undefined5)((ulong)ppuVar12[0x17] >> 0x18);
      puStack_3f8 = ppuVar12[9];
      local_400 = ppuVar12[8];
      puStack_3e8 = ppuVar12[0xb];
      local_3f0 = ppuVar12[10];
      puStack_3d8 = ppuVar12[0xd];
      local_3e0 = ppuVar12[0xc];
      puStack_3c8 = ppuVar12[0xf];
      local_3d0 = ppuVar12[0xe];
      puStack_438 = ppuVar12[1];
      local_440 = *ppuVar12;
      puStack_428 = ppuVar12[3];
      local_430 = ppuVar12[2];
      puStack_418 = ppuVar12[5];
      local_420 = ppuVar12[4];
      puStack_408 = ppuVar12[7];
      local_410 = ppuVar12[6];
      _swift_beginAccess(unaff_x20 + 0x10,&local_510,0,0);
      lVar7 = unaff_x20 + 0x10;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar7 != 0) {
        FUN_1000c8190();
        FUN_10000eb14(local_684,&local_440);
        goto LAB_1001213e8;
      }
    }
  }
  else if (iVar6 < 0x13) {
    if (iVar6 == 0x11) {
      ppuVar12 = &local_2a0;
      FUN_100008290();
      puStack_438 = ppuVar12[1];
      local_440 = *ppuVar12;
      puStack_428 = ppuVar12[3];
      local_430 = ppuVar12[2];
      puStack_418 = ppuVar12[5];
      local_420 = ppuVar12[4];
      local_410 = ppuVar12[6];
      _swift_beginAccess(unaff_x20 + 0x10,&local_510,0,0);
      lVar7 = unaff_x20 + 0x10;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar7 != 0) {
        FUN_1000c8244();
        FUN_10010af08(local_684,&local_440);
LAB_1001213e8:
        FUN_100040bb4(&local_5d8,&DAT_100a79590,&DAT_10080e570);
        _swift_release(lVar7);
        return;
      }
    }
    else if (iVar6 == 0x12) {
      ppuVar12 = &local_2a0;
      FUN_100008290();
      puStack_3b8 = ppuVar12[0x11];
      local_3c0 = ppuVar12[0x10];
      puStack_3a8 = ppuVar12[0x13];
      local_3b0 = ppuVar12[0x12];
      puStack_398 = ppuVar12[0x15];
      local_3a0 = ppuVar12[0x14];
      local_390 = ppuVar12[0x16];
      uStack_388 = SUB83(ppuVar12[0x17],0);
      uStack_385 = (undefined5)((ulong)ppuVar12[0x17] >> 0x18);
      puStack_3f8 = ppuVar12[9];
      local_400 = ppuVar12[8];
      puStack_3e8 = ppuVar12[0xb];
      local_3f0 = ppuVar12[10];
      puStack_3d8 = ppuVar12[0xd];
      local_3e0 = ppuVar12[0xc];
      puStack_3c8 = ppuVar12[0xf];
      local_3d0 = ppuVar12[0xe];
      puStack_438 = ppuVar12[1];
      local_440 = *ppuVar12;
      puStack_428 = ppuVar12[3];
      local_430 = ppuVar12[2];
      puStack_418 = ppuVar12[5];
      local_420 = ppuVar12[4];
      puStack_408 = ppuVar12[7];
      local_410 = ppuVar12[6];
      FUN_10011fc2c(local_684,&local_440,param_5);
    }
  }
  else if (iVar6 == 0x13) {
    ppuVar12 = &local_2a0;
    FUN_100008290();
    puStack_3d8 = ppuVar12[0xd];
    local_3e0 = ppuVar12[0xc];
    puStack_3c8 = ppuVar12[0xf];
    local_3d0 = ppuVar12[0xe];
    puStack_3b8 = ppuVar12[0x11];
    local_3c0 = ppuVar12[0x10];
    puStack_3a8 = ppuVar12[0x13];
    local_3b0 = ppuVar12[0x12];
    puStack_418 = ppuVar12[5];
    local_420 = ppuVar12[4];
    puStack_408 = ppuVar12[7];
    local_410 = ppuVar12[6];
    puStack_3f8 = ppuVar12[9];
    local_400 = ppuVar12[8];
    puStack_3e8 = ppuVar12[0xb];
    local_3f0 = ppuVar12[10];
    puStack_438 = ppuVar12[1];
    local_440 = *ppuVar12;
    puStack_428 = ppuVar12[3];
    local_430 = ppuVar12[2];
    _swift_beginAccess(unaff_x20 + 0x10,auStack_5f0,0,0);
    lVar7 = unaff_x20 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar7 != 0) {
      FUN_1000c7c50();
      ppuVar12 = &local_440;
      FUN_10020f200(ppuVar12,param_5);
      _swift_release(lVar7);
      if (((ulong)ppuVar12 & 1) != 0) goto LAB_1001217d4;
    }
    if (((uint)param_5 & 0xff) == 2) {
      puStack_508 = puStack_438;
      local_510 = local_440;
      puStack_4f8 = puStack_428;
      local_500 = local_430;
      puStack_4e8 = puStack_418;
      local_4f0 = local_420;
      local_4d8 = puStack_408;
      local_4e0 = local_410;
      puStack_4b8 = puStack_3e8;
      local_4c0 = local_3f0;
      puStack_4a8 = puStack_3d8;
      local_4b0 = local_3e0;
      puStack_4c8 = puStack_3f8;
      local_4d0 = local_400;
      local_4a0 = local_3d0;
      if ((((ulong)local_3e0 >> 8 != 0xffffffff) || (((ulong)local_3d0 & 0x3000000000000000) != 0))
         && (((uint)((ulong)local_3d0 >> 0x39) & 0x18 | (uint)((ulong)local_3e0 >> 0x3d)) == 3)) {
        local_188 = local_440;
        local_180 = puStack_438;
        local_178 = (code *)local_430;
        local_170 = puStack_428;
        local_168 = (code *)local_420;
        local_160 = puStack_418;
        local_158 = local_410;
        local_150 = puStack_408;
        local_148 = local_400;
        if (((((ulong)local_420 & (ulong)local_410 & (ulong)local_400 ^ 0xffffffffffffffff) &
             0x3000000000000000) != 0) &&
           (((uint)((ulong)local_400 >> 0x3b) & 6 | (uint)((ulong)local_410 >> 0x3d) & 1) == 4)) {
          local_1a0 = (ulong)local_410 & 0xdfffffffffffffff;
          local_190 = (ulong)local_400 & 0xcfffffffffffffff;
          local_1d0 = local_440;
          local_1c8 = puStack_438;
          local_1c0 = local_430;
          local_1b8 = puStack_428;
          local_1b0 = local_420;
          local_1a8 = puStack_418;
          local_198 = puStack_408;
          lVar7 = unaff_x20 + 0x10;
          _swift_unknownObjectWeakLoadStrong();
          if (lVar7 != 0) {
            FUN_10007f314(&local_510,&local_670,&DAT_100a75b98,&DAT_10080a1d0);
            FUN_10007f314(&local_188,&local_670,&DAT_100a79598,&DAT_10080e930);
            FUN_1000c8388();
            lVar15 = 0;
            FUN_1001bc1d8();
            uVar14 = 0;
            FUN_100153bbc(0);
            lVar7 = lVar15;
            _swift_dynamicCastClass(lVar15,uVar14);
            if (lVar7 != 0) {
              FUN_1001536e4();
              FUN_10014932c(&local_1d0);
              _swift_unknownObjectRelease(lVar15);
              _swift_release(lVar7);
              FUN_100040bb4(&local_188,&DAT_100a79598,&DAT_10080e930);
              FUN_100040bb4(&local_510,&DAT_100a75b98,&DAT_10080a1d0);
              goto LAB_1001217d4;
            }
            _swift_unknownObjectRelease(lVar15);
            FUN_100040bb4(&local_188,&DAT_100a79598,&DAT_10080e930);
            FUN_100040bb4(&local_510,&DAT_100a75b98,&DAT_10080a1d0);
          }
        }
      }
    }
    lVar7 = unaff_x20 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar7 != 0) {
      FUN_1000c8ac4();
      FUN_100179b60(&local_440);
      _swift_release(lVar7);
    }
  }
  else {
    if (iVar6 == 0x17) {
      ppuVar12 = &local_2a0;
      FUN_100008290();
      puVar11 = *ppuVar12;
      puVar5 = ppuVar12[1];
      puVar13 = ppuVar12[2];
      puVar16 = ppuVar12[3];
      _swift_beginAccess(unaff_x20 + 0x10,&local_670,0,0);
      lVar7 = unaff_x20 + 0x10;
      _swift_unknownObjectWeakLoadStrong();
      uStack_388 = (undefined3)uStack_88;
      uStack_385 = (undefined5)((ulong)uStack_88 >> 0x18);
      if (lVar7 == 0) {
        puStack_398 = (undefined *)uStack_98;
        local_3a0 = (undefined *)local_a0;
        local_390 = (undefined *)uStack_90;
        local_380 = local_80;
        puStack_3d8 = (undefined *)uStack_d8;
        local_3e0 = (undefined *)local_e0;
        puStack_3c8 = (undefined *)uStack_c8;
        local_3d0 = (undefined *)uStack_d0;
        puStack_3b8 = (undefined *)uStack_b8;
        local_3c0 = (undefined *)local_c0;
        puStack_3a8 = (undefined *)uStack_a8;
        local_3b0 = (undefined *)uStack_b0;
        puStack_418 = (undefined *)uStack_118;
        local_420 = (undefined *)local_120;
        puStack_408 = (undefined *)uStack_108;
        local_410 = (undefined *)uStack_110;
        puStack_3f8 = (undefined *)uStack_f8;
        local_400 = (undefined *)local_100;
        puStack_3e8 = (undefined *)uStack_e8;
        local_3f0 = (undefined *)uStack_f0;
        puStack_438 = (undefined *)uStack_138;
        local_440 = local_140;
        puStack_428 = (undefined *)uStack_128;
        local_430 = (undefined *)uStack_130;
        FUN_100121914(&local_440,&local_510);
      }
      else {
        puStack_398 = (undefined *)uStack_98;
        local_3a0 = (undefined *)local_a0;
        local_390 = (undefined *)uStack_90;
        local_380 = local_80;
        puStack_3d8 = (undefined *)uStack_d8;
        local_3e0 = (undefined *)local_e0;
        puStack_3c8 = (undefined *)uStack_c8;
        local_3d0 = (undefined *)uStack_d0;
        puStack_3b8 = (undefined *)uStack_b8;
        local_3c0 = (undefined *)local_c0;
        puStack_3a8 = (undefined *)uStack_a8;
        local_3b0 = (undefined *)uStack_b0;
        puStack_418 = (undefined *)uStack_118;
        local_420 = (undefined *)local_120;
        puStack_408 = (undefined *)uStack_108;
        local_410 = (undefined *)uStack_110;
        puStack_3f8 = (undefined *)uStack_f8;
        local_400 = (undefined *)local_100;
        puStack_3e8 = (undefined *)uStack_e8;
        local_3f0 = (undefined *)uStack_f0;
        puStack_438 = (undefined *)uStack_138;
        local_440 = local_140;
        puStack_428 = (undefined *)uStack_128;
        local_430 = (undefined *)uStack_130;
        ppuVar12 = &local_440;
        FUN_100121914(ppuVar12,&local_510);
        FUN_1000c8388();
        puVar1 = (undefined8 *)
                 ((long)ppuVar12 + _TtC14UURemoteServer16ClipboardHandler::remoteDownloadPath);
        uVar14 = puVar1[1];
        *puVar1 = puVar11;
        puVar1[1] = puVar5;
        _swift_bridgeObjectRetain(puVar5);
        _swift_bridgeObjectRelease(uVar14);
      }
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(undefined **)(lVar18 + -0x20) = puVar11;
      *(undefined **)(lVar18 + -0x18) = puVar5;
      *(undefined **)(lVar18 + -0x10) = puVar13;
      *(undefined **)(lVar18 + -8) = puVar16;
      FUN_1003fb48c(FUN_1001219ac,lVar18 + -0x30,0xd00000000000009f,0x800000010088d5c0,
                    0xd000000000000027,0x800000010088d660,0x20,0);
      FUN_100040bb4(&local_5d8,&DAT_100a79590,&DAT_10080e570);
      FUN_100040bb4(&local_5d8,&DAT_100a79590,&DAT_10080e570);
      return;
    }
    if (iVar6 == 0x18) {
      ppuVar12 = &local_2a0;
      FUN_100008290();
      puStack_668 = ppuVar12[1];
      local_670 = *ppuVar12;
      puStack_648 = ppuVar12[5];
      local_650 = ppuVar12[4];
      puStack_638 = ppuVar12[7];
      puStack_640 = ppuVar12[6];
      local_630 = ppuVar12[8];
      puStack_658 = ppuVar12[3];
      local_660 = ppuVar12[2];
      if (((uint)param_5 & 0xff) != 2) {
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(char *)(lVar18 + -0x10) = (char)param_5;
        *(undefined ***)(lVar18 + -8) = &local_670;
        FUN_1003fb4bc(FUN_100121908,lVar18 + -0x20,0xd00000000000009f,0x800000010088d5c0,
                      0xd000000000000027,0x800000010088d660,0x27,0);
        FUN_100040bb4(&local_5d8,&DAT_100a79590,&DAT_10080e570);
        return;
      }
      _swift_beginAccess(unaff_x20 + 0x10,&local_1d0,0,0);
      lVar8 = unaff_x20 + 0x10;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar8 != 0) {
        puStack_398 = (undefined *)uStack_98;
        local_3a0 = (undefined *)local_a0;
        uStack_388 = (undefined3)uStack_88;
        uStack_385 = (undefined5)((ulong)uStack_88 >> 0x18);
        local_390 = (undefined *)uStack_90;
        local_380 = local_80;
        puStack_3d8 = (undefined *)uStack_d8;
        local_3e0 = (undefined *)local_e0;
        puStack_3c8 = (undefined *)uStack_c8;
        local_3d0 = (undefined *)uStack_d0;
        puStack_3b8 = (undefined *)uStack_b8;
        local_3c0 = (undefined *)local_c0;
        puStack_3a8 = (undefined *)uStack_a8;
        local_3b0 = (undefined *)uStack_b0;
        puStack_418 = (undefined *)uStack_118;
        local_420 = (undefined *)local_120;
        puStack_408 = (undefined *)uStack_108;
        local_410 = (undefined *)uStack_110;
        puStack_3f8 = (undefined *)uStack_f8;
        local_400 = (undefined *)local_100;
        puStack_3e8 = (undefined *)uStack_e8;
        local_3f0 = (undefined *)uStack_f0;
        puStack_438 = (undefined *)uStack_138;
        local_440 = local_140;
        puStack_428 = (undefined *)uStack_128;
        local_430 = (undefined *)uStack_130;
        ppuVar12 = &local_440;
        FUN_100121914(ppuVar12,&local_510);
        FUN_1000c8a24();
        puVar11 = &DAT_10099e100;
        _swift_allocObject(&DAT_10099e100,100,7);
        *(undefined **)(puVar11 + 0x38) = puStack_648;
        *(undefined **)(puVar11 + 0x30) = local_650;
        *(undefined **)(puVar11 + 0x48) = puStack_638;
        *(undefined **)(puVar11 + 0x40) = puStack_640;
        *(undefined **)(puVar11 + 0x18) = puStack_668;
        *(undefined **)(puVar11 + 0x10) = local_670;
        *(undefined **)(puVar11 + 0x28) = puStack_658;
        *(undefined **)(puVar11 + 0x20) = local_660;
        *(undefined **)(puVar11 + 0x50) = local_630;
        *(undefined ***)(puVar11 + 0x58) = ppuVar12;
        *(undefined4 *)(puVar11 + 0x60) = local_684;
        local_168 = FUN_100121984;
        local_188 = PTR___NSConcreteStackBlock_100995490;
        local_180 = (undefined *)0x42000000;
        local_178 = FUN_1000acdb4;
        local_170 = &DAT_10099e118;
        local_160 = puVar11;
        aBlock = __Block_copy(&local_188);
        FUN_10007f314(&local_5d8,&local_510,&DAT_100a79590,&DAT_10080e570);
        ppuVar9 = ppuVar12;
        _swift_retain(ppuVar12);
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar18);
        local_510 = PTR___swiftEmptyArrayStorage_100995ea0;
        FUN_10003f7fc();
        puVar11 = &DAT_100a75a98;
        FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
        puVar13 = puVar11;
        FUN_10004eec4();
        lVar8 = local_690;
        __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                  (puVar17,&local_510,puVar11,puVar13,local_690,ppuVar9);
        __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                  (0,lVar18,puVar17,aBlock);
        __Block_release(aBlock);
        FUN_100040bb4(&local_5d8,&DAT_100a79590,&DAT_10080e570);
        FUN_100040bb4(&local_5d8,&DAT_100a79590,&DAT_10080e570);
        (**(code **)(local_698 + 8))(puVar17,lVar8);
        (**(code **)(lVar15 + 8))(lVar18,lVar7);
        _swift_release(ppuVar12);
        _swift_release(local_160);
        return;
      }
    }
  }
LAB_1001217d4:
  FUN_100040bb4(&local_5d8,&DAT_100a79590,&DAT_10080e570);
  return;
}

