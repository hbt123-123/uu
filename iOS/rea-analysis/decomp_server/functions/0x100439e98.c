// rea decompile_all
// name: FUN_100439e98
// address: 0x100439e98
// body: available
// range: 0x100439e98-0x10043ae0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100439e98(long param_1,long param_2)

{
  ulong uVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 local_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 local_ab0;
  undefined8 uStack_aa8;
  undefined8 local_aa0;
  ulong uStack_a98;
  undefined8 local_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 local_a10;
  undefined8 uStack_a08;
  undefined8 local_a00;
  ulong uStack_9f8;
  undefined8 local_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 local_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 local_9b0;
  undefined8 uStack_9a8;
  undefined8 local_9a0;
  undefined8 local_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 local_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  ulong local_958;
  undefined8 local_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 local_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 local_910;
  undefined8 uStack_908;
  undefined8 local_900;
  undefined1 auStack_8f0 [64];
  undefined8 local_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 local_890;
  undefined8 uStack_888;
  undefined8 local_880;
  ulong uStack_878;
  undefined8 local_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 local_850;
  undefined8 uStack_848;
  undefined8 local_840;
  undefined8 local_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 local_810;
  undefined8 uStack_808;
  undefined8 local_800;
  undefined1 auStack_7f0 [24];
  undefined1 auStack_7d8 [24];
  undefined1 auStack_7c0 [24];
  undefined1 auStack_7a8 [24];
  undefined1 auStack_790 [24];
  undefined1 auStack_778 [24];
  undefined1 auStack_760 [24];
  undefined1 auStack_748 [24];
  undefined1 auStack_730 [24];
  undefined1 auStack_718 [24];
  undefined1 auStack_700 [24];
  undefined1 auStack_6e8 [24];
  undefined1 auStack_6d0 [24];
  undefined1 auStack_6b8 [24];
  undefined1 auStack_6a0 [24];
  undefined1 auStack_688 [24];
  undefined8 local_670;
  undefined8 uStack_668;
  undefined8 local_660;
  undefined8 uStack_658;
  undefined8 local_650;
  undefined8 uStack_648;
  undefined8 local_640;
  ulong uStack_638;
  undefined8 local_630;
  undefined8 uStack_628;
  undefined8 local_620;
  undefined8 uStack_618;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  ulong uStack_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  ulong uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  ulong uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  ulong uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined1 auStack_370 [24];
  undefined1 auStack_358 [24];
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  ulong uStack_308;
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
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  ulong uStack_1c8;
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
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
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
  undefined8 local_70;
  
  _swift_beginAccess(param_1 + 0x10,auStack_118,0,0);
  lVar8 = *(long *)(param_1 + 0x10);
  _swift_beginAccess(param_2 + 0x10,auStack_130,0,0);
  lVar7 = *(long *)(param_2 + 0x10);
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (lVar7 < 5) {
      if (lVar7 < 2) {
        if (lVar7 == 0) {
          if (lVar8 != 0) {
            return 0;
          }
        }
        else if (lVar8 != 1) {
          return 0;
        }
      }
      else if (lVar7 == 2) {
        if (lVar8 != 2) {
          return 0;
        }
      }
      else if (lVar7 == 3) {
        if (lVar8 != 3) {
          return 0;
        }
      }
      else if (lVar8 != 4) {
        return 0;
      }
    }
    else if (lVar7 < 7) {
      if (lVar7 == 5) {
        if (lVar8 != 5) {
          return 0;
        }
      }
      else if (lVar8 != 6) {
        return 0;
      }
    }
    else if (lVar7 == 7) {
      if (lVar8 != 7) {
        return 0;
      }
    }
    else if (lVar7 == 8) {
      if (lVar8 != 8) {
        return 0;
      }
    }
    else if (lVar8 != 9) {
      return 0;
    }
  }
  else if (lVar8 != lVar7) {
    return 0;
  }
  _swift_beginAccess(param_1 + 0x1c,auStack_148,0,0);
  iVar3 = *(int *)(param_1 + 0x1c);
  _swift_beginAccess(param_2 + 0x1c,auStack_160,0,0);
  if (iVar3 != *(int *)(param_2 + 0x1c)) {
    return 0;
  }
  _swift_beginAccess(param_1 + 0x20,auStack_358,0,0);
  uStack_2d8 = *(undefined8 *)(param_1 + 0x88);
  local_2e0 = *(undefined8 *)(param_1 + 0x80);
  uStack_2c8 = *(undefined8 *)(param_1 + 0x98);
  local_2d0 = *(undefined8 *)(param_1 + 0x90);
  uStack_2b8 = *(undefined8 *)(param_1 + 0xa8);
  local_2c0 = *(undefined8 *)(param_1 + 0xa0);
  local_2b0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_318 = *(undefined8 *)(param_1 + 0x48);
  local_320 = *(undefined8 *)(param_1 + 0x40);
  uStack_308 = *(ulong *)(param_1 + 0x58);
  local_310 = *(undefined8 *)(param_1 + 0x50);
  uStack_2f8 = *(undefined8 *)(param_1 + 0x68);
  local_300 = *(undefined8 *)(param_1 + 0x60);
  uStack_2e8 = *(undefined8 *)(param_1 + 0x78);
  local_2f0 = *(undefined8 *)(param_1 + 0x70);
  uStack_338 = *(undefined8 *)(param_1 + 0x28);
  local_340 = *(undefined8 *)(param_1 + 0x20);
  uStack_328 = *(undefined8 *)(param_1 + 0x38);
  local_330 = *(undefined8 *)(param_1 + 0x30);
  _swift_beginAccess(param_2 + 0x20,auStack_370,0,0);
  uStack_3a0 = *(undefined8 *)(param_2 + 0x88);
  local_3a8 = *(undefined8 *)(param_2 + 0x80);
  uStack_228 = *(undefined8 *)(param_2 + 0x98);
  local_230 = *(undefined8 *)(param_2 + 0x90);
  uStack_3b0 = *(undefined8 *)(param_2 + 0x78);
  local_3b8 = *(undefined8 *)(param_2 + 0x70);
  uStack_238 = *(undefined8 *)(param_2 + 0x88);
  local_240 = *(undefined8 *)(param_2 + 0x80);
  uStack_390 = *(undefined8 *)(param_2 + 0x98);
  local_398 = *(undefined8 *)(param_2 + 0x90);
  uStack_218 = *(undefined8 *)(param_2 + 0xa8);
  local_220 = *(undefined8 *)(param_2 + 0xa0);
  uStack_3e0 = *(undefined8 *)(param_2 + 0x48);
  local_3e8 = *(undefined8 *)(param_2 + 0x40);
  uStack_268 = *(undefined8 *)(param_2 + 0x58);
  local_270 = *(undefined8 *)(param_2 + 0x50);
  uStack_3f0 = *(undefined8 *)(param_2 + 0x38);
  local_3f8 = *(undefined8 *)(param_2 + 0x30);
  uStack_278 = *(undefined8 *)(param_2 + 0x48);
  local_280 = *(undefined8 *)(param_2 + 0x40);
  uStack_3d0 = *(ulong *)(param_2 + 0x58);
  local_3d8 = *(undefined8 *)(param_2 + 0x50);
  uStack_258 = *(undefined8 *)(param_2 + 0x68);
  local_260 = *(undefined8 *)(param_2 + 0x60);
  uStack_3c0 = *(undefined8 *)(param_2 + 0x68);
  local_3c8 = *(undefined8 *)(param_2 + 0x60);
  uStack_248 = *(undefined8 *)(param_2 + 0x78);
  local_250 = *(undefined8 *)(param_2 + 0x70);
  uStack_298 = *(undefined8 *)(param_2 + 0x28);
  local_2a0 = *(undefined8 *)(param_2 + 0x20);
  uStack_288 = *(undefined8 *)(param_2 + 0x38);
  local_290 = *(undefined8 *)(param_2 + 0x30);
  uStack_400 = *(undefined8 *)(param_2 + 0x28);
  local_408 = *(undefined8 *)(param_2 + 0x20);
  uStack_438 = uStack_2d8;
  local_440 = local_2e0;
  uStack_428 = uStack_2c8;
  local_430 = local_2d0;
  uStack_418 = uStack_2b8;
  local_420 = local_2c0;
  uStack_478 = uStack_318;
  local_480 = local_320;
  uStack_468 = uStack_308;
  local_470 = local_310;
  uStack_458 = uStack_2f8;
  local_460 = local_300;
  uStack_448 = uStack_2e8;
  local_450 = local_2f0;
  uStack_498 = uStack_338;
  local_4a0 = local_340;
  uStack_488 = uStack_328;
  local_490 = local_330;
  uStack_380 = *(undefined8 *)(param_2 + 0xa8);
  local_388 = *(undefined8 *)(param_2 + 0xa0);
  uStack_198 = uStack_2d8;
  local_1a0 = local_2e0;
  uStack_188 = uStack_2c8;
  local_190 = local_2d0;
  uStack_178 = uStack_2b8;
  local_180 = local_2c0;
  uStack_1d8 = uStack_318;
  local_1e0 = local_320;
  uStack_1c8 = uStack_308;
  local_1d0 = local_310;
  uStack_1b8 = uStack_2f8;
  local_1c0 = local_300;
  uStack_1a8 = uStack_2e8;
  local_1b0 = local_2f0;
  local_210 = *(undefined8 *)(param_2 + 0xb0);
  local_378 = *(undefined8 *)(param_2 + 0xb0);
  local_410 = local_2b0;
  local_170 = local_2b0;
  uStack_1f8 = uStack_338;
  local_200 = local_340;
  uStack_1e8 = uStack_328;
  local_1f0 = local_330;
  iVar3 = (int)&local_200;
  FUN_100438dbc();
  if (iVar3 == 1) {
    uStack_568 = uStack_3a0;
    local_570 = local_3a8;
    uStack_558 = uStack_390;
    local_560 = local_398;
    uStack_548 = uStack_380;
    local_550 = local_388;
    local_540 = local_378;
    uStack_5a8 = uStack_3e0;
    local_5b0 = local_3e8;
    uStack_598 = uStack_3d0;
    local_5a0 = local_3d8;
    uStack_588 = uStack_3c0;
    local_590 = local_3c8;
    uStack_578 = uStack_3b0;
    local_580 = local_3b8;
    uStack_5c8 = uStack_400;
    local_5d0 = local_408;
    uStack_5b8 = uStack_3f0;
    local_5c0 = local_3f8;
    iVar3 = (int)&local_5d0;
    FUN_100438dbc();
    if (iVar3 != 1) {
      FUN_10007f314(&local_340,&local_100,&DAT_100a9f378,&DAT_100827760);
      puVar4 = &local_100;
LAB_10043a2e4:
      FUN_10007f314(&local_2a0,puVar4,&DAT_100a9f378,&DAT_100827760);
      _memcpy(&local_5d0,&local_4a0,0x130);
      FUN_100040bb4(&local_5d0,&DAT_100a9f758,&DAT_100828018);
      return 0;
    }
    uStack_98 = uStack_438;
    local_a0 = local_440;
    uStack_88 = uStack_428;
    uStack_90 = local_430;
    uStack_78 = uStack_418;
    local_80 = local_420;
    local_70 = local_410;
    uStack_d8 = uStack_478;
    local_e0 = local_480;
    uStack_c8 = uStack_468;
    uStack_d0 = local_470;
    uStack_b8 = uStack_458;
    local_c0 = local_460;
    uStack_a8 = uStack_448;
    uStack_b0 = local_450;
    uStack_f8 = uStack_498;
    local_100 = local_4a0;
    uStack_e8 = uStack_488;
    uStack_f0 = local_490;
    FUN_10007f314(&local_340,&local_670,&DAT_100a9f378,&DAT_100827760);
    FUN_10007f314(&local_2a0,&local_670,&DAT_100a9f378,&DAT_100827760);
    _swift_retain(param_1);
    _swift_retain(param_2);
    FUN_100040bb4(&local_100,&DAT_100a9f378,&DAT_100827760);
  }
  else {
    uStack_608 = uStack_3a0;
    local_610 = local_3a8;
    uStack_5f8 = uStack_390;
    local_600 = local_398;
    uStack_5e8 = uStack_380;
    local_5f0 = local_388;
    local_5e0 = local_378;
    uStack_648 = uStack_3e0;
    local_650 = local_3e8;
    uStack_638 = uStack_3d0;
    local_640 = local_3d8;
    uStack_628 = uStack_3c0;
    local_630 = local_3c8;
    uStack_618 = uStack_3b0;
    local_620 = local_3b8;
    uStack_668 = uStack_400;
    local_670 = local_408;
    uStack_658 = uStack_3f0;
    local_660 = local_3f8;
    iVar3 = (int)&local_670;
    FUN_100438dbc();
    if (iVar3 == 1) {
      FUN_10007f314(&local_340,&local_5d0,&DAT_100a9f378,&DAT_100827760);
      puVar4 = &local_5d0;
      goto LAB_10043a2e4;
    }
    uStack_9c8 = uStack_3a0;
    local_9d0 = local_3a8;
    uStack_9b8 = uStack_390;
    uStack_9c0 = local_398;
    uStack_9a8 = uStack_380;
    local_9b0 = local_388;
    uStack_a08 = uStack_3e0;
    local_a10 = local_3e8;
    uStack_9f8 = uStack_3d0;
    local_a00 = local_3d8;
    uStack_9e8 = uStack_3c0;
    local_9f0 = local_3c8;
    uStack_9d8 = uStack_3b0;
    uStack_9e0 = local_3b8;
    uStack_a28 = uStack_400;
    local_a30 = local_408;
    uStack_a18 = uStack_3f0;
    uStack_a20 = local_3f8;
    uStack_568 = uStack_3a0;
    local_570 = local_3a8;
    uStack_558 = uStack_390;
    local_560 = local_398;
    uStack_548 = uStack_380;
    local_550 = local_388;
    uStack_5a8 = uStack_3e0;
    local_5b0 = local_3e8;
    uStack_598 = uStack_3d0;
    local_5a0 = local_3d8;
    uStack_588 = uStack_3c0;
    local_590 = local_3c8;
    uStack_578 = uStack_3b0;
    local_580 = local_3b8;
    local_9a0 = local_378;
    local_540 = local_378;
    uStack_5c8 = uStack_400;
    local_5d0 = local_408;
    uStack_5b8 = uStack_3f0;
    local_5c0 = local_3f8;
    uStack_98 = uStack_438;
    local_a0 = local_440;
    uStack_88 = uStack_428;
    uStack_90 = local_430;
    uStack_78 = uStack_418;
    local_80 = local_420;
    local_70 = local_410;
    uStack_d8 = uStack_478;
    local_e0 = local_480;
    uStack_c8 = uStack_468;
    uStack_d0 = local_470;
    uStack_b8 = uStack_458;
    local_c0 = local_460;
    uStack_a8 = uStack_448;
    uStack_b0 = local_450;
    uStack_f8 = uStack_498;
    local_100 = local_4a0;
    uStack_e8 = uStack_488;
    uStack_f0 = local_490;
    FUN_10007f314(&local_340,&local_ad0,&DAT_100a9f378,&DAT_100827760);
    FUN_10007f314(&local_2a0,&local_ad0,&DAT_100a9f378,&DAT_100827760);
    FUN_10007f314(&local_340,&local_ad0,&DAT_100a9f378,&DAT_100827760);
    FUN_10007f314(&local_2a0,&local_ad0,&DAT_100a9f378,&DAT_100827760);
    _swift_retain(param_1);
    _swift_retain(param_2);
    puVar4 = &local_100;
    FUN_10043c15c(puVar4,&local_5d0);
    FUN_100040bb4(&local_2a0,&DAT_100a9f378,&DAT_100827760);
    FUN_100040bb4(&local_340,&DAT_100a9f378,&DAT_100827760);
    FUN_100040bb4(&local_a30,&DAT_100a9f378,&DAT_100827760);
    uStack_928 = uStack_438;
    local_930 = local_440;
    uStack_918 = uStack_428;
    uStack_920 = local_430;
    uStack_908 = uStack_418;
    local_910 = local_420;
    local_900 = local_410;
    uStack_968 = uStack_478;
    local_970 = local_480;
    local_958 = uStack_468;
    uStack_960 = local_470;
    uStack_948 = uStack_458;
    local_950 = local_460;
    uStack_938 = uStack_448;
    uStack_940 = local_450;
    uStack_988 = uStack_498;
    local_990 = local_4a0;
    uStack_978 = uStack_488;
    uStack_980 = local_490;
    FUN_100040bb4(&local_990,&DAT_100a9f378,&DAT_100827760);
    if (((ulong)puVar4 & 1) == 0) goto LAB_10043ada8;
  }
  _swift_beginAccess(param_1 + 0xb8,auStack_688,0,0);
  uVar9 = *(ulong *)(param_1 + 0xb8);
  _swift_beginAccess(param_2 + 0xb8,auStack_6a0,0,0);
  uVar11 = *(undefined8 *)(param_2 + 0xb8);
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRetain(uVar11);
  uVar5 = uVar9;
  FUN_10042b9a8(uVar9,uVar11);
  _swift_bridgeObjectRelease(uVar9);
  _swift_bridgeObjectRelease(uVar11);
  if ((uVar5 & 1) == 0) goto LAB_10043ada8;
  _swift_beginAccess(param_1 + 0xc0,auStack_6b8,0,0);
  cVar2 = *(char *)(param_1 + 0xc0);
  _swift_beginAccess(param_2 + 0xc0,auStack_6d0,0,0);
  if (cVar2 != *(char *)(param_2 + 0xc0)) goto LAB_10043ada8;
  _swift_beginAccess(param_1 + 200,auStack_6e8,0,0);
  uVar9 = *(ulong *)(param_1 + 200);
  _swift_beginAccess(param_2 + 200,auStack_700,0,0);
  uVar11 = *(undefined8 *)(param_2 + 200);
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRetain(uVar11);
  uVar5 = uVar9;
  FUN_10042bed4(uVar9,uVar11);
  _swift_bridgeObjectRelease(uVar9);
  _swift_bridgeObjectRelease(uVar11);
  if ((uVar5 & 1) == 0) goto LAB_10043ada8;
  _swift_beginAccess(param_1 + 0xd0,auStack_718,0,0);
  uVar5 = *(ulong *)(param_1 + 0xd0);
  uVar1 = *(ulong *)(param_1 + 0xd8);
  uVar10 = *(ulong *)(param_1 + 0xe0);
  _swift_beginAccess(param_2 + 0xd0,auStack_730,0,0);
  uVar9 = *(ulong *)(param_2 + 0xd0);
  uVar11 = *(undefined8 *)(param_2 + 0xd8);
  uVar12 = *(ulong *)(param_2 + 0xe0);
  if (uVar10 >> 0x3c < 0xf) {
    if (0xe < uVar12 >> 0x3c) {
      FUN_100040b80(uVar5,uVar1,uVar10);
      FUN_100040b80(uVar9,uVar11,uVar12);
      FUN_100040b80(uVar5,uVar1,uVar10);
      FUN_100040b80(uVar9,uVar11,uVar12);
      _swift_release(param_1);
      _swift_release(param_2);
      switchD_10004048c::caseD_6d(uVar9,uVar11,uVar12);
      switchD_10004048c::caseD_6d(uVar5,uVar1,uVar10);
      goto LAB_10043a784;
    }
    if ((int)uVar5 == (int)uVar9) {
      FUN_100040b80(uVar5,uVar1,uVar10);
      FUN_100040b80(uVar9,uVar11,uVar12);
      FUN_100040b80(uVar5,uVar1,uVar10);
      FUN_100040b80(uVar9,uVar11,uVar12);
      if ((uVar9 ^ uVar5) >> 0x20 == 0) {
        uVar6 = uVar1;
        FUN_1000094a4(uVar1,uVar10,uVar11,uVar12);
        switchD_10004048c::caseD_6d(uVar9,uVar11,uVar12);
        switchD_10004048c::caseD_6d(uVar9,uVar11,uVar12);
        switchD_10004048c::caseD_6d(uVar5,uVar1,uVar10);
        if ((uVar6 & 1) == 0) {
          _swift_release(param_1);
          _swift_release(param_2);
          goto LAB_10043a98c;
        }
        goto LAB_10043a640;
      }
    }
    else {
      FUN_100040b80(uVar5,uVar1,uVar10);
      FUN_100040b80(uVar9,uVar11,uVar12);
      FUN_100040b80(uVar5,uVar1,uVar10);
      FUN_100040b80(uVar9,uVar11,uVar12);
    }
    _swift_release(param_1);
    _swift_release(param_2);
    switchD_10004048c::caseD_6d(uVar9,uVar11,uVar12);
    switchD_10004048c::caseD_6d(uVar9,uVar11,uVar12);
    switchD_10004048c::caseD_6d(uVar5,uVar1,uVar10);
LAB_10043a98c:
    switchD_10004048c::caseD_6d(uVar5,uVar1,uVar10);
    return 0;
  }
  FUN_100040b80(uVar5,uVar1,uVar10);
  FUN_100040b80(uVar9,uVar11,uVar12);
  if (uVar12 >> 0x3c < 0xf) {
    _swift_release(param_1);
    _swift_release(param_2);
LAB_10043a784:
    switchD_10004048c::caseD_6d(uVar5,uVar1,uVar10);
    switchD_10004048c::caseD_6d(uVar9,uVar11,uVar12);
    return 0;
  }
