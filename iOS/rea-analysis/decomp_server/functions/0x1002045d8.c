// rea decompile_all
// name: FUN_1002045d8
// address: 0x1002045d8
// body: available
// range: 0x1002045d8-0x100204a6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002045d8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  uint uVar10;
  undefined1 auStack_240 [16];
  undefined8 local_230;
  undefined8 uStack_228;
  undefined1 local_220;
  undefined1 local_21f;
  undefined4 local_21c;
  undefined4 local_204;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [16];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 local_80;
  
  uVar4 = 0;
  local_204 = param_4;
  FUN_100401b14();
  uStack_1a8 = param_3[1];
  local_1b0 = *param_3;
  uStack_1d8 = param_3[3];
  local_1e0 = param_3[2];
  uStack_1b8 = param_3[5];
  local_1c0 = param_3[4];
  uStack_1e8 = param_3[7];
  local_1f0 = param_3[6];
  uStack_1c8 = param_3[9];
  local_1d0 = param_3[8];
  uStack_1f8 = param_3[0xb];
  local_200 = param_3[10];
  FUN_1003fb48c(FUN_10020d37c,auStack_1a0,0xd0000000000000a6,0x80000001008a2d40,0xd00000000000003d,
                0x80000001008a3da0,0x336,0);
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  local_80 = 0xff;
  FUN_10020d3b8(param_3,&local_158);
  puVar9 = &DAT_100812f40;
  FUN_100040bb4(&local_e0,&DAT_100a7da38,&DAT_100812f40);
  uStack_140 = uStack_1d8;
  local_148 = local_1e0;
  uStack_150 = uStack_1a8;
  local_158 = local_1b0;
  uStack_120 = uStack_1e8;
  local_128 = local_1f0;
  uStack_130 = uStack_1b8;
  local_138 = local_1c0;
  uStack_110 = uStack_1c8;
  local_118 = local_1d0;
  uStack_100 = uStack_1f8;
  uStack_108 = local_200;
  local_f8 = 6;
  uStack_e8 = 0xc000000000000000;
  local_f0 = 0;
  __ss11_StringGutsV4growyySiF(0x74);
  __sSS6appendyySSF(0x1000000000000035,0x80000001008a3de0);
  puVar5 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x736575716572202c,0xec0000003d644974);
  puVar5 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int64VN_100995cc0,PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x7245656c6966202c,0xec0000003d726f72);
  puVar7 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  puVar5 = PTR___sSiN_100995968;
  puVar6 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x656972746e65202c,0xef3d746e756f4373);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar5,puVar7);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar7);
  __sSS6appendyySSF(0x746144726964202c,0xee003d657a695361);
  lVar1 = param_3[5];
  uVar2 = (uint)((ulong)param_3[6] >> 0x20);
  uVar10 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if ((uVar10 != 0) && (SBORROW4((int)((ulong)lVar1 >> 0x20),(int)lVar1))) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100204a70);
      (*pcVar3)();
    }
  }
  else if ((uVar10 == 2) && (SBORROW8(*(long *)(lVar1 + 0x18),*(long *)(lVar1 + 0x10)))) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1002048e4);
    (*pcVar3)();
  }
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  local_1b0 = uVar4;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  puVar8 = &local_158;
  FUN_10017cd00(param_2,puVar8);
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  FUN_1001ad794(param_1,param_2,puVar8,puVar9,1);
  (*(code *)PTR____chkstk_darwin_100995498)(0);
  local_230 = 0;
  uStack_228 = 0xe000000000000000;
  local_220 = (undefined1)local_204;
  local_21f = 1;
  local_21c = (undefined4)param_1;
  FUN_1003fb48c(thunk_FUN_10020d3f4,auStack_240,0xd0000000000000ac,0x80000001008a30a0,
                0xd000000000000048,0x80000001008a3150,0x2e,0);
  FUN_100006cdc(param_2,puVar8);
  _swift_bridgeObjectRelease(0xe000000000000000);
  _swift_release(puVar9);
  FUN_10020ceb8(&local_158);
  return;
}

