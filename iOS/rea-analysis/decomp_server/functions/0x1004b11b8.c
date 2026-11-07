// rea decompile_all
// name: FUN_1004b11b8
// address: 0x1004b11b8
// body: available
// range: 0x1004b11b8-0x1004b14ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004b13c4) */

void FUN_1004b11b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long unaff_x21;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_358;
  long lStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined1 local_2d8;
  undefined8 local_2d0;
  long lStack_2c8;
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
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined1 local_250;
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
  undefined1 local_1c0;
  undefined8 local_1b0;
  long lStack_1a8;
  undefined8 local_1a0;
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
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 local_110;
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
  undefined1 local_80;
  
  lStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_a8 = param_1[0xb];
  uStack_b0 = param_1[10];
  uStack_128 = param_1[0xd];
  local_130 = param_1[0xc];
  uStack_98 = param_1[0xd];
  local_a0 = param_1[0xc];
  uStack_118 = param_1[0xf];
  uStack_120 = param_1[0xe];
  uStack_e8 = param_1[3];
  uStack_f0 = param_1[2];
  uStack_168 = param_1[5];
  local_170 = param_1[4];
  uStack_d8 = param_1[5];
  local_e0 = param_1[4];
  uStack_158 = param_1[7];
  uStack_160 = param_1[6];
  uStack_c8 = param_1[7];
  uStack_d0 = param_1[6];
  uStack_148 = param_1[9];
  local_150 = param_1[8];
  uStack_b8 = param_1[9];
  local_c0 = param_1[8];
  uStack_138 = param_1[0xb];
  uStack_140 = param_1[10];
  uStack_188 = param_1[1];
  local_190 = *param_1;
  uStack_178 = param_1[3];
  uStack_180 = param_1[2];
  uStack_f8 = param_1[1];
  local_100 = *param_1;
  uStack_88 = param_1[0xf];
  uStack_90 = param_1[0xe];
  local_110 = *(undefined1 *)(param_1 + 0x10);
  local_80 = *(undefined1 *)(param_1 + 0x10);
  puVar4 = &local_100;
  FUN_1001241c4();
  iVar3 = (int)puVar4;
  if (iVar3 != 1) {
    uStack_1d8 = uStack_98;
    local_1e0 = local_a0;
    uStack_1c8 = uStack_88;
    uStack_1d0 = uStack_90;
    local_1c0 = local_80;
    uStack_218 = uStack_d8;
    local_220 = local_e0;
    uStack_208 = uStack_c8;
    uStack_210 = uStack_d0;
    uStack_1f8 = uStack_b8;
    local_200 = local_c0;
    uStack_1e8 = uStack_a8;
    uStack_1f0 = uStack_b0;
    uStack_238 = uStack_f8;
    local_240 = local_100;
    uStack_228 = uStack_e8;
    uStack_230 = uStack_f0;
    puVar4 = &local_240;
    FUN_1001241ec();
    if ((int)puVar4 == 6) {
      puVar4 = &local_240;
      FUN_100124204();
      lVar7 = puVar4[1];
      uVar6 = *puVar4;
      uVar1 = puVar4[2];
      uVar2 = puVar4[3];
      uStack_268 = uStack_128;
      local_270 = local_130;
      uStack_258 = uStack_118;
      uStack_260 = uStack_120;
      local_250 = local_110;
      uStack_2a8 = uStack_168;
      local_2b0 = local_170;
      uStack_298 = uStack_158;
      uStack_2a0 = uStack_160;
      uStack_288 = uStack_148;
      local_290 = local_150;
      uStack_278 = uStack_138;
      uStack_280 = uStack_140;
      lStack_2c8 = uStack_188;
      local_2d0 = local_190;
      uStack_2b8 = uStack_178;
      uStack_2c0 = uStack_180;
      FUN_1004a142c(&local_2d0,&local_358);
      puVar4 = (undefined8 *)0x0;
      FUN_1004338a4(0,0,0,0);
      local_1b0 = uVar6;
      lStack_1a8 = lVar7;
      local_1a0 = uVar1;
      uStack_198 = uVar2;
    }
  }
  pcVar5 = *(code **)(param_4 + 0x198);
  FUN_1004ba1f8();
  (*pcVar5)(&local_1b0,&DAT_1009c8c00,puVar4,param_3,param_4);
  uVar6 = uStack_198;
  uVar2 = local_1a0;
  lVar7 = lStack_1a8;
  uVar1 = local_1b0;
  if ((unaff_x21 == 0) && (lStack_1a8 != 0)) {
    if (iVar3 == 1) {
      _swift_bridgeObjectRetain(lStack_1a8);
      FUN_100008184(uVar2,uVar6);
    }
    else {
      pcVar5 = *(code **)(param_4 + 8);
      _swift_bridgeObjectRetain(lStack_1a8);
      FUN_100008184(uVar2,uVar6);
      (*pcVar5)(param_3,param_4);
    }
    FUN_1004338a4(local_1b0,lStack_1a8,local_1a0,uStack_198);
    local_358 = uVar1;
    lStack_350 = lVar7;
    local_348 = uVar2;
    uStack_340 = uVar6;
    FUN_1004a342c(&local_358);
    uStack_268 = uStack_2f0;
    local_270 = local_2f8;
    uStack_258 = uStack_2e0;
    uStack_260 = local_2e8;
    local_250 = local_2d8;
    uStack_2a8 = uStack_330;
    local_2b0 = local_338;
    uStack_298 = uStack_320;
    uStack_2a0 = local_328;
    uStack_288 = uStack_310;
    local_290 = local_318;
    uStack_278 = uStack_300;
    uStack_280 = local_308;
    lStack_2c8 = lStack_350;
    local_2d0 = local_358;
    uStack_2b8 = uStack_340;
    uStack_2c0 = local_348;
    FUN_100008290(&local_2d0);
    uStack_1d8 = param_1[0xd];
    local_1e0 = param_1[0xc];
    uStack_1c8 = param_1[0xf];
    uStack_1d0 = param_1[0xe];
    local_1c0 = *(undefined1 *)(param_1 + 0x10);
    uStack_218 = param_1[5];
    local_220 = param_1[4];
    uStack_208 = param_1[7];
    uStack_210 = param_1[6];
    uStack_1f8 = param_1[9];
    local_200 = param_1[8];
    uStack_1e8 = param_1[0xb];
    uStack_1f0 = param_1[10];
    uStack_238 = param_1[1];
    local_240 = *param_1;
    uStack_228 = param_1[3];
    uStack_230 = param_1[2];
    param_1[9] = uStack_288;
    param_1[8] = local_290;
    param_1[0xb] = uStack_278;
    param_1[10] = uStack_280;
    param_1[0xd] = uStack_268;
    param_1[0xc] = local_270;
    param_1[0xf] = uStack_258;
    param_1[0xe] = uStack_260;
    *(undefined1 *)(param_1 + 0x10) = local_250;
    param_1[5] = uStack_2a8;
    param_1[4] = local_2b0;
    param_1[7] = uStack_298;
    param_1[6] = uStack_2a0;
    param_1[1] = lStack_2c8;
    *param_1 = local_2d0;
    param_1[3] = uStack_2b8;
    param_1[2] = uStack_2c0;
    FUN_100040bb4(&local_240,&DAT_100aa1378,&DAT_100830238);
  }
  else {
    FUN_1004338a4(local_1b0,lStack_1a8,local_1a0,uStack_198);
  }
  return;
}

