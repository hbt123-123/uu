// rea decompile_all
// name: FUN_1004b1f34
// address: 0x1004b1f34
// body: available
// range: 0x1004b1f34-0x1004b227b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004b2198) */

void FUN_1004b1f34(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long unaff_x21;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_368;
  long lStack_360;
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
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined1 local_2e8;
  undefined8 local_2e0;
  long lStack_2d8;
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
  undefined1 local_260;
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
  undefined1 local_1d0;
  undefined8 local_1c0;
  long lStack_1b8;
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
  
  lStack_1b8 = 0;
  local_1c0 = 0;
  local_1a8 = 0;
  local_1b0 = 0;
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
  puVar4 = &local_100;
  FUN_1001241c4();
  iVar3 = (int)puVar4;
  if (iVar3 != 1) {
    uStack_1e8 = uStack_98;
    local_1f0 = local_a0;
    uStack_1d8 = uStack_88;
    uStack_1e0 = uStack_90;
    local_1d0 = local_80;
    uStack_228 = uStack_d8;
    local_230 = local_e0;
    uStack_218 = uStack_c8;
    uStack_220 = uStack_d0;
    uStack_208 = uStack_b8;
    local_210 = local_c0;
    uStack_1f8 = uStack_a8;
    uStack_200 = uStack_b0;
    uStack_248 = uStack_f8;
    local_250 = local_100;
    uStack_238 = uStack_e8;
    uStack_240 = uStack_f0;
    puVar4 = &local_250;
    FUN_1001241ec();
    if ((int)puVar4 == 10) {
      puVar4 = &local_250;
      FUN_100124204();
      uVar6 = *puVar4;
      uVar1 = puVar4[3];
      uVar2 = puVar4[4];
      uVar8 = puVar4[2];
      lVar7 = puVar4[1];
      lStack_2d8 = uStack_188;
      local_2e0 = local_190;
      uStack_2c8 = uStack_178;
      uStack_2d0 = uStack_180;
      uStack_2b8 = uStack_168;
      local_2c0 = local_170;
      uStack_2a8 = uStack_158;
      uStack_2b0 = uStack_160;
      local_260 = local_110;
      uStack_278 = uStack_128;
      local_280 = local_130;
      uStack_268 = uStack_118;
      uStack_270 = uStack_120;
      uStack_298 = uStack_148;
      local_2a0 = local_150;
      uStack_288 = uStack_138;
      uStack_290 = uStack_140;
      FUN_1004a142c(&local_2e0,&local_368);
      puVar4 = (undefined8 *)0x0;
      FUN_1004976dc(0,0,0,0,0);
      local_1c0 = uVar6;
      lStack_1b8 = lVar7;
      local_1b0 = uVar8;
      local_1a8 = uVar1;
      local_1a0 = uVar2;
    }
  }
  pcVar5 = *(code **)(param_4 + 0x198);
  FUN_1004ba3f0();
  (*pcVar5)(&local_1c0,&DAT_1009c8d08,puVar4,param_3,param_4);
  uVar8 = local_1a0;
  uVar6 = local_1a8;
  uVar2 = local_1b0;
  lVar7 = lStack_1b8;
  uVar1 = local_1c0;
  if (unaff_x21 == 0) {
    if (lStack_1b8 != 0) {
      if (iVar3 == 1) {
        _swift_bridgeObjectRetain(lStack_1b8);
        _swift_bridgeObjectRetain(uVar2);
        FUN_100008184(uVar6,uVar8);
      }
      else {
        pcVar5 = *(code **)(param_4 + 8);
        _swift_bridgeObjectRetain(lStack_1b8);
        _swift_bridgeObjectRetain(uVar2);
        FUN_100008184(uVar6,uVar8);
        (*pcVar5)(param_3,param_4);
      }
      FUN_1004976dc(local_1c0,lStack_1b8,local_1b0,local_1a8,local_1a0);
      local_368 = uVar1;
      lStack_360 = lVar7;
      local_358 = uVar2;
      uStack_350 = uVar6;
      local_348 = uVar8;
      FUN_1004a4bc4(&local_368);
      uStack_278 = uStack_300;
      local_280 = local_308;
      uStack_268 = uStack_2f0;
      uStack_270 = local_2f8;
      local_260 = local_2e8;
      uStack_2b8 = uStack_340;
      local_2c0 = local_348;
      uStack_2a8 = uStack_330;
      uStack_2b0 = local_338;
      uStack_298 = uStack_320;
      local_2a0 = local_328;
      uStack_288 = uStack_310;
      uStack_290 = local_318;
      lStack_2d8 = lStack_360;
      local_2e0 = local_368;
      uStack_2c8 = uStack_350;
      uStack_2d0 = local_358;
      FUN_100008290(&local_2e0);
      uStack_1e8 = param_1[0xd];
      local_1f0 = param_1[0xc];
      uStack_1d8 = param_1[0xf];
      uStack_1e0 = param_1[0xe];
      local_1d0 = *(undefined1 *)(param_1 + 0x10);
      uStack_228 = param_1[5];
      local_230 = param_1[4];
      uStack_218 = param_1[7];
      uStack_220 = param_1[6];
      uStack_208 = param_1[9];
      local_210 = param_1[8];
      uStack_1f8 = param_1[0xb];
      uStack_200 = param_1[10];
      uStack_248 = param_1[1];
      local_250 = *param_1;
      uStack_238 = param_1[3];
      uStack_240 = param_1[2];
      param_1[9] = uStack_298;
      param_1[8] = local_2a0;
      param_1[0xb] = uStack_288;
      param_1[10] = uStack_290;
      param_1[0xd] = uStack_278;
      param_1[0xc] = local_280;
      param_1[0xf] = uStack_268;
      param_1[0xe] = uStack_270;
      *(undefined1 *)(param_1 + 0x10) = local_260;
      param_1[5] = uStack_2b8;
      param_1[4] = local_2c0;
      param_1[7] = uStack_2a8;
      param_1[6] = uStack_2b0;
      param_1[1] = lStack_2d8;
      *param_1 = local_2e0;
      param_1[3] = uStack_2c8;
      param_1[2] = uStack_2d0;
      FUN_100040bb4(&local_250,&DAT_100aa1378,&DAT_100830238);
      return;
    }
    lVar7 = 0;
  }
  FUN_1004976dc(local_1c0,lVar7,local_1b0,local_1a8,local_1a0);
  return;
}

