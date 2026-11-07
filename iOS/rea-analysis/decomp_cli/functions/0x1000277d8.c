// rea decompile_all
// name: FUN_1000277d8
// address: 0x1000277d8
// body: available
// range: 0x1000277d8-0x100027b67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000277d8(undefined8 param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x21;
  char *pcVar11;
  char *pcVar12;
  char acStack_150 [8];
  char acStack_148 [8];
  long lStack_140;
  char acStack_138 [8];
  char acStack_130 [8];
  char acStack_128 [8];
  char acStack_120 [8];
  char acStack_118 [8];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long alStack_f8 [2];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar5 = 0;
  __sSS10FoundationE8EncodingVMa();
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  pcVar12 = acStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100102eb0;
  FUN_10000eb08(&DAT_100102eb0,&DAT_1000cf9d0);
  (*(code *)PTR____chkstk_darwin_1000f0278)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar11 = pcVar12 + -extraout_x8_00;
  FUN_100023424(pcVar11,param_1,param_2);
  if (unaff_x21 == 0) {
    if (*pcVar11 == '\x01') {
      lStack_c8 = *(long *)(pcVar11 + 0x10);
      local_d0 = *(undefined8 *)(pcVar11 + 8);
      uStack_b8 = *(undefined8 *)(pcVar11 + 0x20);
      uStack_c0 = *(undefined8 *)(pcVar11 + 0x18);
      uStack_a8 = *(undefined8 *)(pcVar11 + 0x30);
      local_b0 = *(undefined8 *)(pcVar11 + 0x28);
      uStack_98 = *(undefined8 *)(pcVar11 + 0x40);
      uStack_a0 = *(undefined8 *)(pcVar11 + 0x38);
      if (*(long *)(pcVar11 + 0x10) != 0) {
        uStack_88 = *(undefined8 *)(pcVar11 + 0x10);
        local_90 = *(undefined8 *)(pcVar11 + 8);
        uStack_78 = *(undefined8 *)(pcVar11 + 0x20);
        uStack_80 = *(undefined8 *)(pcVar11 + 0x18);
        uStack_68 = *(undefined8 *)(pcVar11 + 0x30);
        local_70 = *(undefined8 *)(pcVar11 + 0x28);
        uStack_58 = *(undefined8 *)(pcVar11 + 0x40);
        uStack_60 = *(undefined8 *)(pcVar11 + 0x38);
        if ((param_3 & 1) == 0) {
          puVar9 = &local_d0;
          puVar7 = &local_110;
          FUN_1000133cc(puVar9,puVar7,&DAT_100102eb8,&DAT_1000cf9d8);
          FUN_10000cce4();
          uVar2 = (ulong)puVar9 & 0xffffffffffff;
          if (((ulong)puVar7 & 0x2000000000000000) != 0) {
            uVar2 = (ulong)puVar7 >> 0x38 & 0xf;
          }
          if (uVar2 != 0) {
            puVar10 = (undefined8 *)&DAT_100102bd0;
            FUN_10000eb08(&DAT_100102bd0,&DAT_1000cf760);
            _swift_allocObject();
            puVar10[3] = 2;
            puVar10[2] = 1;
            puVar10[7] = PTR___sSSN_1000f02f8;
            puVar10[4] = puVar9;
            puVar10[5] = puVar7;
            __ss5print_9separator10terminatoryypd_S2StF();
            puVar7 = puVar10;
          }
        }
        else {
          puVar7 = (undefined8 *)&DAT_100102bd0;
          FUN_10000eb08(&DAT_100102bd0,&DAT_1000cf760);
          _swift_allocObject();
          puVar7[3] = 2;
          puVar7[2] = 1;
          uStack_108 = *(undefined8 *)(pcVar11 + 0x10);
          local_110 = *(undefined8 *)(pcVar11 + 8);
          alStack_f8[0] = *(undefined8 *)(pcVar11 + 0x20);
          uStack_100 = *(undefined8 *)(pcVar11 + 0x18);
          uStack_e8 = *(undefined8 *)(pcVar11 + 0x30);
          alStack_f8[1] = *(long *)(pcVar11 + 0x28);
          uStack_d8 = *(undefined8 *)(pcVar11 + 0x40);
          uStack_e0 = *(undefined8 *)(pcVar11 + 0x38);
          FUN_10001fc9c(&local_110,acStack_150);
          __sSS10FoundationE8EncodingV4utf8ACvgZ(pcVar12);
          __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(param_1,param_2,pcVar12)
          ;
          puVar7[7] = PTR___sSSN_1000f02f8;
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = param_1;
          }
          lVar5 = -0x2000000000000000;
          if (param_2 != 0) {
            lVar5 = param_2;
          }
          puVar7[4] = uVar1;
          puVar7[5] = lVar5;
          __ss5print_9separator10terminatoryypd_S2StF
                    (puVar7,0x20,0xe100000000000000,10,0xe100000000000000);
        }
        _swift_bridgeObjectRelease(puVar7);
        FUN_10001fc18(&local_d0,&DAT_100102eb8,&DAT_1000cf9d8);
        FUN_10001fc18(pcVar11,&DAT_100102eb0,&DAT_1000cf9d0);
        return;
      }
      puVar8 = (undefined4 *)0x69;
      FUN_100022760(0x69,0xd000000000000014,0x80000001000c4630,param_3 & 1);
    }
    else {
      puVar8 = (undefined4 *)0x80000001000c4650;
      lVar5 = -0x7ffffffefff3b9d0;
      uVar1 = 0xd000000000000014;
      uVar4 = 0x69;
      if (*(long *)(pcVar11 + 0x58) != 0) {
        puVar8 = *(undefined4 **)(pcVar11 + 0x68);
        lVar5 = *(long *)(pcVar11 + 0x58);
        uVar1 = *(undefined8 *)(pcVar11 + 0x50);
        uVar4 = *(undefined8 *)(pcVar11 + 0x48);
      }
      FUN_10002c918();
      FUN_100022760(uVar4,uVar1,lVar5,param_3 & 1);
      _swift_bridgeObjectRelease(lVar5);
      _swift_bridgeObjectRelease();
    }
    FUN_1000607a4();
    uVar3 = *puVar8;
    FUN_10002c948();
    _swift_allocError(&DAT_1000f78f0,puVar8,0,0);
    *puVar8 = uVar3;
    _swift_willThrow();
    FUN_10001fc18(pcVar11,&DAT_100102eb0,&DAT_1000cf9d0);
  }
  return;
}

