// rea decompile_all
// name: FUN_100205ac4
// address: 0x100205ac4
// body: available
// range: 0x100205ac4-0x10020611b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100205ac4(undefined4 param_1,long param_2,long param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 extraout_x8;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined4 uVar13;
  ulong uVar14;
  undefined1 auStack_260 [16];
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined8 local_208;
  undefined1 local_1e8 [8];
  undefined8 local_1e0;
  undefined1 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
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
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  uVar8 = *(ulong *)(param_2 + 0xb8) >> 0x3c;
  uVar3 = 0;
  if (uVar8 < 0xf) {
    uVar3 = *(undefined8 *)(param_2 + 0xa8);
  }
  uVar1 = 0;
  if (uVar8 < 0xf) {
    uVar1 = *(undefined8 *)(param_2 + 0xb0);
  }
  uVar10 = 0xc000000000000000;
  if (uVar8 < 0xf) {
    uVar10 = *(ulong *)(param_2 + 0xb8);
  }
  FUN_100040b80(*(undefined8 *)(param_2 + 0xa8),*(undefined8 *)(param_2 + 0xb0));
  FUN_100006cdc(uVar1,uVar10);
  uVar8 = *(ulong *)(param_3 + 0x20);
  uVar1 = *(undefined8 *)(param_3 + 0x28);
  uVar10 = *(ulong *)(param_3 + 0x30);
  if (uVar10 >> 0x3c < 0xf) {
    uVar11 = uVar8 >> 0x20;
    uVar9 = uVar1;
    uVar12 = uVar10;
    uVar14 = uVar8;
  }
  else {
    FUN_100006cdc(0,0xc000000000000000);
    uVar11 = 0;
    uVar9 = 0;
    uVar12 = 0xc000000000000000;
    uVar14 = 0;
  }
  FUN_100040b80(uVar8,uVar1,uVar10);
  FUN_100006cdc(uVar9,uVar12);
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar13 = (undefined4)uVar14;
  puVar2 = &DAT_100a7da40;
  local_240 = extraout_x8;
  local_238 = uVar13;
  uStack_234 = (int)uVar11;
  FUN_100004bb4(&DAT_100a7da40,&DAT_100812d40);
  __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
            (&local_e0,FUN_10020d038,&local_250,puVar2);
  if ((char)local_d8 == '\x01') {
    FUN_100181c44(local_128,param_3,0,1,local_e0);
    local_208 = local_e0;
  }
  else {
    FUN_100181c44(local_128,param_3,local_e0,0,1);
    local_208 = 1;
  }
  local_1e8[0] = local_128[0];
  local_1e0 = local_120;
  local_1d8 = local_118;
  local_1d0 = local_110;
  uStack_1c8 = uStack_108;
  local_1c0 = local_100;
  uStack_1b8 = uStack_f8;
  local_1b0 = local_f0;
  uStack_1a8 = uStack_e8;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  local_140 = 0xff;
  FUN_10020d054(local_1e8,&local_e0);
  puVar2 = &DAT_100812f40;
  FUN_100040bb4(&local_1a0,&DAT_100a7da38,&DAT_100812f40);
  local_d8 = local_120;
  uStack_c8 = local_110;
  local_c0 = uStack_108;
  uStack_b8 = local_100;
  local_b0 = uStack_f8;
  uStack_a8 = local_f0;
  local_a0 = uStack_e8;
  local_80 = 2;
  uStack_70 = 0xc000000000000000;
  local_78 = 0;
  __ss11_StringGutsV4growyySiF(0x8a);
  __sSS6appendyySSF(0x1000000000000043,0x80000001008a37c0);
  puVar4 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x64496b736174202c,0xe90000000000003d);
  puVar6 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  puVar4 = PTR___ss5Int32VN_100995c78;
  puVar5 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x6e49656c6966202c,0xec0000003d786564);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar4,puVar6);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x736575716572202c,0xec0000003d644974);
  puVar4 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int64VN_100995cc0,PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x7245656c6966202c,0xec0000003d726f72);
  FUN_10017cb14();
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x656d75736572202c,0xee003d746e696f50);
  puVar4 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt64VN_100995e10,PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  puVar7 = &local_e0;
  FUN_10017cd00(uVar3,puVar7);
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  FUN_1001ad794(param_1,uVar3,puVar7,puVar2,1);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_250 = 0;
  uStack_248 = 0xe000000000000000;
  local_240._0_2_ = CONCAT11(1,param_4);
  local_240 = CONCAT44(param_1,(undefined4)local_240);
  FUN_1003fb48c(thunk_FUN_10020d3f4,auStack_260,0xd0000000000000ac,0x80000001008a30a0,
                0xd000000000000048,0x80000001008a3150,0x2e,0);
  FUN_100006cdc(uVar3,puVar7);
  _swift_bridgeObjectRelease(0xe000000000000000);
  _swift_release(puVar2);
  FUN_10020ceb8(&local_e0);
  if (((uint)local_208 & 0xff) != 1) {
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_250 = 0x6b7341656c6966;
    uStack_248 = 0xe700000000000000;
    local_240 = CONCAT44((int)uVar11,uVar13);
    local_238 = CONCAT31(local_238._1_3_,(char)local_208);
    FUN_1003fb48c(thunk_FUN_10020d13c,auStack_260,0xd0000000000000a6,0x80000001008a2d40,
                  0xd00000000000003f,0x80000001008a3810,0x1e1,0);
    FUN_100186028(uVar13,uVar11,local_208);
  }
  FUN_10020d094(local_1e8);
  return;
}

