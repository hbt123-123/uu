// rea decompile_all
// name: FUN_1004def5c
// address: 0x1004def5c
// body: available
// range: 0x1004def5c-0x1004df3f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1004def5c(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  ulong local_3b0;
  undefined8 uStack_3a8;
  ulong local_3a0;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  ulong local_330;
  undefined8 uStack_328;
  ulong local_320;
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
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  ulong local_2b0;
  undefined8 uStack_2a8;
  ulong local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  ulong local_238;
  undefined8 uStack_230;
  ulong local_228;
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
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  ulong local_1c0;
  undefined8 local_1b8;
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
  ulong local_140;
  undefined8 uStack_138;
  ulong local_130;
  long local_120;
  ulong uStack_118;
  ulong local_110;
  long local_100;
  ulong uStack_f8;
  ulong local_f0;
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
  ulong local_80;
  undefined8 uStack_78;
  ulong local_70;
  
  uVar6 = param_1[0x12];
  lVar9 = param_1[0x11];
  uVar7 = param_1[0x13];
  uVar11 = param_2[0x12];
  lVar10 = param_2[0x11];
  uVar8 = param_2[0x13];
  local_120 = lVar10;
  uStack_118 = uVar11;
  local_110 = uVar8;
  local_100 = lVar9;
  uStack_f8 = uVar6;
  local_f0 = uVar7;
  if (uVar7 >> 0x3c < 0xf) {
    if (0xe < uVar8 >> 0x3c) goto LAB_1004df114;
    if (lVar9 == lVar10) {
      FUN_10007f314(&local_100,&local_310,&DAT_100aa1bd8,&DAT_100832608);
      FUN_10007f314(&local_120,&local_310,&DAT_100aa1bd8,&DAT_100832608);
      uVar4 = uVar6;
      FUN_1000094a4(uVar6,uVar7,uVar11,uVar8);
      switchD_10004048c::caseD_6d(lVar9,uVar11,uVar8);
      if ((uVar4 & 1) != 0) goto LAB_1004df000;
    }
    else {
      FUN_10007f314(&local_100,&local_310,&DAT_100aa1bd8,&DAT_100832608);
      FUN_10007f314(&local_120,&local_310,&DAT_100aa1bd8,&DAT_100832608);
      switchD_10004048c::caseD_6d(lVar10,uVar11,uVar8);
    }
LAB_1004df2d8:
    switchD_10004048c::caseD_6d(lVar9,uVar6,uVar7);
  }
  else {
    if (uVar8 >> 0x3c < 0xf) {
LAB_1004df114:
      FUN_10007f314(&local_100,&local_310,&DAT_100aa1bd8,&DAT_100832608);
      FUN_10007f314(&local_120,&local_310,&DAT_100aa1bd8,&DAT_100832608);
      switchD_10004048c::caseD_6d(lVar9,uVar6,uVar7);
      lVar9 = lVar10;
      uVar6 = uVar11;
      uVar7 = uVar8;
      goto LAB_1004df2d8;
    }
    FUN_10007f314(&local_100,&local_310,&DAT_100aa1bd8,&DAT_100832608);
    FUN_10007f314(&local_120,&local_310,&DAT_100aa1bd8,&DAT_100832608);
LAB_1004df000:
    switchD_10004048c::caseD_6d(lVar9,uVar6,uVar7);
    uStack_158 = param_1[9];
    local_160 = param_1[8];
    uStack_148 = param_1[0xb];
    uStack_150 = param_1[10];
    uVar12 = param_1[0xd];
    uVar7 = param_1[0xc];
    uVar6 = param_1[0xe];
    uStack_198 = param_1[1];
    local_1a0 = *param_1;
    uStack_188 = param_1[3];
    uStack_190 = param_1[2];
    uStack_178 = param_1[5];
    local_180 = param_1[4];
    uStack_168 = param_1[7];
    uStack_170 = param_1[6];
    uStack_218 = param_2[1];
    local_220 = *param_2;
    uStack_208 = param_2[3];
    uStack_210 = param_2[2];
    uStack_1f8 = param_2[5];
    local_200 = param_2[4];
    uStack_1e8 = param_2[7];
    uStack_1f0 = param_2[6];
    uStack_1d8 = param_2[9];
    local_1e0 = param_2[8];
    uStack_1c8 = param_2[0xb];
    local_1d0 = param_2[10];
    uStack_2a8 = param_2[0xd];
    local_2b0 = param_2[0xc];
    local_2a0 = param_2[0xe];
    bVar1 = (local_2a0 & 0x3000000000000000) == 0;
    bVar2 = local_2b0 >> 8 == 0xffffffff;
    local_1c0 = local_2b0;
    local_1b8 = uStack_2a8;
    local_1b0 = local_2a0;
    local_140 = uVar7;
    uStack_138 = uVar12;
    local_130 = uVar6;
    if ((uVar7 >> 8 == 0xffffffff) && ((uVar6 & 0x3000000000000000) == 0)) {
      if (bVar1 && bVar2) {
        uStack_2e8 = param_1[5];
        local_2f0 = param_1[4];
        uStack_2d8 = param_1[7];
        uStack_2e0 = param_1[6];
        uStack_2c8 = param_1[9];
        local_2d0 = param_1[8];
        uStack_2b8 = param_1[0xb];
        local_2c0 = param_1[10];
        uStack_308 = param_1[1];
        local_310 = *param_1;
        uStack_2f8 = param_1[3];
        uStack_300 = param_1[2];
        local_2b0 = uVar7;
        uStack_2a8 = uVar12;
        local_2a0 = uVar6;
        FUN_10007f314(&local_1a0,&local_e0,&DAT_100aa1988,&DAT_100832138);
        FUN_10007f314(&local_220,&local_e0,&DAT_100aa1988,&DAT_100832138);
        FUN_100040bb4(&local_310,&DAT_100aa1988,&DAT_100832138);
LAB_1004df3e8:
        uVar12 = param_1[0xf];
        FUN_1000094a4(uVar12,param_1[0x10],param_2[0xf],param_2[0x10]);
        uVar3 = (uint)uVar12;
        goto LAB_1004df2e0;
      }
LAB_1004df1e0:
      uStack_2e8 = param_1[5];
      local_2f0 = param_1[4];
      uStack_2d8 = param_1[7];
      uStack_2e0 = param_1[6];
      uStack_2c8 = param_1[9];
      local_2d0 = param_1[8];
      uStack_2b8 = param_1[0xb];
      local_2c0 = param_1[10];
      uStack_308 = param_1[1];
      local_310 = *param_1;
      uStack_2f8 = param_1[3];
      uStack_300 = param_1[2];
      uStack_290 = param_2[1];
      local_298 = *param_2;
      uStack_280 = param_2[3];
      local_288 = param_2[2];
      uStack_270 = param_2[5];
      local_278 = param_2[4];
      uStack_260 = param_2[7];
      local_268 = param_2[6];
      uStack_250 = param_2[9];
      local_258 = param_2[8];
      uStack_240 = param_2[0xb];
      local_248 = param_2[10];
      local_238 = local_2b0;
      local_2b0 = uVar7;
      uStack_230 = uStack_2a8;
      uStack_2a8 = uVar12;
      local_228 = local_2a0;
      local_2a0 = uVar6;
      local_1c0 = local_238;
      local_1b8 = uStack_230;
      local_1b0 = local_228;
      FUN_10007f314(&local_1a0,&local_e0,&DAT_100aa1988,&DAT_100832138);
      FUN_10007f314(&local_220,&local_e0,&DAT_100aa1988,&DAT_100832138);
      FUN_100040bb4(&local_310,&DAT_100aa1be0,&DAT_100832610);
    }
    else {
      if (bVar1 && bVar2) goto LAB_1004df1e0;
      uStack_3e8 = param_2[5];
      local_3f0 = param_2[4];
      uStack_3d8 = param_2[7];
      uStack_3e0 = param_2[6];
      uStack_3c8 = param_2[9];
      local_3d0 = param_2[8];
      uStack_3b8 = param_2[0xb];
      uStack_3c0 = param_2[10];
      uStack_408 = param_2[1];
      local_410 = *param_2;
      uStack_3f8 = param_2[3];
      uStack_400 = param_2[2];
      uStack_d8 = param_1[1];
      local_e0 = *param_1;
      uStack_c8 = param_1[3];
      uStack_d0 = param_1[2];
      uStack_b8 = param_1[5];
      local_c0 = param_1[4];
      uStack_a8 = param_1[7];
      uStack_b0 = param_1[6];
      uStack_98 = param_1[9];
      local_a0 = param_1[8];
      uStack_88 = param_1[0xb];
      uStack_90 = param_1[10];
      local_3b0 = local_2b0;
      uStack_3a8 = uStack_2a8;
      local_3a0 = local_2a0;
      local_310 = local_410;
      uStack_308 = uStack_408;
      uStack_300 = uStack_400;
      uStack_2f8 = uStack_3f8;
      local_2f0 = local_3f0;
      uStack_2e8 = uStack_3e8;
      uStack_2e0 = uStack_3e0;
      uStack_2d8 = uStack_3d8;
      local_2d0 = local_3d0;
      uStack_2c8 = uStack_3c8;
      local_2c0 = uStack_3c0;
      uStack_2b8 = uStack_3b8;
      local_80 = uVar7;
      uStack_78 = uVar12;
      local_70 = uVar6;
      FUN_10007f314(&local_1a0,&local_390,&DAT_100aa1988,&DAT_100832138);
      FUN_10007f314(&local_220,&local_390,&DAT_100aa1988,&DAT_100832138);
      puVar5 = &local_e0;
      FUN_1004de234(puVar5,&local_310);
      FUN_100040bb4(&local_410,&DAT_100aa1988,&DAT_100832138);
      uStack_368 = param_1[5];
      local_370 = param_1[4];
      uStack_358 = param_1[7];
      uStack_360 = param_1[6];
      uStack_348 = param_1[9];
      local_350 = param_1[8];
      uStack_338 = param_1[0xb];
      uStack_340 = param_1[10];
      uStack_388 = param_1[1];
      local_390 = *param_1;
      uStack_378 = param_1[3];
      uStack_380 = param_1[2];
      local_330 = uVar7;
      uStack_328 = uVar12;
      local_320 = uVar6;
      FUN_100040bb4(&local_390,&DAT_100aa1988,&DAT_100832138);
      if (((ulong)puVar5 & 1) != 0) goto LAB_1004df3e8;
    }
  }
  uVar3 = 0;
LAB_1004df2e0:
  return uVar3 & 1;
}

