// rea decompile_all
// name: FUN_10002be24
// address: 0x10002be24
// body: available
// range: 0x10002be24-0x10002c1f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10002be24(undefined8 param_1,long param_2,uint param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  char *pcVar9;
  long extraout_x8;
  long extraout_x8_00;
  char *pcVar10;
  long unaff_x21;
  undefined8 uVar11;
  char acStack_140 [8];
  char acStack_138 [8];
  long lStack_130;
  char acStack_128 [8];
  char acStack_120 [8];
  char acStack_118 [8];
  char acStack_110 [8];
  char acStack_108 [8];
  char acStack_100 [8];
  char acStack_f8 [8];
  undefined8 local_f0;
  long lStack_e8;
  long local_e0 [2];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  char local_b0;
  undefined8 local_a8;
  long lStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  char local_68;
  
  lVar4 = 0;
  __sSS10FoundationE8EncodingVMa();
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  pcVar9 = acStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100102d80;
  FUN_10000eb08(&DAT_100102d80,&DAT_1000cf900);
  (*(code *)PTR____chkstk_darwin_1000f0278)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar10 = pcVar9 + -extraout_x8_00;
  FUN_100026ba4(pcVar10,param_1,param_2);
  if (unaff_x21 != 0) {
    return;
  }
  if (*pcVar10 != '\x01') {
    puVar7 = (undefined4 *)0x80000001000c4650;
    lVar4 = -0x7ffffffefff3b9d0;
    uVar11 = 0xd000000000000014;
    uVar3 = 0x69;
    if (*(long *)(pcVar10 + 0x60) != 0) {
      puVar7 = *(undefined4 **)(pcVar10 + 0x70);
      lVar4 = *(long *)(pcVar10 + 0x60);
      uVar11 = *(undefined8 *)(pcVar10 + 0x58);
      uVar3 = *(undefined8 *)(pcVar10 + 0x50);
    }
    FUN_10002c918();
    FUN_100022760(uVar3,uVar11,lVar4,param_3 & 1);
    _swift_bridgeObjectRelease(lVar4);
    _swift_bridgeObjectRelease();
LAB_10002c068:
    FUN_1000607a4();
    uVar2 = *puVar7;
    FUN_10002c948();
    _swift_allocError(&DAT_1000f78f0,puVar7,0,0);
    *puVar7 = uVar2;
    _swift_willThrow();
    FUN_10001fc18(pcVar10,&DAT_100102d80,&DAT_1000cf900);
    return;
  }
  lVar4 = *(long *)(pcVar10 + 0x10);
  if (lVar4 == 0) {
    puVar7 = (undefined4 *)0x69;
    FUN_100022760(0x69,0xd000000000000014,0x80000001000c4630,param_3 & 1);
    goto LAB_10002c068;
  }
  uVar11 = *(undefined8 *)(pcVar10 + 8);
  uStack_90 = *(undefined8 *)(pcVar10 + 0x20);
  local_98 = *(undefined8 *)(pcVar10 + 0x18);
  uStack_80 = *(undefined8 *)(pcVar10 + 0x30);
  local_88 = *(undefined8 *)(pcVar10 + 0x28);
  uStack_70 = *(undefined8 *)(pcVar10 + 0x40);
  local_78 = *(undefined8 *)(pcVar10 + 0x38);
  local_68 = pcVar10[0x48];
  local_a8 = uVar11;
  lStack_a0 = lVar4;
  if ((param_3 & 1) == 0) {
    local_f0 = uVar11;
    lStack_e8 = lVar4;
    local_e0[1] = *(undefined8 *)(pcVar10 + 0x20);
    local_e0[0] = *(undefined8 *)(pcVar10 + 0x18);
    uStack_c8 = *(undefined8 *)(pcVar10 + 0x30);
    local_d0 = *(undefined8 *)(pcVar10 + 0x28);
    uStack_b8 = *(undefined8 *)(pcVar10 + 0x40);
    local_c0 = *(undefined8 *)(pcVar10 + 0x38);
    local_b0 = pcVar10[0x48];
    pcVar6 = acStack_138;
    FUN_1000133cc(&local_f0,pcVar6,&DAT_100102d88,&DAT_1000cf908);
    puVar8 = &local_a8;
    FUN_1000325cc();
    uVar1 = (ulong)puVar8 & 0xffffffffffff;
    if (((ulong)pcVar6 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)pcVar6 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) goto LAB_10002c174;
    pcVar9 = &DAT_100102bd0;
    FUN_10000eb08(&DAT_100102bd0,&DAT_1000cf760);
    _swift_allocObject();
    pcVar9[0x18] = '\x02';
    pcVar9[0x19] = '\0';
    pcVar9[0x1a] = '\0';
    pcVar9[0x1b] = '\0';
    pcVar9[0x1c] = '\0';
    pcVar9[0x1d] = '\0';
    pcVar9[0x1e] = '\0';
    pcVar9[0x1f] = '\0';
    pcVar9[0x10] = '\x01';
    pcVar9[0x11] = '\0';
    pcVar9[0x12] = '\0';
    pcVar9[0x13] = '\0';
    pcVar9[0x14] = '\0';
    pcVar9[0x15] = '\0';
    pcVar9[0x16] = '\0';
    pcVar9[0x17] = '\0';
    *(undefined **)(pcVar9 + 0x38) = PTR___sSSN_1000f02f8;
    *(undefined8 **)(pcVar9 + 0x20) = puVar8;
    *(char **)(pcVar9 + 0x28) = pcVar6;
    pcVar6 = pcVar9;
  }
  else {
    pcVar6 = &DAT_100102bd0;
    FUN_10000eb08(&DAT_100102bd0,&DAT_1000cf760);
    _swift_allocObject();
    pcVar6[0x18] = '\x02';
    pcVar6[0x19] = '\0';
    pcVar6[0x1a] = '\0';
    pcVar6[0x1b] = '\0';
    pcVar6[0x1c] = '\0';
    pcVar6[0x1d] = '\0';
    pcVar6[0x1e] = '\0';
    pcVar6[0x1f] = '\0';
    pcVar6[0x10] = '\x01';
    pcVar6[0x11] = '\0';
    pcVar6[0x12] = '\0';
    pcVar6[0x13] = '\0';
    pcVar6[0x14] = '\0';
    pcVar6[0x15] = '\0';
    pcVar6[0x16] = '\0';
    pcVar6[0x17] = '\0';
    local_f0 = uVar11;
    lStack_e8 = lVar4;
    local_e0[1] = *(undefined8 *)(pcVar10 + 0x20);
    local_e0[0] = *(undefined8 *)(pcVar10 + 0x18);
    uStack_c8 = *(undefined8 *)(pcVar10 + 0x30);
    local_d0 = *(undefined8 *)(pcVar10 + 0x28);
    uStack_b8 = *(undefined8 *)(pcVar10 + 0x40);
    local_c0 = *(undefined8 *)(pcVar10 + 0x38);
    local_b0 = pcVar10[0x48];
    FUN_1000133cc(&local_f0,acStack_138,&DAT_100102d88,&DAT_1000cf908);
    __sSS10FoundationE8EncodingV4utf8ACvgZ(pcVar9);
    __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(param_1,param_2,pcVar9);
    *(undefined **)(pcVar6 + 0x38) = PTR___sSSN_1000f02f8;
    uVar11 = 0;
    if (param_2 != 0) {
      uVar11 = param_1;
    }
    lVar4 = -0x2000000000000000;
    if (param_2 != 0) {
      lVar4 = param_2;
    }
    *(undefined8 *)(pcVar6 + 0x20) = uVar11;
    *(long *)(pcVar6 + 0x28) = lVar4;
  }
  __ss5print_9separator10terminatoryypd_S2StF();
LAB_10002c174:
  _swift_bridgeObjectRelease(pcVar6);
  uStack_c8 = uStack_80;
  local_d0 = local_88;
  uStack_b8 = uStack_70;
  local_c0 = local_78;
  local_b0 = local_68;
  lStack_e8 = lStack_a0;
  local_f0 = local_a8;
  local_e0[1] = uStack_90;
  local_e0[0] = local_98;
  FUN_10001fc18(&local_f0,&DAT_100102d88,&DAT_1000cf908);
  FUN_10001fc18(pcVar10,&DAT_100102d80,&DAT_1000cf900);
  return;
}