LAB_10043a640:
  switchD_10004048c::caseD_6d(uVar5,uVar1,uVar10);
  _swift_beginAccess(param_1 + 0xe8,auStack_748,0,0);
  lVar8 = *(long *)(param_1 + 0xe8);
  _swift_beginAccess(param_2 + 0xe8,auStack_760,0,0);
  lVar7 = *(long *)(param_2 + 0xe8);
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    if (lVar7 < 2) {
      if (lVar7 == 0) {
        if (lVar8 != 0) goto LAB_10043ada8;
      }
      else if (lVar8 != 1) goto LAB_10043ada8;
    }
    else if (lVar7 == 2) {
      if (lVar8 != 2) goto LAB_10043ada8;
    }
    else if (lVar7 == 3) {
      if (lVar8 != 3) goto LAB_10043ada8;
    }
    else if (lVar8 != 4) goto LAB_10043ada8;
  }
  else if (lVar8 != lVar7) goto LAB_10043ada8;
  _swift_beginAccess(param_1 + 0xf8,auStack_778,0,0);
  uVar5 = *(ulong *)(param_1 + 0xf8);
  lVar7 = *(long *)(param_1 + 0x100);
  _swift_beginAccess(param_2 + 0xf8,auStack_790,0,0);
  if (((uVar5 != *(ulong *)(param_2 + 0xf8)) || (lVar7 != *(long *)(param_2 + 0x100))) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar5,lVar7,*(ulong *)(param_2 + 0xf8),*(long *)(param_2 + 0x100),0),
     (uVar5 & 1) == 0)) {
LAB_10043ada8:
    _swift_release(param_1);
    _swift_release(param_2);
    return 0;
  }
  _swift_beginAccess(param_1 + 0x108,auStack_7a8,0,0);
  lVar8 = *(long *)(param_1 + 0x108);
  _swift_beginAccess(param_2 + 0x108,auStack_7c0,0,0);
  lVar7 = *(long *)(param_2 + 0x108);
  if (*(char *)(param_2 + 0x110) == '\x01') {
    if (lVar7 == 0) {
      if (lVar8 != 0) goto LAB_10043ada8;
    }
    else if (lVar7 == 1) {
      if (lVar8 != 1) goto LAB_10043ada8;
    }
    else if (lVar8 != 2) goto LAB_10043ada8;
  }
  else if (lVar8 != lVar7) goto LAB_10043ada8;
  _swift_beginAccess((undefined8 *)(param_1 + 0x118),auStack_7d8,0,0);
  uStack_a28 = *(undefined8 *)(param_1 + 0x120);
  local_a30 = *(undefined8 *)(param_1 + 0x118);
  uStack_a18 = *(undefined8 *)(param_1 + 0x130);
  uStack_a20 = *(undefined8 *)(param_1 + 0x128);
  uStack_a08 = *(undefined8 *)(param_1 + 0x140);
  local_a10 = *(undefined8 *)(param_1 + 0x138);
  uStack_9f8 = *(ulong *)(param_1 + 0x150);
  local_a00 = *(undefined8 *)(param_1 + 0x148);
  puVar4 = (undefined8 *)(param_2 + 0x118);
  _swift_beginAccess(puVar4,auStack_7f0,0,0);
  uVar5 = uStack_9f8;
  uStack_988 = *(undefined8 *)(param_2 + 0x120);
  local_990 = *puVar4;
  uStack_978 = *(undefined8 *)(param_2 + 0x130);
  uStack_980 = *(undefined8 *)(param_2 + 0x128);
  uStack_968 = *(undefined8 *)(param_2 + 0x140);
  local_970 = *(undefined8 *)(param_2 + 0x138);
  uVar9 = *(ulong *)(param_2 + 0x150);
  uStack_960 = *(undefined8 *)(param_2 + 0x148);
  uStack_868 = *(undefined8 *)(param_2 + 0x120);
  local_870 = *puVar4;
  uStack_858 = *(undefined8 *)(param_2 + 0x130);
  uStack_860 = *(undefined8 *)(param_2 + 0x128);
  uStack_848 = *(undefined8 *)(param_2 + 0x140);
  local_850 = *(undefined8 *)(param_2 + 0x138);
  uStack_828 = uStack_a28;
  local_830 = local_a30;
  uStack_818 = uStack_a18;
  uStack_820 = uStack_a20;
  uStack_808 = uStack_a08;
  local_810 = local_a10;
  local_800 = local_a00;
  local_840 = *(undefined8 *)(param_2 + 0x148);
  local_958 = uVar9;
  if (uStack_9f8 >> 0x3c < 0xf) {
    if (uVar9 >> 0x3c < 0xf) {
      local_880 = *(undefined8 *)(param_2 + 0x148);
      uStack_8a8 = *(undefined8 *)(param_2 + 0x120);
      local_8b0 = *puVar4;
      uStack_898 = *(undefined8 *)(param_2 + 0x130);
      uStack_8a0 = *(undefined8 *)(param_2 + 0x128);
      uStack_888 = *(undefined8 *)(param_2 + 0x140);
      local_890 = *(undefined8 *)(param_2 + 0x138);
      uStack_648 = uStack_a08;
      local_650 = local_a10;
      uStack_658 = uStack_a18;
      local_660 = uStack_a20;
      uStack_668 = uStack_a28;
      local_670 = local_a30;
      local_640 = local_a00;
      uStack_638 = uStack_9f8;
      uStack_878 = uVar9;
      local_4a0 = local_8b0;
      uStack_498 = uStack_8a8;
      local_490 = uStack_8a0;
      uStack_488 = uStack_898;
      local_480 = local_890;
      uStack_478 = uStack_888;
      local_470 = local_880;
      uStack_468 = uVar9;
      FUN_10007f314(&local_a30,auStack_8f0,&DAT_100a9f380,&DAT_10082d5a0);
      FUN_10007f314(&local_990,auStack_8f0,&DAT_100a9f380,&DAT_10082d5a0);
      FUN_10007f314(&local_a30,auStack_8f0,&DAT_100a9f380,&DAT_10082d5a0);
      FUN_10007f314(&local_990,auStack_8f0,&DAT_100a9f380,&DAT_10082d5a0);
      puVar4 = &local_670;
      FUN_10044c190(puVar4,&local_4a0);
      FUN_100040bb4(&local_990,&DAT_100a9f380,&DAT_10082d5a0);
      FUN_100040bb4(&local_a30,&DAT_100a9f380,&DAT_10082d5a0);
      FUN_100040bb4(&local_8b0,&DAT_100a9f380,&DAT_10082d5a0);
      uStack_ac8 = uStack_828;
      local_ad0 = local_830;
      uStack_ab8 = uStack_818;
      uStack_ac0 = uStack_820;
      uStack_aa8 = uStack_808;
      local_ab0 = local_810;
      local_aa0 = local_800;
      uStack_a98 = uVar5;
      FUN_100040bb4(&local_ad0,&DAT_100a9f380,&DAT_10082d5a0);
      if (((ulong)puVar4 & 1) != 0) goto LAB_10043ad54;
      goto LAB_10043ada8;
    }
    FUN_10007f314(&local_a30,&local_4a0,&DAT_100a9f380,&DAT_10082d5a0);
    FUN_10007f314(&local_990,&local_4a0,&DAT_100a9f380,&DAT_10082d5a0);
    FUN_10007f314(&local_a30,&local_4a0,&DAT_100a9f380,&DAT_10082d5a0);
    FUN_10007f314(&local_990,&local_4a0,&DAT_100a9f380,&DAT_10082d5a0);
    _swift_release(param_1);
    _swift_release(param_2);
    FUN_100040bb4(&local_990,&DAT_100a9f380,&DAT_10082d5a0);
    FUN_100040bb4(&local_a30,&DAT_100a9f380,&DAT_10082d5a0);
  }
  else {
    if (0xe < uVar9 >> 0x3c) {
      uStack_498 = uStack_a28;
      local_4a0 = local_a30;
      uStack_488 = uStack_a18;
      local_490 = uStack_a20;
      uStack_478 = uStack_a08;
      local_480 = local_a10;
      local_470 = local_a00;
      uStack_468 = uStack_9f8;
      FUN_10007f314(&local_a30,&local_670,&DAT_100a9f380,&DAT_10082d5a0);
      FUN_10007f314(&local_990,&local_670,&DAT_100a9f380,&DAT_10082d5a0);
      FUN_100040bb4(&local_4a0,&DAT_100a9f380,&DAT_10082d5a0);
LAB_10043ad54:
      _swift_beginAccess(param_1 + 0x158,&local_ad0,0,0);
      uVar5 = *(ulong *)(param_1 + 0x158);
      lVar7 = *(long *)(param_1 + 0x160);
      _swift_beginAccess(param_2 + 0x158,&local_8b0,0,0);
      if ((uVar5 == *(ulong *)(param_2 + 0x158)) && (lVar7 == *(long *)(param_2 + 0x160))) {
        _swift_release(param_1);
        _swift_release(param_2);
        return 1;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar5,lVar7,*(ulong *)(param_2 + 0x158),*(long *)(param_2 + 0x160),0);
      _swift_release(param_1);
      _swift_release(param_2);
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      return 1;
    }
    FUN_10007f314(&local_a30,&local_4a0,&DAT_100a9f380,&DAT_10082d5a0);
    FUN_10007f314(&local_990,&local_4a0,&DAT_100a9f380,&DAT_10082d5a0);
    _swift_release(param_1);
    _swift_release(param_2);
  }
  uStack_498 = uStack_828;
  local_4a0 = local_830;
  uStack_488 = uStack_818;
  local_490 = uStack_820;
  uStack_478 = uStack_808;
  local_480 = local_810;
  local_470 = local_800;
  uStack_468 = uVar5;
  uStack_458 = uStack_868;
  local_460 = local_870;
  uStack_448 = uStack_858;
  local_450 = uStack_860;
  uStack_438 = uStack_848;
  local_440 = local_850;
  local_430 = local_840;
  uStack_428 = uVar9;
  FUN_100040bb4(&local_4a0,&DAT_100a9f760,&DAT_100828020);
  return 0;
}

