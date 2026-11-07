// rea decompile_all
// name: FUN_10020611c
// address: 0x10020611c
// body: available
// range: 0x10020611c-0x1002068d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10020611c(undefined4 param_1,long param_2,long param_3,undefined1 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long extraout_x12;
  long extraout_x12_00;
  uint extraout_var;
  undefined2 extraout_var_00;
  undefined8 uVar10;
  undefined4 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 auStack_290 [16];
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined8 local_270;
  long lStack_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined1 local_258;
  char *local_250;
  long local_248;
  undefined8 local_240;
  uint uStack_22c;
  undefined4 local_224;
  ulong local_220;
  undefined4 local_1e0 [2];
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 local_140;
  undefined4 local_128 [2];
  undefined8 local_120;
  undefined1 local_118;
  undefined4 local_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  uVar9 = *(ulong *)(param_2 + 0xb8) >> 0x3c;
  uVar4 = 0;
  if (uVar9 < 0xf) {
    uVar4 = *(undefined8 *)(param_2 + 0xa8);
  }
  uVar2 = 0;
  if (uVar9 < 0xf) {
    uVar2 = *(undefined8 *)(param_2 + 0xb0);
  }
  uVar13 = 0xc000000000000000;
  if (uVar9 < 0xf) {
    uVar13 = *(ulong *)(param_2 + 0xb8);
  }
  FUN_100040b80(*(undefined8 *)(param_2 + 0xa8),*(undefined8 *)(param_2 + 0xb0));
  FUN_100006cdc(uVar2,uVar13);
  uVar9 = *(ulong *)(param_3 + 0x28);
  uVar2 = *(undefined8 *)(param_3 + 0x30);
  uVar13 = *(ulong *)(param_3 + 0x38);
  if (uVar13 >> 0x3c < 0xf) {
    uVar15 = uVar9 >> 0x20;
    uVar10 = uVar2;
    uVar12 = uVar9;
    uVar14 = uVar13;
  }
  else {
    FUN_100006cdc(0,0xc000000000000000);
    uVar15 = 0;
    uVar10 = 0;
    uVar12 = 0;
    uVar14 = 0xc000000000000000;
  }
  local_220 = uVar15;
  FUN_100040b80(uVar9,uVar2,uVar13);
  FUN_100006cdc(uVar10,uVar14);
  uVar2 = 0;
  FUN_100401b14();
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar11 = (undefined4)uVar12;
  _local_280 = CONCAT44(uVar11,param_1);
  local_260 = CONCAT31(local_260._1_3_,param_4);
  local_250 = s___screenID__1008a2d10 + 0x30;
  local_278 = (int)uVar15;
  local_270 = uVar4;
  lStack_268 = param_3;
  FUN_1003fb45c(FUN_10020d0c8,auStack_290,0xd0000000000000a6,0x80000001008a2d40,
                &DAT_d000000000000030,0x80000001008a38a0,0x191,0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar3 = &DAT_100a7da48;
  local_278 = uVar11;
  uStack_274 = (int)uVar15;
  local_248 = extraout_x12;
  local_224 = uVar11;
  uStack_22c = extraout_var;
  local_260._2_2_ = extraout_var_00;
  FUN_100004bb4(&DAT_100a7da48,&DAT_100812d48);
  __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
            (&local_e8,FUN_10020d0dc,auStack_290,puVar3);
  local_240 = uVar2;
  if (((byte)local_e0 & 1) == 0) {
    uVar2 = 1;
    FUN_100181d00(local_128,param_3,local_e8,0,1);
  }
  else {
    FUN_100181d00(local_128,param_3,0,1,local_e8);
    uVar2 = local_e8;
  }
  local_1e0[0] = local_128[0];
  local_1d8 = local_120;
  local_1d0 = CONCAT31(local_1d0._1_3_,local_118);
  uStack_1cc = local_114;
  local_1c8 = local_110;
  uStack_1c0 = uStack_108;
  local_1b8 = local_100;
  uStack_1b0 = uStack_f8;
  local_1a8 = local_f0;
  uVar10 = CONCAT44(local_114,local_1d0);
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  local_150 = 0;
  local_140 = 0xff;
  FUN_10020d100(local_1e0,&local_e8);
  puVar3 = &DAT_100812f40;
  FUN_100040bb4(&local_1a0,&DAT_100a7da38,&DAT_100812f40);
  local_e0 = local_120;
  uStack_d0 = local_110;
  local_c8 = uStack_108;
  uStack_c0 = local_100;
  local_b8 = uStack_f8;
  uStack_b0 = local_f0;
  local_88 = 3;
  uStack_78 = 0xc000000000000000;
  local_80 = 0;
  local_d8 = uVar10;
  __ss11_StringGutsV4growyySiF(0x95);
  __sSS6appendyySSF(0x1000000000000045,0x80000001008a38e0);
  puVar5 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x64496b736174202c,0xe90000000000003d);
  puVar7 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  puVar5 = PTR___ss5Int32VN_100995c78;
  puVar6 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x6e49656c6966202c,0xec0000003d786564);
  puVar6 = puVar7;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar5,puVar7);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x736575716572202c,0xec0000003d644974);
  puVar6 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int64VN_100995cc0,PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x496b636f6c62202c,0xea00000000003d64);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar5,puVar7);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar7);
  __sSS6appendyySSF(0x4c6b636f6c62202c,0xeb000000003d6e65);
  puVar7 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  puVar5 = PTR___sSiN_100995968;
  if (uStack_22c >> 0x1e < 2) {
    if ((uStack_22c >> 0x1e != 0) && (SBORROW4((int)((ulong)local_248 >> 0x20),(int)local_248))) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002068d8);
      (*pcVar1)();
    }
  }
  else if ((uStack_22c >> 0x1e == 2) &&
          (SBORROW8(*(long *)(local_248 + 0x18),*(long *)(local_248 + 0x10)))) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100206630);
    (*pcVar1)();
  }
  puVar6 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x7245656c6966202c,0xec0000003d726f72);
  FUN_10017cb14();
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar5,puVar7);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar7);
  puVar8 = &local_e8;
  FUN_10017cd00(uVar4,puVar8);
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  FUN_1001ad794(param_1,uVar4,puVar8,puVar3,1);
  (*(code *)PTR____chkstk_darwin_100995498)(0);
  local_270 = 0;
  lStack_268 = 0xe000000000000000;
  local_260._0_2_ = CONCAT11(1,param_4);
  local_25c = param_1;
  FUN_1003fb48c(thunk_FUN_10020d3f4,&local_280,0xd0000000000000ac,0x80000001008a30a0,
                0xd000000000000048,0x80000001008a3150,0x2e,0);
  FUN_100006cdc(uVar4,puVar8);
  _swift_bridgeObjectRelease(0xe000000000000000);
  _swift_release(puVar3);
  FUN_10020ceb8(&local_e8);
  if (((uint)uVar2 & 0xff) != 1) {
    (*(code *)PTR____chkstk_darwin_100995498)();
    uVar9 = local_220;
    uVar11 = local_224;
    local_270 = 0x636f6c42656c6966;
    lStack_268 = 0xe90000000000006b;
    local_25c = (undefined4)local_220;
    local_260 = local_224;
    local_258 = (undefined1)uVar2;
    FUN_1003fb48c(thunk_FUN_10020d13c,&local_280,0xd0000000000000a6,
                  (ulong)local_250 | 0x8000000000000000,extraout_x12_00 + -0x67,0x80000001008a3810,
                  0x1e1,0);
    FUN_100186028(uVar11,uVar9,uVar2);
  }
  FUN_10020d14c(local_1e0);
  return;
}

