// rea decompile_all
// name: FUN_10020f49c
// address: 0x10020f49c
// body: available
// range: 0x10020f49c-0x10020fa7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10020f49c(undefined4 param_1,undefined8 param_2,long *param_3,undefined4 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  long *plVar7;
  long extraout_x8;
  ulong uVar8;
  long unaff_x20;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined4 uVar13;
  undefined *puVar14;
  long lVar15;
  undefined1 auStack_280 [16];
  undefined8 auStack_270 [2];
  undefined1 auStack_260 [4];
  undefined4 auStack_25c [3];
  undefined1 auStack_250 [8];
  ulong local_248;
  ulong local_240;
  undefined8 uStack_238;
  undefined8 local_228;
  uint local_21c;
  ulong local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined *local_208;
  long lStack_200;
  undefined1 auStack_1e0 [16];
  undefined8 local_1d0;
  undefined4 local_1c8;
  long local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  long local_1a8;
  byte local_1a0;
  undefined7 uStack_19f;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  ulong local_178;
  long lStack_170;
  undefined *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 local_100;
  byte local_f8;
  long local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulong local_b8;
  long lStack_b0;
  undefined *local_a8;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  puVar6 = &DAT_100a77e70;
  local_228 = param_2;
  local_210 = param_1;
  local_20c = param_4;
  FUN_100004bb4(&DAT_100a77e70,&DAT_10080cca0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = -extraout_x8;
  uVar12 = param_3[4];
  lVar15 = param_3[5];
  puVar14 = (undefined *)param_3[6];
  FUN_100040b80(uVar12,lVar15,puVar14);
  FUN_100040b80(uVar12,lVar15,puVar14);
  FUN_100040b80(uVar12,lVar15,puVar14);
  FUN_100040b80(uVar12,lVar15,puVar14);
  uVar8 = (ulong)puVar14 >> 0x3c;
  uVar13 = 0;
  if (uVar8 < 0xf) {
    uVar13 = (undefined4)uVar12;
  }
  lVar1 = 0;
  if (uVar8 < 0xf) {
    lVar1 = lVar15;
  }
  puVar2 = (undefined *)0xc000000000000000;
  if (uVar8 < 0xf) {
    puVar2 = puVar14;
  }
  local_218 = 0;
  if (uVar8 < 0xf) {
    local_218 = uVar12;
  }
  local_208 = puVar14;
  lStack_200 = lVar15;
  FUN_100006cdc(lVar1,puVar2);
  local_1d0 = *(undefined8 *)(unaff_x20 + 0x18);
  local_1c8 = uVar13;
  __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
            (auStack_250 + lVar3,FUN_1002188e4,auStack_1e0,puVar6);
  FUN_100040bb4(auStack_250 + lVar3,&DAT_100a77e70,&DAT_10080cca0);
  switchD_10004048c::caseD_6d(0,0,0xf000000000000000);
  lVar15 = *param_3;
  local_f8 = *(byte *)(param_3 + 1);
  local_21c = (uint)local_f8;
  if (lVar15 == 1) {
    uVar9 = 0xe000000000000000;
    _swift_bridgeObjectRelease(0xe000000000000000);
    uVar11 = 0;
  }
  else {
    _swift_bridgeObjectRelease(0xe000000000000000);
    uVar9 = 0x80000001008a51d0;
    uVar11 = 0xd000000000000015;
  }
  uVar10 = local_218;
  local_1a0 = local_f8;
  uStack_238 = 0xc000000000000000;
  local_240 = 0;
  uStack_180 = 0xc000000000000000;
  local_188 = 0;
  local_178 = local_218;
  uVar4 = CONCAT71(uStack_19f,local_f8);
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  local_100 = 0xff;
  local_1a8 = lVar15;
  local_198 = uVar11;
  uStack_190 = uVar9;
  lStack_170 = lVar1;
  local_168 = puVar2;
  FUN_10020d1f0(&local_1a8,&local_e8);
  puVar6 = &DAT_100812f40;
  FUN_100040bb4(&local_160,&DAT_100a7da38,&DAT_100812f40);
  uStack_c0 = uStack_238;
  local_c8 = local_240;
  local_b8 = uVar10;
  local_88 = 5;
  uStack_78 = uStack_238;
  local_80 = local_240;
  local_1b8 = 0;
  uStack_1b0 = 0xe000000000000000;
  local_e8 = lVar15;
  uStack_e0 = uVar4;
  local_d8 = uVar11;
  uStack_d0 = uVar9;
  lStack_b0 = lVar1;
  local_a8 = puVar2;
  __ss11_StringGutsV4growyySiF(0x84);
  __sSS6appendyySSF(0x100000000000004d,0x80000001008a51f0);
  uVar5 = local_210;
  local_1c0._0_4_ = local_210;
  puVar14 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar14);
  __sSS6appendyySSF(0x64496b736174202c,0xe90000000000003d);
  local_1c0 = CONCAT44(local_1c0._4_4_,uVar13);
  puVar14 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar14);
  __sSS6appendyySSF(0x6e49656c6966202c,0xec0000003d786564);
  uVar10 = uVar12 >> 0x20;
  local_248 = uVar10;
  if (uVar8 < 0xf) {
    puVar6 = local_208;
    switchD_10004048c::caseD_6d(uVar12,lStack_200,local_208);
  }
  else {
    FUN_100006cdc(0,0xc000000000000000);
    uVar10 = 0;
  }
  local_1c0 = CONCAT44(local_1c0._4_4_,(int)uVar10);
  puVar14 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  local_240 = uVar12;
  local_218 = lVar15;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar14);
  __sSS6appendyySSF(0x736575716572202c,0xec0000003d644974);
  uVar9 = local_228;
  local_1c0 = local_228;
  puVar14 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int64VN_100995cc0,PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar14);
  __sSS6appendyySSF(0x7245656c6966202c,0xec0000003d726f72);
  local_1c0 = local_1a8;
  puVar14 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar14);
  uVar4 = uStack_1b0;
  uVar11 = local_1b8;
  plVar7 = &local_e8;
  FUN_10017cd00(uVar9,plVar7);
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  FUN_1001ad794(uVar5,uVar9,plVar7,puVar6,1);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  *(undefined8 *)((long)auStack_270 + lVar3) = uVar11;
  *(undefined8 *)((long)auStack_270 + lVar3 + 8) = uVar4;
  auStack_260[lVar3] = (char)local_20c;
  auStack_260[lVar3 + 1] = 1;
  *(undefined4 *)(auStack_260 + lVar3 + 4) = uVar5;
  FUN_1003fb48c(thunk_FUN_10020d3f4,auStack_280 + lVar3,0xd0000000000000ac,0x80000001008a30a0,
                0xd000000000000048,0x80000001008a3150,0x2e,0);
  FUN_100006cdc(uVar9,plVar7);
  _swift_bridgeObjectRelease(uVar4);
  _swift_release(puVar6);
  FUN_10020ceb8(&local_e8);
  if (uVar8 < 0xf) {
    switchD_10004048c::caseD_6d(local_240,lStack_200,local_208);
    uVar12 = local_248;
  }
  else {
    FUN_100006cdc(0,0xc000000000000000);
    uVar12 = 0;
  }
  uVar8 = local_218;
  FUN_10017ccd4(local_218,local_21c);
  FUN_100186040(uVar13,uVar12,uVar8);
  FUN_10020d22c(&local_1a8);
  return;
}

