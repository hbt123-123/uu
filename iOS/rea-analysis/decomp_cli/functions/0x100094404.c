// rea decompile_all
// name: FUN_100094404
// address: 0x100094404
// body: available
// range: 0x100094404-0x100095013 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100094ee4) */
/* WARNING: Removing unreachable block (ram,0x000100094e20) */
/* WARNING: Removing unreachable block (ram,0x000100094d60) */
/* WARNING: Removing unreachable block (ram,0x000100094f08) */

void FUN_100094404(undefined *param_1,code *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  code *pcVar4;
  ulong uVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  code *pcVar14;
  ulong uVar15;
  undefined8 uVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  long unaff_x21;
  code *pcVar20;
  code *pcVar21;
  undefined8 *puVar22;
  code *pcVar23;
  long lVar24;
  undefined1 auStack_900 [8];
  code *local_8f8;
  ulong local_8f0;
  ulong local_8e8;
  code *local_8e0;
  code *local_8d8;
  undefined1 auStack_8d0 [24];
  code *local_8b8;
  code *pcStack_8b0;
  ulong local_8a8;
  ulong uStack_8a0;
  undefined *local_898;
  ulong *puStack_890;
  long local_888;
  ulong uStack_880;
  undefined1 auStack_878 [144];
  undefined8 local_7e8;
  undefined8 local_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 local_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 local_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 local_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 local_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 local_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 local_720;
  undefined8 uStack_718;
  undefined8 local_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 local_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 local_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 local_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 local_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 local_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 local_650;
  undefined8 uStack_648;
  undefined8 local_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 local_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
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
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
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
  undefined8 uStack_2b8;
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
  undefined8 uStack_248;
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
  undefined8 uStack_1d8;
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
  undefined8 local_180;
  undefined8 uStack_178;
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
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  code *local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  pcVar4 = (code *)auStack_900;
  lVar19 = *(long *)(param_1 + 0x10);
  if (lVar19 == 0) {
    return;
  }
  uVar5 = *(ulong *)(param_1 + 0x20);
  pcVar9 = *(code **)(param_1 + 0x28);
  if ((uVar5 != 0x6c706d6f632d2d2d || pcVar9 != (code *)0xed00006e6f697465) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar5 & 1) == 0)) {
    return;
  }
  uStack_880 = lVar19 << 1 | 1;
  local_888 = 1;
  local_898 = param_1;
  puStack_890 = (ulong *)(param_1 + 0x20);
  _swift_bridgeObjectRetain();
  pcVar14 = param_2;
  _swift_retain();
  FUN_10009c568();
  pcVar20 = (code *)auStack_900;
  pcVar8 = pcVar14;
  if (pcVar9 != (code *)0x0) {
LAB_1000944bc:
    pcVar14 = pcVar9;
    pcVar9 = pcVar14;
    if ((pcVar8 != (code *)0x2d2d || pcVar14 != (code *)0xe200000000000000) &&
       (pcVar20 = pcVar8,
       __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                 (pcVar8,pcVar14,0x2d2d,0xe200000000000000,0), ((ulong)pcVar20 & 1) == 0)) {
      _swift_beginAccess(param_2 + 0x28,auStack_8d0,0,0);
      pcVar23 = *(code **)(param_2 + 0x28);
      local_8f8 = param_2;
      if ((ulong)pcVar23 >> 0x3e == 0) {
        pcVar20 = *(code **)(((ulong)pcVar23 & 0xffffffffffffff8) + 0x10);
      }
      else {
        pcVar20 = (code *)((ulong)pcVar23 & 0xffffffffffffff8);
        if ((long)pcVar23 < 0) {
          pcVar20 = pcVar23;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      _swift_bridgeObjectRetain(pcVar23);
      if (pcVar20 != (code *)0x0) {
        pcVar21 = (code *)0x0;
        local_8e8 = (ulong)pcVar23 & 0xc000000000000001;
        local_8f0 = (ulong)pcVar23 & 0xffffffffffffff8;
        do {
          if (local_8e8 == 0) {
            if (*(code **)(local_8f0 + 0x10) <= pcVar21) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x100094cd0);
              (*pcVar4)();
            }
            param_2 = *(code **)(pcVar23 + (long)(pcVar21 + 4) * 8);
            _swift_retain(param_2);
          }
          else {
            param_2 = pcVar21;
            FUN_1000794e0(pcVar21,pcVar23);
          }
          if (SCARRY8((long)pcVar21,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100094ccc);
            (*pcVar4)();
          }
          pcVar6 = *(code **)(param_2 + 0x10);
          pcVar7 = *(code **)(param_2 + 0x18);
          (**(code **)(pcVar7 + 0x18))();
          pcVar9 = pcVar7;
          if (pcVar6 == pcVar8 && pcVar14 == pcVar7) {
            _swift_release(local_8f8);
            _swift_bridgeObjectRelease(pcVar14);
LAB_100094680:
            _swift_bridgeObjectRelease(pcVar7);
            goto LAB_1000946a0;
          }
          local_8d8 = pcVar21 + 1;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          _swift_bridgeObjectRelease(pcVar7);
          if (((ulong)pcVar6 & 1) != 0) {
            _swift_release(local_8f8);
            pcVar7 = pcVar14;
            goto LAB_100094680;
          }
          (**(code **)(*(long *)(param_2 + 0x18) + 0x10))
                    (auStack_878,*(undefined8 *)(param_2 + 0x10));
          uVar13 = local_7e8;
          _swift_bridgeObjectRetain(local_7e8);
          FUN_10006e954(auStack_878);
          pcVar9 = pcVar4 + -0x20;
          local_8e0 = pcVar4;
          local_8b8 = pcVar8;
          pcStack_8b0 = pcVar14;
          *(code ***)(pcVar4 + -0x10) = &local_8b8;
          uVar5 = 0;
          FUN_10002150c(FUN_1000224ec,pcVar9,uVar13);
          _swift_bridgeObjectRelease(uVar13);
          pcVar4 = local_8e0;
          if ((uVar5 & 1) != 0) goto LAB_10009468c;
          _swift_release(param_2);
          pcVar21 = pcVar21 + 1;
          if (local_8d8 == pcVar20) break;
        } while( true );
      }
      _swift_bridgeObjectRelease(pcVar14);
      _swift_bridgeObjectRelease();
      FUN_100054664();
      _swift_allocError(&DAT_1000fa8c8,pcVar23,0,0);
      *(undefined8 *)pcVar23 = 3;
      *(undefined8 *)(pcVar23 + 0x10) = 0;
      *(undefined8 *)(pcVar23 + 8) = 0;
      *(undefined8 *)(pcVar23 + 0x20) = 0;
      *(undefined8 *)(pcVar23 + 0x18) = 0;
      *(undefined8 *)(pcVar23 + 0x30) = 0;
      *(undefined8 *)(pcVar23 + 0x28) = 0;
      *(undefined8 *)(pcVar23 + 0x40) = 0;
      *(undefined8 *)(pcVar23 + 0x38) = 0;
      *(undefined8 *)(pcVar23 + 0x48) = 0;
      pcVar23[0x50] = (code)0x11;
      _swift_willThrow();
      pcVar4 = local_8f8;
      goto LAB_100094fc0;
    }
    _swift_bridgeObjectRelease();
    pcVar20 = pcVar4;
  }
