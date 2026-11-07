// rea decompile_all
// name: FUN_100202430
// address: 0x100202430
// body: available
// range: 0x100202430-0x10020276f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100202430(undefined4 param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  code *pcVar8;
  ulong uVar9;
  undefined1 auStack_3b0 [16];
  undefined4 local_3a0;
  code *local_398;
  undefined8 uStack_390;
  undefined4 local_388;
  char *local_380;
  char *pcStack_378;
  undefined8 local_370;
  undefined4 local_364;
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
  code *pcStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
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
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined1 local_228;
  ulong local_220;
  code *pcStack_218;
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
  code *local_158;
  undefined1 *local_150;
  undefined8 local_148;
  ulong local_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
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
  
  pcVar8 = param_2;
  local_364 = param_1;
  if (DAT_100a73b60 != -1) {
    pcVar8 = FUN_1000efc4c;
    _swift_once(&DAT_100a73b60);
  }
  uVar4 = *(ulong *)(DAT_100b360a8 + 0x90);
  FUN_1001d7064();
  uVar5 = 0;
  FUN_100401b14();
  local_370 = uVar5;
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar7 = auStack_3b0;
  local_380 = "r- terminalRename sessionId=";
  pcStack_378 = "st(_:message:action:type:)";
  pcVar6 = FUN_1002028c8;
  uVar5 = 0xd0000000000000a0;
  local_3a0 = (int)uVar4;
  local_398 = pcVar8;
  uStack_390 = param_3;
  FUN_1003fb48c();
  FUN_10047466c();
  uVar9 = *(ulong *)(param_2 + 0xb8) >> 0x3c;
  uStack_260 = 0;
  if (uVar9 < 0xf) {
    uStack_260 = *(undefined8 *)(param_2 + 0xa8);
  }
  uVar1 = 0;
  if (uVar9 < 0xf) {
    uVar1 = *(undefined8 *)(param_2 + 0xb0);
  }
  uVar2 = 0xc000000000000000;
  if (uVar9 < 0xf) {
    uVar2 = *(ulong *)(param_2 + 0xb8);
  }
  local_158 = pcVar6;
  local_150 = puVar7;
  local_148 = uVar5;
  FUN_100040b80();
  FUN_100006cdc(uVar1,uVar2);
  switchD_10004048c::caseD_6d(0,0,0xf000000000000000);
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRelease(0xe000000000000000);
  uStack_318 = 0;
  local_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_338 = 0;
  local_340 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_358 = 0;
  local_360 = 0;
  uStack_348 = 0;
  uStack_350 = 0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_300 = 0xffffffff00;
  FUN_100040bb4(&local_360,&DAT_100a75b98,&DAT_10080a1d0);
  uStack_2c8 = 0xc000000000000000;
  uStack_2d0 = 0;
  local_288 = 0xc000000000000000;
  uStack_270 = 0;
  local_278 = 0x2000000000000000;
  local_268 = 0xc000000000000000;
  uStack_250 = 0xc000000000000000;
  local_258 = 0;
  local_2e8 = uVar4 & 0xffffffff;
  pcStack_2e0 = pcVar8;
  local_2d8 = param_3;
  FUN_100040bf4(&local_2e8);
  uStack_178 = uStack_240;
  local_180 = uStack_248;
  uStack_168 = uStack_230;
  uStack_170 = local_238;
  uStack_1b8 = uStack_280;
  local_1c0 = local_288;
  uStack_1a8 = uStack_270;
  uStack_1b0 = local_278;
  uStack_198 = uStack_260;
  local_1a0 = local_268;
  uStack_188 = uStack_250;
  uStack_190 = local_258;
  uStack_1f8 = uStack_2c0;
  local_200 = uStack_2c8;
  uStack_1e8 = uStack_2b0;
  uStack_1f0 = local_2b8;
  local_160 = local_228;
  uStack_1d8 = uStack_2a0;
  local_1e0 = uStack_2a8;
  uStack_1c8 = uStack_290;
  uStack_1d0 = local_298;
  pcStack_218 = pcStack_2e0;
  local_220 = local_2e8;
  uStack_208 = uStack_2d0;
  uStack_210 = local_2d8;
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
  pcStack_138 = pcStack_218;
  local_140 = local_220;
  uStack_128 = uStack_208;
  uStack_130 = uStack_210;
  FUN_100467dcc(&local_140);
  uVar5 = local_148;
  puVar7 = local_150;
  pcVar6 = local_158;
  uVar3 = local_364;
  FUN_1001ad794(local_364,local_158,local_150,local_148,3);
  (*(code *)PTR____chkstk_darwin_100995498)(0);
  local_3a0 = (int)uVar4;
  local_398 = pcVar8;
  uStack_390 = param_3;
  local_388 = uVar3;
  FUN_1003fb48c(FUN_1002028d4,auStack_3b0,0xd0000000000000a0,(ulong)pcStack_378 | 0x8000000000000000
                ,0xd000000000000038,(ulong)local_380 | 0x8000000000000000,0x2ec,0);
  FUN_100006cdc(pcVar6,puVar7);
  _swift_bridgeObjectRelease(param_3);
  _swift_release(uVar5);
  return;
}

