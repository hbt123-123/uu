// rea decompile_all
// name: FUN_100028d74
// address: 0x100028d74
// body: available
// range: 0x100028d74-0x1000290c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100028d74(undefined8 param_1,undefined *param_2,uint param_3,long param_4,
                  undefined8 param_5,code *param_6,code *param_7)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  long *plVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x21;
  char *pcVar11;
  undefined1 *puVar12;
  long local_78;
  long local_70;
  undefined8 uStack_68;
  code *local_58;
  
  lVar6 = 0;
  local_58 = param_7;
  __sSS10FoundationE8EncodingVMa();
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  puVar12 = &stack0xffffffffffffff80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = param_4;
  FUN_10000eb08(param_4,param_5);
  (*(code *)PTR____chkstk_darwin_1000f0278)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar11 = puVar12 + -extraout_x8_00;
  puVar7 = param_2;
  (*param_6)(pcVar11,param_1);
  pcVar5 = local_58;
  if (unaff_x21 == 0) {
    local_78 = param_5;
    if (*pcVar11 == '\x01') {
      lVar6 = *(long *)(pcVar11 + 8);
      if (lVar6 != 0) {
        uStack_68 = *(undefined8 *)(pcVar11 + 0x10);
        local_70 = lVar6;
        if ((param_3 & 1) == 0) {
          _swift_bridgeObjectRetain(lVar6);
          plVar9 = &local_70;
          (*pcVar5)();
          uVar2 = (ulong)plVar9 & 0xffffffffffff;
          if (((ulong)puVar7 & 0x2000000000000000) != 0) {
            uVar2 = (ulong)puVar7 >> 0x38 & 0xf;
          }
          if (uVar2 == 0) {
            _swift_bridgeObjectRelease(lVar6);
          }
          else {
            puVar10 = &DAT_100102bd0;
            FUN_10000eb08(&DAT_100102bd0,&DAT_1000cf760);
            _swift_allocObject();
            *(undefined8 *)(puVar10 + 0x18) = 2;
            *(undefined8 *)(puVar10 + 0x10) = 1;
            *(undefined **)(puVar10 + 0x38) = PTR___sSSN_1000f02f8;
            *(long **)(puVar10 + 0x20) = plVar9;
            *(undefined **)(puVar10 + 0x28) = puVar7;
            __ss5print_9separator10terminatoryypd_S2StF();
            _swift_bridgeObjectRelease(lVar6);
            puVar7 = puVar10;
          }
          _swift_bridgeObjectRelease(puVar7);
        }
        else {
          puVar7 = &DAT_100102bd0;
          FUN_10000eb08(&DAT_100102bd0,&DAT_1000cf760);
          _swift_allocObject();
          *(undefined8 *)(puVar7 + 0x18) = 2;
          *(undefined8 *)(puVar7 + 0x10) = 1;
          _swift_bridgeObjectRetain(lVar6);
          __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar12);
          __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(param_1,param_2,puVar12)
          ;
          *(undefined **)(puVar7 + 0x38) = PTR___sSSN_1000f02f8;
          uVar1 = 0;
          if (param_2 != (undefined *)0x0) {
            uVar1 = param_1;
          }
          puVar10 = (undefined *)0xe000000000000000;
          if (param_2 != (undefined *)0x0) {
            puVar10 = param_2;
          }
          *(undefined8 *)(puVar7 + 0x20) = uVar1;
          *(undefined **)(puVar7 + 0x28) = puVar10;
          __ss5print_9separator10terminatoryypd_S2StF
                    (puVar7,0x20,0xe100000000000000,10,0xe100000000000000);
          _swift_bridgeObjectRelease(lVar6);
          _swift_bridgeObjectRelease(puVar7);
        }
        FUN_10001fc18(pcVar11,param_4,local_78);
        return;
      }
      puVar8 = (undefined4 *)0x69;
      FUN_100022760(0x69,0xd000000000000014,0x80000001000c4630,param_3 & 1);
    }
    else {
      puVar8 = (undefined4 *)0x80000001000c4650;
      lVar6 = -0x7ffffffefff3b9d0;
      uVar1 = 0xd000000000000014;
      uVar4 = 0x69;
      if (*(long *)(pcVar11 + 0x28) != 0) {
        puVar8 = *(undefined4 **)(pcVar11 + 0x38);
        lVar6 = *(long *)(pcVar11 + 0x28);
        uVar1 = *(undefined8 *)(pcVar11 + 0x20);
        uVar4 = *(undefined8 *)(pcVar11 + 0x18);
      }
      FUN_10002c918();
      FUN_100022760(uVar4,uVar1,lVar6,param_3 & 1);
      _swift_bridgeObjectRelease(lVar6);
      _swift_bridgeObjectRelease();
    }
    FUN_1000607a4();
    uVar3 = *puVar8;
    FUN_10002c948();
    _swift_allocError(&DAT_1000f78f0,puVar8,0,0);
    *puVar8 = uVar3;
    _swift_willThrow();
    FUN_10001fc18(pcVar11,param_4,local_78);
  }
  return;
}