LAB_10009474c:
  local_8d8 = param_2;
  FUN_10009c568();
  pcVar4 = local_8d8;
  if (pcVar9 == (code *)0x0) {
LAB_100094f6c:
    FUN_100054664();
    _swift_allocError(&DAT_1000fa8c8,pcVar14,0,0);
    *(undefined8 *)pcVar14 = 3;
    *(undefined8 *)(pcVar14 + 0x10) = 0;
    *(undefined8 *)(pcVar14 + 8) = 0;
    *(undefined8 *)(pcVar14 + 0x20) = 0;
    *(undefined8 *)(pcVar14 + 0x18) = 0;
    *(undefined8 *)(pcVar14 + 0x30) = 0;
    *(undefined8 *)(pcVar14 + 0x28) = 0;
    *(undefined8 *)(pcVar14 + 0x40) = 0;
    *(undefined8 *)(pcVar14 + 0x38) = 0;
    *(undefined8 *)(pcVar14 + 0x48) = 0;
    pcVar14[0x50] = (code)0x11;
    _swift_willThrow();
    pcVar4 = local_8d8;
LAB_100094fc0:
    _swift_release(pcVar4);
    puVar12 = local_898;
LAB_100094fc8:
    _swift_unknownObjectRelease(puVar12);
    return;
  }
  pcVar8 = *(code **)(local_8d8 + 0x10);
  uVar13 = *(undefined8 *)(*(long *)(local_8d8 + 0x18) + 8);
  FUN_1000772e8(pcVar8,uVar13,2,0,0,0);
  FUN_10009cfd0(pcVar14,pcVar9,0);
  puVar12 = local_898;
  if (unaff_x21 != 0) {
    _swift_release(pcVar4);
    _swift_bridgeObjectRelease(uVar13);
    _swift_bridgeObjectRelease(pcVar8);
    _swift_bridgeObjectRelease(pcVar9);
    goto LAB_100094fc8;
  }
  _swift_bridgeObjectRelease(pcVar9);
  if (*(long *)(pcVar14 + 0x10) == 0) {
    _swift_bridgeObjectRelease(uVar13);
    _swift_bridgeObjectRelease(pcVar8);
LAB_100094f68:
    _swift_bridgeObjectRelease();
    goto LAB_100094f6c;
  }
  pcVar4 = *(code **)(pcVar14 + 0x20);
  uVar5 = *(ulong *)(pcVar14 + 0x28);
  uVar1 = *(undefined8 *)(pcVar14 + 0x30);
  uVar2 = *(undefined8 *)(pcVar14 + 0x38);
  uVar16 = *(undefined8 *)(pcVar14 + 0x40);
  FUN_10009583c(pcVar4,uVar5,uVar1,uVar2);
  _swift_bridgeObjectRelease(pcVar14);
  uVar17 = (uint)((ulong)uVar1 >> 0x3d) & 3;
  if (uVar17 != 0) {
    if (uVar17 != 1) goto LAB_100094f5c;
    pcVar23 = (code *)0x6e6f697469736f70;
    pcVar9 = pcVar23;
    pcVar14 = pcVar4;
    uVar18 = uVar5;
    __sSS9hasPrefixySbSSF(0x6e6f697469736f70,0xeb00000000406c61,pcVar4);
    if (((ulong)pcVar9 & 1) != 0) {
      __sSS5countSivg(0x6e6f697469736f70,0xeb00000000406c61);
      pcVar9 = pcVar4;
      uVar15 = uVar5;
      FUN_100096c3c();
      local_8f8 = pcVar23;
      local_8f0 = uVar18;
      local_8e8 = uVar15;
      FUN_1000838ec(pcVar4,uVar5,uVar1,uVar2,uVar16);
      pcVar4 = local_8f8;
      local_8e0 = pcVar9;
      if (((ulong)local_8f8 ^ (ulong)pcVar9) >> 0xe == 0) {
        _swift_bridgeObjectRelease(local_8f0);
      }
      else {
        *(undefined8 *)(pcVar20 + -0x10) = 10;
        uVar18 = local_8e8;
        uVar5 = local_8f0;
        local_8b8 = pcVar4;
        pcStack_8b0 = local_8e0;
        local_8a8 = local_8e8;
        uStack_8a0 = local_8f0;
        pcVar14 = pcVar20 + -0x50;
        *(code ***)(pcVar20 + -0x40) = &local_8b8;
        *(code **)(pcVar20 + -0x38) = FUN_100095980;
        *(code **)(pcVar20 + -0x30) = pcVar20 + -0x20;
        pcVar9 = FUN_100095998;
        FUN_1000932a0(FUN_100095998,pcVar14,uVar18,uVar5);
        if (((uint)pcVar14 >> 8 & 1) != 0) {
          pcVar14 = local_8e0;
          FUN_100092f20(pcVar4,local_8e0,local_8e8,uVar5,10);
          pcVar9 = pcVar4;
        }
        _swift_bridgeObjectRelease(uVar5);
        if (((ulong)pcVar14 & 1) == 0) {
          FUN_10008ea1c(&local_710,pcVar9,pcVar8);
          _swift_bridgeObjectRelease(uVar13);
          _swift_bridgeObjectRelease(pcVar8);
          uStack_328 = uStack_668;
          local_330 = local_670;
          uStack_318 = uStack_658;
          local_320 = uStack_660;
          uStack_308 = uStack_648;
          local_310 = local_650;
          uStack_368 = uStack_6a8;
          local_370 = local_6b0;
          uStack_358 = uStack_698;
          local_360 = uStack_6a0;
          uStack_338 = uStack_678;
          local_340 = uStack_680;
          uStack_348 = uStack_688;
          local_350 = local_690;
          uStack_3a8 = uStack_6e8;
          local_3b0 = local_6f0;
          uStack_398 = uStack_6d8;
          local_3a0 = uStack_6e0;
          uStack_378 = uStack_6b8;
          local_380 = uStack_6c0;
          uStack_388 = uStack_6c8;
          local_390 = local_6d0;
          uStack_3b8 = uStack_6f8;
          local_3c0 = uStack_700;
          uStack_3c8 = uStack_708;
          local_3d0 = local_710;
          pcVar14 = (code *)&local_3d0;
          FUN_10006ffd4();
          uVar5 = uStack_880;
          lVar19 = local_888;
          puVar3 = puStack_890;
          puVar12 = local_898;
          if ((int)pcVar14 == 1) goto LAB_100094f6c;
          uStack_258 = uStack_328;
          local_260 = local_330;
          uStack_248 = uStack_318;
          local_250 = local_320;
          uStack_238 = uStack_308;
          local_240 = local_310;
          uStack_298 = uStack_368;
          local_2a0 = local_370;
          uStack_288 = uStack_358;
          local_290 = local_360;
          uStack_268 = uStack_338;
          local_270 = local_340;
          uStack_278 = uStack_348;
          local_280 = local_350;
          uStack_2d8 = uStack_3a8;
          local_2e0 = local_3b0;
          uStack_2c8 = uStack_398;
          local_2d0 = local_3a0;
          uStack_2a8 = uStack_378;
          local_2b0 = local_380;
          uStack_2b8 = uStack_388;
          local_2c0 = local_390;
          uStack_2e8 = uStack_3b8;
          local_2f0 = local_3c0;
          uStack_2f8 = uStack_3c8;
          local_300 = local_3d0;
          puVar11 = puVar12;
          if ((uStack_880 & 1) == 0) {
LAB_100094a40:
            FUN_10007aef0(puVar12,puVar3,lVar19,uVar5);
          }
          else {
            uVar13 = 0;
            __ss28__ContiguousArrayStorageBaseCMa(0);
            puVar10 = puVar12;
            _swift_unknownObjectRetain_n(puVar12,2);
            _swift_dynamicCastClass();
            if (puVar10 == (undefined *)0x0) {
              _swift_unknownObjectRelease(puVar12);
              puVar10 = PTR___swiftEmptyArrayStorage_1000f0740;
            }
            lVar24 = *(long *)(puVar10 + 0x10);
            _swift_release();
            uVar18 = uVar5 >> 1;
            if (SBORROW8(uVar18,lVar19)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10009500c);
              (*pcVar4)();
            }
            if (lVar24 != uVar18 - lVar19) {
              _swift_unknownObjectRelease();
              goto LAB_100094a40;
            }
            _swift_dynamicCastClass(puVar12,uVar13);
            if (puVar11 == (undefined *)0x0) {
              _swift_unknownObjectRelease(puVar12);
              puVar11 = PTR___swiftEmptyArrayStorage_1000f0740;
            }
          }
          FUN_100093fa8(&local_300,puVar11);
          puVar22 = &local_710;
          goto LAB_100094f20;
        }
      }
LAB_100094f5c:
      _swift_bridgeObjectRelease(uVar13);
      pcVar14 = pcVar8;
      goto LAB_100094f68;
    }
    FUN_100096e2c(pcVar4);
    if (uVar5 == 0) goto LAB_100094f5c;
    FUN_100089c1c(&local_640);
    _swift_bridgeObjectRelease(pcVar14);
    _swift_bridgeObjectRelease(uVar5);
    _swift_bridgeObjectRelease(uVar13);
    _swift_bridgeObjectRelease(pcVar8);
    uStack_188 = uStack_598;
    local_190 = local_5a0;
    uStack_178 = uStack_588;
    local_180 = uStack_590;
    uStack_168 = uStack_578;
    local_170 = local_580;
    uStack_1c8 = uStack_5d8;
    local_1d0 = local_5e0;
    uStack_1b8 = uStack_5c8;
    local_1c0 = uStack_5d0;
    uStack_198 = uStack_5a8;
    local_1a0 = uStack_5b0;
    uStack_1a8 = uStack_5b8;
    local_1b0 = local_5c0;
    uStack_208 = uStack_618;
    local_210 = local_620;
    uStack_1f8 = uStack_608;
    local_200 = uStack_610;
    uStack_1d8 = uStack_5e8;
    local_1e0 = uStack_5f0;
    uStack_1e8 = uStack_5f8;
    local_1f0 = local_600;
    uStack_218 = uStack_628;
    local_220 = uStack_630;
    uStack_228 = uStack_638;
    local_230 = local_640;
    pcVar14 = (code *)&local_230;
    FUN_10006ffd4();
    uVar5 = uStack_880;
    lVar19 = local_888;
    puVar3 = puStack_890;
    puVar12 = local_898;
    if ((int)pcVar14 == 1) goto LAB_100094f6c;
    uStack_b8 = uStack_188;
    local_c0 = local_190;
    uStack_a8 = uStack_178;
    local_b0 = local_180;
    uStack_98 = uStack_168;
    local_a0 = local_170;
    uStack_f8 = uStack_1c8;
    local_100 = local_1d0;
    uStack_e8 = uStack_1b8;
    local_f0 = local_1c0;
    uStack_c8 = uStack_198;
    local_d0 = local_1a0;
    uStack_d8 = uStack_1a8;
    local_e0 = local_1b0;
    uStack_138 = uStack_208;
    local_140 = local_210;
    uStack_128 = uStack_1f8;
    local_130 = local_200;
    uStack_108 = uStack_1d8;
    local_110 = local_1e0;
    uStack_118 = uStack_1e8;
    local_120 = local_1f0;
    uStack_148 = uStack_218;
    local_150 = local_220;
    uStack_158 = uStack_228;
    local_160 = local_230;
    puVar11 = puVar12;
    if ((uStack_880 & 1) == 0) {
LAB_100094cac:
      FUN_10007aef0(puVar12,puVar3,lVar19,uVar5);
    }
    else {
      uVar13 = 0;
      __ss28__ContiguousArrayStorageBaseCMa(0);
      puVar10 = puVar12;
      _swift_unknownObjectRetain_n(puVar12,2);
      _swift_dynamicCastClass();
      if (puVar10 == (undefined *)0x0) {
        _swift_unknownObjectRelease(puVar12);
        puVar10 = PTR___swiftEmptyArrayStorage_1000f0740;
      }
      lVar24 = *(long *)(puVar10 + 0x10);
      _swift_release();
      uVar18 = uVar5 >> 1;
      if (SBORROW8(uVar18,lVar19)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100095000);
        (*pcVar4)();
      }
      if (lVar24 != uVar18 - lVar19) {
        _swift_unknownObjectRelease();
        goto LAB_100094cac;
      }
      _swift_dynamicCastClass(puVar12,uVar13);
      if (puVar11 == (undefined *)0x0) {
        _swift_unknownObjectRelease(puVar12);
        puVar11 = PTR___swiftEmptyArrayStorage_1000f0740;
      }
    }
    FUN_100093fa8(&local_160,puVar11);
    puVar22 = &local_640;
    goto LAB_100094f20;
  }
  local_90 = pcVar4;
  uStack_88 = uVar5;
  local_80 = uVar1;
  uStack_78 = uVar2;
  local_70 = uVar16;
  FUN_100089a74(&local_7e0,&local_90,pcVar8,uVar13);
  _swift_bridgeObjectRelease(uVar13);
  _swift_bridgeObjectRelease(pcVar8);
  FUN_1000838ec(pcVar4,uVar5,uVar1,uVar2,uVar16);
  uStack_4c8 = uStack_738;
  local_4d0 = local_740;
  uStack_4b8 = uStack_728;
  local_4c0 = uStack_730;
  uStack_4a8 = uStack_718;
  local_4b0 = local_720;
  uStack_508 = uStack_778;
  local_510 = local_780;
  uStack_4f8 = uStack_768;
  uStack_500 = uStack_770;
  uStack_4d8 = uStack_748;
  local_4e0 = uStack_750;
  uStack_4e8 = uStack_758;
  local_4f0 = local_760;
  uStack_548 = uStack_7b8;
  local_550 = local_7c0;
  uStack_538 = uStack_7a8;
  uStack_540 = uStack_7b0;
  uStack_528 = uStack_798;
  local_530 = local_7a0;
  uStack_518 = uStack_788;
  uStack_520 = uStack_790;
  uStack_568 = uStack_7d8;
  local_570 = local_7e0;
  uStack_558 = uStack_7c8;
  uStack_560 = uStack_7d0;
  pcVar14 = (code *)&local_570;
  FUN_10006ffd4();
  uVar5 = uStack_880;
  lVar19 = local_888;
  puVar3 = puStack_890;
  puVar12 = local_898;
  if ((int)pcVar14 == 1) goto LAB_100094f6c;
  uStack_3f8 = uStack_4c8;
  local_400 = local_4d0;
  uStack_3e8 = uStack_4b8;
  local_3f0 = local_4c0;
  uStack_3d8 = uStack_4a8;
  local_3e0 = local_4b0;
  uStack_438 = uStack_508;
  local_440 = local_510;
  uStack_428 = uStack_4f8;
  local_430 = uStack_500;
  uStack_408 = uStack_4d8;
  local_410 = local_4e0;
  uStack_418 = uStack_4e8;
  local_420 = local_4f0;
  uStack_478 = uStack_548;
  local_480 = local_550;
  uStack_468 = uStack_538;
  local_470 = uStack_540;
  uStack_448 = uStack_518;
  local_450 = uStack_520;
  uStack_458 = uStack_528;
  local_460 = local_530;
  uStack_488 = uStack_558;
  local_490 = uStack_560;
  uStack_498 = uStack_568;
  local_4a0 = local_570;
  puVar11 = puVar12;
  if ((uStack_880 & 1) == 0) {
LAB_100094b74:
    FUN_10007aef0(puVar12,puVar3,lVar19,uVar5);
  }
  else {
    uVar13 = 0;
    __ss28__ContiguousArrayStorageBaseCMa(0);
    puVar10 = puVar12;
    _swift_unknownObjectRetain_n(puVar12,2);
    _swift_dynamicCastClass();
    if (puVar10 == (undefined *)0x0) {
      _swift_unknownObjectRelease(puVar12);
      puVar10 = PTR___swiftEmptyArrayStorage_1000f0740;
    }
    lVar24 = *(long *)(puVar10 + 0x10);
    _swift_release();
    uVar18 = uVar5 >> 1;
    if (SBORROW8(uVar18,lVar19)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100094ff4);
      (*pcVar4)();
    }
    if (lVar24 != uVar18 - lVar19) {
      _swift_unknownObjectRelease();
      goto LAB_100094b74;
    }
    _swift_dynamicCastClass(puVar12,uVar13);
    if (puVar11 == (undefined *)0x0) {
      _swift_unknownObjectRelease(puVar12);
      puVar11 = PTR___swiftEmptyArrayStorage_1000f0740;
    }
  }
  FUN_100093fa8(&local_4a0,puVar11);
  puVar22 = &local_7e0;
LAB_100094f20:
  _swift_release(puVar11);
  _swift_unknownObjectRelease(puVar12);
  FUN_10001fc18(puVar22,&DAT_1001044a0,&DAT_1000d5bf0);
  _swift_release(local_8d8);
  return;
LAB_10009468c:
  _swift_bridgeObjectRelease(pcVar23);
  _swift_release(local_8f8);
  pcVar23 = pcVar14;
LAB_1000946a0:
  _swift_bridgeObjectRelease();
  FUN_10009c568();
  pcVar20 = pcVar4;
  pcVar14 = pcVar23;
  pcVar8 = pcVar23;
  if (pcVar9 == (code *)0x0) goto LAB_10009474c;
  goto LAB_1000944bc;
}

