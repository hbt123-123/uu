// rea decompile_all
// name: FUN_100207218
// address: 0x100207218
// body: available
// range: 0x100207218-0x10020764b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100207218(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined1 auStack_220 [16];
  undefined8 local_210;
  undefined8 uStack_208;
  undefined1 local_200;
  undefined1 local_1ff;
  undefined4 local_1fc;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined8 local_1a0;
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
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  uVar9 = *(ulong *)(param_2 + 0xb8) >> 0x3c;
  uVar4 = 0;
  if (uVar9 < 0xf) {
    uVar4 = *(undefined8 *)(param_2 + 0xa8);
  }
  uVar6 = 0;
  if (uVar9 < 0xf) {
    uVar6 = *(undefined8 *)(param_2 + 0xb0);
  }
  uVar1 = 0xc000000000000000;
  if (uVar9 < 0xf) {
    uVar1 = *(ulong *)(param_2 + 0xb8);
  }
  local_1ac = param_7;
  FUN_100040b80(*(undefined8 *)(param_2 + 0xa8),*(undefined8 *)(param_2 + 0xb0));
  FUN_100006cdc(uVar6,uVar1);
  uVar9 = param_3;
  FUN_10017e2e4(param_3,param_4);
  uVar3 = (undefined4)uVar9;
  if ((uVar9 & 0x100) == 0) {
    uVar3 = 1;
  }
  FUN_100181dc4(&local_120,uVar3,param_3,param_4);
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  local_130 = 0xff;
  uStack_1c8 = uStack_f8;
  local_1d0 = local_100;
  uStack_1b8 = uStack_118;
  local_1c0 = local_120;
  uStack_1e8 = uStack_e8;
  local_1f0 = uStack_f0;
  uStack_1d8 = uStack_108;
  local_1e0 = uStack_110;
  FUN_10020d180(&local_120,&local_e0);
  puVar8 = &DAT_100812f40;
  FUN_100040bb4(&local_190,&DAT_100a7da38,&DAT_100812f40);
  uStack_d8 = uStack_1b8;
  local_e0 = local_1c0;
  uStack_c8 = uStack_1d8;
  uStack_d0 = local_1e0;
  uStack_b8 = uStack_1c8;
  local_c0 = local_1d0;
  uStack_a8 = uStack_1e8;
  uStack_b0 = local_1f0;
  local_80 = 4;
  uStack_70 = 0xc000000000000000;
  local_78 = 0;
  local_1a0 = 0;
  uStack_198 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0xa3);
  __sSS6appendyySSF(0x100000000000003f,0x80000001008a3a50);
  local_1a8 = CONCAT44(local_1a8._4_4_,(int)param_1);
  puVar5 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  uVar6 = 0xed00003d65707954;
  __sSS6appendyySSF(0x746e65696c63202c,0xed00003d65707954);
  FUN_100208dd4();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar6);
  __sSS6appendyySSF(0xd000000000000021,0x80000001008a39c0);
  puVar5 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0;
  local_1a8 = uVar4;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int64VN_100995cc0,PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x6e696769726f202c,0xef3d687461506c61);
  __sSS6appendyySSF(param_3,param_4);
  __sSS6appendyySSF(0x6e6f70736572202c,0xef3d687461506573);
  _swift_bridgeObjectRetain(uStack_f8);
  __sSS6appendyySSF(local_100,uStack_f8);
  _swift_bridgeObjectRelease(uStack_f8);
  __sSS6appendyySSF(0x7245656c6966202c,0xec0000003d726f72);
  local_1a8 = local_120;
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  uVar2 = uStack_198;
  uVar6 = local_1a0;
  puVar7 = &local_e0;
  FUN_10017cd00(uVar4,puVar7);
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  FUN_1001ad794(param_1,uVar4,puVar7,puVar8,1);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_210 = uVar6;
  uStack_208 = uVar2;
  local_200 = (undefined1)local_1ac;
  local_1ff = 1;
  local_1fc = (undefined4)param_1;
  FUN_1003fb48c(thunk_FUN_10020d3f4,auStack_220,0xd0000000000000ac,0x80000001008a30a0,
                0xd000000000000048,0x80000001008a3150,0x2e,0);
  FUN_100006cdc(uVar4,puVar7);
  _swift_bridgeObjectRelease(uVar2);
  _swift_release(puVar8);
  FUN_10020ceb8(&local_e0);
  FUN_10020d1bc(&local_120);
  return;
}

