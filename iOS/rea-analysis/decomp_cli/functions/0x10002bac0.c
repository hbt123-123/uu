// rea decompile_all
// name: FUN_10002bac0
// address: 0x10002bac0
// body: available
// range: 0x10002bac0-0x10002be23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10002bac0(undefined8 param_1,long param_2,uint param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  char *pcVar9;
  long unaff_x21;
  long lVar10;
  undefined8 uVar11;
  ulong local_60;
  undefined *local_58;
  char acStack_48 [8];
  
  lVar5 = 0;
  __sSS10FoundationE8EncodingVMa();
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar5 = (long)&local_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100102e38;
  FUN_10000eb08(&DAT_100102e38,&DAT_1000cf980);
  (*(code *)PTR____chkstk_darwin_1000f0278)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar9 = (char *)(lVar5 - extraout_x8_00);
  FUN_100026954(pcVar9,param_1,param_2);
  if (unaff_x21 != 0) {
    return;
  }
  if (*pcVar9 != '\x01') {
    puVar7 = (undefined4 *)0x80000001000c4650;
    lVar5 = -0x7ffffffefff3b9d0;
    uVar11 = 0xd000000000000014;
    uVar3 = 0x69;
    if (*(long *)(pcVar9 + 0x28) != 0) {
      puVar7 = *(undefined4 **)(pcVar9 + 0x38);
      lVar5 = *(long *)(pcVar9 + 0x28);
      uVar11 = *(undefined8 *)(pcVar9 + 0x20);
      uVar3 = *(undefined8 *)(pcVar9 + 0x18);
    }
    FUN_10002c918();
    FUN_100022760(uVar3,uVar11,lVar5,param_3 & 1);
    _swift_bridgeObjectRelease(lVar5);
    _swift_bridgeObjectRelease();
LAB_10002bcb8:
    FUN_1000607a4();
    uVar2 = *puVar7;
    FUN_10002c948();
    _swift_allocError(&DAT_1000f78f0,puVar7,0,0);
    *puVar7 = uVar2;
    _swift_willThrow();
    FUN_10001fc18(pcVar9,&DAT_100102e38,&DAT_1000cf980);
    return;
  }
  lVar10 = *(long *)(pcVar9 + 0x10);
  if (lVar10 == 0) {
    puVar7 = (undefined4 *)0x69;
    FUN_100022760(0x69,0xd000000000000014,0x80000001000c4630,param_3 & 1);
    goto LAB_10002bcb8;
  }
  if ((param_3 & 1) == 0) {
    uVar11 = *(undefined8 *)(pcVar9 + 8);
    local_60 = 0;
    local_58 = (undefined *)0xe000000000000000;
    _swift_bridgeObjectRetain(lVar10);
    __ss11_StringGutsV4growyySiF(0x12);
    _swift_bridgeObjectRelease(local_58);
    local_60 = 0xd000000000000010;
    local_58 = (undefined *)0x80000001000c5990;
    __sSS6appendyySSF(uVar11,lVar10);
    puVar6 = local_58;
    uVar4 = local_60;
    uVar1 = local_60 & 0xffffffffffff;
    if (((ulong)local_58 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)local_58 >> 0x38 & 0xf;
    }
    puVar8 = local_58;
    if (uVar1 != 0) {
      puVar8 = &DAT_100102bd0;
      FUN_10000eb08(&DAT_100102bd0,&DAT_1000cf760);
      _swift_allocObject();
      *(undefined8 *)(puVar8 + 0x18) = 2;
      *(undefined8 *)(puVar8 + 0x10) = 1;
      *(undefined **)(puVar8 + 0x38) = PTR___sSSN_1000f02f8;
      *(ulong *)(puVar8 + 0x20) = uVar4;
      *(undefined **)(puVar8 + 0x28) = puVar6;
      __ss5print_9separator10terminatoryypd_S2StF();
      _swift_bridgeObjectRelease(lVar10);
      goto LAB_10002bde8;
    }
  }
  else {
    puVar8 = &DAT_100102bd0;
    FUN_10000eb08(&DAT_100102bd0,&DAT_1000cf760);
    _swift_allocObject();
    *(undefined8 *)(puVar8 + 0x18) = 2;
    *(undefined8 *)(puVar8 + 0x10) = 1;
    _swift_bridgeObjectRetain(lVar10);
    __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar5);
    __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(param_1,param_2,lVar5);
    *(undefined **)(puVar8 + 0x38) = PTR___sSSN_1000f02f8;
    uVar11 = 0;
    if (param_2 != 0) {
      uVar11 = param_1;
    }
    lVar5 = -0x2000000000000000;
    if (param_2 != 0) {
      lVar5 = param_2;
    }
    *(undefined8 *)(puVar8 + 0x20) = uVar11;
    *(long *)(puVar8 + 0x28) = lVar5;
    __ss5print_9separator10terminatoryypd_S2StF
              (puVar8,0x20,0xe100000000000000,10,0xe100000000000000);
  }
  _swift_bridgeObjectRelease(lVar10);
LAB_10002bde8:
  _swift_bridgeObjectRelease(puVar8);
  FUN_10001fc18(pcVar9,&DAT_100102e38,&DAT_1000cf980);
  return;
}

