// rea decompile_all
// name: FUN_10020c808
// address: 0x10020c808
// body: available
// range: 0x10020c808-0x10020cc5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10020c808(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined1 auStack_210 [16];
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined1 local_1f0;
  undefined1 local_1ef;
  undefined4 local_1ec;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined1 local_1a0;
  undefined8 local_198;
  undefined1 local_190;
  undefined7 uStack_18f;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  char local_d8 [16];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  uVar8 = *(ulong *)(param_2 + 0xb8) >> 0x3c;
  local_1c8 = 0;
  if (uVar8 < 0xf) {
    local_1c8 = *(undefined8 *)(param_2 + 0xa8);
  }
  uVar4 = 0;
  if (uVar8 < 0xf) {
    uVar4 = *(undefined8 *)(param_2 + 0xb0);
  }
  uVar1 = 0xc000000000000000;
  if (uVar8 < 0xf) {
    uVar1 = *(ulong *)(param_2 + 0xb8);
  }
  local_1d0 = param_7;
  local_1bc = param_8;
  FUN_100040b80(*(undefined8 *)(param_2 + 0xa8),*(undefined8 *)(param_2 + 0xb0));
  FUN_100006cdc(uVar4,uVar1);
  FUN_100008184(param_4,param_5);
  switchD_10004048c::caseD_6d(0,0,0xf000000000000000);
  local_1a0 = 1;
  _swift_bridgeObjectRelease(0xe000000000000000);
  local_198 = 3;
  local_190 = local_1a0;
  local_188 = 0x6c6f636f746f7270;
  uStack_180 = 0xee00726f72726520;
  uStack_1d8 = 0xc000000000000000;
  local_1e0 = 0;
  uStack_170 = 0xc000000000000000;
  local_178 = 0;
  uVar4 = CONCAT71(uStack_18f,local_1a0);
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  local_f0 = 0xff;
  local_168 = param_3;
  uStack_160 = param_4;
  local_158 = param_5;
  FUN_10020d1f0(&local_198,&local_e8);
  puVar7 = &DAT_100812f40;
  FUN_100040bb4(&local_150,&DAT_100a7da38,&DAT_100812f40);
  local_e8 = 3;
  builtin_strncpy(local_d8,"protocol error",0xf);
  local_d8[0xf] = -0x12;
  uStack_c0 = uStack_1d8;
  local_c8 = local_1e0;
  local_88 = 5;
  uStack_78 = uStack_1d8;
  local_80 = local_1e0;
  local_1b0 = 0;
  uStack_1a8 = 0xe000000000000000;
  uStack_e0 = uVar4;
  local_b8 = param_3;
  uStack_b0 = param_4;
  local_a8 = param_5;
  __ss11_StringGutsV4growyySiF(0x60);
  __sSS6appendyySSF(0x1000000000000025,0x80000001008a3d50);
  __sSS6appendyySSF(param_6,local_1d0);
  __sSS6appendyySSF(0x1000000000000010,0x80000001008a3d80);
  local_1b8._0_4_ = (undefined4)param_1;
  puVar5 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x64496b736174202c,0xe90000000000003d);
  local_1b8 = CONCAT44(local_1b8._4_4_,(int)param_3);
  puVar5 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x736575716572202c,0xec0000003d644974);
  uVar4 = local_1c8;
  local_1b8 = local_1c8;
  puVar5 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int64VN_100995cc0,PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x7245656c6966202c,0xec0000003d726f72);
  local_1b8 = local_198;
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  uVar3 = uStack_1a8;
  uVar2 = local_1b0;
  puVar6 = &local_e8;
  FUN_10017cd00(uVar4,puVar6);
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  FUN_1001ad794(param_1,uVar4,puVar6,puVar7,1);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_200 = uVar2;
  uStack_1f8 = uVar3;
  local_1f0 = (undefined1)local_1bc;
  local_1ef = 1;
  local_1ec = (undefined4)param_1;
  FUN_1003fb48c(thunk_FUN_10020d3f4,auStack_210,0xd0000000000000ac,0x80000001008a30a0,
                0xd000000000000048,0x80000001008a3150,0x2e,0);
  FUN_100006cdc(uVar4,puVar6);
  _swift_bridgeObjectRelease(uVar3);
  _swift_release(puVar7);
  FUN_10020ceb8(&local_e8);
  FUN_10020d22c(&local_198);
  return;
}

