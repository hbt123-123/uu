// rea decompile_all
// name: FUN_10058918c
// address: 0x10058918c
// body: available
// range: 0x10058918c-0x10058991f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10058918c(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  char cVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 auStack_4b0 [72];
  long local_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  long local_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined1 auStack_3d8 [24];
  long local_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 local_380;
  long local_378;
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
  undefined1 auStack_2b0 [24];
  undefined1 auStack_298 [24];
  long local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  long local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  _swift_beginAccess(param_1 + 0x10,auStack_b0,0,0);
  uVar8 = *(ulong *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x18);
  _swift_beginAccess(param_2 + 0x10,auStack_c8,0,0);
  lVar5 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    if (lVar5 != 0) {
      return 0;
    }
  }
  else {
    if (lVar5 == 0) {
      return 0;
    }
    if ((uVar8 != *(ulong *)(param_2 + 0x10) || lVar1 != lVar5) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar8,lVar1,*(ulong *)(param_2 + 0x10),lVar5,0), (uVar8 & 1) == 0)) {
      return 0;
    }
  }
  _swift_beginAccess(param_1 + 0x20,auStack_e0,0,0);
  uVar7 = *(ulong *)(param_1 + 0x20);
  _swift_beginAccess(param_2 + 0x20,auStack_f8,0,0);
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  _swift_retain(param_1);
  _swift_retain(param_2);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar9);
  uVar8 = uVar7;
  FUN_100570074(uVar7,uVar9);
  _swift_bridgeObjectRelease(uVar7);
  _swift_bridgeObjectRelease(uVar9);
  if ((uVar8 & 1) != 0) {
    _swift_beginAccess(param_1 + 0x28,auStack_110,0,0);
    uVar7 = *(ulong *)(param_1 + 0x28);
    _swift_beginAccess(param_2 + 0x28,auStack_128,0,0);
    uVar9 = *(undefined8 *)(param_2 + 0x28);
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar9);
    uVar8 = uVar7;
    FUN_100570074(uVar7,uVar9);
    _swift_bridgeObjectRelease(uVar7);
    _swift_bridgeObjectRelease(uVar9);
    if ((uVar8 & 1) != 0) {
      _swift_beginAccess(param_1 + 0x30,auStack_140,0,0);
      uVar7 = *(ulong *)(param_1 + 0x30);
      _swift_beginAccess(param_2 + 0x30,auStack_158,0,0);
      uVar9 = *(undefined8 *)(param_2 + 0x30);
      _swift_bridgeObjectRetain(uVar7);
      _swift_bridgeObjectRetain(uVar9);
      uVar8 = uVar7;
      FUN_1005701e8(uVar7,uVar9,FUN_10058918c);
      _swift_bridgeObjectRelease(uVar7);
      _swift_bridgeObjectRelease(uVar9);
      if ((uVar8 & 1) != 0) {
        _swift_beginAccess(param_1 + 0x38,auStack_170,0,0);
        uVar7 = *(ulong *)(param_1 + 0x38);
        _swift_beginAccess(param_2 + 0x38,auStack_188,0,0);
        uVar9 = *(undefined8 *)(param_2 + 0x38);
        _swift_bridgeObjectRetain(uVar7);
        _swift_bridgeObjectRetain(uVar9);
        uVar8 = uVar7;
        FUN_1005701e8(uVar7,uVar9,FUN_10058e704);
        _swift_bridgeObjectRelease(uVar7);
        _swift_bridgeObjectRelease(uVar9);
        if ((uVar8 & 1) != 0) {
          _swift_beginAccess(param_1 + 0x40,auStack_1a0,0,0);
          uVar7 = *(ulong *)(param_1 + 0x40);
          _swift_beginAccess(param_2 + 0x40,auStack_1b8,0,0);
          uVar9 = *(undefined8 *)(param_2 + 0x40);
          _swift_bridgeObjectRetain(uVar7);
          _swift_bridgeObjectRetain(uVar9);
          uVar8 = uVar7;
          FUN_100571434(uVar7,uVar9);
          _swift_bridgeObjectRelease(uVar7);
          _swift_bridgeObjectRelease(uVar9);
          if ((uVar8 & 1) != 0) {
            _swift_beginAccess(param_1 + 0x48,auStack_1d0,0,0);
            uVar7 = *(ulong *)(param_1 + 0x48);
            _swift_beginAccess(param_2 + 0x48,auStack_1e8,0,0);
            uVar9 = *(undefined8 *)(param_2 + 0x48);
            _swift_bridgeObjectRetain(uVar7);
            _swift_bridgeObjectRetain(uVar9);
            uVar8 = uVar7;
            FUN_100571b24(uVar7,uVar9);
            _swift_bridgeObjectRelease(uVar7);
            _swift_bridgeObjectRelease(uVar9);
            if ((uVar8 & 1) != 0) {
              _swift_beginAccess(param_1 + 0x50,auStack_298,0,0);
              uStack_258 = *(undefined8 *)(param_1 + 0x78);
              local_260 = *(undefined8 *)(param_1 + 0x70);
              local_248 = *(undefined8 *)(param_1 + 0x88);
              uStack_250 = *(undefined8 *)(param_1 + 0x80);
              uStack_240 = *(undefined8 *)(param_1 + 0x90);
              uStack_278 = *(undefined8 *)(param_1 + 0x58);
              local_280 = *(long *)(param_1 + 0x50);
              uStack_268 = *(undefined8 *)(param_1 + 0x68);
              uStack_270 = *(undefined8 *)(param_1 + 0x60);
              _swift_beginAccess(param_2 + 0x50,auStack_2b0,0,0);
              lVar1 = local_280;
              uStack_218 = *(undefined8 *)(param_2 + 0x68);
              uStack_220 = *(undefined8 *)(param_2 + 0x60);
              uStack_208 = *(undefined8 *)(param_2 + 0x78);
              local_210 = *(undefined8 *)(param_2 + 0x70);
              uStack_1f8 = *(undefined8 *)(param_2 + 0x88);
              uStack_200 = *(undefined8 *)(param_2 + 0x80);
              local_1f0 = *(undefined8 *)(param_2 + 0x90);
              uStack_228 = *(undefined8 *)(param_2 + 0x58);
              local_378 = *(long *)(param_2 + 0x50);
              puVar6 = (undefined8 *)((ulong)&local_280 | 8);
              uStack_2e8 = uStack_270;
              local_2f0 = uStack_278;
              uStack_2d8 = local_260;
              uStack_2e0 = uStack_268;
              uStack_2c8 = uStack_250;
              local_2d0 = uStack_258;
              uStack_2b8 = uStack_240;
              uStack_2c0 = local_248;
              uStack_328 = *(undefined8 *)(param_2 + 0x60);
              local_330 = *(undefined8 *)(param_2 + 0x58);
              uStack_318 = *(undefined8 *)(param_2 + 0x70);
              uStack_320 = *(undefined8 *)(param_2 + 0x68);
              uStack_308 = *(undefined8 *)(param_2 + 0x80);
              local_310 = *(undefined8 *)(param_2 + 0x78);
              uStack_2f8 = *(undefined8 *)(param_2 + 0x90);
              uStack_300 = *(undefined8 *)(param_2 + 0x88);
              local_230 = local_378;
              if (local_280 == 0) {
                if (local_378 != 0) {
                  FUN_10007f314(&local_280,&local_3c0,&DAT_100aab4c8,&DAT_100837c38);
                  FUN_10007f314(&local_230,&local_3c0,&DAT_100aab4c8,&DAT_100837c38);
                  _swift_release(param_1);
                  _swift_release(param_2);
                  goto LAB_100589744;
                }
                local_3c0 = 0;
                uStack_3b0 = puVar6[1];
                uStack_3b8 = *puVar6;
                local_3a0 = puVar6[3];
                uStack_3a8 = puVar6[2];
                uStack_390 = puVar6[5];
                uStack_398 = puVar6[4];
                local_380 = puVar6[7];
                uStack_388 = puVar6[6];
                FUN_10007f314(&local_280,&local_98,&DAT_100aab4c8,&DAT_100837c38);
                FUN_10007f314(&local_230,&local_98,&DAT_100aab4c8,&DAT_100837c38);
                FUN_100040bb4(&local_3c0,&DAT_100aab4c8,&DAT_100837c38);
              }
              else {
                if (local_378 == 0) {
                  FUN_10007f314(&local_280,&local_3c0,&DAT_100aab4c8,&DAT_100837c38);
                  FUN_10007f314(&local_230,&local_3c0,&DAT_100aab4c8,&DAT_100837c38);
                  FUN_10007f314(&local_280,&local_3c0,&DAT_100aab4c8,&DAT_100837c38);
                  FUN_10007f314(&local_230,&local_3c0,&DAT_100aab4c8,&DAT_100837c38);
                  _swift_release(param_1);
                  _swift_release(param_2);
                  FUN_100040bb4(&local_230,&DAT_100aab4c8,&DAT_100837c38);
                  FUN_100040bb4(&local_280,&DAT_100aab4c8,&DAT_100837c38);
LAB_100589744:
                  uStack_3b0 = uStack_2e8;
                  uStack_3b8 = local_2f0;
                  local_3a0 = uStack_2d8;
                  uStack_3a8 = uStack_2e0;
                  uStack_390 = uStack_2c8;
                  uStack_398 = local_2d0;
                  local_380 = uStack_2b8;
                  uStack_388 = uStack_2c0;
                  local_3c0 = lVar1;
                  uStack_368 = uStack_328;
                  local_370 = local_330;
                  uStack_358 = uStack_318;
                  uStack_360 = uStack_320;
                  uStack_348 = uStack_308;
                  local_350 = local_310;
                  uStack_338 = uStack_2f8;
                  uStack_340 = uStack_300;
                  FUN_100040bb4(&local_3c0,&DAT_100aad108,&DAT_10083cc60);
                  return 0;
                }
                uStack_458 = *(undefined8 *)(param_2 + 0x60);
                uStack_460 = *(undefined8 *)(param_2 + 0x58);
                uStack_448 = *(undefined8 *)(param_2 + 0x70);
                uStack_450 = *(undefined8 *)(param_2 + 0x68);
                uStack_438 = *(undefined8 *)(param_2 + 0x80);
                local_440 = *(undefined8 *)(param_2 + 0x78);
                uStack_428 = *(undefined8 *)(param_2 + 0x90);
                local_430 = *(undefined8 *)(param_2 + 0x88);
                uStack_88 = puVar6[1];
                local_90 = *puVar6;
                uStack_78 = puVar6[3];
                local_80 = puVar6[2];
                uStack_68 = puVar6[5];
                local_70 = puVar6[4];
                uStack_58 = puVar6[7];
                local_60 = puVar6[6];
                local_98 = local_280;
                local_468 = local_378;
                local_3c0 = local_378;
                uStack_3b8 = uStack_460;
                uStack_3b0 = uStack_458;
                uStack_3a8 = uStack_450;
                local_3a0 = uStack_448;
                uStack_398 = local_440;
                uStack_390 = uStack_438;
                uStack_388 = local_430;
                local_380 = uStack_428;
                FUN_10007f314(&local_280,auStack_4b0,&DAT_100aab4c8,&DAT_100837c38);
                FUN_10007f314(&local_230,auStack_4b0,&DAT_100aab4c8,&DAT_100837c38);
                FUN_10007f314(&local_280,auStack_4b0,&DAT_100aab4c8,&DAT_100837c38);
                FUN_10007f314(&local_230,auStack_4b0,&DAT_100aab4c8,&DAT_100837c38);
                plVar4 = &local_98;
                FUN_1005a6d4c(plVar4,&local_3c0);
                FUN_100040bb4(&local_230,&DAT_100aab4c8,&DAT_100837c38);
                FUN_100040bb4(&local_280,&DAT_100aab4c8,&DAT_100837c38);
                FUN_100040bb4(&local_468,&DAT_100aab4c8,&DAT_100837c38);
                local_420 = lVar1;
                uStack_410 = uStack_2e8;
                local_418 = local_2f0;
                uStack_400 = uStack_2d8;
                uStack_408 = uStack_2e0;
                uStack_3f0 = uStack_2c8;
                local_3f8 = local_2d0;
                uStack_3e0 = uStack_2b8;
                uStack_3e8 = uStack_2c0;
                FUN_100040bb4(&local_420,&DAT_100aab4c8,&DAT_100837c38);
                if (((ulong)plVar4 & 1) == 0) goto LAB_1005898d8;
              }
              _swift_beginAccess(param_1 + 0x98,&local_420,0,0);
              uVar7 = *(ulong *)(param_1 + 0x98);
              _swift_beginAccess(param_2 + 0x98,&local_468,0,0);
              uVar9 = *(undefined8 *)(param_2 + 0x98);
              _swift_bridgeObjectRetain(uVar7);
              _swift_bridgeObjectRetain(uVar9);
              uVar8 = uVar7;
              FUN_100572b4c(uVar7,uVar9);
              _swift_bridgeObjectRelease(uVar7);
              _swift_bridgeObjectRelease(uVar9);
              if ((uVar8 & 1) != 0) {
                _swift_beginAccess(param_1 + 0xa0,auStack_4b0,0,0);
                uVar8 = *(ulong *)(param_1 + 0xa0);
                _swift_beginAccess(param_2 + 0xa0,&local_2f0,0,0);
                FUN_1000e408c(uVar8,*(undefined8 *)(param_2 + 0xa0));
                if ((uVar8 & 1) != 0) {
                  _swift_beginAccess(param_1 + 0xa8,&local_330,0,0);
                  cVar2 = *(char *)(param_1 + 0xa8);
                  _swift_release(param_1);
                  _swift_beginAccess(param_2 + 0xa8,auStack_3d8,0,0);
                  cVar3 = *(char *)(param_2 + 0xa8);
                  _swift_release(param_2);
                  if (cVar2 == '\x03') {
                    if (cVar3 != '\x03') {
                      return 0;
                    }
                    return 1;
                  }
                  if (cVar3 == '\x03') {
                    return 0;
                  }
                  if (cVar2 != cVar3) {
                    return 0;
                  }
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_1005898d8:
  _swift_release(param_1);
  _swift_release(param_2);
  return 0;
}

