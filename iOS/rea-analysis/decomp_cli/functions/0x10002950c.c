// rea decompile_all
// name: FUN_10002950c
// address: 0x10002950c
// body: available
// range: 0x10002950c-0x10002991f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10002950c(undefined8 param_1,long param_2,uint param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  char *pcVar8;
  long unaff_x21;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong local_120;
  undefined *local_118;
  long lStack_110;
  char acStack_108 [8];
  char acStack_100 [8];
  char acStack_f8 [8];
  char acStack_f0 [8];
  char acStack_e8 [8];
  char acStack_e0 [8];
  char acStack_d8 [8];
  char local_d0 [8];
  undefined8 local_c8;
  undefined8 local_c0;
  long alStack_b8 [2];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar4 = 0;
  __sSS10FoundationE8EncodingVMa();
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar4 = (long)&local_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100102f00;
  FUN_10000eb08(&DAT_100102f00,&DAT_1000cfa10);
  (*(code *)PTR____chkstk_darwin_1000f0278)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar8 = (char *)(lVar4 - extraout_x8_00);
  FUN_100024d94(pcVar8,param_1,param_2);
  if (unaff_x21 == 0) {
    if (*pcVar8 == '\x01') {
      lVar10 = *(long *)(pcVar8 + 0x10);
      alStack_b8[0] = lVar10;
      local_c0 = *(undefined8 *)(pcVar8 + 8);
      local_a8 = *(undefined8 *)(pcVar8 + 0x20);
      alStack_b8[1] = *(undefined8 *)(pcVar8 + 0x18);
      uVar13 = *(undefined8 *)(pcVar8 + 0x40);
      uVar12 = *(undefined8 *)(pcVar8 + 0x38);
      uStack_98 = *(undefined8 *)(pcVar8 + 0x30);
      local_a0 = *(undefined8 *)(pcVar8 + 0x28);
      local_88 = uVar13;
      local_90 = uVar12;
      uVar11 = *(undefined8 *)(pcVar8 + 0x50);
      uVar9 = *(undefined8 *)(pcVar8 + 0x48);
      local_80 = uVar9;
      uStack_78 = uVar11;
      if (lVar10 != 0) {
        if ((param_3 & 1) == 0) {
          local_d0[0] = '\0';
          local_d0[1] = '\0';
          local_d0[2] = '\0';
          local_d0[3] = '\0';
          local_d0[4] = '\0';
          local_d0[5] = '\0';
          local_d0[6] = '\0';
          local_d0[7] = '\0';
          local_c8 = 0xe000000000000000;
          FUN_1000133cc(&local_c0,&local_120,&DAT_100102f08,&DAT_1000cfa18);
          __ss11_StringGutsV4growyySiF(0x19);
          _swift_bridgeObjectRelease(local_c8);
          local_120 = 0xd000000000000011;
          local_118 = (undefined *)0x80000001000c59f0;
          __sSS6appendyySSF(uVar12,uVar13);
          __sSS6appendyySSF(0x203e2d20,0xe400000000000000);
          __sSS6appendyySSF(uVar9,uVar11);
          puVar5 = local_118;
          uVar3 = local_120;
          uVar1 = local_120 & 0xffffffffffff;
          if (((ulong)local_118 & 0x2000000000000000) != 0) {
            uVar1 = (ulong)local_118 >> 0x38 & 0xf;
          }
          puVar7 = local_118;
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
          }
        }
        else {
          puVar7 = &DAT_100102bd0;
          FUN_10000eb08(&DAT_100102bd0,&DAT_1000cf760);
          _swift_allocObject();
          uVar12 = uStack_78;
          uVar11 = local_88;
          uVar9 = local_a8;
          *(undefined8 *)(puVar7 + 0x18) = 2;
          *(undefined8 *)(puVar7 + 0x10) = 1;
          _swift_bridgeObjectRetain(uStack_98);
          _swift_bridgeObjectRetain(uVar11);
          _swift_bridgeObjectRetain(uVar12);
          _swift_bridgeObjectRetain(lVar10);
          _swift_bridgeObjectRetain(uVar9);
          __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar4);
          __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(param_1,param_2,lVar4);
          *(undefined **)(puVar7 + 0x38) = PTR___sSSN_1000f02f8;
          uVar9 = 0;
          if (param_2 != 0) {
            uVar9 = param_1;
          }
          lVar4 = -0x2000000000000000;
          if (param_2 != 0) {
            lVar4 = param_2;
          }
          *(undefined8 *)(puVar7 + 0x20) = uVar9;
          *(long *)(puVar7 + 0x28) = lVar4;
          __ss5print_9separator10terminatoryypd_S2StF
                    (puVar7,0x20,0xe100000000000000,10,0xe100000000000000);
        }
        _swift_bridgeObjectRelease(puVar7);
        FUN_10001fc18(&local_c0,&DAT_100102f08,&DAT_1000cfa18);
        FUN_10001fc18(pcVar8,&DAT_100102f00,&DAT_1000cfa10);
        return;
      }
      puVar6 = (undefined4 *)0x69;
      FUN_100022760(0x69,0xd000000000000014,0x80000001000c4630,param_3 & 1);
    }
    else {
      puVar6 = (undefined4 *)0x80000001000c4650;
      lVar4 = -0x7ffffffefff3b9d0;
      uVar9 = 0xd000000000000014;
      uVar11 = 0x69;
      if (*(long *)(pcVar8 + 0x68) != 0) {
        puVar6 = *(undefined4 **)(pcVar8 + 0x78);
        lVar4 = *(long *)(pcVar8 + 0x68);
        uVar9 = *(undefined8 *)(pcVar8 + 0x60);
        uVar11 = *(undefined8 *)(pcVar8 + 0x58);
      }
      FUN_10002c918();
      FUN_100022760(uVar11,uVar9,lVar4,param_3 & 1);
      _swift_bridgeObjectRelease(lVar4);
      _swift_bridgeObjectRelease();
    }
    FUN_1000607a4();
    uVar2 = *puVar6;
    FUN_10002c948();
    _swift_allocError(&DAT_1000f78f0,puVar6,0,0);
    *puVar6 = uVar2;
    _swift_willThrow();
    FUN_10001fc18(pcVar8,&DAT_100102f00,&DAT_1000cfa10);
  }
  return;
}

