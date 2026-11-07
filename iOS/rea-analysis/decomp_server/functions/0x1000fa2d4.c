// rea decompile_all
// name: FUN_1000fa2d4
// address: 0x1000fa2d4
// body: available
// range: 0x1000fa2d4-0x1000fa557 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000fa2d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined1 auStack_2f0 [16];
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
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
  undefined1 local_1f0;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128;
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
  
  uVar1 = param_1;
  FUN_10047466c();
  local_2c8 = uVar1;
  uStack_2c0 = param_2;
  local_2b8 = param_3;
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  IVar2 = _objc_msgSend(*(ID *)(*(long *)(DAT_100b360a8 + 0x80) + 0x10),"screenId");
  local_1e8 = 0;
  uStack_1e0 = CONCAT31(uStack_1e0._1_3_,1);
  uStack_1dc = (undefined4)IVar2;
  local_1d8 = 0;
  uStack_1d0 = 0xe000000000000000;
  uStack_1c0 = 0xc000000000000000;
  local_1c8 = 0;
  FUN_1000fcd3c(&local_1e8);
  uStack_78 = uStack_140;
  local_80 = local_148;
  uStack_68 = uStack_130;
  uStack_70 = local_138;
  local_60 = local_128;
  uStack_b8 = uStack_180;
  local_c0 = local_188;
  uStack_a8 = uStack_170;
  uStack_b0 = local_178;
  uStack_98 = uStack_160;
  local_a0 = local_168;
  uStack_88 = uStack_150;
  uStack_90 = local_158;
  uStack_f8 = uStack_1c0;
  local_100 = local_1c8;
  uStack_e8 = uStack_1b0;
  uStack_f0 = local_1b8;
  uStack_d8 = uStack_1a0;
  local_e0 = local_1a8;
  uStack_c8 = uStack_190;
  uStack_d0 = local_198;
  uStack_118 = CONCAT44(uStack_1dc,uStack_1e0);
  local_120 = local_1e8;
  uStack_108 = uStack_1d0;
  uStack_110 = local_1d8;
  FUN_100008290(&local_120);
  uStack_218 = uStack_88;
  local_220 = uStack_90;
  uStack_208 = uStack_78;
  uStack_210 = local_80;
  uStack_1f8 = uStack_68;
  local_200 = uStack_70;
  local_1f0 = local_60;
  uStack_238 = uStack_a8;
  local_240 = uStack_b0;
  uStack_228 = uStack_98;
  uStack_230 = local_a0;
  uStack_288 = uStack_f8;
  local_290 = local_100;
  uStack_278 = uStack_e8;
  uStack_280 = uStack_f0;
  uStack_258 = uStack_c8;
  local_260 = uStack_d0;
  uStack_248 = uStack_b8;
  uStack_250 = local_c0;
  uStack_268 = uStack_d8;
  local_270 = local_e0;
  uStack_2a8 = uStack_118;
  local_2b0 = local_120;
  uStack_298 = uStack_108;
  uStack_2a0 = uStack_110;
  _swift_bridgeObjectRetain(0xe000000000000000);
  FUN_100008184(0,0xc000000000000000);
  FUN_100467dcc(&local_2b0);
  uVar1 = param_1;
  FUN_1001ad794(param_1,local_2c8,uStack_2c0,local_2b8,1);
  uVar3 = 0;
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)(uVar3);
  local_2e0 = (undefined4)param_1;
  uStack_2dc = (undefined4)uVar1;
  FUN_1003fb48c(FUN_1000fcd48,auStack_2f0,0xd0000000000000a2,0x80000001008898a0,0xd00000000000001a,
                0x800000010088a200,0x4a,0);
  _swift_bridgeObjectRelease(0xe000000000000000);
  FUN_100006cdc(0,0xc000000000000000);
  uVar1 = local_2b8;
  FUN_100006cdc(local_2c8,uStack_2c0);
  _swift_release(uVar1);
  return;
}

