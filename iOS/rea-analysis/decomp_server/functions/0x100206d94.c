// rea decompile_all
// name: FUN_100206d94
// address: 0x100206d94
// body: available
// range: 0x100206d94-0x100207217 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100206d94(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined1 auStack_240 [16];
  undefined8 local_230;
  undefined8 uStack_228;
  undefined1 local_220;
  undefined1 local_21f;
  undefined4 local_21c;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_1d0;
  undefined1 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8 [2];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  uVar7 = *(ulong *)(param_2 + 0xb8);
  uVar9 = uVar7 >> 0x3c;
  uVar2 = 0;
  if (uVar9 < 0xf) {
    uVar2 = *(undefined8 *)(param_2 + 0xa8);
  }
  uVar5 = 0;
  if (uVar9 < 0xf) {
    uVar5 = *(undefined8 *)(param_2 + 0xb0);
  }
  uVar1 = 0xc000000000000000;
  if (uVar9 < 0xf) {
    uVar1 = uVar7;
  }
  FUN_100040b80(*(undefined8 *)(param_2 + 0xa8),*(undefined8 *)(param_2 + 0xb0));
  FUN_100006cdc(uVar5,uVar1);
  uVar5 = param_3;
  uVar3 = param_4;
  FUN_10017dbd4(param_3,param_4);
  local_210 = param_3;
  uStack_208 = param_4;
  if ((uVar7 & 1) == 0) {
    FUN_100181dc4(&local_128,1,uVar5,uVar3);
    FUN_10020ce68(uVar5,uVar3,0);
  }
  else {
    FUN_100181dc4(&local_128);
  }
  local_1d0 = local_128;
  local_1c8 = local_120;
  local_1c0 = local_118;
  uStack_1b8 = uStack_110;
  local_1b0 = local_108;
  uStack_1a8 = uStack_100;
  local_1a0 = local_f8;
  uStack_198 = uStack_f0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  local_140 = 0;
  local_130 = 0xff;
  _swift_bridgeObjectRetain(uStack_100);
  FUN_10020d180(&local_1d0,local_e8);
  puVar8 = &DAT_100812f40;
  FUN_100040bb4(&local_190,&DAT_100a7da38,&DAT_100812f40);
  local_e8[0] = local_128;
  local_d8 = local_118;
  uStack_d0 = uStack_110;
  local_c8 = local_108;
  uStack_c0 = uStack_100;
  local_b8 = local_f8;
  uStack_b0 = uStack_f0;
  local_88 = 4;
  uStack_78 = 0xc000000000000000;
  local_80 = 0;
  __ss11_StringGutsV4growyySiF(0xa2);
  __sSS6appendyySSF(0x100000000000003e,0x80000001008a3a10);
  puVar4 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  uVar5 = 0xed00003d65707954;
  __sSS6appendyySSF(0x746e65696c63202c,0xed00003d65707954);
  FUN_100208dd4();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar5);
  __sSS6appendyySSF(0xd000000000000021,0x80000001008a39c0);
  puVar4 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int64VN_100995cc0,PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x6e696769726f202c,0xef3d687461506c61);
  __sSS6appendyySSF(local_210,uStack_208);
  __sSS6appendyySSF(0x6e6f70736572202c,0xef3d687461506573);
  __sSS6appendyySSF(local_108,uStack_100);
  _swift_bridgeObjectRelease(uStack_100);
  __sSS6appendyySSF(0x7245656c6966202c,0xec0000003d726f72);
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  puVar6 = local_e8;
  FUN_10017cd00(uVar2,puVar6);
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  FUN_1001ad794(param_1,uVar2,puVar6,puVar8,1);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_230 = 0;
  uStack_228 = 0xe000000000000000;
  local_21f = 1;
  local_220 = param_7;
  local_21c = param_1;
  FUN_1003fb48c(thunk_FUN_10020d3f4,auStack_240,0xd0000000000000ac,0x80000001008a30a0,
                0xd000000000000048,0x80000001008a3150,0x2e,0);
  FUN_100006cdc(uVar2,puVar6);
  _swift_bridgeObjectRelease(0xe000000000000000);
  _swift_release(puVar8);
  FUN_10020ceb8(local_e8);
  FUN_10020d1bc(&local_1d0);
  return;
}

