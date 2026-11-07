// rea decompile_all
// name: FUN_1000b0d64
// address: 0x1000b0d64
// body: available
// range: 0x1000b0d64-0x1000b1097 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000b0d64(ulong param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_470 [16];
  byte local_460;
  long local_458;
  undefined4 local_450;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  long local_418;
  undefined1 *puStack_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  ulong local_3b0 [4];
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  ulong local_350;
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
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 local_290;
  ulong local_280;
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
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 local_1c0;
  ulong local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_198;
  undefined8 local_180;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined1 auStack_158 [24];
  ulong local_140;
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
  
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  lVar5 = *(long *)(*(long *)(DAT_100b360a8 + 0x28) +
                   _TtC14UURemoteServer15StreamerManager::dispatcher);
  if ((lVar5 != 0) &&
     (lVar5 = *(long *)(lVar5 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession),
     lVar5 != 0)) {
    lVar2 = lVar5 + _TtC14UURemoteServer22StreamerConnectSession::_peerState;
    puVar3 = auStack_158;
    uVar4 = 0;
    _swift_beginAccess(lVar2,puVar3,0,0);
    if (*(long *)(lVar2 + 8) == 5) {
      lVar2 = lVar5;
      FUN_10047466c();
      uVar6 = param_1 & 1;
      uStack_3f8 = 0;
      local_400 = 0;
      uStack_3e8 = 0;
      uStack_3f0 = 0;
      local_3e0 = 0xffffffff00000000;
      uStack_3d0 = 0;
      local_3d8 = 0;
      uStack_3c0 = 0;
      local_3c8 = 0;
      local_3b8 = 0;
      local_418 = lVar2;
      puStack_410 = puVar3;
      local_408 = uVar4;
      FUN_100008184(0,0xc000000000000000);
      FUN_10000823c(&local_400);
      uStack_428 = 0xc000000000000000;
      local_430 = 0;
      local_3b0[2] = 0xc000000000000000;
      local_3b0[1] = 0;
      local_390 = 0;
      local_378 = 0;
      uStack_438 = 0;
      local_440 = 0x1000000000000000;
      uStack_360 = 0;
      local_368 = 0x1000000000000000;
      local_358 = 0xc000000000000000;
      uStack_328 = uStack_388;
      local_330 = 0;
      uStack_318 = 0;
      uStack_320 = uStack_380;
      uStack_308 = 0x1000000000000000;
      local_310 = uStack_370;
      uStack_2f8 = 0xc000000000000000;
      uStack_300 = 0;
      uStack_348 = 0;
      uStack_338 = local_3b0[3];
      uStack_340 = 0xc000000000000000;
      local_3b0[0] = uVar6;
      local_350 = uVar6;
      FUN_100008284(&local_350);
      uStack_1d8 = uStack_2a8;
      local_1e0 = local_2b0;
      uStack_1c8 = uStack_298;
      uStack_1d0 = uStack_2a0;
      local_1c0 = local_290;
      uStack_218 = uStack_2e8;
      local_220 = local_2f0;
      uStack_208 = uStack_2d8;
      uStack_210 = uStack_2e0;
      uStack_1f8 = uStack_2c8;
      local_200 = local_2d0;
      uStack_1e8 = uStack_2b8;
      uStack_1f0 = uStack_2c0;
      uStack_258 = uStack_328;
      local_260 = local_330;
      uStack_248 = uStack_318;
      uStack_250 = uStack_320;
      uStack_238 = uStack_308;
      local_240 = local_310;
      uStack_228 = uStack_2f8;
      uStack_230 = uStack_300;
      uStack_278 = uStack_348;
      local_280 = local_350;
      uStack_268 = uStack_338;
      uStack_270 = uStack_340;
      FUN_100008290(&local_280);
      uStack_98 = uStack_1d8;
      local_a0 = local_1e0;
      uStack_88 = uStack_1c8;
      uStack_90 = uStack_1d0;
      local_80 = local_1c0;
      uStack_d8 = uStack_218;
      local_e0 = local_220;
      uStack_c8 = uStack_208;
      uStack_d0 = uStack_210;
      uStack_b8 = uStack_1f8;
      local_c0 = local_200;
      uStack_a8 = uStack_1e8;
      uStack_b0 = uStack_1f0;
      uStack_118 = uStack_258;
      local_120 = local_260;
      uStack_108 = uStack_248;
      uStack_110 = uStack_250;
      uStack_f8 = uStack_238;
      local_100 = local_240;
      uStack_e8 = uStack_228;
      uStack_f0 = uStack_230;
      uStack_138 = uStack_278;
      local_140 = local_280;
      uStack_128 = uStack_268;
      uStack_130 = uStack_270;
      FUN_100008294(local_3b0,&local_1b8);
      FUN_100467dcc(&local_140);
      uVar1 = *(undefined4 *)(lVar5 + _TtC14UURemoteServer22StreamerConnectSession::handle);
      FUN_1001ad794(uVar1,local_418,puStack_410,local_408,0);
      uVar4 = 0;
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)(uVar4);
      local_460 = (byte)param_1 & 1;
      local_458 = lVar5;
      local_450 = uVar1;
      FUN_1003fb48c(FUN_1000b1098,auStack_470,0xd00000000000009a,0x8000000100881bd0,
                    &DAT_d000000000000018,0x8000000100881c70,0x2f,0);
      FUN_100006cdc(0,0xc000000000000000);
      uStack_1a8 = uStack_428;
      local_1b0 = local_430;
      local_198 = 0;
      uStack_168 = uStack_438;
      local_170 = local_440;
      local_180 = 0;
      local_160 = 0xc000000000000000;
      local_1b8 = uVar6;
      FUN_1000082dc(&local_1b8);
      uVar4 = local_408;
      FUN_100006cdc(local_418,puStack_410);
      _swift_release(uVar4);
    }
  }
  return;
}

