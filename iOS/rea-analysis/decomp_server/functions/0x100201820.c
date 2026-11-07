// rea decompile_all
// name: FUN_100201820
// address: 0x100201820
// body: available
// range: 0x100201820-0x100201ab3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100201820(undefined8 param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_370 [16];
  long local_360;
  undefined4 local_358;
  undefined4 uStack_354;
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
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  ulong local_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
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
  undefined8 local_228;
  undefined8 uStack_220;
  undefined1 local_218;
  ulong local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
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
  undefined1 local_150;
  undefined8 local_148;
  long local_140;
  ulong local_138;
  ulong local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  uVar3 = param_1;
  lVar4 = param_2;
  uVar5 = param_3;
  FUN_10047466c();
  uVar6 = *(ulong *)(param_2 + 0xb8) >> 0x3c;
  uStack_250 = 0;
  if (uVar6 < 0xf) {
    uStack_250 = *(undefined8 *)(param_2 + 0xa8);
  }
  uVar1 = 0;
  if (uVar6 < 0xf) {
    uVar1 = *(undefined8 *)(param_2 + 0xb0);
  }
  uVar2 = 0xc000000000000000;
  if (uVar6 < 0xf) {
    uVar2 = *(ulong *)(param_2 + 0xb8);
  }
  local_148 = uVar3;
  local_140 = lVar4;
  local_138 = uVar5;
  FUN_100040b80();
  FUN_100006cdc(uVar1,uVar2);
  switchD_10004048c::caseD_6d(0,0,0xf000000000000000);
  uStack_308 = 0;
  local_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_328 = 0;
  local_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_348 = 0;
  local_350 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2f0 = 0xffffffff00;
  FUN_100040bb4(&local_350,&DAT_100a75b98,&DAT_10080a1d0);
  uStack_2c8 = 0xc000000000000000;
  uStack_2d0 = 0;
  local_278 = 0;
  uStack_260 = 0;
  local_268 = 0x2000000000000000;
  local_258 = 0xc000000000000000;
  uStack_240 = 0xc000000000000000;
  local_248 = 0;
  local_2d8 = param_3 & 0xffffffff;
  FUN_100040bf4(&local_2d8);
  uStack_168 = uStack_230;
  local_170 = uStack_238;
  uStack_158 = uStack_220;
  uStack_160 = local_228;
  uStack_1a8 = uStack_270;
  local_1b0 = local_278;
  uStack_198 = uStack_260;
  uStack_1a0 = local_268;
  uStack_188 = uStack_250;
  local_190 = local_258;
  uStack_178 = uStack_240;
  uStack_180 = local_248;
  uStack_1e8 = uStack_2b0;
  local_1f0 = uStack_2b8;
  uStack_1d8 = uStack_2a0;
  uStack_1e0 = local_2a8;
  local_150 = local_218;
  uStack_1c8 = uStack_290;
  local_1d0 = uStack_298;
  uStack_1b8 = uStack_280;
  uStack_1c0 = local_288;
  uStack_208 = uStack_2d0;
  local_210 = local_2d8;
  uStack_1f8 = uStack_2c0;
  uStack_200 = uStack_2c8;
  FUN_100008290(&local_210);
  uStack_88 = uStack_168;
  local_90 = local_170;
  uStack_78 = uStack_158;
  uStack_80 = uStack_160;
  local_70 = local_150;
  uStack_c8 = uStack_1a8;
  local_d0 = local_1b0;
  uStack_b8 = uStack_198;
  uStack_c0 = uStack_1a0;
  uStack_a8 = uStack_188;
  local_b0 = local_190;
  uStack_98 = uStack_178;
  uStack_a0 = uStack_180;
  uStack_108 = uStack_1e8;
  local_110 = local_1f0;
  uStack_f8 = uStack_1d8;
  uStack_100 = uStack_1e0;
  uStack_e8 = uStack_1c8;
  local_f0 = local_1d0;
  uStack_d8 = uStack_1b8;
  uStack_e0 = uStack_1c0;
  uStack_128 = uStack_208;
  local_130 = local_210;
  uStack_118 = uStack_1f8;
  uStack_120 = uStack_200;
  FUN_100467dcc(&local_130);
  uVar5 = local_138;
  lVar4 = local_140;
  uVar3 = local_148;
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  FUN_1001ad794(param_1,uVar3,lVar4,uVar5,1);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_358 = (undefined4)param_3;
  uStack_354 = (undefined4)param_1;
  local_360 = param_2;
  FUN_1003fb48c(FUN_1002038b0,auStack_370,0xd0000000000000a0,0x800000010088d990,
                &DAT_d000000000000030,0x80000001008a28c0,0x147,0);
  FUN_100006cdc(uVar3,lVar4);
  _swift_release(uVar5);
  return;
}

