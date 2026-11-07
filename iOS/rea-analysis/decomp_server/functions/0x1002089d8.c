// rea decompile_all
// name: FUN_1002089d8
// address: 0x1002089d8
// body: available
// range: 0x1002089d8-0x100208dd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002089d8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long unaff_x20;
  undefined1 auStack_260 [16];
  undefined8 local_250;
  undefined8 uStack_248;
  undefined1 local_240;
  undefined1 local_23f;
  undefined4 local_23c;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined4 local_1e4;
  undefined1 auStack_1e0 [16];
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
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
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  uVar8 = *(ulong *)(param_2 + 0xb8) >> 0x3c;
  uVar5 = 0;
  if (uVar8 < 0xf) {
    uVar5 = *(undefined8 *)(param_2 + 0xa8);
  }
  uVar1 = 0;
  if (uVar8 < 0xf) {
    uVar1 = *(undefined8 *)(param_2 + 0xb0);
  }
  uVar2 = 0xc000000000000000;
  if (uVar8 < 0xf) {
    uVar2 = *(ulong *)(param_2 + 0xb8);
  }
  local_1e4 = param_7;
  FUN_100040b80(*(undefined8 *)(param_2 + 0xa8),*(undefined8 *)(param_2 + 0xb0));
  FUN_100006cdc(uVar1,uVar2);
  local_1c0 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar4 = &DAT_100a7da50;
  local_1d0 = param_3;
  uStack_1c8 = param_4;
  FUN_100004bb4(&DAT_100a7da50,&DAT_100812d50);
  __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
            (&local_e8,FUN_10020d360,auStack_1e0,puVar4);
  if (local_e8._1_1_ == '\0') {
    local_e8._0_1_ = 1;
  }
  FUN_100181dc4(&local_128,(undefined1)local_e8,0,0xe000000000000000);
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
  uStack_208 = uStack_100;
  local_210 = local_108;
  uStack_1f8 = uStack_120;
  local_200 = local_128;
  uStack_228 = uStack_f0;
  local_230 = uStack_f8;
  uStack_218 = uStack_110;
  local_220 = uStack_118;
  FUN_10020d180(&local_128,&local_e8);
  puVar4 = &DAT_100812f40;
  FUN_100040bb4(&local_1a0,&DAT_100a7da38,&DAT_100812f40);
  uStack_e0 = uStack_1f8;
  local_e8 = local_200;
  uStack_d0 = uStack_218;
  uStack_d8 = local_220;
  uStack_c0 = uStack_208;
  local_c8 = local_210;
  uStack_b0 = uStack_228;
  uStack_b8 = local_230;
  local_88 = 4;
  uStack_78 = 0xc000000000000000;
  local_80 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x78);
  __sSS6appendyySSF(0x1000000000000049,0x80000001008a3d00);
  local_1b8 = CONCAT44(local_1b8._4_4_,(int)param_1);
  puVar6 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x736575716572202c,0xec0000003d644974);
  puVar6 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0;
  local_1b8 = uVar5;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int64VN_100995cc0,PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x6e556b736174202c,0xef3d444965757169);
  __sSS6appendyySSF(param_3,param_4);
  __sSS6appendyySSF(0x7245656c6966202c,0xec0000003d726f72);
  local_1b8 = local_128;
  puVar6 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  uVar3 = uStack_1a8;
  uVar1 = local_1b0;
  puVar7 = &local_e8;
  FUN_10017cd00(uVar5,puVar7);
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  FUN_1001ad794(param_1,uVar5,puVar7,puVar4,1);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_250 = uVar1;
  uStack_248 = uVar3;
  local_240 = (undefined1)local_1e4;
  local_23f = 1;
  local_23c = (undefined4)param_1;
  FUN_1003fb48c(thunk_FUN_10020d3f4,auStack_260,0xd0000000000000ac,0x80000001008a30a0,
                0xd000000000000048,0x80000001008a3150,0x2e,0);
  FUN_100006cdc(uVar5,puVar7);
  _swift_bridgeObjectRelease(uVar3);
  _swift_release(puVar4);
  FUN_10020ceb8(&local_e8);
  FUN_10020d1bc(&local_128);
  return;
}

