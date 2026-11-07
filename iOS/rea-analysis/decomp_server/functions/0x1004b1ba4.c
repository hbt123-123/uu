// rea decompile_all
// name: FUN_1004b1ba4
// address: 0x1004b1ba4
// body: available
// range: 0x1004b1ba4-0x1004b1f33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004b1e2c) */

void FUN_1004b1ba4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x21;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_378;
  long lStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
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
  undefined1 local_2f8;
  undefined8 local_2f0;
  long lStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
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
  undefined1 local_270;
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
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 local_1e0;
  undefined8 local_1d0;
  long lStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
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
  
  uStack_1b8 = 0;
  local_1c0 = 0;
  local_1a8 = 0;
  local_1b0 = 0;
  lStack_1c8 = 0;
  local_1d0 = 0;
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
  local_1a0 = 0;
  local_110 = *(undefined1 *)(param_1 + 0x10);
  local_80 = *(undefined1 *)(param_1 + 0x10);
  puVar3 = &local_100;
  FUN_1001241c4();
  iVar2 = (int)puVar3;
  if (iVar2 != 1) {
    uStack_1f8 = uStack_98;
    local_200 = local_a0;
    uStack_1e8 = uStack_88;
    uStack_1f0 = uStack_90;
    local_1e0 = local_80;
    uStack_238 = uStack_d8;
    local_240 = local_e0;
    uStack_228 = uStack_c8;
    uStack_230 = uStack_d0;
    uStack_218 = uStack_b8;
    local_220 = local_c0;
    uStack_208 = uStack_a8;
    uStack_210 = uStack_b0;
    uStack_258 = uStack_f8;
    local_260 = local_100;
    uStack_248 = uStack_e8;
    uStack_250 = uStack_f0;
    puVar3 = &local_260;
    FUN_1001241ec();
    if ((int)puVar3 == 9) {
      puVar3 = &local_260;
      FUN_100124204();
      uVar1 = *puVar3;
      lVar4 = puVar3[1];
      uVar6 = puVar3[6];
      uVar10 = puVar3[3];
      uVar9 = puVar3[2];
      uVar8 = puVar3[5];
      uVar7 = puVar3[4];
      lStack_2e8 = uStack_188;
      local_2f0 = local_190;
      uStack_2d8 = uStack_178;
      uStack_2e0 = uStack_180;
      uStack_2c8 = uStack_168;
      local_2d0 = local_170;
      uStack_2b8 = uStack_158;
      uStack_2c0 = uStack_160;
      local_270 = local_110;
      uStack_288 = uStack_128;
      local_290 = local_130;
      uStack_278 = uStack_118;
      uStack_280 = uStack_120;
      uStack_2a8 = uStack_148;
      local_2b0 = local_150;
      uStack_298 = uStack_138;
      uStack_2a0 = uStack_140;
      FUN_1004a142c(&local_2f0,&local_378);
      puVar3 = (undefined8 *)0x0;
      FUN_1004c0dcc(0,0,0,0,0,0,0);
      local_1d0 = uVar1;
      lStack_1c8 = lVar4;
      local_1c0 = uVar9;
      uStack_1b8 = uVar10;
      local_1b0 = uVar7;
      local_1a8 = uVar8;
      local_1a0 = uVar6;
    }
  }
  pcVar5 = *(code **)(param_4 + 0x198);
  FUN_1004ba85c();
  (*pcVar5)(&local_1d0,&DAT_1009c8fc0,puVar3,param_3,param_4);
  uVar10 = local_1a0;
  uVar9 = local_1a8;
  uVar8 = local_1b0;
  uVar7 = uStack_1b8;
  uVar6 = local_1c0;
  lVar4 = lStack_1c8;
  uVar1 = local_1d0;
  if (unaff_x21 == 0) {
    if (lStack_1c8 != 0) {
      if (iVar2 == 1) {
        _swift_bridgeObjectRetain(lStack_1c8);
        FUN_100008184(uVar6,uVar7);
        thunk_FUN_100040b80(uVar8,uVar9,uVar10);
      }
      else {
        pcVar5 = *(code **)(param_4 + 8);
        _swift_bridgeObjectRetain(lStack_1c8);
        FUN_100008184(uVar6,uVar7);
        thunk_FUN_100040b80(uVar8,uVar9,uVar10);
        (*pcVar5)(param_3,param_4);
      }
      FUN_1004c0dcc(local_1d0,lStack_1c8,local_1c0,uStack_1b8,local_1b0,local_1a8,local_1a0);
      local_378 = uVar1;
      lStack_370 = lVar4;
      local_368 = uVar6;
      uStack_360 = uVar7;
      local_358 = uVar8;
      uStack_350 = uVar9;
      local_348 = uVar10;
      FUN_1004a45f8(&local_378);
      uStack_288 = uStack_310;
      local_290 = local_318;
      uStack_278 = uStack_300;
      uStack_280 = local_308;
      local_270 = local_2f8;
      uStack_2c8 = uStack_350;
      local_2d0 = local_358;
      uStack_2b8 = uStack_340;
      uStack_2c0 = local_348;
      uStack_2a8 = uStack_330;
      local_2b0 = local_338;
      uStack_298 = uStack_320;
      uStack_2a0 = local_328;
      lStack_2e8 = lStack_370;
      local_2f0 = local_378;
      uStack_2d8 = uStack_360;
      uStack_2e0 = local_368;
      FUN_100008290(&local_2f0);
      uStack_1f8 = param_1[0xd];
      local_200 = param_1[0xc];
      uStack_1e8 = param_1[0xf];
      uStack_1f0 = param_1[0xe];
      local_1e0 = *(undefined1 *)(param_1 + 0x10);
      uStack_238 = param_1[5];
      local_240 = param_1[4];
      uStack_228 = param_1[7];
      uStack_230 = param_1[6];
      uStack_218 = param_1[9];
      local_220 = param_1[8];
      uStack_208 = param_1[0xb];
      uStack_210 = param_1[10];
      uStack_258 = param_1[1];
      local_260 = *param_1;
      uStack_248 = param_1[3];
      uStack_250 = param_1[2];
      param_1[9] = uStack_2a8;
      param_1[8] = local_2b0;
      param_1[0xb] = uStack_298;
      param_1[10] = uStack_2a0;
      param_1[0xd] = uStack_288;
      param_1[0xc] = local_290;
      param_1[0xf] = uStack_278;
      param_1[0xe] = uStack_280;
      *(undefined1 *)(param_1 + 0x10) = local_270;
      param_1[5] = uStack_2c8;
      param_1[4] = local_2d0;
      param_1[7] = uStack_2b8;
      param_1[6] = uStack_2c0;
      param_1[1] = lStack_2e8;
      *param_1 = local_2f0;
      param_1[3] = uStack_2d8;
      param_1[2] = uStack_2e0;
      FUN_100040bb4(&local_260,&DAT_100aa1378,&DAT_100830238);
      return;
    }
    lVar4 = 0;
  }
  FUN_1004c0dcc(local_1d0,lVar4,local_1c0,uStack_1b8,local_1b0,local_1a8,local_1a0);
  return;
}

