// rea decompile_all
// name: FUN_10002ab44
// address: 0x10002ab44
// body: available
// range: 0x10002ab44-0x10002af37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10002ab44(undefined8 param_1,long param_2,uint param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  char *pcVar9;
  long unaff_x21;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong local_70;
  undefined *local_68;
  char acStack_58 [8];
  
  lVar4 = 0;
  __sSS10FoundationE8EncodingVMa();
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar4 = (long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100102d68;
  FUN_10000eb08(&DAT_100102d68,&DAT_1000cf8f0);
  (*(code *)PTR____chkstk_darwin_1000f0278)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar9 = (char *)(lVar4 - extraout_x8_00);
  FUN_1000264b4(pcVar9,param_1,param_2);
  if (unaff_x21 != 0) {
    return;
  }
  if (*pcVar9 != '\x01') {
    puVar6 = (undefined4 *)0x80000001000c4650;
    lVar4 = -0x7ffffffefff3b9d0;
    uVar10 = 0xd000000000000014;
    uVar11 = 0x69;
    if (*(long *)(pcVar9 + 0x48) != 0) {
      puVar6 = *(undefined4 **)(pcVar9 + 0x58);
      lVar4 = *(long *)(pcVar9 + 0x48);
      uVar10 = *(undefined8 *)(pcVar9 + 0x40);
      uVar11 = *(undefined8 *)(pcVar9 + 0x38);
    }
    FUN_10002c918();
    FUN_100022760(uVar11,uVar10,lVar4,param_3 & 1);
    _swift_bridgeObjectRelease(lVar4);
    _swift_bridgeObjectRelease();
LAB_10002ad58:
    FUN_1000607a4();
    uVar2 = *puVar6;
    FUN_10002c948();
    _swift_allocError(&DAT_1000f78f0,puVar6,0,0);
    *puVar6 = uVar2;
    _swift_willThrow();
    FUN_10001fc18(pcVar9,&DAT_100102d68,&DAT_1000cf8f0);
    return;
  }
  lVar12 = *(long *)(pcVar9 + 0x10);
  if (lVar12 == 0) {
    puVar6 = (undefined4 *)0x69;
    FUN_100022760(0x69,0xd000000000000014,0x80000001000c4630,param_3 & 1);
    goto LAB_10002ad58;
  }
  uVar11 = *(undefined8 *)(pcVar9 + 0x20);
  uVar10 = *(undefined8 *)(pcVar9 + 0x30);
  if ((param_3 & 1) == 0) {
    uVar13 = *(undefined8 *)(pcVar9 + 8);
    uVar14 = *(undefined8 *)(pcVar9 + 0x18);
    uVar15 = *(undefined8 *)(pcVar9 + 0x28);
    local_70 = 0;
    local_68 = (undefined *)0xe000000000000000;
    FUN_10002ccb8(uVar13,lVar12,uVar14,uVar11,uVar15,uVar10);
    __ss11_StringGutsV4growyySiF(0x22);
    _swift_bridgeObjectRelease(local_68);
    local_70 = 0xd000000000000012;
    local_68 = (undefined *)0x80000001000c5950;
    uVar8 = uVar11;
    FUN_100007268(uVar14,uVar11,uVar15,uVar10);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar8);
    __sSS6appendyySSF(0x6974617265704f0a,0xec000000203a6e6f);
    __sSS6appendyySSF(uVar13,lVar12);
    puVar5 = local_68;
    uVar3 = local_70;
    uVar1 = local_70 & 0xffffffffffff;
    if (((ulong)local_68 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)local_68 >> 0x38 & 0xf;
    }
    puVar7 = local_68;
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
      _swift_bridgeObjectRelease(lVar12);
      goto LAB_10002aee8;
    }
  }
  else {
    puVar7 = &DAT_100102bd0;
    FUN_10000eb08(&DAT_100102bd0,&DAT_1000cf760);
    _swift_allocObject();
    *(undefined8 *)(puVar7 + 0x18) = 2;
    *(undefined8 *)(puVar7 + 0x10) = 1;
    _swift_bridgeObjectRetain(uVar10);
    _swift_bridgeObjectRetain(lVar12);
    _swift_bridgeObjectRetain(uVar11);
    __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar4);
    __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(param_1,param_2,lVar4);
    *(undefined **)(puVar7 + 0x38) = PTR___sSSN_1000f02f8;
    uVar8 = 0;
    if (param_2 != 0) {
      uVar8 = param_1;
    }
    lVar4 = -0x2000000000000000;
    if (param_2 != 0) {
      lVar4 = param_2;
    }
    *(undefined8 *)(puVar7 + 0x20) = uVar8;
    *(long *)(puVar7 + 0x28) = lVar4;
    __ss5print_9separator10terminatoryypd_S2StF
              (puVar7,0x20,0xe100000000000000,10,0xe100000000000000);
  }
  _swift_bridgeObjectRelease(lVar12);
LAB_10002aee8:
  _swift_bridgeObjectRelease(puVar7);
  _swift_bridgeObjectRelease(uVar11);
  _swift_bridgeObjectRelease(uVar10);
  FUN_10001fc18(pcVar9,&DAT_100102d68,&DAT_1000cf8f0);
  return;
}

