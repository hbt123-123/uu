// rea decompile_all
// name: FUN_1004d0c3c
// address: 0x1004d0c3c
// body: available
// range: 0x1004d0c3c-0x1004d0f6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004d0e68) */

void FUN_1004d0c3c(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long unaff_x21;
  code *pcVar8;
  long local_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
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
  long local_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long local_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long local_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long local_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long local_290;
  long lStack_288;
  long local_280;
  long local_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long local_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long local_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long local_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long local_1f0;
  long lStack_1e8;
  long local_1e0;
  long local_1d0;
  ulong uStack_1c8;
  long local_1c0;
  long lStack_1b8;
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
  long lStack_140;
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
  
  uStack_1c8 = 0;
  local_1d0 = 0;
  lStack_1b8 = 0;
  local_1c0 = 0;
  lStack_a8 = param_1[0xd];
  local_b0 = param_1[0xc];
  lStack_138 = param_1[0xf];
  lStack_140 = param_1[0xe];
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
  local_120 = param_1[0x12];
  local_80 = param_1[0x12];
  plVar6 = &local_110;
  FUN_100040934();
  iVar5 = (int)plVar6;
  if (iVar5 != 1) {
    lStack_208 = lStack_a8;
    local_210 = local_b0;
    lStack_1f8 = lStack_98;
    lStack_200 = lStack_a0;
    lStack_1e8 = lStack_88;
    local_1f0 = local_90;
    local_1e0 = local_80;
    lStack_248 = lStack_e8;
    local_250 = local_f0;
    lStack_238 = lStack_d8;
    lStack_240 = lStack_e0;
    lStack_228 = lStack_c8;
    local_230 = local_d0;
    lStack_218 = lStack_b8;
    lStack_220 = lStack_c0;
    lStack_268 = lStack_108;
    local_270 = local_110;
    lStack_258 = lStack_f8;
    lStack_260 = lStack_100;
    plVar6 = &local_270;
    FUN_100040948();
    if ((int)plVar6 == 10) {
      plVar6 = &local_270;
      FUN_100040964();
      lVar7 = *plVar6;
      uVar3 = *(uint *)(plVar6 + 1);
      lVar1 = plVar6[2];
      lVar2 = plVar6[3];
      lStack_2a8 = lStack_148;
      local_2b0 = local_150;
      lStack_298 = lStack_138;
      lStack_2a0 = lStack_140;
      lStack_288 = lStack_128;
      local_290 = local_130;
      local_280 = local_120;
      lStack_2e8 = lStack_188;
      local_2f0 = local_190;
      lStack_2d8 = lStack_178;
      lStack_2e0 = lStack_180;
      lStack_2c8 = lStack_168;
      local_2d0 = local_170;
      lStack_2b8 = lStack_158;
      lStack_2c0 = lStack_160;
      lStack_308 = lStack_1a8;
      local_310 = local_1b0;
      lStack_2f8 = lStack_198;
      lStack_300 = lStack_1a0;
      FUN_1004df3f8(&local_310,&local_3a8);
      plVar6 = (long *)0x0;
      FUN_100483470(0,0,0,0);
      local_1d0 = lVar7;
      uStack_1c8 = (ulong)uVar3;
      local_1c0 = lVar1;
      lStack_1b8 = lVar2;
    }
  }
  pcVar8 = *(code **)(param_4 + 0x198);
  FUN_1004e1efc();
  (*pcVar8)(&local_1d0,&DAT_1009cc528,plVar6,param_3,param_4);
  lVar7 = lStack_1b8;
  lVar2 = local_1c0;
  uVar4 = uStack_1c8;
  lVar1 = local_1d0;
  if ((unaff_x21 == 0) && (local_1d0 != 0)) {
    if (iVar5 == 1) {
      _swift_bridgeObjectRetain();
      FUN_100008184(lVar2,lVar7);
    }
    else {
      pcVar8 = *(code **)(param_4 + 8);
      _swift_bridgeObjectRetain();
      FUN_100008184(lVar2,lVar7);
      (*pcVar8)(param_3,param_4);
    }
    FUN_100483470(local_1d0,uStack_1c8,local_1c0,lStack_1b8);
    local_3a8 = lVar1;
    uStack_3a0 = (undefined4)uVar4;
    local_398 = lVar2;
    lStack_390 = lVar7;
    FUN_1004df52c(&local_3a8);
    lStack_2a8 = lStack_340;
    local_2b0 = local_348;
    lStack_298 = lStack_330;
    lStack_2a0 = local_338;
    lStack_288 = lStack_320;
    local_290 = local_328;
    local_280 = local_318;
    lStack_2e8 = lStack_380;
    local_2f0 = local_388;
    lStack_2d8 = lStack_370;
    lStack_2e0 = local_378;
    lStack_2c8 = lStack_360;
    local_2d0 = local_368;
    lStack_2b8 = lStack_350;
    lStack_2c0 = local_358;
    lStack_308 = CONCAT44(uStack_39c,uStack_3a0);
    local_310 = local_3a8;
    lStack_2f8 = lStack_390;
    lStack_300 = local_398;
    FUN_100008290(&local_310);
    lStack_208 = param_1[0xd];
    local_210 = param_1[0xc];
    lStack_1f8 = param_1[0xf];
    lStack_200 = param_1[0xe];
    lStack_1e8 = param_1[0x11];
    local_1f0 = param_1[0x10];
    local_1e0 = param_1[0x12];
    lStack_248 = param_1[5];
    local_250 = param_1[4];
    lStack_238 = param_1[7];
    lStack_240 = param_1[6];
    lStack_228 = param_1[9];
    local_230 = param_1[8];
    lStack_218 = param_1[0xb];
    lStack_220 = param_1[10];
    lStack_268 = param_1[1];
    local_270 = *param_1;
    lStack_258 = param_1[3];
    lStack_260 = param_1[2];
    param_1[0xd] = lStack_2a8;
    param_1[0xc] = local_2b0;
    param_1[0xf] = lStack_298;
    param_1[0xe] = lStack_2a0;
    param_1[0x11] = lStack_288;
    param_1[0x10] = local_290;
    param_1[0x12] = local_280;
    param_1[5] = lStack_2e8;
    param_1[4] = local_2f0;
    param_1[7] = lStack_2d8;
    param_1[6] = lStack_2e0;
    param_1[9] = lStack_2c8;
    param_1[8] = local_2d0;
    param_1[0xb] = lStack_2b8;
    param_1[10] = lStack_2c0;
    param_1[1] = lStack_308;
    *param_1 = local_310;
    param_1[3] = lStack_2f8;
    param_1[2] = lStack_300;
    FUN_100040bb4(&local_270,&DAT_100aa1980,&DAT_100832130);
  }
  else {
    FUN_100483470(local_1d0,uStack_1c8,local_1c0,lStack_1b8);
  }
  return;
}

