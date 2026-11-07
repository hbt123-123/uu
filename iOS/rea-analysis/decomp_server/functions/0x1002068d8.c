// rea decompile_all
// name: FUN_1002068d8
// address: 0x1002068d8
// body: available
// range: 0x1002068d8-0x100206d93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002068d8(undefined4 param_1,long param_2,undefined8 *param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined1 auStack_250 [16];
  undefined8 local_240;
  undefined8 uStack_238;
  undefined1 local_230;
  undefined1 local_22f;
  undefined4 local_22c;
  undefined8 local_220;
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
  
  uVar11 = *(ulong *)(param_2 + 0xb8) >> 0x3c;
  uVar4 = 0;
  if (uVar11 < 0xf) {
    uVar4 = *(undefined8 *)(param_2 + 0xa8);
  }
  uVar1 = 0;
  if (uVar11 < 0xf) {
    uVar1 = *(undefined8 *)(param_2 + 0xb0);
  }
  uVar9 = 0xc000000000000000;
  if (uVar11 < 0xf) {
    uVar9 = *(ulong *)(param_2 + 0xb8);
  }
  FUN_100040b80(*(undefined8 *)(param_2 + 0xa8),*(undefined8 *)(param_2 + 0xb0));
  FUN_100006cdc(uVar1,uVar9);
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar11 = param_3[2];
  uVar7 = param_3[3];
  uVar3 = uVar1;
  uVar5 = uVar2;
  uVar9 = uVar11;
  FUN_10017ec08();
  local_220 = uVar7;
  if ((uVar9 & 1) == 0) {
    FUN_100181dc4(&local_128,1,uVar3,uVar5);
    FUN_10020ce68(uVar3,uVar5,0);
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
  puVar10 = &DAT_100812f40;
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
  __ss11_StringGutsV4growyySiF(0xb4);
  __sSS6appendyySSF(0x100000000000003b,0x80000001008a3980);
  puVar6 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  uVar7 = 0xed00003d65707954;
  __sSS6appendyySSF(0x746e65696c63202c,0xed00003d65707954);
  FUN_100208dd4();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar7);
  __sSS6appendyySSF(0xd000000000000021,0x80000001008a39c0);
  puVar6 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int64VN_100995cc0,PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x6e696769726f202c,0xef3d687461506c61);
  __sSS6appendyySSF(uVar1,uVar2);
  __sSS6appendyySSF(&DAT_d000000000000013,0x80000001008a39f0);
  __sSS6appendyySSF(uVar11,local_220);
  __sSS6appendyySSF(0x6e6f70736572202c,0xef3d687461506573);
  __sSS6appendyySSF(local_108,uStack_100);
  _swift_bridgeObjectRelease(uStack_100);
  __sSS6appendyySSF(0x7245656c6966202c,0xec0000003d726f72);
  puVar6 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  puVar8 = local_e8;
  FUN_10017cd00(uVar4,puVar8);
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  FUN_1001ad794(param_1,uVar4,puVar8,puVar10,1);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_240 = 0;
  uStack_238 = 0xe000000000000000;
  local_22f = 1;
  local_230 = param_4;
  local_22c = param_1;
  FUN_1003fb48c(thunk_FUN_10020d3f4,auStack_250,0xd0000000000000ac,0x80000001008a30a0,
                0xd000000000000048,0x80000001008a3150,0x2e,0);
  FUN_100006cdc(uVar4,puVar8);
  _swift_bridgeObjectRelease(0xe000000000000000);
  _swift_release(puVar10);
  FUN_10020ceb8(local_e8);
  FUN_10020d1bc(&local_1d0);
  return;
}

