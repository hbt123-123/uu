// rea decompile_all
// name: FUN_10020764c
// address: 0x10020764c
// body: available
// range: 0x10020764c-0x100207b43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10020764c(undefined4 param_1,long param_2,ulong *param_3,undefined4 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined1 auStack_250 [16];
  undefined8 local_240;
  undefined8 uStack_238;
  undefined1 local_230;
  undefined1 local_22f;
  undefined4 local_22c;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  ulong local_1e0;
  ulong local_1d8;
  ulong uStack_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  char local_e1;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  uVar11 = *(ulong *)(param_2 + 0xb8) >> 0x3c;
  local_1c8 = 0;
  if (uVar11 < 0xf) {
    local_1c8 = *(undefined8 *)(param_2 + 0xa8);
  }
  uVar3 = 0;
  if (uVar11 < 0xf) {
    uVar3 = *(undefined8 *)(param_2 + 0xb0);
  }
  uVar13 = 0xc000000000000000;
  if (uVar11 < 0xf) {
    uVar13 = *(ulong *)(param_2 + 0xb8);
  }
  local_1c0 = param_4;
  local_1bc = param_1;
  FUN_100040b80(*(undefined8 *)(param_2 + 0xa8),*(undefined8 *)(param_2 + 0xb0));
  FUN_100006cdc(uVar3,uVar13);
  uVar11 = *param_3;
  local_1d8 = param_3[1];
  uStack_1d0 = uVar11;
  FUN_1001803d4();
  uVar6 = (undefined4)uVar11;
  if ((uVar11 & 0x100) == 0) {
    uVar6 = 1;
  }
  uVar13 = param_3[5];
  uVar5 = param_3[6];
  puVar12 = (undefined *)param_3[7];
  local_1e0 = (ulong)puVar12 >> 0x3c;
  uVar11 = 0;
  if (local_1e0 < 0xf) {
    uVar11 = uVar13 & 0xffffffff;
  }
  uVar1 = 0;
  if (local_1e0 < 0xf) {
    uVar1 = uVar13 & 0xffffffff00000000;
  }
  uVar2 = 0;
  if (local_1e0 < 0xf) {
    uVar2 = uVar5;
  }
  puVar9 = (undefined *)0xc000000000000000;
  if (local_1e0 < 0xf) {
    puVar9 = puVar12;
  }
  FUN_100040b80(uVar13,uVar5,puVar12);
  FUN_100040b80(uVar13,uVar5,puVar12);
  FUN_100182018(&local_130,uVar1 | uVar11,uVar2,puVar9,uVar6);
  FUN_100006cdc(uVar2,puVar9);
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  local_140 = 0xff;
  uStack_1f8 = uStack_108;
  local_200 = local_110;
  uStack_1e8 = uStack_128;
  local_1f0 = local_130;
  uStack_218 = uStack_f8;
  local_220 = uStack_100;
  uStack_208 = uStack_118;
  local_210 = uStack_120;
  FUN_10020d1f0(&local_130,&local_e0);
  puVar9 = &DAT_100812f40;
  FUN_100040bb4(&local_1a0,&DAT_100a7da38,&DAT_100812f40);
  uStack_d8 = uStack_1e8;
  local_e0 = local_1f0;
  uStack_c8 = uStack_208;
  uStack_d0 = local_210;
  uStack_b8 = uStack_1f8;
  local_c0 = local_200;
  uStack_a8 = uStack_218;
  uStack_b0 = local_220;
  local_a0 = local_f0;
  local_80 = 5;
  uStack_70 = 0xc000000000000000;
  local_78 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x7e);
  __sSS6appendyySSF(0x100000000000003e,0x80000001008a3a90);
  local_1b8 = CONCAT44(local_1b8._4_4_,local_1bc);
  puVar8 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar8);
  __sSS6appendyySSF(0x64496b736174202c,0xe90000000000003d);
  if (local_1e0 < 0xf) {
    switchD_10004048c::caseD_6d(uVar13,uVar5,puVar12);
  }
  else {
    FUN_100006cdc(0,0xc000000000000000);
    uVar13 = 0;
    puVar12 = puVar9;
  }
  local_e1 = (char)param_3[2];
  local_1b8 = CONCAT44(local_1b8._4_4_,(int)uVar13);
  puVar9 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar9);
  __sSS6appendyySSF(0x736575716572202c,0xec0000003d644974);
  uVar7 = local_1c8;
  local_1b8 = local_1c8;
  puVar9 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int64VN_100995cc0,PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar9);
  __sSS6appendyySSF(0x3d68746170202c,0xe700000000000000);
  __sSS6appendyySSF(uStack_1d0,local_1d8);
  __sSS6appendyySSF(0x737275636572202c,0xec0000003d657669);
  uVar3 = 0x65757274;
  if (local_e1 == '\0') {
    uVar3 = 0x65736c6166;
  }
  uVar4 = 0xe400000000000000;
  if (local_e1 == '\0') {
    uVar4 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar3,uVar4);
  _swift_bridgeObjectRelease(uVar4);
  __sSS6appendyySSF(0x7245656c6966202c,0xec0000003d726f72);
  local_1b8 = local_130;
  puVar9 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar9);
  uVar4 = uStack_1a8;
  uVar3 = local_1b0;
  puVar10 = &local_e0;
  FUN_10017cd00(uVar7,puVar10);
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  uVar6 = local_1bc;
  FUN_1001ad794(local_1bc,uVar7,puVar10,puVar12,1);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_240 = uVar3;
  uStack_238 = uVar4;
  local_230 = (undefined1)local_1c0;
  local_22f = 1;
  local_22c = uVar6;
  FUN_1003fb48c(thunk_FUN_10020d3f4,auStack_250,0xd0000000000000ac,0x80000001008a30a0,
                0xd000000000000048,0x80000001008a3150,0x2e,0);
  FUN_100006cdc(uVar7,puVar10);
  _swift_bridgeObjectRelease(uVar4);
  _swift_release(puVar12);
  FUN_10020ceb8(&local_e0);
  FUN_10020d22c(&local_130);
  return;
}

