// rea decompile_all
// name: FUN_1004d1bb8
// address: 0x1004d1bb8
// body: available
// range: 0x1004d1bb8-0x1004d1f1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004d1e08) */

void FUN_1004d1bb8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  byte bVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  long unaff_x21;
  code *pcVar9;
  undefined8 local_3b8;
  long lStack_3b0;
  byte local_3a8;
  undefined7 uStack_3a7;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 local_320;
  long lStack_318;
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
  undefined8 local_290;
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
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 local_1e0;
  long lStack_1d8;
  ulong local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  lStack_1d8 = 0;
  local_1e0 = 0;
  local_1c8 = 0;
  local_1d0 = 0;
  uStack_a8 = param_1[0xd];
  local_b0 = param_1[0xc];
  uStack_138 = param_1[0xf];
  uStack_140 = param_1[0xe];
  uStack_b8 = param_1[0xb];
  uStack_c0 = param_1[10];
  uStack_148 = param_1[0xd];
  local_150 = param_1[0xc];
  uStack_98 = param_1[0xf];
  uStack_a0 = param_1[0xe];
  uStack_128 = param_1[0x11];
  local_130 = param_1[0x10];
  uStack_e8 = param_1[5];
  local_f0 = param_1[4];
  uStack_178 = param_1[7];
  uStack_180 = param_1[6];
  uStack_f8 = param_1[3];
  uStack_100 = param_1[2];
  uStack_188 = param_1[5];
  local_190 = param_1[4];
  uStack_d8 = param_1[7];
  uStack_e0 = param_1[6];
  uStack_168 = param_1[9];
  local_170 = param_1[8];
  uStack_c8 = param_1[9];
  local_d0 = param_1[8];
  uStack_158 = param_1[0xb];
  uStack_160 = param_1[10];
  uStack_1a8 = param_1[1];
  local_1b0 = *param_1;
  uStack_198 = param_1[3];
  uStack_1a0 = param_1[2];
  uStack_108 = param_1[1];
  local_110 = *param_1;
  uStack_88 = param_1[0x11];
  local_90 = param_1[0x10];
  local_1c0 = 0;
  local_120 = param_1[0x12];
  local_80 = param_1[0x12];
  puVar8 = &local_110;
  FUN_100040934();
  iVar7 = (int)puVar8;
  if (iVar7 != 1) {
    uStack_218 = uStack_a8;
    local_220 = local_b0;
    uStack_208 = uStack_98;
    uStack_210 = uStack_a0;
    uStack_1f8 = uStack_88;
    local_200 = local_90;
    local_1f0 = local_80;
    uStack_258 = uStack_e8;
    local_260 = local_f0;
    uStack_248 = uStack_d8;
    uStack_250 = uStack_e0;
    uStack_238 = uStack_c8;
    local_240 = local_d0;
    uStack_228 = uStack_b8;
    uStack_230 = uStack_c0;
    uStack_278 = uStack_108;
    local_280 = local_110;
    uStack_268 = uStack_f8;
    uStack_270 = uStack_100;
    puVar8 = &local_280;
    FUN_100040948();
    if ((int)puVar8 == 0xf) {
      puVar8 = &local_280;
      FUN_100040964();
      uVar1 = *puVar8;
      lVar3 = puVar8[1];
      bVar5 = *(byte *)(puVar8 + 2);
      uVar2 = puVar8[3];
      uVar4 = puVar8[4];
      uStack_2b8 = uStack_148;
      local_2c0 = local_150;
      uStack_2a8 = uStack_138;
      uStack_2b0 = uStack_140;
      uStack_298 = uStack_128;
      local_2a0 = local_130;
      local_290 = local_120;
      uStack_2f8 = uStack_188;
      local_300 = local_190;
      uStack_2e8 = uStack_178;
      uStack_2f0 = uStack_180;
      uStack_2d8 = uStack_168;
      local_2e0 = local_170;
      uStack_2c8 = uStack_158;
      uStack_2d0 = uStack_160;
      lStack_318 = uStack_1a8;
      local_320 = local_1b0;
      uStack_308 = uStack_198;
      uStack_310 = uStack_1a0;
      FUN_1004df3f8(&local_320,&local_3b8);
      puVar8 = (undefined8 *)0x0;
      FUN_1004e2388(0,0,0,0,0);
      local_1e0 = uVar1;
      lStack_1d8 = lVar3;
      local_1d0 = (ulong)bVar5;
      local_1c8 = uVar2;
      local_1c0 = uVar4;
    }
  }
  pcVar9 = *(code **)(param_4 + 0x198);
  FUN_1004e203c();
  (*pcVar9)(&local_1e0,&DAT_1009cca38,puVar8,param_3,param_4);
  uVar4 = local_1c0;
  uVar2 = local_1c8;
  uVar6 = local_1d0;
  lVar3 = lStack_1d8;
  uVar1 = local_1e0;
  if ((unaff_x21 == 0) && (lStack_1d8 != 0)) {
    if (iVar7 == 1) {
      _swift_bridgeObjectRetain(lStack_1d8);
      FUN_100008184(uVar2,uVar4);
    }
    else {
      pcVar9 = *(code **)(param_4 + 8);
      _swift_bridgeObjectRetain(lStack_1d8);
      FUN_100008184(uVar2,uVar4);
      (*pcVar9)(param_3,param_4);
    }
    FUN_1004e2388(local_1e0,lStack_1d8,local_1d0,local_1c8,local_1c0);
    local_3b8 = uVar1;
    lStack_3b0 = lVar3;
    local_3a8 = (byte)uVar6 & 1;
    uStack_3a0 = uVar2;
    local_398 = uVar4;
    FUN_1004df5ac(&local_3b8);
    uStack_2b8 = uStack_350;
    local_2c0 = local_358;
    uStack_2a8 = uStack_340;
    uStack_2b0 = local_348;
    uStack_298 = uStack_330;
    local_2a0 = local_338;
    local_290 = local_328;
    uStack_2f8 = uStack_390;
    local_300 = local_398;
    uStack_2e8 = uStack_380;
    uStack_2f0 = local_388;
    uStack_2d8 = uStack_370;
    local_2e0 = local_378;
    uStack_2c8 = uStack_360;
    uStack_2d0 = local_368;
    uStack_310 = CONCAT71(uStack_3a7,local_3a8);
    lStack_318 = lStack_3b0;
    local_320 = local_3b8;
    uStack_308 = uStack_3a0;
    FUN_100008290(&local_320);
    uStack_218 = param_1[0xd];
    local_220 = param_1[0xc];
    uStack_208 = param_1[0xf];
    uStack_210 = param_1[0xe];
    uStack_1f8 = param_1[0x11];
    local_200 = param_1[0x10];
    local_1f0 = param_1[0x12];
    uStack_258 = param_1[5];
    local_260 = param_1[4];
    uStack_248 = param_1[7];
    uStack_250 = param_1[6];
    uStack_238 = param_1[9];
    local_240 = param_1[8];
    uStack_228 = param_1[0xb];
    uStack_230 = param_1[10];
    uStack_278 = param_1[1];
    local_280 = *param_1;
    uStack_268 = param_1[3];
    uStack_270 = param_1[2];
    param_1[0xd] = uStack_2b8;
    param_1[0xc] = local_2c0;
    param_1[0xf] = uStack_2a8;
    param_1[0xe] = uStack_2b0;
    param_1[0x11] = uStack_298;
    param_1[0x10] = local_2a0;
    param_1[0x12] = local_290;
    param_1[5] = uStack_2f8;
    param_1[4] = local_300;
    param_1[7] = uStack_2e8;
    param_1[6] = uStack_2f0;
    param_1[9] = uStack_2d8;
    param_1[8] = local_2e0;
    param_1[0xb] = uStack_2c8;
    param_1[10] = uStack_2d0;
    param_1[1] = lStack_318;
    *param_1 = local_320;
    param_1[3] = uStack_308;
    param_1[2] = uStack_310;
    FUN_100040bb4(&local_280,&DAT_100aa1980,&DAT_100832130);
  }
  else {
    FUN_1004e2388(local_1e0,lStack_1d8,local_1d0,local_1c8,local_1c0);
  }
  return;
}

