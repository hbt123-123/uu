// rea decompile_all
// name: FUN_1001232e0
// address: 0x1001232e0
// body: available
// range: 0x1001232e0-0x1001237f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001232e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
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
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined1 local_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  ulong local_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  ulong uStack_4a8;
  undefined8 local_4a0;
  ulong uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined1 local_460;
  undefined7 uStack_45f;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined1 local_420;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  ulong local_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  ulong uStack_3d8;
  undefined8 local_3d0;
  ulong uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined1 local_350;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  ulong local_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  ulong uStack_308;
  undefined8 local_300;
  ulong uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined1 local_280;
  undefined8 local_270;
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
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
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
  undefined1 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  
  FUN_100467d10(&local_5a8);
  uStack_1c8 = uStack_500;
  local_1d0 = local_508;
  uStack_1b8 = uStack_4f0;
  uStack_1c0 = local_4f8;
  local_1b0 = local_4e8;
  uStack_208 = uStack_540;
  local_210 = local_548;
  uStack_1f8 = uStack_530;
  uStack_200 = local_538;
  uStack_1e8 = uStack_520;
  local_1f0 = local_528;
  uStack_1d8 = uStack_510;
  uStack_1e0 = local_518;
  uStack_248 = uStack_580;
  local_250 = local_588;
  uStack_238 = uStack_570;
  uStack_240 = local_578;
  uStack_228 = uStack_560;
  local_230 = local_568;
  uStack_218 = uStack_550;
  uStack_220 = local_558;
  uStack_268 = uStack_5a0;
  local_270 = local_5a8;
  uStack_258 = uStack_590;
  uStack_260 = local_598;
  iVar1 = (int)&local_270;
  FUN_1001218ec();
  if (iVar1 != 1) {
    uStack_f8 = uStack_1c8;
    local_100 = local_1d0;
    uStack_e8 = uStack_1b8;
    uStack_f0 = uStack_1c0;
    local_e0 = local_1b0;
    uStack_138 = uStack_208;
    local_140 = local_210;
    uStack_128 = uStack_1f8;
    uStack_130 = uStack_200;
    uStack_118 = uStack_1e8;
    local_120 = local_1f0;
    uStack_108 = uStack_1d8;
    uStack_110 = uStack_1e0;
    uStack_178 = uStack_248;
    local_180 = local_250;
    uStack_168 = uStack_238;
    uStack_170 = uStack_240;
    uStack_158 = uStack_228;
    local_160 = local_230;
    uStack_148 = uStack_218;
    uStack_150 = uStack_220;
    uStack_198 = uStack_268;
    local_1a0 = local_270;
    uStack_188 = uStack_258;
    uStack_190 = uStack_260;
    iVar1 = (int)&local_1a0;
    FUN_100121900();
    if (iVar1 == 0x13) {
      puVar2 = &local_1a0;
      FUN_100008290();
      uVar4 = puVar2[0xc];
      if ((uVar4 >> 8 != 0xffffffff) || ((puVar2[0xe] & 0x3000000000000000) != 0)) {
        uVar3 = (uint)((ulong)puVar2[0xe] >> 0x39) & 0x18 | (uint)(uVar4 >> 0x3d);
        if (uVar3 == 3) {
          if ((((puVar2[4] & puVar2[6] & puVar2[8] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0)
             && ((uVar3 = (uint)((ulong)puVar2[8] >> 0x3b) & 6 |
                          (uint)((ulong)puVar2[6] >> 0x3d) & 1, uVar3 == 4 || (uVar3 == 2))))
          goto LAB_100123764;
        }
        else if ((uVar3 == 2) && ((uVar4 & 0xff) == 3)) {
LAB_100123764:
          FUN_100040bb4(&local_5a8,&DAT_100a79590,&DAT_10080e570);
          return;
        }
      }
      local_340 = param_1;
      uStack_338 = param_2;
      local_330 = param_3;
      FUN_100008184(param_1,param_2);
      _swift_retain(param_3);
      puVar2 = &local_340;
LAB_1001237b4:
      __sSS10describingSSx_tclufC(puVar2,&DAT_1009c50b8);
      FUN_100040bb4(&local_5a8,&DAT_100a79590,&DAT_10080e570);
      return;
    }
    if (iVar1 == 0x12) {
      puVar2 = &local_1a0;
      FUN_100008290();
      _memmove(&local_410,puVar2,0x98);
      iVar1 = (int)&local_410;
      FUN_100040934();
      if (iVar1 != 1) {
        uStack_2d8 = uStack_3a8;
        local_2e0 = local_3b0;
        uStack_2c8 = uStack_398;
        uStack_2d0 = uStack_3a0;
        uStack_2b8 = uStack_388;
        local_2c0 = local_390;
        local_2b0 = local_380;
        uStack_318 = uStack_3e8;
        local_320 = local_3f0;
        uStack_308 = uStack_3d8;
        uStack_310 = uStack_3e0;
        uStack_2f8 = uStack_3c8;
        local_300 = local_3d0;
        uStack_2e8 = uStack_3b8;
        uStack_2f0 = uStack_3c0;
        uStack_338 = uStack_408;
        local_340 = local_410;
        uStack_328 = uStack_3f8;
        local_330 = uStack_400;
        iVar1 = (int)&local_340;
        FUN_100040948();
        if (iVar1 == 7) {
          puVar2 = &local_340;
          FUN_100040964();
          if ((((puVar2[8] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
             (*(byte *)(puVar2 + 9) != 0xff)) {
            uVar3 = 4;
            if ((*(byte *)(puVar2 + 9) & 1) == 0) {
              uVar3 = 0;
            }
            uVar3 = uVar3 | (uint)((ulong)puVar2[8] >> 0x3c) & 3;
            if ((uVar3 == 4) || (uVar3 == 2)) goto LAB_100123764;
          }
        }
        else if (iVar1 == 6) {
          puVar2 = &local_340;
          FUN_100040964();
          _memmove(&local_d0,puVar2,0x81);
          iVar1 = (int)&local_d0;
          FUN_1001241c4();
          if (iVar1 != 1) {
            uStack_478 = uStack_68;
            local_480 = local_70;
            uStack_468 = uStack_58;
            uStack_470 = local_60;
            local_460 = local_50;
            uStack_4b8 = uStack_a8;
            local_4c0 = local_b0;
            uStack_4a8 = uStack_98;
            uStack_4b0 = local_a0;
            uStack_498 = uStack_88;
            local_4a0 = local_90;
            uStack_488 = uStack_78;
            uStack_490 = local_80;
            uStack_4d8 = uStack_c8;
            local_4e0 = local_d0;
            uStack_4c8 = uStack_b8;
            uStack_4d0 = local_c0;
            iVar1 = (int)&local_4e0;
            FUN_1001241ec();
            if (iVar1 == 3) {
              FUN_100124204(&local_4e0);
              goto LAB_100123764;
            }
          }
        }
      }
      local_5f8 = param_1;
      uStack_5f0 = param_2;
      local_5e8 = param_3;
      FUN_100008184(param_1,param_2);
      _swift_retain(param_3);
      puVar2 = &local_5f8;
      goto LAB_1001237b4;
    }
    FUN_100040bb4(&local_5a8,&DAT_100a79590,&DAT_10080e570);
  }
  FUN_100467d10(&local_4e0,param_1,param_2,param_3);
  uStack_368 = uStack_438;
  local_370 = local_440;
  uStack_358 = uStack_428;
  uStack_360 = uStack_430;
  local_350 = local_420;
  uStack_3a8 = uStack_478;
  local_3b0 = local_480;
  uStack_398 = uStack_468;
  uStack_3a0 = uStack_470;
  local_390 = CONCAT71(uStack_45f,local_460);
  uStack_388 = uStack_458;
  uStack_378 = uStack_448;
  local_380 = uStack_450;
  uStack_3e8 = uStack_4b8;
  local_3f0 = local_4c0;
  uStack_3d8 = uStack_4a8;
  uStack_3e0 = uStack_4b0;
  uStack_3c8 = uStack_498;
  local_3d0 = local_4a0;
  uStack_3b8 = uStack_488;
  uStack_3c0 = uStack_490;
  uStack_408 = uStack_4d8;
  local_410 = local_4e0;
  uStack_3f8 = uStack_4c8;
  uStack_400 = uStack_4d0;
  iVar1 = (int)&local_410;
  FUN_1001218ec();
  if (iVar1 != 1) {
    uStack_298 = uStack_368;
    local_2a0 = local_370;
    uStack_288 = uStack_358;
    uStack_290 = uStack_360;
    local_280 = local_350;
    uStack_2d8 = uStack_3a8;
    local_2e0 = local_3b0;
    uStack_2c8 = uStack_398;
    uStack_2d0 = uStack_3a0;
    uStack_2b8 = uStack_388;
    local_2c0 = local_390;
    uStack_2a8 = uStack_378;
    local_2b0 = local_380;
    uStack_318 = uStack_3e8;
    local_320 = local_3f0;
    uStack_308 = uStack_3d8;
    uStack_310 = uStack_3e0;
    uStack_2f8 = uStack_3c8;
    local_300 = local_3d0;
    uStack_2e8 = uStack_3b8;
    uStack_2f0 = uStack_3c0;
    uStack_338 = uStack_408;
    local_340 = local_410;
    uStack_328 = uStack_3f8;
    local_330 = uStack_400;
    iVar1 = (int)&local_340;
    FUN_100121900();
    if (iVar1 == 0xc) {
      puVar2 = &local_340;
      FUN_100008290();
      uVar5 = puVar2[7];
      local_a0 = puVar2[6];
      uVar4 = puVar2[9];
      local_90 = puVar2[8];
      uStack_b8 = puVar2[3];
      local_c0 = puVar2[2];
      uStack_a8 = puVar2[5];
      local_b0 = puVar2[4];
      uStack_c8 = puVar2[1];
      local_d0 = *puVar2;
      uStack_98 = uVar5;
      uStack_88 = uVar4;
      if (((local_b0 < 0xffffffff00000000) || (uVar5 >> 0x20 != 0)) ||
         ((uVar4 & 0x3000000000000000) != 0)) {
        FUN_100124174(&local_d0,&local_5f8);
        FUN_100040bb4(&local_4e0,&DAT_100a79590,&DAT_10080e570);
        FUN_100040bb4(&local_d0,&DAT_100a75368,&DAT_10080bbd0);
        if (((uint)(uVar4 >> 0x3b) & 6 | (uint)(uVar5 >> 0x3f)) == 1) {
          return;
        }
        goto LAB_100123634;
      }
    }
    FUN_100040bb4(&local_4e0,&DAT_100a79590,&DAT_10080e570);
  }
LAB_100123634:
  local_5f8 = param_1;
  uStack_5f0 = param_2;
  local_5e8 = param_3;
  FUN_100008184(param_1,param_2);
  _swift_retain(param_3);
  __sSS10describingSSx_tclufC(&local_5f8,&DAT_1009c50b8);
  return;
}

