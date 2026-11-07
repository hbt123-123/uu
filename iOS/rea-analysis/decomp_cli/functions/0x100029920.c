// rea decompile_all
// name: FUN_100029920
// address: 0x100029920
// body: available
// range: 0x100029920-0x100029ca3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100029920(undefined8 param_1,long param_2,uint param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  char *pcVar8;
  long unaff_x21;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong local_60;
  undefined *puStack_58;
  
  lVar4 = 0;
  __sSS10FoundationE8EncodingVMa();
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar4 = (long)&local_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100102d18;
  FUN_10000eb08(&DAT_100102d18,&DAT_1000cf8b8);
  (*(code *)PTR____chkstk_darwin_1000f0278)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar8 = (char *)(lVar4 - extraout_x8_00);
  FUN_100024fe4(pcVar8,param_1,param_2);
  if (unaff_x21 != 0) {
    return;
  }
  if (*pcVar8 != '\x01') {
    puVar6 = (undefined4 *)0x80000001000c4650;
    lVar4 = -0x7ffffffefff3b9d0;
    uVar10 = 0xd000000000000014;
    uVar11 = 0x69;
    if (*(long *)(pcVar8 + 0x30) != 0) {
      puVar6 = *(undefined4 **)(pcVar8 + 0x40);
      lVar4 = *(long *)(pcVar8 + 0x30);
      uVar10 = *(undefined8 *)(pcVar8 + 0x28);
      uVar11 = *(undefined8 *)(pcVar8 + 0x20);
    }
    FUN_10002c918();
    FUN_100022760(uVar11,uVar10,lVar4,param_3 & 1);
    _swift_bridgeObjectRelease(lVar4);
    _swift_bridgeObjectRelease();
LAB_100029b1c:
    FUN_1000607a4();
    uVar2 = *puVar6;
    FUN_10002c948();
    _swift_allocError(&DAT_1000f78f0,puVar6,0,0);
    *puVar6 = uVar2;
    _swift_willThrow();
    FUN_10001fc18(pcVar8,&DAT_100102d18,&DAT_1000cf8b8);
    return;
  }
  lVar9 = *(long *)(pcVar8 + 0x18);
  if (lVar9 == 0) {
    puVar6 = (undefined4 *)0x69;
    FUN_100022760(0x69,0xd000000000000014,0x80000001000c4630,param_3 & 1);
    goto LAB_100029b1c;
  }
  if ((param_3 & 1) == 0) {
    uVar10 = *(undefined8 *)(pcVar8 + 0x10);
    uVar11 = *(undefined8 *)(pcVar8 + 8);
    local_60 = 0;
    puStack_58 = (undefined *)0xe000000000000000;
    _swift_bridgeObjectRetain(lVar9);
    __sSS6appendyySSF(0x3a65636e616c6142,0xe900000000000020);
    __sSd5write2toyxz_ts16TextOutputStreamRzlF
              (uVar11,&local_60,PTR___ss26DefaultStringInterpolationVN_1000f05a8,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000f05b8);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    __sSS6appendyySSF(uVar10,lVar9);
    puVar5 = puStack_58;
    uVar3 = local_60;
    uVar1 = local_60 & 0xffffffffffff;
    if (((ulong)puStack_58 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)puStack_58 >> 0x38 & 0xf;
    }
    puVar7 = puStack_58;
    if (uVar1 != 0) {
      puVar7 = &DAT_100102bd0;
      FUN_10000eb08(&DAT_100102bd0,&DAT_1000cf760);
      _swift_allocObject();
      *(undefined8 *)(puVar7 + 0x18) = 2;
      *(undefined8 *)(puVar7 + 0x10) = 1;
      *(undefined **)(puVar7 + 0x38) = PTR___sSSN_1000f02f8;
      *(ulong *)(puVar7 + 0x20) = uVar3;
      *(undefined **)(puVar7 + 0x28) = puVar5;
      __ss5print_9separator10terminatoryypd_S2StF();
      _swift_bridgeObjectRelease(lVar9);
      goto LAB_100029c64;
    }
  }
  else {
    puVar7 = &DAT_100102bd0;
    FUN_10000eb08(&DAT_100102bd0,&DAT_1000cf760);
    _swift_allocObject();
    *(undefined8 *)(puVar7 + 0x18) = 2;
    *(undefined8 *)(puVar7 + 0x10) = 1;
    _swift_bridgeObjectRetain(lVar9);
    __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar4);
    __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(param_1,param_2,lVar4);
    *(undefined **)(puVar7 + 0x38) = PTR___sSSN_1000f02f8;
    uVar10 = 0;
    if (param_2 != 0) {
      uVar10 = param_1;
    }
    lVar4 = -0x2000000000000000;
    if (param_2 != 0) {
      lVar4 = param_2;
    }
    *(undefined8 *)(puVar7 + 0x20) = uVar10;
    *(long *)(puVar7 + 0x28) = lVar4;
    __ss5print_9separator10terminatoryypd_S2StF
              (puVar7,0x20,0xe100000000000000,10,0xe100000000000000);
  }
  _swift_bridgeObjectRelease(lVar9);
LAB_100029c64:
  _swift_bridgeObjectRelease(puVar7);
  FUN_10001fc18(pcVar8,&DAT_100102d18,&DAT_1000cf8b8);
  return;
}

