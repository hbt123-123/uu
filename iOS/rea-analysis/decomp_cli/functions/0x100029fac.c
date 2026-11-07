// rea decompile_all
// name: FUN_100029fac
// address: 0x100029fac
// body: available
// range: 0x100029fac-0x10002a3d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100029fac(undefined8 param_1,long param_2,uint param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  char *pcVar10;
  long unaff_x21;
  long lVar11;
  char *pcVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  char acStack_90 [8];
  long local_88;
  long local_80;
  uint local_74;
  ulong local_70;
  undefined *local_68;
  
  lVar5 = 0;
  __sSS10FoundationE8EncodingVMa();
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  pcVar12 = acStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100102e80;
  FUN_10000eb08(&DAT_100102e80,&DAT_1000cf9b0);
  (*(code *)PTR____chkstk_darwin_1000f0278)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar10 = pcVar12 + -extraout_x8_00;
  FUN_100025484(pcVar10,param_1,param_2);
  if (unaff_x21 == 0) {
    if (*pcVar10 == '\x01') {
      lVar5 = *(long *)(pcVar10 + 0x10);
      if (lVar5 != 0) {
        uVar14 = *(undefined8 *)(pcVar10 + 8);
        lVar13 = *(long *)(pcVar10 + 0x18);
        uVar2 = *(undefined8 *)(pcVar10 + 0x20);
        lVar15 = *(long *)(pcVar10 + 0x28);
        lVar11 = *(long *)(pcVar10 + 0x30);
        local_74 = (uint)(byte)pcVar10[0x38];
        if ((param_3 & 1) == 0) {
          local_70 = 0;
          local_68 = (undefined *)0xe000000000000000;
          FUN_10002ccb8(uVar14,lVar5,lVar13,uVar2,lVar15,lVar11);
          __ss11_StringGutsV4growyySiF(0x22);
          _swift_bridgeObjectRelease(local_68);
          local_70 = 0xd000000000000012;
          local_68 = (undefined *)0x80000001000c59b0;
          uVar9 = uVar2;
          local_80 = lVar11;
          FUN_100007268(lVar13,uVar2,lVar15,lVar11);
          __sSS6appendyySSF();
          _swift_bridgeObjectRelease(uVar9);
          __sSS6appendyySSF(0x6974617265704f0a,0xec000000203a6e6f);
          local_88 = lVar5;
          __sSS6appendyySSF(uVar14,lVar5);
          puVar6 = local_68;
          uVar4 = local_70;
          uVar1 = local_70 & 0xffffffffffff;
          if (((ulong)local_68 & 0x2000000000000000) != 0) {
            uVar1 = (ulong)local_68 >> 0x38 & 0xf;
          }
          puVar8 = local_68;
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
          }
          _swift_bridgeObjectRelease(puVar8);
          lVar11 = local_80;
          lVar5 = local_88;
        }
        else {
          puVar6 = &DAT_100102bd0;
          local_88 = lVar13;
          local_80 = lVar15;
          FUN_10000eb08(&DAT_100102bd0,&DAT_1000cf760);
          _swift_allocObject();
          *(undefined8 *)(puVar6 + 0x18) = 2;
          *(undefined8 *)(puVar6 + 0x10) = 1;
          _swift_bridgeObjectRetain(lVar11);
          _swift_bridgeObjectRetain(lVar5);
          _swift_bridgeObjectRetain(uVar2);
          __sSS10FoundationE8EncodingV4utf8ACvgZ(pcVar12);
          __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(param_1,param_2,pcVar12)
          ;
          *(undefined **)(puVar6 + 0x38) = PTR___sSSN_1000f02f8;
          uVar9 = 0;
          if (param_2 != 0) {
            uVar9 = param_1;
          }
          lVar13 = -0x2000000000000000;
          if (param_2 != 0) {
            lVar13 = param_2;
          }
          *(undefined8 *)(puVar6 + 0x20) = uVar9;
          *(long *)(puVar6 + 0x28) = lVar13;
          __ss5print_9separator10terminatoryypd_S2StF
                    (puVar6,0x20,0xe100000000000000,10,0xe100000000000000);
          _swift_bridgeObjectRelease(puVar6);
          lVar13 = local_88;
          lVar15 = local_80;
        }
        FUN_10001fd3c(uVar14,lVar5,lVar13,uVar2,lVar15,lVar11,local_74);
        FUN_10001fc18(pcVar10,&DAT_100102e80,&DAT_1000cf9b0);
        return;
      }
      puVar7 = (undefined4 *)0x69;
      FUN_100022760(0x69,0xd000000000000014,0x80000001000c4630,param_3 & 1);
    }
    else {
      puVar7 = (undefined4 *)0x80000001000c4650;
      lVar5 = -0x7ffffffefff3b9d0;
      uVar2 = 0xd000000000000014;
      uVar14 = 0x69;
      if (*(long *)(pcVar10 + 0x50) != 0) {
        puVar7 = *(undefined4 **)(pcVar10 + 0x60);
        lVar5 = *(long *)(pcVar10 + 0x50);
        uVar2 = *(undefined8 *)(pcVar10 + 0x48);
        uVar14 = *(undefined8 *)(pcVar10 + 0x40);
      }
      FUN_10002c918();
      FUN_100022760(uVar14,uVar2,lVar5,param_3 & 1);
      _swift_bridgeObjectRelease(lVar5);
      _swift_bridgeObjectRelease();
    }
    FUN_1000607a4();
    uVar3 = *puVar7;
    FUN_10002c948();
    _swift_allocError(&DAT_1000f78f0,puVar7,0,0);
    *puVar7 = uVar3;
    _swift_willThrow();
    FUN_10001fc18(pcVar10,&DAT_100102e80,&DAT_1000cf9b0);
  }
  return;
}

