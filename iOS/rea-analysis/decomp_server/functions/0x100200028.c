// rea decompile_all
// name: FUN_100200028
// address: 0x100200028
// body: available
// range: 0x100200028-0x1002003c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100200028(undefined4 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined4 param_5,long param_6,undefined4 param_7)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 auStack_3f0 [16];
  undefined4 local_3e0;
  undefined4 uStack_3dc;
  undefined4 local_3c8;
  undefined4 local_3c4;
  char *local_3c0;
  char *pcStack_3b8;
  undefined8 local_3b0;
  uint local_3a4;
  undefined1 auStack_3a0 [16];
  undefined4 local_390;
  undefined4 uStack_38c;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined1 local_378;
  undefined4 local_374;
  undefined8 local_370;
  undefined8 uStack_368;
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
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
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
  undefined1 local_228;
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
  undefined8 local_140;
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
  
  uVar3 = 0;
  local_3c4 = param_7;
  FUN_100401b14();
  local_378 = (undefined1)param_4;
  pcVar4 = FUN_1001e49a8;
  puVar5 = auStack_3a0;
  uVar7 = 0xd0000000000000a0;
  local_3c0 = s___Manager___10089fa00 + 0x30;
  pcStack_3b8 = "st(_:message:action:type:)";
  local_3b0 = uVar3;
  local_3a4 = param_4;
  local_390 = param_5;
  uStack_38c = param_1;
  local_388 = param_2;
  uStack_380 = param_3;
  FUN_1003fb48c();
  FUN_10047466c();
  uVar8 = *(ulong *)(param_6 + 0xb8) >> 0x3c;
  uStack_260 = 0;
  if (uVar8 < 0xf) {
    uStack_260 = *(undefined8 *)(param_6 + 0xa8);
  }
  uVar3 = 0;
  if (uVar8 < 0xf) {
    uVar3 = *(undefined8 *)(param_6 + 0xb0);
  }
  uVar1 = 0xc000000000000000;
  if (uVar8 < 0xf) {
    uVar1 = *(ulong *)(param_6 + 0xb8);
  }
  local_158 = pcVar4;
  local_150 = puVar5;
  local_148 = uVar7;
  FUN_100040b80();
  FUN_100006cdc(uVar3,uVar1);
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
  local_3c8 = param_5;
  FUN_100040bb4(&local_360,&DAT_100a75b98,&DAT_10080a1d0);
  uStack_2c8 = 0xc000000000000000;
  local_2d0 = 0;
  local_288 = 0xe000000000000000;
  uStack_270 = 0;
  local_278 = 0x2000000000000000;
  local_268 = 0xc000000000000000;
  uStack_250 = 0xc000000000000000;
  local_258 = 0;
  local_2e8 = CONCAT44(param_1,param_5);
  uStack_2e0 = param_2;
  local_2d8 = param_3;
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
  uStack_1f8 = uStack_2c0;
  local_200 = uStack_2c8;
  uStack_1e8 = uStack_2b0;
  uStack_1f0 = uStack_2b8;
  uStack_1d8 = uStack_2a0;
  local_1e0 = local_2a8;
  uStack_1c8 = uStack_290;
  uStack_1d0 = uStack_298;
  uStack_218 = uStack_2e0;
  local_220 = local_2e8;
  uStack_208 = local_2d0;
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
  uStack_138 = uStack_218;
  local_140 = local_220;
  uStack_128 = uStack_208;
  uStack_130 = uStack_210;
  FUN_100467dcc(&local_140);
  uVar7 = local_148;
  puVar5 = local_150;
  pcVar4 = local_158;
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  uVar2 = local_3c4;
  FUN_1001ad794(local_3c4,pcVar4,puVar5,uVar7,3);
  (*(code *)PTR____chkstk_darwin_100995498)(0);
  local_3e0 = param_1;
  uStack_3dc = uVar2;
  FUN_1003fb48c(FUN_1001e4918,auStack_3f0,0xd0000000000000a0,(ulong)pcStack_3b8 | 0x8000000000000000
                ,0xd00000000000003d,(ulong)local_3c0 | 0x8000000000000000,0x30e,0);
  if ((local_3a4 & 1) == 0) {
    FUN_100006cdc(pcVar4,puVar5);
  }
  else {
    local_370 = 0x3a656d616e6572;
    uStack_368 = 0xe700000000000000;
    local_374 = local_3c8;
    puVar6 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar6);
    uVar3 = uStack_368;
    FUN_1001e03b8(local_370,uStack_368);
    FUN_100006cdc(pcVar4,puVar5);
    _swift_bridgeObjectRelease(uVar3);
  }
  _swift_release(uVar7);
  return;
}

