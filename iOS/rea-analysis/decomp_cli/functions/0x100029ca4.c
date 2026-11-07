// rea decompile_all
// name: FUN_100029ca4
// address: 0x100029ca4
// body: available
// range: 0x100029ca4-0x100029fab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100029ca4(undefined8 param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  char *pcVar8;
  long unaff_x21;
  undefined1 *puVar9;
  
  lVar5 = 0;
  __sSS10FoundationE8EncodingVMa();
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puVar9 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100102e68;
  FUN_10000eb08(&DAT_100102e68,&DAT_1000cf9a0);
  (*(code *)PTR____chkstk_darwin_1000f0278)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar8 = puVar9 + -extraout_x8_00;
  FUN_100025234(pcVar8,param_1,param_2);
  if (unaff_x21 == 0) {
    if (*pcVar8 == '\x01') {
      if (pcVar8[1] != 2) {
        if ((param_3 & 1) == 0) {
          bVar4 = (pcVar8[1] & 1U) == 0;
          uVar1 = 0x6520747369737341;
          if (bVar4) {
            uVar1 = 0x6420747369737341;
          }
          uVar2 = 0xee0064656c62616e;
          if (bVar4) {
            uVar2 = 0xef64656c62617369;
          }
          puVar6 = &DAT_100102bd0;
          FUN_10000eb08(&DAT_100102bd0,&DAT_1000cf760);
          _swift_allocObject();
          *(undefined8 *)(puVar6 + 0x18) = 2;
          *(undefined8 *)(puVar6 + 0x10) = 1;
          *(undefined **)(puVar6 + 0x38) = PTR___sSSN_1000f02f8;
          *(undefined8 *)(puVar6 + 0x20) = uVar1;
          *(undefined8 *)(puVar6 + 0x28) = uVar2;
        }
        else {
          puVar6 = &DAT_100102bd0;
          FUN_10000eb08(&DAT_100102bd0,&DAT_1000cf760);
          _swift_allocObject();
          *(undefined8 *)(puVar6 + 0x18) = 2;
          *(undefined8 *)(puVar6 + 0x10) = 1;
          __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar9);
          __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(param_1,param_2,puVar9);
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
        __ss5print_9separator10terminatoryypd_S2StF();
        _swift_bridgeObjectRelease(puVar6);
        FUN_10001fc18(pcVar8,&DAT_100102e68,&DAT_1000cf9a0);
        return;
      }
      puVar7 = (undefined4 *)0x69;
      FUN_100022760(0x69,0xd000000000000014,0x80000001000c4630,param_3 & 1);
    }
    else {
      puVar7 = (undefined4 *)0x80000001000c4650;
      lVar5 = -0x7ffffffefff3b9d0;
      uVar1 = 0xd000000000000014;
      uVar2 = 0x69;
      if (*(long *)(pcVar8 + 0x18) != 0) {
        puVar7 = *(undefined4 **)(pcVar8 + 0x28);
        lVar5 = *(long *)(pcVar8 + 0x18);
        uVar1 = *(undefined8 *)(pcVar8 + 0x10);
        uVar2 = *(undefined8 *)(pcVar8 + 8);
      }
      FUN_10002c918();
      FUN_100022760(uVar2,uVar1,lVar5,param_3 & 1);
      _swift_bridgeObjectRelease(lVar5);
      _swift_bridgeObjectRelease();
    }
    FUN_1000607a4();
    uVar3 = *puVar7;
    FUN_10002c948();
    _swift_allocError(&DAT_1000f78f0,puVar7,0,0);
    *puVar7 = uVar3;
    _swift_willThrow();
    FUN_10001fc18(pcVar8,&DAT_100102e68,&DAT_1000cf9a0);
  }
  return;
}

