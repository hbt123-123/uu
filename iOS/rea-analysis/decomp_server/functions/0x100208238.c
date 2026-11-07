// rea decompile_all
// name: FUN_100208238
// address: 0x100208238
// body: available
// range: 0x100208238-0x1002089d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100208238(undefined4 param_1,long param_2,ulong *param_3,undefined1 param_4)

{
  ulong uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 auStack_230 [16];
  undefined4 local_220;
  undefined1 local_21c;
  ulong local_218;
  ulong local_210;
  ulong local_208;
  ulong local_200;
  ulong local_1f8;
  undefined1 local_1f0;
  undefined1 local_1ef;
  undefined1 auStack_1e0 [8];
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined1 *local_1c0;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  puVar2 = auStack_1e0;
  uVar12 = *(ulong *)(param_2 + 0xb8) >> 0x3c;
  uVar7 = 0;
  if (uVar12 < 0xf) {
    uVar7 = *(ulong *)(param_2 + 0xa8);
  }
  uVar4 = 0;
  if (uVar12 < 0xf) {
    uVar4 = *(undefined8 *)(param_2 + 0xb0);
  }
  uVar1 = 0xc000000000000000;
  if (uVar12 < 0xf) {
    uVar1 = *(ulong *)(param_2 + 0xb8);
  }
  FUN_100040b80(*(ulong *)(param_2 + 0xa8),*(undefined8 *)(param_2 + 0xb0));
  FUN_100006cdc(uVar4,uVar1);
  uVar12 = *param_3;
  uVar1 = param_3[1];
  _swift_bridgeObjectRetain(uVar1);
  uVar3 = uVar12;
  uVar13 = uVar1;
  FUN_10020c058();
  uVar14 = uVar12;
  uVar16 = uVar1;
  if ((uVar3 & 1) == 0) {
LAB_1002083b8:
    uVar13 = param_3[2];
    _swift_bridgeObjectRetain(uVar16);
    puVar5 = (undefined1 *)uVar14;
    uVar3 = uVar16;
    FUN_10017d2c8(uVar14,uVar16,uVar13);
    FUN_10020ce68(uVar14,uVar16,0);
    if ((uVar3 & 1) == 0) {
      FUN_1001820d0(&local_108,uVar14,uVar16,uVar13,puVar5);
      FUN_10020d2f4(puVar5,0);
      local_1c0 = (undefined1 *)0x1;
      goto LAB_100208574;
    }
  }
  else {
    FUN_10020b8f4();
    if (uVar13 == 0) {
      FUN_100401b14(0);
      FUN_1003fb4ec(FUN_100209928,0,0xd0000000000000a6,0x80000001008a2d40,0xd00000000000001c,
                    0x80000001008a32a0,0x146,0);
      uVar15 = 4;
    }
    else {
      uVar15 = uVar3;
      FUN_10020c1a8();
      if (((uint)uVar15 >> 8 & 1) == 0) {
        uVar4 = 0;
        FUN_100401b14();
        local_1c8 = uVar4;
        local_1c0 = auStack_1e0;
        (*(code *)PTR____chkstk_darwin_100995498)();
        local_220 = 0;
        local_21c = 1;
        local_218 = uVar7;
        local_210 = uVar12;
        local_208 = uVar1;
        local_200 = uVar3;
        local_1f8 = uVar13;
        local_1f0 = param_4;
        _swift_bridgeObjectRetain(uVar13);
        FUN_1003fb48c(thunk_FUN_10020d330,auStack_230,0xd0000000000000a6,0x80000001008a2d40,
                      0xd000000000000040,0x80000001008a32c0,0x135,0);
        _swift_bridgeObjectRelease(uVar1);
        _swift_bridgeObjectRelease(uVar13);
        puVar2 = local_1c0;
        uVar14 = uVar3;
        uVar16 = uVar13;
        goto LAB_1002083b8;
      }
      _swift_bridgeObjectRelease(uVar13);
    }
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_210 = CONCAT35(local_210._5_3_,0x100000000);
    local_1f0 = (undefined1)uVar15;
    local_208 = uVar7;
    local_200 = uVar12;
    local_1f8 = uVar1;
    local_1ef = param_4;
    local_1c0 = (undefined1 *)uVar15;
    FUN_1003fb4ec(thunk_FUN_10020d300,&local_220,0xd0000000000000a6,0x80000001008a2d40,
                  0xd000000000000040,0x80000001008a32c0,0x138,0);
    uVar13 = param_3[2];
    puVar2 = auStack_1e0;
    puVar5 = local_1c0;
  }
  local_1c0 = puVar5;
  puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_1000cd340(PTR___swiftEmptyArrayStorage_100995ea0);
  FUN_1001820d0(&local_108,uVar14,uVar16,uVar13,puVar6);
  _swift_bridgeObjectRelease(puVar6);
LAB_100208574:
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  local_110 = 0xff;
  _swift_bridgeObjectRetain_n(local_100,2);
  _swift_bridgeObjectRetain(uStack_f8);
  FUN_100008184(local_f0,uStack_e8);
  puVar6 = &DAT_100812f40;
  FUN_100040bb4(&local_170,&DAT_100a7da38,&DAT_100812f40);
  local_e0 = local_108;
  uStack_d8 = local_100;
  local_1d8 = uStack_f8;
  local_1d0 = local_f0;
  local_d0 = uStack_f8;
  uStack_c8 = local_f0;
  local_1c8 = uStack_e8;
  local_c0 = uStack_e8;
  local_80 = 7;
  uStack_70 = 0xc000000000000000;
  local_78 = 0;
  __ss11_StringGutsV4growyySiF(0xbf);
  __sSS6appendyySSF(0x100000000000003e,0x80000001008a3cc0);
  puVar8 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar8);
  uVar4 = 0xed00003d65707954;
  __sSS6appendyySSF(0x746e65696c63202c,0xed00003d65707954);
  FUN_100208dd4();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar4);
  __sSS6appendyySSF(0xd000000000000021,0x80000001008a39c0);
  puVar8 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int64VN_100995cc0,PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar8);
  __sSS6appendyySSF(0x6e696769726f202c,0xef3d687461506c61);
  __sSS6appendyySSF(uVar12,uVar1);
  __sSS6appendyySSF(0x506c61636f6c202c,0xec0000003d687461);
  __sSS6appendyySSF(uVar14,uVar16);
  _swift_bridgeObjectRelease(uVar16);
  __sSS6appendyySSF(0x6e6f70736572202c,0xef3d687461506573);
  __sSS6appendyySSF(local_108,local_100);
  _swift_bridgeObjectRelease(local_100);
  __sSS6appendyySSF(0x4373656d616e202c,0xed00003d746e756f);
  puVar10 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  puVar8 = PTR___sSiN_100995968;
  puVar9 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar9);
  __sSS6appendyySSF(0x7245656c6966202c,0xec0000003d726f72);
  FUN_10017cb14();
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar8,puVar10);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar10);
  puVar11 = &local_e0;
  FUN_10017cd00(uVar7,puVar11);
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  FUN_1001ad794(param_1,uVar7,puVar11,puVar6,1);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  *(undefined8 *)(puVar2 + -0x20) = 0;
  *(undefined8 *)(puVar2 + -0x18) = 0xe000000000000000;
  puVar2[-0x10] = param_4;
  puVar2[-0xf] = 1;
  *(undefined4 *)(puVar2 + -0xc) = param_1;
  FUN_1003fb48c(thunk_FUN_10020d3f4,puVar2 + -0x30,0xd0000000000000ac,0x80000001008a30a0,
                0xd000000000000048,0x80000001008a3150,0x2e,0);
  FUN_100006cdc(uVar7,puVar11);
  _swift_bridgeObjectRelease(0xe000000000000000);
  _swift_release(puVar6);
  FUN_10020ceb8(&local_e0);
  _swift_bridgeObjectRelease(local_1d8);
  _swift_bridgeObjectRelease(local_100);
  FUN_100006cdc(local_1d0,local_1c8);
  return;
}

