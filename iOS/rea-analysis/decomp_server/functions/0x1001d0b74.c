// rea decompile_all
// name: FUN_1001d0b74
// address: 0x1001d0b74
// body: available
// range: 0x1001d0b74-0x1001d0def inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ulong FUN_1001d0b74(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  ulong uVar5;
  undefined1 auStack_3b0 [16];
  int local_3a0;
  undefined8 *local_398;
  undefined1 auStack_390 [72];
  long local_348;
  undefined1 *puStack_340;
  undefined8 local_338;
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
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 local_270;
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
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 local_1a0;
  undefined1 auStack_198 [24];
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
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  uStack_88 = param_1[5];
  local_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  local_70 = param_1[8];
  uStack_a8 = param_1[1];
  local_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  puVar3 = auStack_198;
  uVar4 = 0;
  _swift_beginAccess(unaff_x20 + 0x10,puVar3,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    lVar2 = lVar1;
    FUN_10047466c();
    uStack_308 = uStack_88;
    local_310 = local_90;
    uStack_2f8 = uStack_78;
    uStack_300 = uStack_80;
    local_2f0 = local_70;
    uStack_328 = uStack_a8;
    local_330 = local_b0;
    uStack_318 = uStack_98;
    uStack_320 = uStack_a0;
    local_348 = lVar2;
    puStack_340 = puVar3;
    local_338 = uVar4;
    FUN_1001d3690(&local_330);
    uStack_1b8 = uStack_288;
    local_1c0 = local_290;
    uStack_1a8 = uStack_278;
    uStack_1b0 = uStack_280;
    local_1a0 = local_270;
    uStack_1f8 = uStack_2c8;
    local_200 = local_2d0;
    uStack_1e8 = uStack_2b8;
    uStack_1f0 = uStack_2c0;
    uStack_1d8 = uStack_2a8;
    local_1e0 = local_2b0;
    uStack_1c8 = uStack_298;
    uStack_1d0 = uStack_2a0;
    uStack_238 = uStack_308;
    local_240 = local_310;
    uStack_228 = uStack_2f8;
    uStack_230 = uStack_300;
    uStack_218 = uStack_2e8;
    local_220 = local_2f0;
    uStack_208 = uStack_2d8;
    uStack_210 = uStack_2e0;
    uStack_258 = uStack_328;
    local_260 = local_330;
    uStack_248 = uStack_318;
    uStack_250 = uStack_320;
    FUN_100008290(&local_260);
    uStack_d8 = uStack_1b8;
    local_e0 = local_1c0;
    uStack_c8 = uStack_1a8;
    uStack_d0 = uStack_1b0;
    local_c0 = local_1a0;
    uStack_118 = uStack_1f8;
    local_120 = local_200;
    uStack_108 = uStack_1e8;
    uStack_110 = uStack_1f0;
    uStack_f8 = uStack_1d8;
    local_100 = local_1e0;
    uStack_e8 = uStack_1c8;
    uStack_f0 = uStack_1d0;
    uStack_158 = uStack_238;
    local_160 = local_240;
    uStack_148 = uStack_228;
    uStack_150 = uStack_230;
    uStack_138 = uStack_218;
    local_140 = local_220;
    uStack_128 = uStack_208;
    uStack_130 = uStack_210;
    uStack_178 = uStack_258;
    local_180 = local_260;
    uStack_168 = uStack_248;
    uStack_170 = uStack_250;
    FUN_1001d2ad0(param_1,auStack_390);
    FUN_100467dcc(&local_180);
    if (DAT_100a73b60 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    uVar4 = local_338;
    puVar3 = puStack_340;
    lVar2 = local_348;
    uVar5 = (ulong)*(uint *)(lVar1 + _TtC14UURemoteServer22StreamerConnectSession::handle);
    FUN_1001ad794(uVar5,local_348,puStack_340,local_338,2);
    if ((int)uVar5 != 0) {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_3a0 = (int)uVar5;
      local_398 = param_1;
      FUN_1003fb4bc(thunk_FUN_1001d369c,auStack_3b0,0xd0000000000000a1,0x800000010089dec0,
                    0x61726628646e6573,0xec000000293a656d,0x10a,0);
      lVar2 = local_348;
      uVar4 = local_338;
      puVar3 = puStack_340;
    }
    FUN_100006cdc(lVar2,puVar3);
    _swift_release(uVar4);
  }
  return uVar5;
}

