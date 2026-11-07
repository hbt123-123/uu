// rea decompile_all
// name: FUN_1000439d4
// address: 0x1000439d4
// body: available
// range: 0x1000439d4-0x100043caf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000439d4(undefined8 param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_390 [16];
  undefined4 local_380 [2];
  long local_378;
  undefined4 local_370;
  undefined4 uStack_36c;
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
  undefined8 uStack_2d8;
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
  ulong local_148;
  ulong local_140;
  undefined8 uStack_138;
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
  
  uVar2 = param_1;
  lVar4 = param_2;
  uVar5 = param_3;
  FUN_10047466c();
  uVar6 = *(ulong *)(param_2 + 0xb8) >> 0x3c;
  uStack_260 = 0;
  if (uVar6 < 0xf) {
    uStack_260 = *(undefined8 *)(param_2 + 0xa8);
  }
  uVar3 = 0;
  if (uVar6 < 0xf) {
    uVar3 = *(undefined8 *)(param_2 + 0xb0);
  }
  uVar1 = 0xc000000000000000;
  if (uVar6 < 0xf) {
    uVar1 = *(ulong *)(param_2 + 0xb8);
  }
  local_158 = uVar2;
  local_150 = lVar4;
  local_148 = uVar5;
  FUN_100040b80();
  FUN_100006cdc(uVar3,uVar1);
  switchD_10004048c::caseD_6d(0,0,0xf000000000000000);
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
  FUN_100043cb0(&local_360);
  uStack_2d8 = 0xc000000000000000;
  uStack_2e0 = 0;
  local_288 = 0xe000000000000000;
  local_278 = 0;
  uStack_270 = 0;
  local_268 = 0xc000000000000000;
  uStack_250 = 0xc000000000000000;
  local_258 = 0;
  local_2e8 = param_3 & 0xffffffff;
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
  uStack_218 = uStack_2e0;
  local_220 = local_2e8;
  uStack_208 = uStack_2d0;
  uStack_210 = uStack_2d8;
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
  uStack_128 = uStack_208;
  uStack_130 = uStack_210;
  FUN_100467dcc(&local_140);
  uVar5 = local_148;
  lVar4 = local_150;
  uVar2 = local_158;
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  uVar3 = param_1;
  FUN_1001ad794(param_1,uVar2,lVar4,uVar5,1);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_380[0] = (undefined4)param_1;
  local_378 = param_2;
  local_370 = (int)param_3;
  uStack_36c = (int)uVar3;
  FUN_1003fb48c(FUN_100043cf8,auStack_390,0xd0000000000000a0,0x800000010087c790,0xd00000000000003a,
                0x800000010087c880,0x139,0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_370 = (int)param_3;
  uStack_36c = (int)uVar3;
  FUN_1003fb48c(FUN_100043d08,local_380,0xd0000000000000a0,0x800000010087c790,0xd00000000000003a,
                0x800000010087c880,0x13a,0);
  FUN_100006cdc(uVar2,lVar4);
  _swift_release(uVar5);
  return;
}

