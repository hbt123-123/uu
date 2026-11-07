// rea decompile_all
// name: FUN_100027044
// address: 0x100027044
// body: available
// range: 0x100027044-0x1000273af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100027044(undefined8 param_1,long param_2,uint param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  char *pcVar6;
  undefined *puVar7;
  long unaff_x21;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  
  lVar3 = 0;
  __sSS10FoundationE8EncodingVMa();
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar11 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_100102cc0;
  FUN_10000eb08(&DAT_100102cc0,&DAT_1000cf788);
  (*(code *)PTR____chkstk_darwin_1000f0278)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar6 = puVar11 + -extraout_x8_00;
  FUN_100022d34(pcVar6,param_1,param_2);
  if (unaff_x21 == 0) {
    if (*pcVar6 == '\x01') {
      puVar7 = *(undefined **)(pcVar6 + 0x10);
      if (puVar7 != (undefined *)0x0) {
        uVar8 = *(undefined8 *)(pcVar6 + 0x20);
        if ((param_3 & 1) == 0) {
          uVar10 = *(ulong *)(pcVar6 + 8);
          uVar9 = *(undefined8 *)(pcVar6 + 0x18);
          uVar1 = uVar10 & 0xffffffffffff;
          if (((ulong)puVar7 & 0x2000000000000000) != 0) {
            uVar1 = (ulong)puVar7 >> 0x38 & 0xf;
          }
          if (uVar1 == 0) {
            FUN_10002ccf4(uVar10,puVar7,uVar9,uVar8);
            _swift_bridgeObjectRelease(uVar8);
          }
          else {
            puVar5 = &DAT_100102bd0;
            FUN_10000eb08(&DAT_100102bd0,&DAT_1000cf760);
            _swift_allocObject();
            *(undefined8 *)(puVar5 + 0x18) = 2;
            *(undefined8 *)(puVar5 + 0x10) = 1;
            *(undefined **)(puVar5 + 0x38) = PTR___sSSN_1000f02f8;
            *(ulong *)(puVar5 + 0x20) = uVar10;
            *(undefined **)(puVar5 + 0x28) = puVar7;
            FUN_10002ccf4(uVar10,puVar7,uVar9,uVar8);
            _swift_bridgeObjectRetain(puVar7);
            __ss5print_9separator10terminatoryypd_S2StF
                      (puVar5,0x20,0xe100000000000000,10,0xe100000000000000);
            _swift_bridgeObjectRelease(uVar8);
            _swift_bridgeObjectRelease(puVar7);
            puVar7 = puVar5;
          }
        }
        else {
          puVar5 = &DAT_100102bd0;
          FUN_10000eb08(&DAT_100102bd0,&DAT_1000cf760);
          _swift_allocObject();
          *(undefined8 *)(puVar5 + 0x18) = 2;
          *(undefined8 *)(puVar5 + 0x10) = 1;
          _swift_bridgeObjectRetain(puVar7);
          _swift_bridgeObjectRetain(uVar8);
          __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar11);
          __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(param_1,param_2,puVar11)
          ;
          *(undefined **)(puVar5 + 0x38) = PTR___sSSN_1000f02f8;
          uVar9 = 0;
          if (param_2 != 0) {
            uVar9 = param_1;
          }
          lVar3 = -0x2000000000000000;
          if (param_2 != 0) {
            lVar3 = param_2;
          }
          *(undefined8 *)(puVar5 + 0x20) = uVar9;
          *(long *)(puVar5 + 0x28) = lVar3;
          __ss5print_9separator10terminatoryypd_S2StF
                    (puVar5,0x20,0xe100000000000000,10,0xe100000000000000);
          _swift_bridgeObjectRelease(uVar8);
          _swift_bridgeObjectRelease(puVar7);
          puVar7 = puVar5;
        }
        _swift_bridgeObjectRelease(puVar7);
        FUN_10001fc18(pcVar6,&DAT_100102cc0,&DAT_1000cf788);
        return;
      }
      puVar4 = (undefined4 *)0x69;
      FUN_100022760(0x69,0xd000000000000014,0x80000001000c4630,param_3 & 1);
    }
    else {
      puVar4 = (undefined4 *)0x80000001000c4650;
      lVar3 = -0x7ffffffefff3b9d0;
      uVar8 = 0xd000000000000014;
      uVar9 = 0x69;
      if (*(long *)(pcVar6 + 0x38) != 0) {
        puVar4 = *(undefined4 **)(pcVar6 + 0x48);
        lVar3 = *(long *)(pcVar6 + 0x38);
        uVar8 = *(undefined8 *)(pcVar6 + 0x30);
        uVar9 = *(undefined8 *)(pcVar6 + 0x28);
      }
      FUN_10002c918();
      FUN_100022760(uVar9,uVar8,lVar3,param_3 & 1);
      _swift_bridgeObjectRelease(lVar3);
      _swift_bridgeObjectRelease();
    }
    FUN_1000607a4();
    uVar2 = *puVar4;
    FUN_10002c948();
    _swift_allocError(&DAT_1000f78f0,puVar4,0,0);
    *puVar4 = uVar2;
    _swift_willThrow();
    FUN_10001fc18(pcVar6,&DAT_100102cc0,&DAT_1000cf788);
  }
  return;
}

