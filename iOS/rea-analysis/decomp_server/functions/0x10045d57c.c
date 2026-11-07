// rea decompile_all
// name: FUN_10045d57c
// address: 0x10045d57c
// body: available
// range: 0x10045d57c-0x10045daf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10045d57c(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong local_430;
  ulong uStack_428;
  long local_420;
  ulong uStack_418;
  ulong uStack_410;
  ulong local_408;
  ulong uStack_400;
  ulong local_3f8;
  ulong uStack_3f0;
  ulong local_3e8;
  ulong uStack_3e0;
  ulong local_3d8;
  ulong uStack_3d0;
  ulong local_3c8;
  ulong local_3c0;
  ulong uStack_3b8;
  ulong local_3b0;
  ulong local_3a8;
  ulong uStack_3a0;
  ulong local_398;
  ulong uStack_390;
  ulong local_388;
  ulong uStack_380;
  ulong local_378;
  ulong uStack_370;
  ulong local_368;
  ulong uStack_360;
  ulong local_358;
  ulong local_350;
  ulong uStack_348;
  ulong local_340;
  ulong uStack_338;
  ulong local_330;
  ulong uStack_328;
  ulong local_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  ulong local_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong local_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  long local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  long local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  ulong local_200;
  ulong uStack_1f8;
  ulong local_1f0;
  ulong uStack_1e8;
  ulong local_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong local_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong local_1a0;
  ulong uStack_198;
  ulong local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  ulong local_160;
  ulong uStack_158;
  ulong local_150;
  ulong local_148;
  ulong local_140;
  ulong local_130;
  ulong uStack_128;
  ulong local_120;
  ulong local_118;
  ulong uStack_110;
  ulong local_108;
  ulong uStack_100;
  ulong local_f8;
  ulong uStack_f0;
  ulong local_e8;
  ulong uStack_e0;
  ulong local_d8;
  ulong uStack_d0;
  ulong local_c8;
  byte local_c0 [8];
  ulong local_b8;
  byte local_b0;
  undefined4 local_ac;
  ulong local_a8;
  ulong uStack_a0;
  byte local_98 [8];
  undefined8 local_90;
  byte local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  
  uVar2 = *param_1;
  FUN_1004281b4(uVar2,*param_2);
  if (((uVar2 & 1) == 0) ||
     ((uVar2 = param_1[1], uVar2 != param_2[1] || param_1[2] != param_2[2] &&
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar2 & 1) == 0)))) {
LAB_10045da3c:
    uVar1 = 0;
  }
  else {
    uVar8 = param_1[6];
    uVar6 = param_1[5];
    uVar12 = param_1[8];
    uVar10 = param_1[7];
    uVar2 = param_1[9];
    uVar9 = param_2[6];
    uVar7 = param_2[5];
    uVar13 = param_2[8];
    uVar11 = param_2[7];
    uVar5 = param_2[9];
    local_190 = uVar7;
    uStack_188 = uVar9;
    local_180 = uVar11;
    local_178 = uVar13;
    local_170 = uVar5;
    local_160 = uVar6;
    uStack_158 = uVar8;
    local_150 = uVar10;
    local_148 = uVar12;
    local_140 = uVar2;
    if ((uVar6 & 0xff) == 2) {
      if ((uVar7 & 0xff) == 2) {
        FUN_10007f314(&local_160,&local_350,&DAT_100aa08a8,&DAT_10082d580);
        FUN_10007f314(&local_190,&local_350,&DAT_100aa08a8,&DAT_10082d580);
        FUN_10000f4e0(uVar6,uVar8,uVar10,uVar12,uVar2);
LAB_10045d7d4:
        uStack_1b8 = param_1[0x13];
        local_1c0 = param_1[0x12];
        uStack_1a8 = param_1[0x15];
        uStack_1b0 = param_1[0x14];
        uStack_198 = param_1[0x17];
        local_1a0 = param_1[0x16];
        uStack_1f8 = param_1[0xb];
        local_200 = param_1[10];
        uStack_1e8 = param_1[0xd];
        uVar2 = param_1[0xc];
        uStack_1d8 = param_1[0xf];
        local_1e0 = param_1[0xe];
        uStack_1c8 = param_1[0x11];
        uStack_1d0 = param_1[0x10];
        uStack_268 = param_2[0xb];
        local_270 = param_2[10];
        uStack_258 = param_2[0xd];
        local_2d0 = param_2[0xc];
        uStack_248 = param_2[0xf];
        local_250 = param_2[0xe];
        uStack_238 = param_2[0x11];
        local_240 = param_2[0x10];
        uStack_218 = param_2[0x15];
        local_220 = param_2[0x14];
        uStack_208 = param_2[0x17];
        uStack_210 = param_2[0x16];
        uStack_228 = param_2[0x13];
        uStack_230 = param_2[0x12];
        local_260 = local_2d0;
        local_1f0 = uVar2;
        if (uVar2 == 0) {
          if (local_2d0 != 0) goto LAB_10045d974;
          uStack_348 = param_1[0xb];
          local_350 = param_1[10];
          uStack_310 = param_1[0x12];
          uStack_318 = param_1[0x11];
          local_300 = param_1[0x14];
          uStack_308 = param_1[0x13];
          uStack_2f0 = param_1[0x16];
          uStack_2f8 = param_1[0x15];
          local_2e8 = param_1[0x17];
          local_340 = 0;
          local_330 = param_1[0xe];
          uStack_338 = param_1[0xd];
          local_320 = param_1[0x10];
          uStack_328 = param_1[0xf];
          FUN_10007f314(&local_200,&local_130,&DAT_100a9ffb0,&DAT_10082b118);
          FUN_10007f314(&local_270,&local_130,&DAT_100a9ffb0,&DAT_10082b118);
          FUN_100040bb4(&local_350,&DAT_100a9ffb0,&DAT_10082b118);
        }
        else {
          if (local_2d0 == 0) {
LAB_10045d974:
            uStack_348 = param_1[0xb];
            local_350 = param_1[10];
            uStack_310 = param_1[0x12];
            uStack_318 = param_1[0x11];
            local_300 = param_1[0x14];
            uStack_308 = param_1[0x13];
            uStack_2f0 = param_1[0x16];
            uStack_2f8 = param_1[0x15];
            local_2e8 = param_1[0x17];
            local_330 = param_1[0xe];
            uStack_338 = param_1[0xd];
            local_320 = param_1[0x10];
            uStack_328 = param_1[0xf];
            uStack_2d8 = param_2[0xb];
            local_2e0 = param_2[10];
            uStack_2b0 = param_2[0x10];
            local_2b8 = param_2[0xf];
            uStack_2c0 = param_2[0xe];
            local_2c8 = param_2[0xd];
            local_278 = param_2[0x17];
            uStack_280 = param_2[0x16];
            local_288 = param_2[0x15];
            uStack_290 = param_2[0x14];
            local_298 = param_2[0x13];
            uStack_2a0 = param_2[0x12];
            local_2a8 = param_2[0x11];
            local_340 = uVar2;
            FUN_10007f314(&local_200,&local_130,&DAT_100a9ffb0,&DAT_10082b118);
            FUN_10007f314(&local_270,&local_130,&DAT_100a9ffb0,&DAT_10082b118);
            FUN_100040bb4(&local_350,&DAT_100aa08b0,&DAT_10082d588);
            goto LAB_10045da3c;
          }
          uStack_428 = param_2[0xb];
          local_430 = param_2[10];
          uStack_410 = param_2[0xe];
          uStack_418 = param_2[0xd];
          uStack_400 = param_2[0x10];
          local_408 = param_2[0xf];
          local_3c8 = param_2[0x17];
          uStack_3d0 = param_2[0x16];
          local_3d8 = param_2[0x15];
          uStack_3e0 = param_2[0x14];
          local_3e8 = param_2[0x13];
          uStack_3f0 = param_2[0x12];
          local_3f8 = param_2[0x11];
          uStack_128 = param_1[0xb];
          local_130 = param_1[10];
          uStack_110 = param_1[0xe];
          local_118 = param_1[0xd];
          uStack_100 = param_1[0x10];
          local_108 = param_1[0xf];
          uStack_f0 = param_1[0x12];
          local_f8 = param_1[0x11];
          uStack_e0 = param_1[0x14];
          local_e8 = param_1[0x13];
          uStack_d0 = param_1[0x16];
          local_d8 = param_1[0x15];
          local_c8 = param_1[0x17];
          local_420 = local_2d0;
          local_350 = local_430;
          uStack_348 = uStack_428;
          local_340 = local_2d0;
          uStack_338 = uStack_418;
          local_330 = uStack_410;
          uStack_328 = local_408;
          local_320 = uStack_400;
          uStack_318 = local_3f8;
          uStack_310 = uStack_3f0;
          uStack_308 = local_3e8;
          local_300 = uStack_3e0;
          uStack_2f8 = local_3d8;
          uStack_2f0 = uStack_3d0;
          local_2e8 = local_3c8;
          local_120 = uVar2;
          FUN_10007f314(&local_200,&local_3c0,&DAT_100a9ffb0,&DAT_10082b118);
          FUN_10007f314(&local_270,&local_3c0,&DAT_100a9ffb0,&DAT_10082b118);
          puVar4 = &local_130;
          FUN_10045d398(puVar4,&local_350);
          FUN_100040bb4(&local_430,&DAT_100a9ffb0,&DAT_10082b118);
          uStack_3b8 = param_1[0xb];
          local_3c0 = param_1[10];
          uStack_380 = param_1[0x12];
          local_388 = param_1[0x11];
          uStack_370 = param_1[0x14];
          local_378 = param_1[0x13];
          uStack_360 = param_1[0x16];
          local_368 = param_1[0x15];
          local_358 = param_1[0x17];
          uStack_3a0 = param_1[0xe];
          local_3a8 = param_1[0xd];
          uStack_390 = param_1[0x10];
          local_398 = param_1[0xf];
          local_3b0 = uVar2;
          FUN_100040bb4(&local_3c0,&DAT_100a9ffb0,&DAT_10082b118);
          if (((ulong)puVar4 & 1) == 0) goto LAB_10045da3c;
        }
        uVar2 = param_1[3];
        FUN_1000094a4(uVar2,param_1[4],param_2[3],param_2[4]);
        uVar1 = (uint)uVar2;
        goto LAB_10045da40;
      }
    }
    else if ((uVar7 & 0xff) != 2) {
      local_98[0] = (byte)uVar7 & 1;
      local_88 = (byte)uVar11 & 1;
      local_84 = (undefined4)((ulong)uVar11 >> 0x20);
      local_c0[0] = (byte)uVar6 & 1;
      local_b0 = (byte)uVar10 & 1;
      local_ac = (undefined4)(uVar10 >> 0x20);
      local_b8 = uVar8;
      local_a8 = uVar12;
      uStack_a0 = uVar2;
      local_90 = uVar9;
      local_80 = uVar13;
      uStack_78 = uVar5;
      FUN_10007f314(&local_160,&local_350,&DAT_100aa08a8,&DAT_10082d580);
      FUN_10007f314(&local_190,&local_350,&DAT_100aa08a8,&DAT_10082d580);
      pbVar3 = local_c0;
      FUN_10045d318(pbVar3,local_98);
      FUN_10000f4e0(uVar7,uVar9,uVar11,uVar13,uVar5);
      FUN_10000f4e0(uVar6,uVar8,uVar10,uVar12,uVar2);
      if (((ulong)pbVar3 & 1) != 0) goto LAB_10045d7d4;
      goto LAB_10045da3c;
    }
    FUN_10007f314(&local_160,&local_350,&DAT_100aa08a8,&DAT_10082d580);
    FUN_10007f314(&local_190,&local_350,&DAT_100aa08a8,&DAT_10082d580);
    FUN_10000f4e0(uVar6,uVar8,uVar10,uVar12,uVar2);
    FUN_10000f4e0(uVar7,uVar9,uVar11,uVar13,uVar5);
    uVar1 = 0;
  }
LAB_10045da40:
  return uVar1 & 1;
}

