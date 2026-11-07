// rea decompile_all
// name: FUN_10046ea88
// address: 0x10046ea88
// body: available
// range: 0x10046ea88-0x10046ec3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10046ea88(undefined4 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined1 auStack_458 [200];
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
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined1 local_2d0;
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
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 local_200;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
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
  undefined1 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_60;
  
  uStack_88 = *(undefined8 *)(param_4 + 0xb8);
  uStack_90 = *(undefined8 *)(param_4 + 0xb0);
  uStack_148 = *(undefined8 *)(param_4 + 200);
  local_150 = *(undefined8 *)(param_4 + 0xc0);
  uStack_78 = *(undefined8 *)(param_4 + 200);
  local_80 = *(undefined8 *)(param_4 + 0xc0);
  uStack_138 = *(undefined8 *)(param_4 + 0xd8);
  uStack_140 = *(undefined8 *)(param_4 + 0xd0);
  uStack_c8 = *(undefined8 *)(param_4 + 0x78);
  uStack_d0 = *(undefined8 *)(param_4 + 0x70);
  uStack_188 = *(undefined8 *)(param_4 + 0x88);
  local_190 = *(undefined8 *)(param_4 + 0x80);
  uStack_b8 = *(undefined8 *)(param_4 + 0x88);
  local_c0 = *(undefined8 *)(param_4 + 0x80);
  uStack_178 = *(undefined8 *)(param_4 + 0x98);
  uStack_180 = *(undefined8 *)(param_4 + 0x90);
  uStack_a8 = *(undefined8 *)(param_4 + 0x98);
  uStack_b0 = *(undefined8 *)(param_4 + 0x90);
  uStack_168 = *(undefined8 *)(param_4 + 0xa8);
  local_170 = *(undefined8 *)(param_4 + 0xa0);
  uStack_98 = *(undefined8 *)(param_4 + 0xa8);
  local_a0 = *(undefined8 *)(param_4 + 0xa0);
  uStack_158 = *(undefined8 *)(param_4 + 0xb8);
  uStack_160 = *(undefined8 *)(param_4 + 0xb0);
  uStack_108 = *(undefined8 *)(param_4 + 0x38);
  uStack_110 = *(undefined8 *)(param_4 + 0x30);
  uStack_1c8 = *(undefined8 *)(param_4 + 0x48);
  local_1d0 = *(undefined8 *)(param_4 + 0x40);
  uStack_f8 = *(undefined8 *)(param_4 + 0x48);
  local_100 = *(undefined8 *)(param_4 + 0x40);
  uStack_1b8 = *(undefined8 *)(param_4 + 0x58);
  uStack_1c0 = *(undefined8 *)(param_4 + 0x50);
  uStack_e8 = *(undefined8 *)(param_4 + 0x58);
  uStack_f0 = *(undefined8 *)(param_4 + 0x50);
  uStack_1a8 = *(undefined8 *)(param_4 + 0x68);
  local_1b0 = *(undefined8 *)(param_4 + 0x60);
  uStack_d8 = *(undefined8 *)(param_4 + 0x68);
  local_e0 = *(undefined8 *)(param_4 + 0x60);
  uStack_198 = *(undefined8 *)(param_4 + 0x78);
  uStack_1a0 = *(undefined8 *)(param_4 + 0x70);
  uStack_1e8 = *(undefined8 *)(param_4 + 0x28);
  local_1f0 = *(undefined8 *)(param_4 + 0x20);
  uStack_1d8 = *(undefined8 *)(param_4 + 0x38);
  uStack_1e0 = *(undefined8 *)(param_4 + 0x30);
  uStack_118 = *(undefined8 *)(param_4 + 0x28);
  local_120 = *(undefined8 *)(param_4 + 0x20);
  uStack_68 = *(undefined8 *)(param_4 + 0xd8);
  uStack_70 = *(undefined8 *)(param_4 + 0xd0);
  local_130 = *(undefined1 *)(param_4 + 0xe0);
  local_60 = *(undefined1 *)(param_4 + 0xe0);
  iVar1 = (int)&local_120;
  FUN_1001218ec();
  uStack_468 = 0xc000000000000000;
  local_470 = 0;
  if (iVar1 == 1) {
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0xe000000000000000;
  }
  else {
    uStack_468 = 0xc000000000000000;
    local_470 = 0;
    uStack_218 = uStack_78;
    local_220 = local_80;
    uStack_208 = uStack_68;
    uStack_210 = uStack_70;
    local_200 = local_60;
    uStack_258 = uStack_b8;
    local_260 = local_c0;
    uStack_248 = uStack_a8;
    uStack_250 = uStack_b0;
    uStack_238 = uStack_98;
    local_240 = local_a0;
    uStack_228 = uStack_88;
    uStack_230 = uStack_90;
    uStack_298 = uStack_f8;
    local_2a0 = local_100;
    uStack_288 = uStack_e8;
    uStack_290 = uStack_f0;
    uStack_278 = uStack_d8;
    local_280 = local_e0;
    uStack_268 = uStack_c8;
    uStack_270 = uStack_d0;
    uStack_2b8 = uStack_118;
    local_2c0 = local_120;
    uStack_2a8 = uStack_108;
    uStack_2b0 = uStack_110;
    iVar1 = (int)&local_2c0;
    FUN_100121900();
    if (iVar1 == 0xe) {
      puVar2 = &local_2c0;
      FUN_100008290();
      uVar3 = *(undefined4 *)puVar2;
      uVar4 = puVar2[1];
      uVar6 = puVar2[2];
      uVar5 = *(undefined1 *)(puVar2 + 3);
      uStack_468 = puVar2[5];
      local_470 = puVar2[4];
      uStack_2e8 = uStack_148;
      local_2f0 = local_150;
      uStack_2d8 = uStack_138;
      uStack_2e0 = uStack_140;
      local_2d0 = local_130;
      uStack_328 = uStack_188;
      local_330 = local_190;
      uStack_318 = uStack_178;
      uStack_320 = uStack_180;
      uStack_308 = uStack_168;
      local_310 = local_170;
      uStack_2f8 = uStack_158;
      uStack_300 = uStack_160;
      uStack_368 = uStack_1c8;
      local_370 = local_1d0;
      uStack_358 = uStack_1b8;
      uStack_360 = uStack_1c0;
      uStack_348 = uStack_1a8;
      local_350 = local_1b0;
      uStack_338 = uStack_198;
      uStack_340 = uStack_1a0;
      uStack_388 = uStack_1e8;
      local_390 = local_1f0;
      uStack_378 = uStack_1d8;
      uStack_380 = uStack_1e0;
      FUN_1004749f4(&local_390,auStack_458);
    }
    else {
      uVar3 = 0;
      uVar4 = 0;
      uVar5 = 0;
      uVar6 = 0xe000000000000000;
    }
  }
  *param_1 = uVar3;
  *(undefined8 *)(param_1 + 2) = uVar4;
  *(undefined8 *)(param_1 + 4) = uVar6;
  *(undefined1 *)(param_1 + 6) = uVar5;
  *(undefined8 *)(param_1 + 10) = uStack_468;
  *(undefined8 *)(param_1 + 8) = local_470;
  return;
}

