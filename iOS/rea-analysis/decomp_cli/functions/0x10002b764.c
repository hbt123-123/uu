// rea decompile_all
// name: FUN_10002b764
// address: 0x10002b764
// body: available
// range: 0x10002b764-0x10002babf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10002b764(undefined8 param_1,undefined *param_2,uint param_3,long param_4,
                  undefined8 param_5,code *param_6,code *param_7)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x21;
  char *pcVar10;
  char *pcVar11;
  char acStack_90 [8];
  long local_80;
  byte local_78 [8];
  long local_70;
  undefined8 uStack_68;
  
  lVar5 = 0;
  __sSS10FoundationE8EncodingVMa();
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  pcVar11 = acStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = param_4;
  FUN_10000eb08(param_4,param_5);
  (*(code *)PTR____chkstk_darwin_1000f0278)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar10 = pcVar11 + -extraout_x8_00;
  puVar6 = param_2;
  (*param_6)(pcVar10,param_1);
  if (unaff_x21 == 0) {
    local_80 = param_5;
    if (*pcVar10 == '\x01') {
      lVar5 = *(long *)(pcVar10 + 0x10);
      if (lVar5 != 0) {
        uStack_68 = *(undefined8 *)(pcVar10 + 0x18);
        local_78[0] = pcVar10[8] & 1;
        local_70 = lVar5;
        if ((param_3 & 1) == 0) {
          _swift_bridgeObjectRetain(lVar5);
          pbVar8 = local_78;
          (*param_7)();
          uVar2 = (ulong)pbVar8 & 0xffffffffffff;
          if (((ulong)puVar6 & 0x2000000000000000) != 0) {
            uVar2 = (ulong)puVar6 >> 0x38 & 0xf;
          }
          if (uVar2 == 0) {
            _swift_bridgeObjectRelease(lVar5);
          }
          else {
            puVar9 = &DAT_100102bd0;
            FUN_10000eb08(&DAT_100102bd0,&DAT_1000cf760);
            _swift_allocObject();
            *(undefined8 *)(puVar9 + 0x18) = 2;
            *(undefined8 *)(puVar9 + 0x10) = 1;
            *(undefined **)(puVar9 + 0x38) = PTR___sSSN_1000f02f8;
            *(byte **)(puVar9 + 0x20) = pbVar8;
            *(undefined **)(puVar9 + 0x28) = puVar6;
            __ss5print_9separator10terminatoryypd_S2StF();
            _swift_bridgeObjectRelease(lVar5);
            puVar6 = puVar9;
          }
          _swift_bridgeObjectRelease(puVar6);
        }
        else {
          puVar6 = &DAT_100102bd0;
          FUN_10000eb08(&DAT_100102bd0,&DAT_1000cf760);
          _swift_allocObject();
          *(undefined8 *)(puVar6 + 0x18) = 2;
          *(undefined8 *)(puVar6 + 0x10) = 1;
          _swift_bridgeObjectRetain(lVar5);
          __sSS10FoundationE8EncodingV4utf8ACvgZ(pcVar11);
          __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(param_1,param_2,pcVar11)
          ;
          *(undefined **)(puVar6 + 0x38) = PTR___sSSN_1000f02f8;
          uVar1 = 0;
          if (param_2 != (undefined *)0x0) {
            uVar1 = param_1;
          }
          puVar9 = (undefined *)0xe000000000000000;
          if (param_2 != (undefined *)0x0) {
            puVar9 = param_2;
          }
          *(undefined8 *)(puVar6 + 0x20) = uVar1;
          *(undefined **)(puVar6 + 0x28) = puVar9;
          __ss5print_9separator10terminatoryypd_S2StF
                    (puVar6,0x20,0xe100000000000000,10,0xe100000000000000);
          _swift_bridgeObjectRelease(lVar5);
          _swift_bridgeObjectRelease(puVar6);
        }
        FUN_10001fc18(pcVar10,param_4,local_80);
        return;
      }
      puVar7 = (undefined4 *)0x69;
      FUN_100022760(0x69,0xd000000000000014,0x80000001000c4630,param_3 & 1);
    }
    else {
      puVar7 = (undefined4 *)0x80000001000c4650;
      lVar5 = -0x7ffffffefff3b9d0;
      uVar1 = 0xd000000000000014;
      uVar4 = 0x69;
      if (*(long *)(pcVar10 + 0x30) != 0) {
        puVar7 = *(undefined4 **)(pcVar10 + 0x40);
        lVar5 = *(long *)(pcVar10 + 0x30);
        uVar1 = *(undefined8 *)(pcVar10 + 0x28);
        uVar4 = *(undefined8 *)(pcVar10 + 0x20);
      }
      FUN_10002c918();
      FUN_100022760(uVar4,uVar1,lVar5,param_3 & 1);
      _swift_bridgeObjectRelease(lVar5);
      _swift_bridgeObjectRelease();
    }
    FUN_1000607a4();
    uVar3 = *puVar7;
    FUN_10002c948();
    _swift_allocError(&DAT_1000f78f0,puVar7,0,0);
    *puVar7 = uVar3;
    _swift_willThrow();
    FUN_10001fc18(pcVar10,param_4,local_80);
  }
  return;
}

