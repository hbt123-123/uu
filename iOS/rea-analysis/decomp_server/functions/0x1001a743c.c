// rea decompile_all
// name: FUN_1001a743c
// address: 0x1001a743c
// body: available
// range: 0x1001a743c-0x1001a77db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001a743c(ulong *param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  ulong *puVar1;
  int iVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong local_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong local_390;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong local_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  ulong local_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  ulong local_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong local_310;
  ulong uStack_308;
  ulong uStack_300;
  undefined3 uStack_2f8;
  undefined5 local_2f5;
  undefined3 uStack_2f0;
  undefined8 uStack_2ed;
  ulong local_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong local_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong local_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong local_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong local_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong local_240;
  ulong uStack_238;
  ulong uStack_230;
  undefined3 uStack_228;
  undefined5 local_225;
  undefined3 uStack_220;
  undefined8 uStack_21d;
  ulong local_210;
  ulong uStack_208;
  ulong local_200;
  ulong uStack_1f8;
  ulong local_1f0;
  ulong uStack_1e8;
  ulong local_1e0;
  ulong uStack_1d8;
  ulong local_1d0;
  ulong uStack_1c8;
  ulong local_1c0;
  ulong uStack_1b8;
  ulong local_1b0;
  ulong uStack_1a8;
  ulong local_1a0;
  ulong uStack_198;
  ulong local_190;
  ulong uStack_188;
  ulong local_180;
  ulong uStack_178;
  ulong local_170;
  ulong uStack_168;
  ulong uStack_160;
  undefined3 uStack_158;
  undefined5 local_155;
  undefined3 uStack_150;
  undefined8 uStack_14d;
  ulong local_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong local_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong local_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong local_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined3 uStack_88;
  undefined5 local_85;
  undefined3 uStack_80;
  undefined8 uStack_7d;
  
  uVar7 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar7 = param_3 >> 0x38 & 0xf;
  }
  if (uVar7 != 0) {
    uVar7 = param_4 & 0xffffffffffff;
    if ((param_5 & 0x2000000000000000) != 0) {
      uVar7 = param_5 >> 0x38 & 0xf;
    }
    if (uVar7 != 0) {
      uVar4 = *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer14AppListManager::remoteDeviceApps);
      local_3b0 = param_4;
      uStack_3a8 = param_5;
      _swift_retain(uVar4);
      _swift_bridgeObjectRetain(param_5);
      FUN_1003be1c4(&local_140,&local_3b0);
      _swift_bridgeObjectRelease(param_5);
      _swift_release(uVar4);
      uStack_238 = uStack_98;
      local_240 = local_a0;
      uStack_230 = uStack_90;
      uStack_21d = uStack_7d;
      uStack_278 = uStack_d8;
      local_280 = local_e0;
      uStack_268 = uStack_c8;
      uStack_270 = uStack_d0;
      uStack_258 = uStack_b8;
      local_260 = local_c0;
      uStack_248 = uStack_a8;
      uStack_250 = uStack_b0;
      uStack_2b8 = uStack_118;
      local_2c0 = local_120;
      uStack_2a8 = uStack_108;
      uStack_2b0 = uStack_110;
      uStack_298 = uStack_f8;
      local_2a0 = local_100;
      uStack_288 = uStack_e8;
      uStack_290 = uStack_f0;
      uStack_2d8 = uStack_138;
      local_2e0 = local_140;
      uStack_2c8 = uStack_128;
      uStack_2d0 = uStack_130;
      uStack_168 = uStack_98;
      local_170 = local_a0;
      uStack_158 = uStack_88;
      uStack_160 = uStack_90;
      uStack_14d = uStack_7d;
      local_155 = local_85;
      uStack_150 = uStack_80;
      uStack_1a8 = uStack_d8;
      local_1b0 = local_e0;
      uStack_198 = uStack_c8;
      local_1a0 = uStack_d0;
      uStack_188 = uStack_b8;
      local_190 = local_c0;
      uStack_178 = uStack_a8;
      local_180 = uStack_b0;
      uStack_1e8 = uStack_118;
      local_1f0 = local_120;
      uStack_1d8 = uStack_108;
      local_1e0 = uStack_110;
      uStack_1c8 = uStack_f8;
      local_1d0 = local_100;
      uStack_1b8 = uStack_e8;
      local_1c0 = uStack_f0;
      uStack_208 = uStack_138;
      local_210 = local_140;
      uStack_1f8 = uStack_128;
      local_200 = uStack_130;
      iVar2 = (int)&local_210;
      FUN_1000efaa0();
      if (iVar2 != 1) {
        if ((uStack_208 == 0) ||
           (((local_210 == param_2 && (uStack_208 == param_3)) ||
            (uVar7 = local_210,
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (local_210,uStack_208,param_2,param_3,0), (uVar7 & 1) != 0)))) {
          uStack_308 = uStack_168;
          local_310 = local_170;
          uStack_2f8 = uStack_158;
          uStack_300 = uStack_160;
          uStack_2ed = uStack_14d;
          local_2f5 = local_155;
          uStack_2f0 = uStack_150;
          uStack_348 = uStack_1a8;
          local_350 = local_1b0;
          uStack_338 = uStack_198;
          uStack_340 = local_1a0;
          uStack_328 = uStack_188;
          local_330 = local_190;
          uStack_318 = uStack_178;
          uStack_320 = local_180;
          uStack_388 = uStack_1e8;
          local_390 = local_1f0;
          uStack_378 = uStack_1d8;
          uStack_380 = local_1e0;
          uStack_368 = uStack_1c8;
          local_370 = local_1d0;
          uStack_358 = uStack_1b8;
          uStack_360 = local_1c0;
          uStack_3a8 = uStack_208;
          local_3b0 = local_210;
          uStack_398 = uStack_1f8;
          uStack_3a0 = local_200;
          FUN_100008290(&local_3b0);
          uStack_98 = uStack_308;
          local_a0 = local_310;
          uStack_88 = uStack_2f8;
          uStack_90 = uStack_300;
          uStack_7d = uStack_2ed;
          local_85 = local_2f5;
          uStack_80 = uStack_2f0;
          uStack_d8 = uStack_348;
          local_e0 = local_350;
          uStack_c8 = uStack_338;
          uStack_d0 = uStack_340;
          uStack_b8 = uStack_328;
          local_c0 = local_330;
          uStack_a8 = uStack_318;
          uStack_b0 = uStack_320;
          uStack_118 = uStack_388;
          local_120 = local_390;
          uStack_108 = uStack_378;
          uStack_110 = uStack_380;
          uStack_f8 = uStack_368;
          local_100 = local_370;
          uStack_e8 = uStack_358;
          uStack_f0 = uStack_360;
          local_140 = local_3b0;
          uStack_138 = uStack_3a8;
          uStack_130 = uStack_3a0;
          uStack_128 = uStack_398;
          goto LAB_1001a7768;
        }
        FUN_100040bb4(&local_2e0,&DAT_100a781a8,&DAT_10080d410);
      }
    }
    lVar5 = *(long *)(unaff_x20 + _TtC14UURemoteServer14AppListManager::remoteDeviceApps);
    lVar3 = lVar5;
    _swift_retain();
    FUN_1003bde18();
    _swift_release(lVar5);
    lVar5 = *(long *)(lVar3 + 0x10);
    if (lVar5 != 0) {
      lVar6 = 0x20;
      while( true ) {
        lVar5 = lVar5 + -1;
        puVar1 = (ulong *)(lVar3 + lVar6);
        uStack_208 = puVar1[1];
        uVar7 = *puVar1;
        uStack_1f8 = puVar1[3];
        local_200 = puVar1[2];
        uStack_1e8 = puVar1[5];
        local_1f0 = puVar1[4];
        uStack_1d8 = puVar1[7];
        local_1e0 = puVar1[6];
        uStack_1c8 = puVar1[9];
        local_1d0 = puVar1[8];
        uStack_1b8 = puVar1[0xb];
        local_1c0 = puVar1[10];
        uStack_1a8 = puVar1[0xd];
        local_1b0 = puVar1[0xc];
        uStack_198 = puVar1[0xf];
        local_1a0 = puVar1[0xe];
        uStack_188 = puVar1[0x11];
        local_190 = puVar1[0x10];
        uStack_178 = puVar1[0x13];
        local_180 = puVar1[0x12];
        uStack_168 = puVar1[0x15];
        local_170 = puVar1[0x14];
        uStack_160 = puVar1[0x16];
        uStack_14d = *(undefined8 *)((long)puVar1 + 0xc3);
        uStack_150 = (undefined3)((ulong)*(undefined8 *)((long)puVar1 + 0xbb) >> 0x28);
        uStack_158 = (undefined3)puVar1[0x17];
        local_155 = (undefined5)(puVar1[0x17] >> 0x18);
        local_210 = uVar7;
        if ((uStack_208 != 0) &&
           (((uVar7 == param_2 && (uStack_208 == param_3)) ||
            (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                       (uVar7,uStack_208,param_2,param_3,0), (uVar7 & 1) != 0)))) {
          FUN_1000acd04(&local_210,&local_140);
          _swift_bridgeObjectRelease(lVar3);
          uStack_238 = uStack_168;
          local_240 = local_170;
          uStack_228 = uStack_158;
          uStack_230 = uStack_160;
          uStack_21d = uStack_14d;
          local_225 = local_155;
          uStack_220 = uStack_150;
          uStack_278 = uStack_1a8;
          local_280 = local_1b0;
          uStack_268 = uStack_198;
          uStack_270 = local_1a0;
          uStack_258 = uStack_188;
          local_260 = local_190;
          uStack_248 = uStack_178;
          uStack_250 = local_180;
          uStack_2b8 = uStack_1e8;
          local_2c0 = local_1f0;
          uStack_2a8 = uStack_1d8;
          uStack_2b0 = local_1e0;
          uStack_298 = uStack_1c8;
          local_2a0 = local_1d0;
          uStack_288 = uStack_1b8;
          uStack_290 = local_1c0;
          uStack_2d8 = uStack_208;
          local_2e0 = local_210;
          uStack_2c8 = uStack_1f8;
          uStack_2d0 = local_200;
          FUN_100008290(&local_2e0);
          uStack_98 = uStack_238;
          local_a0 = local_240;
          uStack_88 = uStack_228;
          uStack_90 = uStack_230;
          uStack_7d = uStack_21d;
          local_85 = local_225;
          uStack_80 = uStack_220;
          uStack_d8 = uStack_278;
          local_e0 = local_280;
          uStack_c8 = uStack_268;
          uStack_d0 = uStack_270;
          uStack_b8 = uStack_258;
          local_c0 = local_260;
          uStack_a8 = uStack_248;
          uStack_b0 = uStack_250;
          uStack_118 = uStack_2b8;
          local_120 = local_2c0;
          uStack_108 = uStack_2a8;
          uStack_110 = uStack_2b0;
          uStack_f8 = uStack_298;
          local_100 = local_2a0;
          uStack_e8 = uStack_288;
          uStack_f0 = uStack_290;
          local_140 = local_2e0;
          uStack_138 = uStack_2d8;
          uStack_130 = uStack_2d0;
          uStack_128 = uStack_2c8;
          goto LAB_1001a7768;
        }
        if (lVar5 == 0) break;
        lVar6 = lVar6 + 0xd0;
      }
    }
    _swift_bridgeObjectRelease(lVar3);
  }
  FUN_1001ac44c(&local_140);
LAB_1001a7768:
  param_1[0x15] = uStack_98;
  param_1[0x14] = local_a0;
  param_1[0x17] = CONCAT53(local_85,uStack_88);
  param_1[0x16] = uStack_90;
  *(undefined8 *)((long)param_1 + 0xc3) = uStack_7d;
  *(ulong *)((long)param_1 + 0xbb) = CONCAT35(uStack_80,local_85);
  param_1[0xd] = uStack_d8;
  param_1[0xc] = local_e0;
  param_1[0xf] = uStack_c8;
  param_1[0xe] = uStack_d0;
  param_1[0x11] = uStack_b8;
  param_1[0x10] = local_c0;
  param_1[0x13] = uStack_a8;
  param_1[0x12] = uStack_b0;
  param_1[5] = uStack_118;
  param_1[4] = local_120;
  param_1[7] = uStack_108;
  param_1[6] = uStack_110;
  param_1[9] = uStack_f8;
  param_1[8] = local_100;
  param_1[0xb] = uStack_e8;
  param_1[10] = uStack_f0;
  param_1[1] = uStack_138;
  *param_1 = local_140;
  param_1[3] = uStack_128;
  param_1[2] = uStack_130;
  return;
}

