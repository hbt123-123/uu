// rea decompile_all
// name: FUN_100207b44
// address: 0x100207b44
// body: available
// range: 0x100207b44-0x100208237 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100207b44(undefined4 param_1,long param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 extraout_x8;
  ulong uVar10;
  long unaff_x20;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  ulong uVar15;
  undefined1 auStack_260 [16];
  undefined8 local_250;
  undefined8 *local_248;
  undefined8 local_240;
  undefined4 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  ulong local_210;
  undefined8 uStack_208;
  ulong local_1c0;
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
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  uVar10 = *(ulong *)(param_2 + 0xb8) >> 0x3c;
  uVar5 = 0;
  if (uVar10 < 0xf) {
    uVar5 = *(undefined8 *)(param_2 + 0xa8);
  }
  uVar1 = 0;
  if (uVar10 < 0xf) {
    uVar1 = *(undefined8 *)(param_2 + 0xb0);
  }
  uVar12 = 0xc000000000000000;
  if (uVar10 < 0xf) {
    uVar12 = *(ulong *)(param_2 + 0xb8);
  }
  FUN_100040b80(*(undefined8 *)(param_2 + 0xa8),*(undefined8 *)(param_2 + 0xb0));
  FUN_100006cdc(uVar1,uVar12);
  uVar10 = param_3[4];
  uVar1 = param_3[5];
  uVar12 = param_3[6];
  local_210 = uVar12 >> 0x3c;
  if (local_210 < 0xf) {
    local_1c0 = uVar10 >> 0x20;
    uVar11 = uVar12;
    uVar13 = uVar1;
    uVar15 = uVar10;
  }
  else {
    FUN_100006cdc(0,0xc000000000000000);
    local_1c0 = 0;
    uVar11 = 0xc000000000000000;
    uVar13 = 0;
    uVar15 = 0;
  }
  FUN_100040b80(uVar10,uVar1,uVar12);
  FUN_100040b80(uVar10,uVar1,uVar12);
  FUN_100006cdc(uVar13,uVar11);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x20);
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar14 = (undefined4)uVar15;
  local_240 = uVar13;
  local_238 = uVar14;
  __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
            (&local_e8,FUN_10020d260,&local_250,PTR___sSbN_1009958c8);
  if ((local_e8 & 1) == 0) {
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_240 = extraout_x8;
    local_238 = uVar14;
    __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
              (&local_e8,FUN_10020d27c,&local_250,PTR___sSbN_1009958c8);
    if ((char)local_e8 == '\x01') {
      switchD_10004048c::caseD_6d(uVar10,uVar1,uVar12);
      FUN_10020f49c(param_1,uVar5,param_3,param_4);
      return;
    }
  }
  uVar3 = *param_3;
  FUN_10017ccd4(uVar3,*(undefined1 *)(param_3 + 1));
  uVar2 = (undefined1)uVar3;
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_250 = CONCAT71(local_250._1_7_,uVar2);
  local_240 = CONCAT44((int)local_1c0,uVar14);
  puVar4 = &DAT_100a7da50;
  local_248 = (undefined8 *)uVar13;
  FUN_100004bb4(&DAT_100a7da50,&DAT_100812d50);
  __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
            (&local_e8,FUN_10020d298,auStack_260,puVar4);
  uVar2 = (char)local_e8;
  if (local_e8._1_1_ == '\0') {
    uVar2 = 1;
  }
  uVar13 = 0;
  if (local_210 < 0xf) {
    uVar13 = uVar1;
  }
  uVar11 = 0xc000000000000000;
  if (local_210 < 0xf) {
    uVar11 = uVar12;
  }
  uVar12 = 0;
  if (local_210 < 0xf) {
    uVar12 = uVar10;
  }
  FUN_100182018(&local_130,uVar12,uVar13,uVar11);
  uStack_218 = uStack_118;
  local_220 = uStack_120;
  uStack_208 = uStack_108;
  local_210 = local_110;
  uStack_228 = uStack_f8;
  local_230 = uStack_100;
  FUN_100006cdc(uVar13,uVar11);
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
  FUN_10020d1f0(&local_130,&local_e8);
  puVar4 = &DAT_100812f40;
  FUN_100040bb4(&local_1a0,&DAT_100a7da38,&DAT_100812f40);
  uStack_d0 = uStack_218;
  local_d8 = local_220;
  uStack_e0 = uStack_128;
  local_e8 = local_130;
  uStack_b0 = uStack_228;
  local_b8 = local_230;
  uStack_c0 = uStack_208;
  local_c8 = local_210;
  local_a8 = local_f0;
  local_88 = 5;
  uStack_78 = 0xc000000000000000;
  local_80 = 0;
  __ss11_StringGutsV4growyySiF(0x7b);
  __sSS6appendyySSF(0x1000000000000044,0x80000001008a3ad0);
  puVar6 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x64496b736174202c,0xe90000000000003d);
  puVar8 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  puVar6 = PTR___ss5Int32VN_100995c78;
  puVar7 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar7);
  __sSS6appendyySSF(0x6e49656c6966202c,0xec0000003d786564);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar6,puVar8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar8);
  __sSS6appendyySSF(0x736575716572202c,0xec0000003d644974);
  puVar6 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int64VN_100995cc0,PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x7245656c6966202c,0xec0000003d726f72);
  puVar6 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  puVar9 = &local_e8;
  FUN_10017cd00(uVar5,puVar9);
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  FUN_1001ad794(param_1,uVar5,puVar9,puVar4,1);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_250 = 0;
  local_248 = (undefined8 *)0xe000000000000000;
  local_240._0_2_ = CONCAT11(1,(char)param_4);
  local_240 = CONCAT44(param_1,(undefined4)local_240);
  FUN_1003fb48c(thunk_FUN_10020d3f4,auStack_260,0xd0000000000000ac,0x80000001008a30a0,
                0xd000000000000048,0x80000001008a3150,0x2e,0);
  FUN_100006cdc(uVar5,puVar9);
  _swift_bridgeObjectRelease(0xe000000000000000);
  _swift_release(puVar4);
  FUN_10020ceb8(&local_e8);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_250 = CONCAT44((int)local_1c0,uVar14);
  local_240._0_2_ = CONCAT11((char)param_4,uVar2);
  local_248 = param_3;
  FUN_1003fb48c(FUN_10020d2b8,auStack_260,0xd0000000000000a6,0x80000001008a2d40,0xd00000000000002f,
                0x80000001008a3b20,0x1d6,0);
  FUN_100186028(uVar15 & 0xffffffff,local_1c0,uVar2);
  FUN_10020d22c(&local_130);
  return;
}

