// rea decompile_all
// name: FUN_1000289e8
// address: 0x1000289e8
// body: available
// range: 0x1000289e8-0x100028d3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000289e8(undefined8 param_1,undefined *param_2,uint param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  char *pcVar10;
  long unaff_x21;
  char *pcVar11;
  char acStack_80 [8];
  undefined8 local_78;
  long lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  byte local_58 [8];
  
  lVar5 = 0;
  __sSS10FoundationE8EncodingVMa();
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  pcVar11 = acStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100102f80;
  FUN_10000eb08(&DAT_100102f80,&DAT_1000cfa68);
  (*(code *)PTR____chkstk_darwin_1000f0278)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar10 = pcVar11 + -extraout_x8_00;
  puVar6 = param_2;
  FUN_100024454(pcVar10,param_1);
  if (unaff_x21 != 0) {
    return;
  }
  if (*pcVar10 != '\x01') {
    puVar7 = (undefined4 *)0x80000001000c4650;
    lVar5 = -0x7ffffffefff3b9d0;
    uVar3 = 0xd000000000000014;
    uVar1 = 0x69;
    if (*(long *)(pcVar10 + 0x40) != 0) {
      puVar7 = *(undefined4 **)(pcVar10 + 0x50);
      lVar5 = *(long *)(pcVar10 + 0x40);
      uVar3 = *(undefined8 *)(pcVar10 + 0x38);
      uVar1 = *(undefined8 *)(pcVar10 + 0x30);
    }
    FUN_10002c918();
    FUN_100022760(uVar1,uVar3,lVar5,param_3 & 1);
    _swift_bridgeObjectRelease(lVar5);
    _swift_bridgeObjectRelease();
LAB_100028c04:
    FUN_1000607a4();
    uVar4 = *puVar7;
    FUN_10002c948();
    _swift_allocError(&DAT_1000f78f0,puVar7,0,0);
    *puVar7 = uVar4;
    _swift_willThrow();
    FUN_10001fc18(pcVar10,&DAT_100102f80,&DAT_1000cfa68);
    return;
  }
  lVar5 = *(long *)(pcVar10 + 0x10);
  if (lVar5 == 0) {
    puVar7 = (undefined4 *)0x69;
    FUN_100022760(0x69,0xd000000000000014,0x80000001000c4630,param_3 & 1);
    goto LAB_100028c04;
  }
  local_68 = *(undefined8 *)(pcVar10 + 0x18);
  uVar3 = *(undefined8 *)(pcVar10 + 0x20);
  local_78 = *(undefined8 *)(pcVar10 + 8);
  local_58[0] = pcVar10[0x28] & 1;
  lStack_70 = lVar5;
  uStack_60 = uVar3;
  if ((param_3 & 1) == 0) {
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(lVar5);
    puVar8 = &local_78;
    FUN_10004d050();
    uVar2 = (ulong)puVar8 & 0xffffffffffff;
    if (((ulong)puVar6 & 0x2000000000000000) != 0) {
      uVar2 = (ulong)puVar6 >> 0x38 & 0xf;
    }
    puVar9 = puVar6;
    if (uVar2 != 0) {
      puVar9 = &DAT_100102bd0;
      FUN_10000eb08(&DAT_100102bd0,&DAT_1000cf760);
      _swift_allocObject();
      *(undefined8 *)(puVar9 + 0x18) = 2;
      *(undefined8 *)(puVar9 + 0x10) = 1;
      *(undefined **)(puVar9 + 0x38) = PTR___sSSN_1000f02f8;
      *(undefined8 **)(puVar9 + 0x20) = puVar8;
      *(undefined **)(puVar9 + 0x28) = puVar6;
      __ss5print_9separator10terminatoryypd_S2StF();
      _swift_bridgeObjectRelease(lVar5);
      goto LAB_100028cfc;
    }
  }
  else {
    puVar9 = &DAT_100102bd0;
    FUN_10000eb08(&DAT_100102bd0,&DAT_1000cf760);
    _swift_allocObject();
    *(undefined8 *)(puVar9 + 0x18) = 2;
    *(undefined8 *)(puVar9 + 0x10) = 1;
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(lVar5);
    __sSS10FoundationE8EncodingV4utf8ACvgZ(pcVar11);
    __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(param_1,param_2,pcVar11);
    *(undefined **)(puVar9 + 0x38) = PTR___sSSN_1000f02f8;
    uVar1 = 0;
    if (param_2 != (undefined *)0x0) {
      uVar1 = param_1;
    }
    puVar6 = (undefined *)0xe000000000000000;
    if (param_2 != (undefined *)0x0) {
      puVar6 = param_2;
    }
    *(undefined8 *)(puVar9 + 0x20) = uVar1;
    *(undefined **)(puVar9 + 0x28) = puVar6;
    __ss5print_9separator10terminatoryypd_S2StF
              (puVar9,0x20,0xe100000000000000,10,0xe100000000000000);
  }
  _swift_bridgeObjectRelease(lVar5);
LAB_100028cfc:
  _swift_bridgeObjectRelease(puVar9);
  _swift_bridgeObjectRelease(uVar3);
  FUN_10001fc18(pcVar10,&DAT_100102f80,&DAT_1000cfa68);
  return;
}

