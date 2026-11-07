// rea decompile_all
// name: FUN_1000ca9f4
// address: 0x1000ca9f4
// body: available
// range: 0x1000ca9f4-0x1000cad4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000ca9f4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  ulong uVar6;
  undefined1 auStack_460 [16];
  undefined1 local_450;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  long *local_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  long *local_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 local_320;
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
  long *local_270;
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
  long *local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_180;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  long *local_140;
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
  
  FUN_1000c7b64();
  uVar6 = param_1[0xd];
  bVar2 = *(byte *)(param_1 + 0xe);
  bVar3 = *(byte *)((long)param_1 + 0x71);
  _swift_release();
  if ((bVar3 & 1) == 0) {
    if ((bVar2 & 1) == 0) {
      if (uVar6 != 2) {
        return;
      }
    }
    else if (uVar6 < 2) {
      return;
    }
    FUN_1003db8c4();
    (**(code **)(*param_1 + 0x108))(&local_140);
    _swift_release();
    if (local_140 == (long *)0x0) {
      param_1 = (long *)0x0;
    }
    else {
      (**(code **)(*local_140 + 0xd0))();
      _swift_release(local_140);
    }
    FUN_1000c8388();
    uVar1 = (uint)param_1 & 1;
    FUN_1001bc888(uVar1);
    uVar4 = 0;
    FUN_10047466c();
    param_1 = (long *)((ulong)param_1 & 1);
    uStack_3e8 = 0;
    local_3f0 = 0;
    uStack_3d8 = 0;
    uStack_3e0 = 0;
    local_3d0 = 0xffffffff00000000;
    uStack_3c0 = 0;
    local_3c8 = 0;
    uStack_3b0 = 0;
    local_3b8 = 0;
    local_3a8 = 0;
    FUN_100008184(0,0xc000000000000000);
    FUN_10000823c(&local_3f0);
    uStack_390 = 0xc000000000000000;
    uStack_398 = 0;
    local_380 = 0;
    local_368 = 0x8000000000000000;
    uStack_350 = 0;
    local_358 = 0x1000000000000000;
    local_348 = 0xc000000000000000;
    uStack_318 = uStack_378;
    local_320 = 0;
    uStack_308 = 0x8000000000000000;
    uStack_310 = uStack_370;
    uStack_2f8 = 0x1000000000000000;
    local_300 = uStack_360;
    uStack_2e8 = 0xc000000000000000;
    uStack_2f0 = 0;
    uStack_338 = 0;
    uStack_328 = uStack_388;
    uStack_330 = 0xc000000000000000;
    local_3a0 = param_1;
    local_340 = param_1;
    FUN_100008284(&local_340);
    uStack_1c8 = uStack_298;
    local_1d0 = local_2a0;
    uStack_1b8 = uStack_288;
    uStack_1c0 = uStack_290;
    local_1b0 = local_280;
    uStack_208 = uStack_2d8;
    local_210 = local_2e0;
    uStack_1f8 = uStack_2c8;
    uStack_200 = uStack_2d0;
    uStack_1e8 = uStack_2b8;
    local_1f0 = local_2c0;
    uStack_1d8 = uStack_2a8;
    uStack_1e0 = uStack_2b0;
    uStack_248 = uStack_318;
    local_250 = local_320;
    uStack_238 = uStack_308;
    uStack_240 = uStack_310;
    uStack_228 = uStack_2f8;
    local_230 = local_300;
    uStack_218 = uStack_2e8;
    uStack_220 = uStack_2f0;
    uStack_268 = uStack_338;
    local_270 = local_340;
    uStack_258 = uStack_328;
    uStack_260 = uStack_330;
    FUN_100008290(&local_270);
    uStack_98 = uStack_1c8;
    local_a0 = local_1d0;
    uStack_88 = uStack_1b8;
    uStack_90 = uStack_1c0;
    local_80 = local_1b0;
    uStack_d8 = uStack_208;
    local_e0 = local_210;
    uStack_c8 = uStack_1f8;
    uStack_d0 = uStack_200;
    uStack_b8 = uStack_1e8;
    local_c0 = local_1f0;
    uStack_a8 = uStack_1d8;
    uStack_b0 = uStack_1e0;
    uStack_118 = uStack_248;
    local_120 = local_250;
    uStack_108 = uStack_238;
    uStack_110 = uStack_240;
    uStack_f8 = uStack_228;
    local_100 = local_230;
    uStack_e8 = uStack_218;
    uStack_f0 = uStack_220;
    uStack_138 = uStack_268;
    local_140 = local_270;
    uStack_128 = uStack_258;
    uStack_130 = uStack_260;
    FUN_100008294(&local_3a0,&local_1a0);
    FUN_100467dcc(&local_140);
    if (DAT_100a73b60 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    FUN_1001ad794(*(undefined4 *)(unaff_x20 + _TtC14UURemoteServer22StreamerConnectSession::handle),
                  uVar4,param_2,param_3,0);
    uVar5 = 0;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)(uVar5);
    local_450 = (undefined1)uVar1;
    FUN_1003fb48c(FUN_1000cdffc,auStack_460,0xd00000000000009c,0x8000000100885110,0xd00000000000002b
                  ,0x8000000100885a30,0xa2,0);
    FUN_100006cdc(0,0xc000000000000000);
    uStack_190 = 0xc000000000000000;
    local_198 = 0;
    local_180 = 0;
    uStack_150 = 0;
    local_158 = 0x1000000000000000;
    local_168 = 0x8000000000000000;
    local_148 = 0xc000000000000000;
    local_1a0 = param_1;
    FUN_1000082dc(&local_1a0);
    FUN_100006cdc(uVar4,param_2);
    _swift_release(param_3);
  }
  return;
}

