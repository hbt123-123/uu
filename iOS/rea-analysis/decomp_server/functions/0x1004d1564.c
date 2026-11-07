// rea decompile_all
// name: FUN_1004d1564
// address: 0x1004d1564
// body: available
// range: 0x1004d1564-0x1004d187f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004d178c) */

void FUN_1004d1564(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  long unaff_x21;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long local_398;
  long lStack_390;
  long local_388;
  long lStack_380;
  long local_378;
  long lStack_370;
  long local_368;
  long lStack_360;
  long local_358;
  long lStack_350;
  long local_348;
  long lStack_340;
  long local_338;
  long lStack_330;
  long local_328;
  long lStack_320;
  long local_318;
  long lStack_310;
  long local_308;
  long local_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long local_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long local_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long local_2a0;
  long lStack_298;
  long local_290;
  long lStack_288;
  long local_280;
  long lStack_278;
  long local_270;
  long local_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long local_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long local_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long local_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long local_1e0;
  long lStack_1d8;
  long local_1d0;
  long local_1c8;
  long lStack_1c0;
  long local_1b8;
  long local_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long local_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long local_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long local_150;
  long lStack_148;
  long local_140;
  long lStack_138;
  long local_130;
  long lStack_128;
  long local_120;
  long local_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long local_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  
  lStack_a8 = param_1[0xd];
  local_b0 = param_1[0xc];
  lStack_138 = param_1[0xf];
  local_140 = param_1[0xe];
  lStack_b8 = param_1[0xb];
  lStack_c0 = param_1[10];
  lStack_148 = param_1[0xd];
  local_150 = param_1[0xc];
  lStack_98 = param_1[0xf];
  lStack_a0 = param_1[0xe];
  lStack_128 = param_1[0x11];
  local_130 = param_1[0x10];
  lStack_e8 = param_1[5];
  local_f0 = param_1[4];
  lStack_178 = param_1[7];
  lStack_180 = param_1[6];
  lStack_f8 = param_1[3];
  lStack_100 = param_1[2];
  lStack_188 = param_1[5];
  local_190 = param_1[4];
  lStack_d8 = param_1[7];
  lStack_e0 = param_1[6];
  lStack_168 = param_1[9];
  local_170 = param_1[8];
  lStack_c8 = param_1[9];
  local_d0 = param_1[8];
  lStack_158 = param_1[0xb];
  lStack_160 = param_1[10];
  lStack_1a8 = param_1[1];
  local_1b0 = *param_1;
  lStack_198 = param_1[3];
  lStack_1a0 = param_1[2];
  lStack_108 = param_1[1];
  local_110 = *param_1;
  lStack_88 = param_1[0x11];
  local_90 = param_1[0x10];
  local_1c8 = 0;
  lStack_1c0 = 0;
  local_1b8 = 0;
  local_120 = param_1[0x12];
  local_80 = param_1[0x12];
  plVar2 = &local_110;
  FUN_100040934();
  iVar1 = (int)plVar2;
  if (iVar1 != 1) {
    lStack_1f8 = lStack_a8;
    local_200 = local_b0;
    lStack_1e8 = lStack_98;
    lStack_1f0 = lStack_a0;
    lStack_1d8 = lStack_88;
    local_1e0 = local_90;
    local_1d0 = local_80;
    lStack_238 = lStack_e8;
    local_240 = local_f0;
    lStack_228 = lStack_d8;
    lStack_230 = lStack_e0;
    lStack_218 = lStack_c8;
    local_220 = local_d0;
    lStack_208 = lStack_b8;
    lStack_210 = lStack_c0;
    lStack_258 = lStack_108;
    local_260 = local_110;
    lStack_248 = lStack_f8;
    lStack_250 = lStack_100;
    plVar2 = &local_260;
    FUN_100040948();
    if ((int)plVar2 == 0xd) {
      plVar2 = &local_260;
      FUN_100040964();
      lVar6 = plVar2[1];
      lVar5 = *plVar2;
      lVar3 = plVar2[2];
      lStack_2b8 = lStack_168;
      local_2c0 = local_170;
      lStack_2a8 = lStack_158;
      lStack_2b0 = lStack_160;
      lStack_2d8 = lStack_188;
      local_2e0 = local_190;
      lStack_2c8 = lStack_178;
      lStack_2d0 = lStack_180;
      local_270 = local_120;
      lStack_288 = lStack_138;
      local_290 = local_140;
      lStack_278 = lStack_128;
      local_280 = local_130;
      lStack_298 = lStack_148;
      local_2a0 = local_150;
      lStack_2f8 = lStack_1a8;
      local_300 = local_1b0;
      lStack_2e8 = lStack_198;
      lStack_2f0 = lStack_1a0;
      FUN_1004df3f8(&local_300,&local_398);
      plVar2 = (long *)0x0;
      FUN_100483534(0,0,0);
      local_1c8 = lVar5;
      lStack_1c0 = lVar6;
      local_1b8 = lVar3;
    }
  }
  pcVar4 = *(code **)(param_4 + 0x198);
  FUN_1004e1fbc();
  (*pcVar4)(&local_1c8,&DAT_1009cc830,plVar2,param_3,param_4);
  lVar6 = local_1b8;
  lVar5 = lStack_1c0;
  lVar3 = local_1c8;
  if ((unaff_x21 == 0) && (local_1c8 != 0)) {
    if (iVar1 == 1) {
      _swift_bridgeObjectRetain();
      FUN_100008184(lVar5,lVar6);
    }
    else {
      pcVar4 = *(code **)(param_4 + 8);
      _swift_bridgeObjectRetain();
      FUN_100008184(lVar5,lVar6);
      (*pcVar4)(param_3,param_4);
    }
    FUN_100483534(local_1c8,lStack_1c0,local_1b8);
    local_398 = lVar3;
    lStack_390 = lVar5;
    local_388 = lVar6;
    FUN_10017b658(&local_398);
    lStack_298 = lStack_330;
    local_2a0 = local_338;
    lStack_288 = lStack_320;
    local_290 = local_328;
    lStack_278 = lStack_310;
    local_280 = local_318;
    local_270 = local_308;
    lStack_2d8 = lStack_370;
    local_2e0 = local_378;
    lStack_2c8 = lStack_360;
    lStack_2d0 = local_368;
    lStack_2b8 = lStack_350;
    local_2c0 = local_358;
    lStack_2a8 = lStack_340;
    lStack_2b0 = local_348;
    lStack_2f8 = lStack_390;
    local_300 = local_398;
    lStack_2e8 = lStack_380;
    lStack_2f0 = local_388;
    FUN_100008290(&local_300);
    lStack_1f8 = param_1[0xd];
    local_200 = param_1[0xc];
    lStack_1e8 = param_1[0xf];
    lStack_1f0 = param_1[0xe];
    lStack_1d8 = param_1[0x11];
    local_1e0 = param_1[0x10];
    local_1d0 = param_1[0x12];
    lStack_238 = param_1[5];
    local_240 = param_1[4];
    lStack_228 = param_1[7];
    lStack_230 = param_1[6];
    lStack_218 = param_1[9];
    local_220 = param_1[8];
    lStack_208 = param_1[0xb];
    lStack_210 = param_1[10];
    lStack_258 = param_1[1];
    local_260 = *param_1;
    lStack_248 = param_1[3];
    lStack_250 = param_1[2];
    param_1[0xd] = lStack_298;
    param_1[0xc] = local_2a0;
    param_1[0xf] = lStack_288;
    param_1[0xe] = local_290;
    param_1[0x11] = lStack_278;
    param_1[0x10] = local_280;
    param_1[0x12] = local_270;
    param_1[5] = lStack_2d8;
    param_1[4] = local_2e0;
    param_1[7] = lStack_2c8;
    param_1[6] = lStack_2d0;
    param_1[9] = lStack_2b8;
    param_1[8] = local_2c0;
    param_1[0xb] = lStack_2a8;
    param_1[10] = lStack_2b0;
    param_1[1] = lStack_2f8;
    *param_1 = local_300;
    param_1[3] = lStack_2e8;
    param_1[2] = lStack_2f0;
    FUN_100040bb4(&local_260,&DAT_100aa1980,&DAT_100832130);
  }
  else {
    FUN_100483534(local_1c8,lStack_1c0,local_1b8);
  }
  return;
}

