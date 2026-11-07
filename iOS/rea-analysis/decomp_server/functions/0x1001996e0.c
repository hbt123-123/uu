// rea decompile_all
// name: FUN_1001996e0
// address: 0x1001996e0
// body: available
// range: 0x1001996e0-0x100199abf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001996e0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined4 uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auStack_488 [24];
  undefined8 local_470;
  undefined1 local_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  ulong uStack_428;
  undefined8 local_420;
  ulong uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined1 local_400;
  long local_3f8;
  undefined1 *puStack_3f0;
  long local_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  ulong uStack_3b8;
  undefined8 local_3b0;
  ulong uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined1 uStack_358;
  undefined7 uStack_357;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  ulong uStack_318;
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
  ulong uStack_2a8;
  undefined8 local_2a0;
  ulong uStack_298;
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
  undefined1 local_230;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
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
  undefined1 local_160;
  undefined1 auStack_158 [24];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
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
  
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_100199ac0,0,0xd0000000000000a1,0x800000010088d6c0,0x6f72507472617473,
                0xee002928676e6962,0x34,0);
  puVar10 = auStack_158;
  lVar11 = 0;
  _swift_beginAccess(param_2 + 0x10,puVar10,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    if (*(long *)(param_2 + 0x28) < 200) {
      *(long *)(param_2 + 0x28) = *(long *)(param_2 + 0x28) + 1;
      lVar9 = param_2;
      FUN_10047466c();
      local_400 = 1;
      local_3f8 = lVar9;
      puStack_3f0 = puVar10;
      local_3e8 = lVar11;
      if (DAT_100a73b80 != -1) {
        _swift_once(&DAT_100a73b80,FUN_10012426c);
      }
      uVar6 = _DAT_100b36100;
      uVar5 = DAT_100b360f0;
      uVar4 = uRam0000000100b360e8;
      uVar3 = _DAT_100b360e0;
      uVar2 = uRam0000000100b360d8;
      uVar1 = _DAT_100b360d0;
      uStack_3d8 = uRam0000000100b360d8;
      local_3e0 = _DAT_100b360d0;
      uStack_3c8 = uRam0000000100b360e8;
      local_3d0 = _DAT_100b360e0;
      uStack_3b8 = _DAT_100b360f8;
      local_3c0 = DAT_100b360f0;
      uStack_3a8 = uRam0000000100b36108;
      local_3b0 = _DAT_100b36100;
      uVar14 = _DAT_100b360f8 & 0xcfffffffffffffff;
      uVar13 = uRam0000000100b36108 & 0xcfffffffffffffff | 0x1000000000000000;
      uStack_398 = 0;
      local_3a0 = 0;
      uStack_388 = 0;
      uStack_390 = 0;
      local_380 = 0;
      uStack_378 = 0x3000000000000000;
      uStack_368 = 0x3000000000000000;
      local_370 = 0;
      FUN_100121b5c(&local_3e0,&local_140);
      FUN_100199e68(&local_3a0);
      uVar7 = local_400;
      local_360 = 0;
      uStack_358 = local_400;
      local_350 = 0;
      uStack_348 = 0xe000000000000000;
      local_340 = uVar1;
      uStack_338 = uVar2;
      local_330 = uVar3;
      uStack_328 = uVar4;
      local_320 = uVar5;
      local_310 = uVar6;
      uStack_2e8 = CONCAT71(uStack_357,local_400);
      uStack_2f8 = 0xc000000000000000;
      local_300 = 0;
      local_2f0 = 0;
      uStack_2d8 = 0xe000000000000000;
      local_2e0 = 0;
      uStack_2c8 = uVar2;
      local_2d0 = uVar1;
      local_2a0 = uVar6;
      uStack_288 = 0xc000000000000000;
      local_290 = 0;
      uStack_2b8 = uVar4;
      local_2c0 = uVar3;
      local_2b0 = uVar5;
      uStack_318 = uVar14;
      uStack_308 = uVar13;
      uStack_2a8 = uVar14;
      uStack_298 = uVar13;
      FUN_100121b98(&local_2f0);
      uStack_178 = uStack_248;
      local_180 = local_250;
      uStack_168 = uStack_238;
      uStack_170 = uStack_240;
      local_160 = local_230;
      uStack_1b8 = uStack_288;
      local_1c0 = local_290;
      uStack_1a8 = uStack_278;
      uStack_1b0 = uStack_280;
      uStack_198 = uStack_268;
      local_1a0 = local_270;
      uStack_188 = uStack_258;
      uStack_190 = uStack_260;
      uStack_1f8 = uStack_2c8;
      local_200 = local_2d0;
      uStack_1e8 = uStack_2b8;
      uStack_1f0 = local_2c0;
      uStack_1d8 = uStack_2a8;
      local_1e0 = local_2b0;
      uStack_1c8 = uStack_298;
      uStack_1d0 = local_2a0;
      uStack_218 = uStack_2e8;
      local_220 = local_2f0;
      uStack_208 = uStack_2d8;
      uStack_210 = local_2e0;
      FUN_100008290(&local_220);
      uStack_98 = uStack_178;
      local_a0 = local_180;
      uStack_88 = uStack_168;
      uStack_90 = uStack_170;
      local_80 = local_160;
      uStack_d8 = uStack_1b8;
      local_e0 = local_1c0;
      uStack_c8 = uStack_1a8;
      uStack_d0 = uStack_1b0;
      uStack_b8 = uStack_198;
      local_c0 = local_1a0;
      uStack_a8 = uStack_188;
      uStack_b0 = uStack_190;
      uStack_118 = uStack_1f8;
      local_120 = local_200;
      uStack_108 = uStack_1e8;
      uStack_110 = uStack_1f0;
      uStack_f8 = uStack_1d8;
      local_100 = local_1e0;
      uStack_e8 = uStack_1c8;
      uStack_f0 = uStack_1d0;
      uStack_138 = uStack_218;
      local_140 = local_220;
      uStack_128 = uStack_208;
      uStack_130 = uStack_210;
      FUN_1000fbc24(&local_360,&local_470);
      FUN_100467dcc(&local_140);
      if (DAT_100a73b60 != -1) {
        _swift_once(&DAT_100a73b60,FUN_1000efc4c);
      }
      _swift_beginAccess(param_2 + 0x18,auStack_488,0,0);
      lVar11 = param_2 + 0x18;
      _swift_unknownObjectWeakLoadStrong();
      lVar8 = local_3e8;
      puVar10 = puStack_3f0;
      lVar9 = local_3f8;
      if (lVar11 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined4 *)(lVar11 + _TtC14UURemoteServer22StreamerConnectSession::handle);
      }
      FUN_1001ad794(uVar12,local_3f8,puStack_3f0,local_3e8,0);
      _swift_release(param_2);
      local_470 = 0;
      local_468 = uVar7;
      local_460 = 0;
      uStack_458 = 0xe000000000000000;
      local_450 = uVar1;
      uStack_448 = uVar2;
      local_440 = uVar3;
      uStack_438 = uVar4;
      local_430 = uVar5;
      local_420 = uVar6;
      uStack_408 = 0xc000000000000000;
      local_410 = 0;
      uStack_428 = uVar14;
      uStack_418 = uVar13;
      FUN_100121ba8(&local_470);
      FUN_100006cdc(lVar9,puVar10);
      param_2 = lVar8;
    }
    else {
      if (*(ID *)(param_2 + 0x20) != 0) {
        _objc_msgSend(*(ID *)(param_2 + 0x20),"invalidate");
      }
      *(undefined8 *)(param_2 + 0x20) = 0;
      FUN_1003fb48c(FUN_100199aec,0,0xd0000000000000a1,0x800000010088d6c0,0x6f72507472617473,
                    0xee002928676e6962,0x3a,0);
    }
    _swift_release(param_2);
  }
  return;
}

