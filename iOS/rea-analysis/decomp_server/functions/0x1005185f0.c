// rea decompile_all
// name: FUN_1005185f0
// address: 0x1005185f0
// body: available
// range: 0x1005185f0-0x1005187f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_1005185f0(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x21;
  long lVar7;
  long lVar8;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  byte abStack_a8 [8];
  undefined8 auStack_a0 [2];
  ulong local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  lVar3 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar7 = *(long *)(lVar3 + -8);
  lVar1 = -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)&local_90 + lVar1;
  if (DAT_100aa2690 != -1) {
    _swift_once(&DAT_100aa2690,FUN_1004f664c);
  }
  uStack_78 = 0xc000000000000000;
  local_80 = 0;
  local_70 = DAT_100b39640;
  uVar6 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar6 = param_2 >> 0x38 & 0xf;
  }
  if (uVar6 == 0) {
    _swift_retain();
    _swift_bridgeObjectRelease(param_2);
  }
  else {
    uVar4 = DAT_100b39640;
    local_90 = param_1;
    uStack_88 = param_2;
    _swift_retain();
    __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar8);
    FUN_1004f9a5c();
    uVar6 = 0;
    lVar5 = lVar8;
    __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
              (lVar8,0,PTR___sSSN_1009957f8,uVar4);
    (**(code **)(lVar7 + 8))(lVar8,lVar3);
    _swift_bridgeObjectRelease(param_2);
    if (uVar6 >> 0x3c < 0xf) {
      *(undefined8 *)((long)&uStack_b0 + lVar1) = param_3;
      abStack_a8[lVar1] = (byte)param_4 & 1;
      abStack_a8[lVar1 + 1] = (byte)((ulong)param_4 >> 8) & 1;
      *(undefined8 *)((long)auStack_a0 + lVar1) = param_5;
      *(undefined8 **)((long)auStack_a0 + lVar1 + 8) = &local_80;
      FUN_10012308c(FUN_100518840,auStack_c0 + lVar1,lVar5,uVar6);
      FUN_100006cc8(lVar5,uVar6);
      if (unaff_x21 != 0) {
        FUN_1005187f8(param_5);
        uVar4 = local_70;
        FUN_100006cdc(local_80,uStack_78);
        _swift_release(uVar4);
        return uVar4;
      }
    }
  }
  uVar2 = local_70;
  uVar4 = local_80;
  FUN_100008184(local_80,uStack_78);
  _swift_retain(uVar2);
  FUN_1005187f8(param_5);
  uVar2 = local_70;
  FUN_100006cdc(local_80,uStack_78);
  _swift_release(uVar2);
  return uVar4;
}

