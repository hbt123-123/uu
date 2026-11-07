// rea decompile_all
// name: FUN_100212534
// address: 0x100212534
// body: available
// range: 0x100212534-0x100212c9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100212534(ulong param_1,undefined8 param_2,long param_3,long param_4,byte param_5)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined1 auStack_480 [16];
  undefined4 local_470;
  int iStack_46c;
  long local_468;
  byte local_460;
  undefined1 auStack_448 [120];
  long local_3d0;
  byte bStack_3c8;
  undefined7 uStack_3c7;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  ulong local_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined1 local_350;
  long local_348;
  byte bStack_340;
  undefined7 uStack_33f;
  undefined8 local_338;
  undefined8 uStack_330;
  ulong local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined1 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined1 local_2a8;
  long local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
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
  undefined1 local_220;
  undefined7 uStack_21f;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 local_200;
  long local_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long local_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long local_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  ulong local_190;
  long lStack_188;
  ulong local_180;
  long local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 local_f0;
  long local_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 local_80;
  
  uVar3 = param_1 & 0xffffffff | param_3 << 0x20;
  switchD_10004048c::caseD_6d(0,0,0xf000000000000000);
  iStack_46c = (int)param_3;
  local_470 = (undefined4)param_1;
  local_468 = param_4;
  if (param_4 == 1) {
    if (iStack_46c == -1) {
      uStack_330 = 0xc000000000000000;
      local_338 = 0;
      local_318 = 0xc000000000000000;
      uStack_320 = 0;
      local_348 = param_4;
      bStack_340 = param_5 & 1;
      local_328 = uVar3;
      FUN_100217a54(&local_348);
      uStack_238 = uStack_2e0;
      local_240 = local_2e8;
      uStack_228 = uStack_2d0;
      uStack_230 = local_2d8;
      _local_220 = CONCAT71(uStack_21f,local_2c8);
      uStack_278 = uStack_320;
      local_280 = local_328;
      uStack_268 = uStack_310;
      uStack_270 = local_318;
      uStack_258 = uStack_300;
      local_260 = local_308;
      uStack_248 = uStack_2f0;
      uStack_250 = local_2f8;
      uStack_298 = CONCAT71(uStack_33f,bStack_340);
      local_2a0 = local_348;
      uStack_288 = uStack_330;
      uStack_290 = local_338;
      FUN_100008184(0,0xc000000000000000);
      FUN_100040b80(uVar3,0,0xc000000000000000);
      FUN_100215344(&local_2a0,param_2,1);
      FUN_100006cdc(0,0xc000000000000000);
      switchD_10004048c::caseD_6d(uVar3,0,0xc000000000000000);
      FUN_100186040(param_1,0xffffffff,1);
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      iStack_46c = 0xffffffff;
      local_460 = param_5 & 1;
      FUN_1003fb48c(thunk_FUN_100217a6c,auStack_480,0xd0000000000000b2,0x8000000100885c70,
                    0xd000000000000037,0x80000001008a4530,0x1cc,0);
      FUN_100006cdc(0,0xc000000000000000);
      switchD_10004048c::caseD_6d(uVar3,0,0xc000000000000000);
      return 1;
    }
    bStack_3c8 = param_5 & 1;
    uStack_3b8 = 0xc000000000000000;
    local_3c0 = 0;
    uStack_3a0 = 0xc000000000000000;
    local_3a8 = 0;
    local_3d0 = param_4;
    local_3b0 = uVar3;
    FUN_100217a54(&local_3d0);
    uStack_108 = uStack_368;
    local_110 = uStack_370;
    uStack_f8 = uStack_358;
    uStack_100 = local_360;
    uStack_148 = local_3a8;
    local_150 = local_3b0;
    uStack_138 = uStack_398;
    uStack_140 = uStack_3a0;
    local_f0 = local_350;
    uStack_128 = uStack_388;
    local_130 = uStack_390;
    uStack_118 = uStack_378;
    uStack_120 = local_380;
    uStack_168 = CONCAT71(uStack_3c7,bStack_3c8);
    local_170 = local_3d0;
    uStack_158 = uStack_3b8;
    uStack_160 = local_3c0;
    FUN_100008184(0,0xc000000000000000);
    FUN_100040b80(uVar3,0,0xc000000000000000);
    FUN_100212e9c(&local_348,&local_170,param_2,1);
    FUN_100006cdc(0,0xc000000000000000);
    switchD_10004048c::caseD_6d(uVar3,0,0xc000000000000000);
    uStack_218 = uStack_2c0;
    uStack_208 = uStack_2b0;
    uStack_210 = local_2b8;
    local_200 = local_2a8;
    uStack_258 = uStack_300;
    local_260 = local_308;
    uStack_248 = uStack_2f0;
    uStack_250 = local_2f8;
    uStack_238 = uStack_2e0;
    local_240 = local_2e8;
    uStack_228 = uStack_2d0;
    uStack_230 = local_2d8;
    local_2a0 = local_348;
    uStack_288 = uStack_330;
    uStack_290 = local_338;
    uStack_278 = uStack_320;
    local_280 = local_328;
    uStack_268 = uStack_310;
    uStack_270 = local_318;
    iVar1 = (int)&local_2a0;
    FUN_100217ac0();
    if (iVar1 == 1) {
      FUN_100008290(&local_2a0);
    }
    else {
      plVar2 = &local_2a0;
      FUN_100008290();
      lStack_1c8 = plVar2[5];
      local_1d0 = plVar2[4];
      lStack_1b8 = plVar2[7];
      lStack_1c0 = plVar2[6];
      lStack_1e8 = plVar2[1];
      local_1f0 = *plVar2;
      lStack_1d8 = plVar2[3];
      lStack_1e0 = plVar2[2];
      local_180 = plVar2[0xe];
      lStack_198 = plVar2[0xb];
      lStack_1a0 = plVar2[10];
      lStack_188 = plVar2[0xd];
      local_190 = plVar2[0xc];
      lStack_1a8 = plVar2[9];
      local_1b0 = plVar2[8];
      if ((((local_190 >> 8 != 0xffffffff) || ((local_180 & 0x3000000000000000) != 0)) &&
          (((uint)(local_180 >> 0x39) & 0x18 | (uint)(local_190 >> 0x3d)) == 2)) &&
         ((local_80 = (undefined1)local_190, local_e0 = local_1f0, lStack_d8 = lStack_1e8,
          lStack_d0 = lStack_1e0, lStack_c8 = lStack_1d8, local_c0 = local_1d0,
          lStack_b8 = lStack_1c8, lStack_b0 = lStack_1c0, lStack_a8 = lStack_1b8,
          local_a0 = local_1b0, lStack_98 = lStack_1a8, lStack_90 = lStack_1a0,
          lStack_88 = lStack_198, ((uint)local_190 & 0xff) == 5 && (local_1f0 == 1)))) {
        FUN_10007f314(&local_e0,auStack_448,&DAT_100a7da38,&DAT_100812f40);
        FUN_10007f314(&local_1f0,auStack_448,&DAT_100a75b98,&DAT_10080a1d0);
        FUN_100186040(param_1,param_3,1);
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        local_460 = param_5 & 1;
        FUN_1003fb48c(FUN_10021885c,auStack_480,0xd0000000000000b2,0x8000000100885c70,
                      0xd000000000000037,0x80000001008a4530,0x1da,0);
        FUN_100006cdc(0,0xc000000000000000);
        switchD_10004048c::caseD_6d(uVar3,0,0xc000000000000000);
        FUN_100040bb4(&local_e0,&DAT_100a7da38,&DAT_100812f40);
        FUN_100040bb4(&local_1f0,&DAT_100a75b98,&DAT_10080a1d0);
        FUN_100040bb4(&local_348,&DAT_100a7dca8,&DAT_100812f58);
        return 1;
      }
    }
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_460 = param_5 & 1;
    FUN_1003fb4ec(FUN_100218850,auStack_480,0xd0000000000000b2,0x8000000100885c70,0xd000000000000037
                  ,0x80000001008a4530,0x1d5,0);
    FUN_100186040(param_1,param_3,7);
    FUN_100006cdc(0,0xc000000000000000);
    switchD_10004048c::caseD_6d(uVar3,0,0xc000000000000000);
    FUN_100040bb4(&local_348,&DAT_100a7dca8,&DAT_100812f58);
  }
  else {
    param_5 = param_5 & 1;
    uStack_330 = 0xc000000000000000;
    local_338 = 0;
    local_318 = 0xc000000000000000;
    uStack_320 = 0;
    local_348 = param_4;
    bStack_340 = param_5;
    local_328 = uVar3;
    FUN_100217a54(&local_348);
    uStack_238 = uStack_2e0;
    local_240 = local_2e8;
    uStack_228 = uStack_2d0;
    uStack_230 = local_2d8;
    _local_220 = CONCAT71(uStack_21f,local_2c8);
    uStack_278 = uStack_320;
    local_280 = local_328;
    uStack_268 = uStack_310;
    uStack_270 = local_318;
    uStack_258 = uStack_300;
    local_260 = local_308;
    uStack_248 = uStack_2f0;
    uStack_250 = local_2f8;
    uStack_298 = CONCAT71(uStack_33f,bStack_340);
    local_2a0 = local_348;
    uStack_288 = uStack_330;
    uStack_290 = local_338;
    FUN_100008184(0,0xc000000000000000);
    FUN_100040b80(uVar3,0,0xc000000000000000);
    FUN_100215344(&local_2a0,param_2,1);
    FUN_100006cdc(0,0xc000000000000000);
    switchD_10004048c::caseD_6d(uVar3,0,0xc000000000000000);
    FUN_10017ccd4(param_4,param_5);
    FUN_100186040(param_1,param_3,param_4);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_460 = param_5;
    FUN_1003fb48c(FUN_100218844,auStack_480,0xd0000000000000b2,0x8000000100885c70,0xd000000000000037
                  ,0x80000001008a4530,0x1c3,0);
    FUN_100006cdc(0,0xc000000000000000);
    switchD_10004048c::caseD_6d(uVar3,0,0xc000000000000000);
  }
  return 0;
}

