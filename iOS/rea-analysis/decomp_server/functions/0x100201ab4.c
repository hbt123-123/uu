// rea decompile_all
// name: FUN_100201ab4
// address: 0x100201ab4
// body: available
// range: 0x100201ab4-0x100201d7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100201ab4(undefined8 param_1,long param_2,undefined8 param_3,byte param_4,uint param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  byte bVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 auStack_3a0 [16];
  uint local_390;
  undefined4 uStack_38c;
  undefined8 local_380;
  undefined4 local_374;
  byte local_370;
  byte local_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  ulong local_2e8;
  undefined8 uStack_2e0;
  byte local_2d8;
  undefined7 uStack_2d7;
  undefined8 *local_2d0;
  byte local_2c8;
  undefined7 uStack_2c7;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
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
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 local_228;
  ulong local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 *puStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 local_160;
  undefined8 local_158;
  long local_150;
  undefined8 local_148;
  ulong local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
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
  undefined1 local_80;
  
  local_374 = (undefined4)param_1;
  lVar7 = param_2;
  uVar8 = param_3;
  FUN_10047466c();
  uVar3 = *(undefined8 *)(param_2 + 0xa8);
  uVar9 = *(ulong *)(param_2 + 0xb8) >> 0x3c;
  uVar2 = 0;
  if (uVar9 < 0xf) {
    uVar2 = *(undefined8 *)(param_2 + 0xb0);
  }
  uVar1 = 0xc000000000000000;
  if (uVar9 < 0xf) {
    uVar1 = *(ulong *)(param_2 + 0xb8);
  }
  local_158 = param_1;
  local_150 = lVar7;
  local_148 = uVar8;
  FUN_100040b80(uVar3);
  FUN_100006cdc(uVar2,uVar1);
  puVar5 = (undefined8 *)0x0;
  bVar6 = 0;
  switchD_10004048c::caseD_6d(0,0,0xf000000000000000);
  if (DAT_100a73b60 != -1) {
    puVar5 = &DAT_100a73b60;
    bVar6 = 0;
    _swift_once();
  }
  uVar2 = 0;
  if (uVar9 < 0xf) {
    uVar2 = uVar3;
  }
  local_380 = DAT_100b360a8;
  FUN_1000c09f0();
  uStack_358 = 0;
  local_360 = 0;
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  local_340 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  local_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_300 = 0xffffffff00;
  local_370 = bVar6 & 1;
  local_368 = param_4 & 1;
  FUN_100040bb4(&local_360,&DAT_100a75b98,&DAT_10080a1d0);
  uStack_2b8 = 0xc000000000000000;
  uStack_2c0 = 0;
  local_288 = 0x2000000000000000;
  local_278 = 0;
  uStack_270 = 0;
  local_268 = 0xc000000000000000;
  uStack_250 = 0xc000000000000000;
  local_258 = 0;
  local_2e8 = (ulong)param_5;
  uStack_2e0 = param_3;
  local_2d8 = param_4 & 1;
  local_2d0 = puVar5;
  local_2c8 = bVar6 & 1;
  uStack_260 = uVar2;
  FUN_100040bf4(&local_2e8);
  uStack_178 = uStack_240;
  local_180 = local_248;
  uStack_168 = uStack_230;
  uStack_170 = uStack_238;
  local_160 = local_228;
  uStack_1b8 = uStack_280;
  local_1c0 = local_288;
  uStack_1a8 = uStack_270;
  uStack_1b0 = local_278;
  uStack_198 = uStack_260;
  local_1a0 = local_268;
  uStack_188 = uStack_250;
  uStack_190 = local_258;
  local_200 = CONCAT71(uStack_2c7,local_2c8);
  uStack_1f8 = uStack_2c0;
  uStack_1e8 = uStack_2b0;
  uStack_1f0 = uStack_2b8;
  uStack_1d8 = uStack_2a0;
  local_1e0 = local_2a8;
  uStack_1c8 = uStack_290;
  uStack_1d0 = uStack_298;
  uStack_210 = CONCAT71(uStack_2d7,local_2d8);
  uStack_218 = uStack_2e0;
  local_220 = local_2e8;
  puStack_208 = local_2d0;
  FUN_100008290(&local_220);
  uStack_98 = uStack_178;
  local_a0 = local_180;
  uStack_88 = uStack_168;
  uStack_90 = uStack_170;
  local_80 = local_160;
  uStack_d8 = uStack_1b8;
  local_e0 = local_1c0;
  uStack_c8 = uStack_1a8;
  uStack_d0 = uStack_1b0;
  uStack_b8 = uStack_198;
  local_c0 = local_1a0;
  uStack_a8 = uStack_188;
  uStack_b0 = uStack_190;
  uStack_118 = uStack_1f8;
  local_120 = local_200;
  uStack_108 = uStack_1e8;
  uStack_110 = uStack_1f0;
  uStack_f8 = uStack_1d8;
  local_100 = local_1e0;
  uStack_e8 = uStack_1c8;
  uStack_f0 = uStack_1d0;
  uStack_138 = uStack_218;
  local_140 = local_220;
  puStack_128 = puStack_208;
  uStack_130 = uStack_210;
  FUN_100467dcc(&local_140);
  uVar3 = local_148;
  lVar7 = local_150;
  uVar2 = local_158;
  uVar4 = local_374;
  FUN_1001ad794(local_374,local_158,local_150,local_148,1);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_390 = param_5;
  uStack_38c = uVar4;
  FUN_1003fb48c(FUN_1002037dc,auStack_3a0,0xd0000000000000a0,0x800000010088d990,0xd000000000000049,
                0x80000001008a25a0,0x2af,0);
  FUN_100006cdc(uVar2,lVar7);
  _swift_release(uVar3);
  return;
}

