// rea decompile_all
// name: FUN_10002a850
// address: 0x10002a850
// body: available
// range: 0x10002a850-0x10002ab43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10002a850(undefined8 param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  char *pcVar8;
  ulong uVar9;
  long unaff_x21;
  ulong uVar10;
  undefined1 *puVar11;
  ulong uStack_48;
  
  lVar5 = 0;
  __sSS10FoundationE8EncodingVMa();
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puVar11 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100102e50;
  FUN_10000eb08(&DAT_100102e50,&DAT_1000cf990);
  (*(code *)PTR____chkstk_darwin_1000f0278)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar8 = puVar11 + -extraout_x8_00;
  FUN_100026264(pcVar8,param_1,param_2);
  if (unaff_x21 != 0) {
    return;
  }
  if (*pcVar8 != '\x01') {
    puVar7 = (undefined4 *)0x80000001000c4650;
    lVar5 = -0x7ffffffefff3b9d0;
    uVar1 = 0xd000000000000014;
    uVar4 = 0x69;
    if (*(long *)(pcVar8 + 0x30) != 0) {
      puVar7 = *(undefined4 **)(pcVar8 + 0x40);
      lVar5 = *(long *)(pcVar8 + 0x30);
      uVar1 = *(undefined8 *)(pcVar8 + 0x28);
      uVar4 = *(undefined8 *)(pcVar8 + 0x20);
    }
    FUN_10002c918();
    FUN_100022760(uVar4,uVar1,lVar5,param_3 & 1);
    _swift_bridgeObjectRelease(lVar5);
    _swift_bridgeObjectRelease();
LAB_10002aa2c:
    FUN_1000607a4();
    uVar3 = *puVar7;
    FUN_10002c948();
    _swift_allocError(&DAT_1000f78f0,puVar7,0,0);
    *puVar7 = uVar3;
    _swift_willThrow();
    FUN_10001fc18(pcVar8,&DAT_100102e50,&DAT_1000cf990);
    return;
  }
  uVar9 = *(ulong *)(pcVar8 + 0x10);
  if (uVar9 == 0) {
    puVar7 = (undefined4 *)0x69;
    FUN_100022760(0x69,0xd000000000000014,0x80000001000c4630,param_3 & 1);
    goto LAB_10002aa2c;
  }
  if ((param_3 & 1) == 0) {
    uVar10 = *(ulong *)(pcVar8 + 8);
    uVar2 = uVar10 & 0xffffffffffff;
    if ((uVar9 & 0x2000000000000000) != 0) {
      uVar2 = uVar9 >> 0x38 & 0xf;
    }
    if (uVar2 == 0) goto LAB_10002ab0c;
    puVar6 = &DAT_100102bd0;
    FUN_10000eb08(&DAT_100102bd0,&DAT_1000cf760);
    _swift_allocObject();
    *(undefined8 *)(puVar6 + 0x18) = 2;
    *(undefined8 *)(puVar6 + 0x10) = 1;
    *(undefined **)(puVar6 + 0x38) = PTR___sSSN_1000f02f8;
    *(ulong *)(puVar6 + 0x20) = uVar10;
    *(ulong *)(puVar6 + 0x28) = uVar9;
    _swift_bridgeObjectRetain_n(uVar9,2);
  }
  else {
    puVar6 = &DAT_100102bd0;
    FUN_10000eb08(&DAT_100102bd0,&DAT_1000cf760);
    _swift_allocObject();
    *(undefined8 *)(puVar6 + 0x18) = 2;
    *(undefined8 *)(puVar6 + 0x10) = 1;
    _swift_bridgeObjectRetain(uVar9);
    __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar11);
    __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(param_1,param_2,puVar11);
    *(undefined **)(puVar6 + 0x38) = PTR___sSSN_1000f02f8;
    uVar1 = 0;
    if (param_2 != 0) {
      uVar1 = param_1;
    }
    lVar5 = -0x2000000000000000;
    if (param_2 != 0) {
      lVar5 = param_2;
    }
    *(undefined8 *)(puVar6 + 0x20) = uVar1;
    *(long *)(puVar6 + 0x28) = lVar5;
  }
  __ss5print_9separator10terminatoryypd_S2StF(puVar6,0x20,0xe100000000000000,10,0xe100000000000000);
  _swift_bridgeObjectRelease(uVar9);
  _swift_bridgeObjectRelease(puVar6);
LAB_10002ab0c:
  FUN_10001fc18(pcVar8,&DAT_100102e50,&DAT_1000cf990);
  return;
}

