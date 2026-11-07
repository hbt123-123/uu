// rea decompile_all
// name: FUN_1001bcb4c
// address: 0x1001bcb4c
// body: available
// range: 0x1001bcb4c-0x1001bcfe7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1001bcb4c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  uint uVar8;
  long unaff_x20;
  undefined *puVar9;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  ulong local_4e0;
  undefined8 uStack_4d8;
  ulong uStack_4d0;
  undefined8 uStack_4c8;
  ulong local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  ulong local_4a0;
  undefined8 uStack_498;
  ulong local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined1 auStack_438 [160];
  undefined1 auStack_398 [24];
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
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
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  ulong local_200;
  undefined8 uStack_1f8;
  ulong local_1f0;
  undefined8 uStack_1e8;
  ulong local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  ulong local_1c0;
  undefined8 uStack_1b8;
  ulong local_1b0;
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
  undefined8 local_110;
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
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  lVar1 = _TtC14UURemoteServer16ClipboardHandler::ref;
  iVar2 = (int)&local_500;
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer16ClipboardHandler::ref,auStack_398,0,0);
  uVar4 = unaff_x20 + lVar1;
  _swift_unknownObjectWeakLoadStrong();
  if ((uVar4 == 0) || (FUN_10000b338(), (uVar4 & 1) == 0)) {
    FUN_100401b14(0);
    uVar7 = 0x96;
  }
  else {
    uStack_2f8 = param_1[0x11];
    local_300 = param_1[0x10];
    uStack_2e8 = param_1[0x13];
    local_2f0 = param_1[0x12];
    uStack_2d8 = param_1[0x15];
    local_2e0 = param_1[0x14];
    uStack_2c8 = param_1[0x17];
    uStack_2d0 = param_1[0x16];
    uStack_338 = param_1[9];
    local_340 = param_1[8];
    uStack_328 = param_1[0xb];
    uStack_330 = param_1[10];
    uStack_318 = param_1[0xd];
    local_320 = param_1[0xc];
    uStack_308 = param_1[0xf];
    uStack_310 = param_1[0xe];
    uStack_378 = param_1[1];
    local_380 = *param_1;
    uStack_368 = param_1[3];
    uStack_370 = param_1[2];
    uStack_358 = param_1[5];
    local_360 = param_1[4];
    uStack_348 = param_1[7];
    uStack_350 = param_1[6];
    iVar3 = (int)&local_380;
    FUN_100177d98();
    if (iVar3 != 1) {
      uStack_258 = uStack_318;
      local_260 = local_320;
      uStack_248 = uStack_308;
      uStack_250 = uStack_310;
      uStack_238 = uStack_2f8;
      local_240 = local_300;
      uStack_298 = uStack_358;
      local_2a0 = local_360;
      uStack_288 = uStack_348;
      uStack_290 = uStack_350;
      uStack_278 = uStack_338;
      local_280 = local_340;
      uStack_268 = uStack_328;
      uStack_270 = uStack_330;
      uStack_2b8 = uStack_378;
      local_2c0 = local_380;
      uStack_2a8 = uStack_368;
      uStack_2b0 = uStack_370;
      uStack_138 = uStack_318;
      local_140 = local_320;
      uStack_128 = uStack_308;
      uStack_130 = uStack_310;
      uStack_118 = uStack_2f8;
      local_120 = local_300;
      uStack_178 = uStack_358;
      local_180 = local_360;
      uStack_168 = uStack_348;
      uStack_170 = uStack_350;
      uStack_158 = uStack_338;
      local_160 = local_340;
      uStack_148 = uStack_328;
      uStack_150 = uStack_330;
      local_230 = local_2f0;
      local_110 = local_2f0;
      uStack_198 = uStack_378;
      local_1a0 = local_380;
      uStack_188 = uStack_368;
      uStack_190 = uStack_370;
      iVar3 = (int)&local_1a0;
      FUN_100040934();
      if (iVar3 != 1) {
        uStack_98 = uStack_138;
        local_a0 = local_140;
        uStack_88 = uStack_128;
        uStack_90 = uStack_130;
        uStack_78 = uStack_118;
        local_80 = local_120;
        local_70 = local_110;
        uStack_d8 = uStack_178;
        local_e0 = local_180;
        uStack_c8 = uStack_168;
        uStack_d0 = uStack_170;
        uStack_b8 = uStack_158;
        local_c0 = local_160;
        uStack_a8 = uStack_148;
        uStack_b0 = uStack_150;
        uStack_f8 = uStack_198;
        local_100 = local_1a0;
        uStack_e8 = uStack_188;
        uStack_f0 = uStack_190;
        iVar3 = (int)&local_100;
        FUN_100040948();
        if (iVar3 == 7) {
          puVar5 = &local_100;
          thunk_FUN_100040964();
          if ((((puVar5[8] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
             (*(byte *)(puVar5 + 9) != 0xff)) {
            uVar8 = 4;
            if ((*(byte *)(puVar5 + 9) & 1) == 0) {
              uVar8 = 0;
            }
            if ((uVar8 | (uint)((ulong)puVar5[8] >> 0x3c) & 3) == 4) {
              FUN_100401b14(0);
              puVar6 = &DAT_100a79f58;
              puVar9 = &DAT_10080f710;
              FUN_10007f314(param_1,&local_500,&DAT_100a79f58,&DAT_10080f710);
              FUN_10007f314(&local_2c0,&local_500,&DAT_100a75b90,&DAT_100809c10);
              FUN_1003fb45c(thunk_FUN_1001bcfe8,0,0xd00000000000009f,0x8000000100892750,
                            0xd00000000000002a,0x800000010089c910,0x89,7);
              FUN_100040bb4(&local_2c0,&DAT_100a75b90,&DAT_100809c10);
              param_2 = param_1;
              goto LAB_1001bcf64;
            }
          }
        }
      }
    }
    uStack_498 = param_2[0xd];
    local_4a0 = param_2[0xc];
    uStack_488 = param_2[0xf];
    local_490 = param_2[0xe];
    uStack_478 = param_2[0x11];
    local_480 = param_2[0x10];
    uStack_468 = param_2[0x13];
    uStack_470 = param_2[0x12];
    uStack_4d8 = param_2[5];
    local_4e0 = param_2[4];
    uStack_4c8 = param_2[7];
    uStack_4d0 = param_2[6];
    uStack_4b8 = param_2[9];
    local_4c0 = param_2[8];
    uStack_4a8 = param_2[0xb];
    local_4b0 = param_2[10];
    uStack_4f8 = param_2[1];
    local_500 = *param_2;
    uStack_4e8 = param_2[3];
    uStack_4f0 = param_2[2];
    FUN_1001be6f4();
    if (iVar2 != 1) {
      uStack_1f8 = uStack_4d8;
      local_200 = local_4e0;
      uStack_1e8 = uStack_4c8;
      local_1f0 = uStack_4d0;
      uStack_1c8 = uStack_4a8;
      local_1d0 = local_4b0;
      uStack_1b8 = uStack_498;
      local_1c0 = local_4a0;
      uStack_1d8 = uStack_4b8;
      local_1e0 = local_4c0;
      local_1b0 = local_490;
      uStack_218 = uStack_4f8;
      local_220 = local_500;
      uStack_208 = uStack_4e8;
      uStack_210 = uStack_4f0;
      if ((((local_4a0 >> 8 != 0xffffffff) || ((local_490 & 0x3000000000000000) != 0)) &&
          (((uint)(local_490 >> 0x39) & 0x18 | (uint)(local_4a0 >> 0x3d)) == 3)) &&
         ((((local_4e0 & uStack_4d0 & local_4c0 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 &&
          (((uint)(local_4c0 >> 0x3b) & 6 | (uint)(uStack_4d0 >> 0x3d) & 1) == 4)))) {
        FUN_100401b14(0);
        puVar6 = &DAT_100a7cf30;
        puVar9 = &DAT_100811970;
        FUN_10007f314(param_2,auStack_438,&DAT_100a7cf30,&DAT_100811970);
        FUN_10007f314(&local_220,auStack_438,&DAT_100a75b98,&DAT_10080a1d0);
        FUN_1003fb45c(thunk_FUN_1001bcfe8,0,0xd00000000000009f,0x8000000100892750,0xd00000000000002a
                      ,0x800000010089c910,0x8f,7);
        FUN_100040bb4(&local_220,&DAT_100a75b98,&DAT_10080a1d0);
LAB_1001bcf64:
        FUN_100040bb4(param_2,puVar6,puVar9);
        return 2;
      }
    }
    FUN_100401b14(0);
    uVar7 = 0x93;
  }
  FUN_1003fb45c(thunk_FUN_1001bd014,0,0xd00000000000009f,0x8000000100892750,0xd00000000000002a,
                0x800000010089c910,uVar7,7);
  return 1;
}

