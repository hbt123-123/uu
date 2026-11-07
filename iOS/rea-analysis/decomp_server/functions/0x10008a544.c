// rea decompile_all
// name: FUN_10008a544
// address: 0x10008a544
// body: available
// range: 0x10008a544-0x10008ad1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10008a544(undefined8 param_1,byte param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long extraout_x8;
  long lVar8;
  undefined8 extraout_x12;
  long unaff_x20;
  int iVar9;
  long lVar10;
  undefined1 auStack_900 [16];
  int aiStack_8f0 [2];
  long lStack_8e8;
  long alStack_8e0 [2];
  long lStack_8d0;
  byte abStack_8c8 [8];
  char *local_8c0 [3];
  long local_8a8;
  long local_8a0;
  long local_898;
  undefined1 auStack_888 [112];
  undefined8 *local_818;
  long lStack_810;
  undefined8 *local_808;
  undefined8 local_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 local_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 local_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 local_7a0;
  undefined8 local_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 local_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 local_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 local_730;
  ulong uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 local_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 local_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined1 local_6d0;
  undefined8 local_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 local_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 local_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 local_660;
  ulong uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 local_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 local_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined1 local_600;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  ulong uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 local_520;
  ulong uStack_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 local_470;
  long lStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined1 local_420;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  long lStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  int local_350;
  uint uStack_34c;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  long lStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  ulong uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  ulong uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined1 local_180;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long lStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  
  lVar3 = 0;
  __s8Dispatch0A12TimeIntervalOMa();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined8 *)((long)local_8c0 + lVar2);
  if (((*(byte *)(unaff_x20 + 0x14) & 1) == 0) && (iVar1 = *(int *)(unaff_x20 + 0x10), -1 < iVar1))
  {
    if (DAT_100a73b60 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    lVar8 = *(long *)(*(long *)(DAT_100b360a8 + 0x28) +
                     _TtC14UURemoteServer15StreamerManager::dispatcher);
    iVar9 = (int)param_1;
    if (((lVar8 != 0) &&
        (lVar8 = *(long *)(lVar8 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession),
        lVar8 != 0)) &&
       (*(int *)(lVar8 + _TtC14UURemoteServer22StreamerConnectSession::handle) == iVar9)) {
      local_8a8 = DAT_100b360a8;
      lVar4 = lVar8;
      local_8a0 = lVar3;
      FUN_1000c7b64();
      uVar6 = *(undefined8 *)(lVar4 + 0x30);
      lVar3 = *(long *)(lVar4 + 0x38);
      _swift_bridgeObjectRetain(lVar3);
      _swift_release(lVar4);
      if (lVar3 != 0) {
        *(long *)(unaff_x20 + _TtC14UURemoteServer19SecondScreenManager::settingsRevision) =
             *(long *)(unaff_x20 + _TtC14UURemoteServer19SecondScreenManager::settingsRevision) + 1;
        local_8c0[2] = (char *)uVar6;
        local_898 = lVar8;
        FUN_100083910(&local_360,uVar6,lVar3);
        uStack_398 = uStack_2e8;
        local_3a0 = local_2f0;
        uStack_388 = uStack_2d8;
        local_390 = local_2e0;
        uStack_378 = uStack_2c8;
        local_380 = local_2d0;
        lStack_368 = lStack_2b8;
        local_370 = local_2c0;
        uStack_3d8 = uStack_328;
        local_3e0 = local_330;
        uStack_3c8 = uStack_318;
        local_3d0 = local_320;
        uStack_3b8 = uStack_308;
        local_3c0 = local_310;
        uStack_3a8 = uStack_2f8;
        local_3b0 = local_300;
        uStack_400 = CONCAT44(uStack_34c,local_350);
        uStack_408 = uStack_358;
        local_410 = local_360;
        uStack_3f8 = uStack_348;
        uStack_3e8 = uStack_338;
        local_3f0 = local_340;
        if (((lStack_2b8 == 0) && ((uStack_34c & 1) == 0)) && (local_350 == iVar1)) {
          if ((*(byte *)(unaff_x20 +
                        _TtC14UURemoteServer19SecondScreenManager::restoringPersistedSettings) & 1)
              == 0) {
            FUN_10008f410(&local_360,local_8c0[2],lVar3);
          }
          FUN_100401b14(0);
          (*(code *)PTR____chkstk_darwin_100995498)();
          *(int *)((long)aiStack_8f0 + lVar2) = iVar9;
          *(long *)((long)&lStack_8e8 + lVar2) = unaff_x20;
          *(undefined8 **)((long)alStack_8e0 + lVar2) = &local_360;
          *(char **)((long)alStack_8e0 + lVar2 + 8) = local_8c0[2];
          *(long *)((long)&lStack_8d0 + lVar2) = lVar3;
          abStack_8c8[lVar2] = param_2 & 1;
          local_8c0[0] = "ngs(handle:sendToController:)";
          local_8c0[1] = "reportedAutoFrameQuality";
          local_8c0[2] = (char *)extraout_x12;
          FUN_1003fb45c(FUN_10008f6a4,auStack_900 + lVar2,0xd00000000000009f,0x800000010087e740,
                        0xd000000000000034,0x800000010087e990,0x1a6,0);
          _swift_bridgeObjectRelease(lVar3);
          local_6c0 = *(undefined8 *)(local_8a8 + 0xa8);
          uStack_488 = uStack_388;
          local_490 = local_390;
          uStack_478 = uStack_378;
          uStack_480 = local_380;
          lStack_468 = lStack_368;
          local_470 = local_370;
          uStack_4c8 = uStack_3c8;
          local_4d0 = local_3d0;
          uStack_4b8 = uStack_3b8;
          uStack_4c0 = local_3c0;
          uStack_4a8 = uStack_3a8;
          local_4b0 = local_3b0;
          uStack_498 = uStack_398;
          uStack_4a0 = local_3a0;
          uStack_508 = uStack_408;
          local_510 = local_410;
          uStack_4f8 = uStack_3f8;
          uStack_500 = uStack_400;
          uStack_4e8 = uStack_3e8;
          local_4f0 = local_3f0;
          uStack_4d8 = uStack_3d8;
          uStack_4e0 = local_3e0;
          FUN_10008f6b8(&local_510);
          uStack_a8 = uStack_448;
          local_b0 = local_450;
          uStack_98 = uStack_438;
          local_a0 = uStack_440;
          uStack_88 = uStack_428;
          local_90 = local_430;
          uStack_e8 = uStack_488;
          local_f0 = local_490;
          uStack_d8 = uStack_478;
          local_e0 = uStack_480;
          lStack_c8 = lStack_468;
          local_d0 = local_470;
          uStack_b8 = uStack_458;
          local_c0 = uStack_460;
          uStack_128 = uStack_4c8;
          local_130 = local_4d0;
          uStack_118 = uStack_4b8;
          local_120 = uStack_4c0;
          uStack_108 = uStack_4a8;
          local_110 = local_4b0;
          uStack_f8 = uStack_498;
          local_100 = uStack_4a0;
          uStack_168 = uStack_508;
          local_170 = local_510;
          uStack_158 = uStack_4f8;
          local_160 = uStack_500;
          uStack_148 = uStack_4e8;
          local_150 = local_4f0;
          local_80 = local_420;
          uStack_138 = uStack_4d8;
          local_140 = uStack_4e0;
          *puVar7 = 1;
          lVar3 = local_8a0;
          (**(code **)(lVar10 + 0x68))
                    (puVar7,*(undefined4 *)
                             PTR___s8Dispatch0A12TimeIntervalO7secondsyACSicACmFWC_100995f20,
                     local_8a0);
          FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
          puVar5 = &local_360;
          FUN_10008f6c4(puVar5,&local_240);
          __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
          uVar6 = 0;
          FUN_1000fd494(0);
          FUN_1005d68b4(&local_170,puVar7,puVar5,0,0,uVar6,&PTR_PTR_10099cbd8);
          FUN_10008f3dc(&local_360);
          (**(code **)(lVar10 + 8))(puVar7);
          if ((param_2 & 1) != 0) {
            puVar7 = &local_360;
            FUN_10008f700(&local_2b0);
            uStack_538 = uStack_268;
            local_540 = local_270;
            uStack_528 = uStack_258;
            uStack_530 = local_260;
            uStack_518 = uStack_248;
            local_520 = local_250;
            uStack_578 = uStack_2a8;
            local_580 = local_2b0;
            uStack_568 = uStack_298;
            uStack_570 = local_2a0;
            uStack_558 = uStack_288;
            local_560 = local_290;
            uStack_548 = uStack_278;
            uStack_550 = local_280;
            if (uStack_248 >> 0x3c < 0xf) {
              uStack_7b8 = uStack_268;
              local_7c0 = local_270;
              uStack_7a8 = uStack_258;
              uStack_7b0 = local_260;
              local_7a0 = local_250;
              uStack_7f8 = uStack_2a8;
              local_800 = local_2b0;
              uStack_7e8 = uStack_298;
              uStack_7f0 = local_2a0;
              uStack_7d8 = uStack_288;
              local_7e0 = local_290;
              uStack_7c8 = uStack_278;
              uStack_7d0 = local_280;
              FUN_10047466c();
              uStack_748 = uStack_7b8;
              local_750 = local_7c0;
              uStack_738 = uStack_7a8;
              uStack_740 = uStack_7b0;
              uStack_788 = uStack_7f8;
              local_790 = local_800;
              uStack_778 = uStack_7e8;
              uStack_780 = uStack_7f0;
              uStack_768 = uStack_7d8;
              local_770 = local_7e0;
              uStack_758 = uStack_7c8;
              uStack_760 = uStack_7d0;
              local_730 = local_7a0;
              uStack_728 = uStack_248;
              local_818 = puVar7;
              lStack_810 = lVar3;
              local_808 = puVar5;
              FUN_10008fa40(&local_790);
              uStack_618 = uStack_6e8;
              local_620 = local_6f0;
              uStack_608 = uStack_6d8;
              uStack_610 = uStack_6e0;
              local_600 = local_6d0;
              uStack_658 = uStack_728;
              local_660 = local_730;
              uStack_648 = uStack_718;
              uStack_650 = uStack_720;
              uStack_638 = uStack_708;
              local_640 = local_710;
              uStack_628 = uStack_6f8;
              uStack_630 = uStack_700;
              uStack_698 = uStack_768;
              local_6a0 = local_770;
              uStack_688 = uStack_758;
              uStack_690 = uStack_760;
              uStack_678 = uStack_748;
              local_680 = local_750;
              uStack_668 = uStack_738;
              uStack_670 = uStack_740;
              uStack_6b8 = uStack_788;
              local_6c0 = local_790;
              uStack_6a8 = uStack_778;
              uStack_6b0 = uStack_780;
              FUN_100008290(&local_6c0);
              uStack_1a8 = uStack_628;
              local_1b0 = uStack_630;
              uStack_198 = uStack_618;
              local_1a0 = local_620;
              uStack_188 = uStack_608;
              local_190 = uStack_610;
              uStack_1e8 = uStack_668;
              local_1f0 = uStack_670;
              uStack_1d8 = uStack_658;
              local_1e0 = local_660;
              uStack_1c8 = uStack_648;
              local_1d0 = uStack_650;
              uStack_1b8 = uStack_638;
              local_1c0 = local_640;
              uStack_228 = uStack_6a8;
              local_230 = uStack_6b0;
              uStack_218 = uStack_698;
              local_220 = local_6a0;
              uStack_208 = uStack_688;
              local_210 = uStack_690;
              local_180 = local_600;
              uStack_1f8 = uStack_678;
              local_200 = local_680;
              uStack_238 = uStack_6b8;
              local_240 = local_6c0;
              uStack_5a8 = uStack_538;
              local_5b0 = local_540;
              uStack_598 = uStack_528;
              uStack_5a0 = uStack_530;
              uStack_588 = uStack_518;
              local_590 = local_520;
              uStack_5e8 = uStack_578;
              local_5f0 = local_580;
              uStack_5d8 = uStack_568;
              uStack_5e0 = uStack_570;
              uStack_5c8 = uStack_558;
              local_5d0 = local_560;
              uStack_5b8 = uStack_548;
              uStack_5c0 = uStack_550;
              FUN_10008fa4c(&local_5f0,auStack_888);
              FUN_100467dcc(&local_240);
              FUN_1001ad794(param_1,local_818,lStack_810,local_808,0);
              (*(code *)PTR____chkstk_darwin_100995498)(0);
              *(undefined8 **)((long)&lStack_8d0 + lVar2) = &local_360;
              *(int *)(abStack_8c8 + lVar2) = (int)param_1;
              FUN_1003fb48c(FUN_10008fa88,(long)alStack_8e0 + lVar2,0xd00000000000009f,
                            (ulong)local_8c0[1] | 0x8000000000000000,0xd000000000000034,
                            (ulong)local_8c0[0] | 0x8000000000000000,0x1ac,0);
              FUN_100040bb4(&local_2b0,&DAT_100a765f8,&DAT_10080b120);
              FUN_10008f3dc(&local_360);
              puVar7 = local_808;
              FUN_100006cdc(local_818,lStack_810);
              _swift_release(puVar7);
              return;
            }
          }
        }
        else {
          _swift_bridgeObjectRelease(lVar3);
          FUN_100401b14(0);
          FUN_1003fb4ec(FUN_10008af08,0,0xd00000000000009f,0x800000010087e740,0xd000000000000034,
                        0x800000010087e990,0x1a0,0);
        }
        FUN_10008f3dc(&local_360);
        return;
      }
    }
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(int *)((long)&lStack_8d0 + lVar2) = iVar9;
    FUN_1003fb4ec(FUN_10008f3d4,(long)alStack_8e0 + lVar2,0xd00000000000009f,0x800000010087e740,
                  0xd000000000000034,0x800000010087e990,0x19a,0);
  }
  else {
    FUN_100401b14(0);
    FUN_1003fb45c(FUN_10008ae2c,0,0xd00000000000009f,0x800000010087e740,0xd000000000000034,
                  0x800000010087e990,0x194,0);
  }
  return;
}

