// rea decompile_all
// name: FUN_1000290c4
// address: 0x1000290c4
// body: available
// range: 0x1000290c4-0x1000294d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000290c4(undefined8 param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  char *pcVar11;
  long lVar12;
  long unaff_x21;
  char *pcVar13;
  long lVar14;
  undefined *puVar15;
  char acStack_70 [8];
  char acStack_68 [4];
  uint local_64;
  
  lVar5 = 0;
  local_64 = param_3;
  __sSS10FoundationE8EncodingVMa();
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  pcVar11 = acStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100102d48;
  FUN_10000eb08(&DAT_100102d48,&DAT_1000cf8d8);
  (*(code *)PTR____chkstk_darwin_1000f0278)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = (long)pcVar11 - extraout_x8_00;
  lVar5 = 0;
  FUN_10000fb58();
  lVar12 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(lVar12 + 0x40));
  puVar15 = (undefined *)(lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  puVar6 = &DAT_100102d50;
  FUN_10000eb08(&DAT_100102d50,&DAT_1000cf8e0);
  (*(code *)PTR____chkstk_darwin_1000f0278)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar13 = puVar15 + -extraout_x8_02;
  FUN_1000248f4(pcVar13,param_1,param_2);
  if (unaff_x21 == 0) {
    if (*pcVar13 == '\x01') {
      FUN_1000133cc(pcVar13 + *(int *)(puVar6 + 0x2c),lVar14,&DAT_100102d48,&DAT_1000cf8d8);
      lVar7 = lVar14;
      (**(code **)(lVar12 + 0x30))(lVar14,1,lVar5);
      if ((int)lVar7 != 1) {
        puVar6 = puVar15;
        FUN_10002cc74(lVar14,puVar15,FUN_10000fb58);
        if ((local_64 & 1) == 0) {
          puVar9 = puVar15;
          FUN_100031978();
          uVar2 = (ulong)puVar9 & 0xffffffffffff;
          if (((ulong)puVar6 & 0x2000000000000000) != 0) {
            uVar2 = (ulong)puVar6 >> 0x38 & 0xf;
          }
          if (uVar2 != 0) {
            puVar10 = &DAT_100102bd0;
            FUN_10000eb08(&DAT_100102bd0,&DAT_1000cf760);
            _swift_allocObject();
            *(undefined8 *)(puVar10 + 0x18) = 2;
            *(undefined8 *)(puVar10 + 0x10) = 1;
            *(undefined **)(puVar10 + 0x38) = PTR___sSSN_1000f02f8;
            *(undefined **)(puVar10 + 0x20) = puVar9;
            *(undefined **)(puVar10 + 0x28) = puVar6;
            __ss5print_9separator10terminatoryypd_S2StF();
            puVar6 = puVar10;
          }
        }
        else {
          puVar6 = &DAT_100102bd0;
          FUN_10000eb08(&DAT_100102bd0,&DAT_1000cf760);
          _swift_allocObject();
          *(undefined8 *)(puVar6 + 0x18) = 2;
          *(undefined8 *)(puVar6 + 0x10) = 1;
          __sSS10FoundationE8EncodingV4utf8ACvgZ(pcVar11);
          __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(param_1,param_2,pcVar11)
          ;
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
          __ss5print_9separator10terminatoryypd_S2StF
                    (puVar6,0x20,0xe100000000000000,10,0xe100000000000000);
        }
        _swift_bridgeObjectRelease(puVar6);
        FUN_10000fc50(puVar15,FUN_10000fb58);
        FUN_10001fc18(pcVar13,&DAT_100102d50,&DAT_1000cf8e0);
        return;
      }
      FUN_10001fc18(lVar14,&DAT_100102d48,&DAT_1000cf8d8);
      puVar8 = (undefined4 *)0x69;
      FUN_100022760(0x69,0xd000000000000014,0x80000001000c4630,local_64 & 1);
    }
    else {
      pcVar11 = pcVar13 + *(int *)(puVar6 + 0x30);
      puVar8 = (undefined4 *)0x80000001000c4650;
      lVar5 = -0x7ffffffefff3b9d0;
      uVar1 = 0xd000000000000014;
      uVar4 = 0x69;
      if (*(long *)(pcVar11 + 0x10) != 0) {
        puVar8 = *(undefined4 **)(pcVar11 + 0x20);
        lVar5 = *(long *)(pcVar11 + 0x10);
        uVar1 = *(undefined8 *)(pcVar11 + 8);
        uVar4 = *(undefined8 *)pcVar11;
      }
      FUN_10002c918();
      FUN_100022760(uVar4,uVar1,lVar5,local_64 & 1);
      _swift_bridgeObjectRelease(lVar5);
      _swift_bridgeObjectRelease();
    }
    FUN_1000607a4();
    uVar3 = *puVar8;
    FUN_10002c948();
    _swift_allocError(&DAT_1000f78f0,puVar8,0,0);
    *puVar8 = uVar3;
    _swift_willThrow();
    FUN_10001fc18(pcVar13,&DAT_100102d50,&DAT_1000cf8e0);
  }
  return;
}

