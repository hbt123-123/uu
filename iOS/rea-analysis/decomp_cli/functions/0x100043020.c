// rea decompile_all
// name: FUN_100043020
// address: 0x100043020
// body: available
// range: 0x100043020-0x1000436c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100043488) */

void FUN_100043020(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte *pbVar4;
  undefined1 uVar5;
  bool bVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  long extraout_x8;
  long extraout_x8_00;
  long lVar19;
  long extraout_x8_01;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar20;
  ulong uVar21;
  byte abStack_150 [8];
  undefined8 local_148;
  byte *local_140;
  char local_b8;
  undefined7 uStack_b7;
  long local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  lVar7 = 0;
  __sSS10FoundationE8EncodingVMa();
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  puVar8 = &DAT_100102ef0;
  local_140 = abStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_10000eb08(&DAT_100102ef0,&DAT_1000d3210);
  (*(code *)PTR____chkstk_darwin_1000f0278)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = (long)(abStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar9 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar20 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(lVar20 + 0x40));
  uVar21 = lVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_98 = unaff_x20[1];
  local_a0 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  local_90 = unaff_x20[2];
  local_80 = unaff_x20[4];
  FUN_10000eb08(&DAT_100103650,&DAT_1000d2298);
  FUN_10005ba24(&local_b8);
  uVar5 = local_a8;
  lVar7 = local_b0;
  uVar1 = CONCAT71(uStack_b7,local_b8);
  lStack_98 = local_b0;
  local_90._0_1_ = local_a8;
  local_a0 = uVar1;
  FUN_10000eb08(&DAT_1001036e0,&DAT_1000d26d0);
  FUN_10005ba24(&local_b8);
  FUN_10002d0ec(uVar1,lVar7,uVar5);
  lVar7 = local_b0;
  if (local_b0 != 0) {
    uVar1 = CONCAT71(uStack_b7,local_b8);
    lStack_98 = local_b0;
    lVar10 = local_b0;
    local_a0 = uVar1;
    _swift_bridgeObjectRetain(local_b0);
    __s10Foundation12CharacterSetV11whitespacesACvgZ(uVar21);
    FUN_10003da50();
    uVar11 = uVar21;
    puVar8 = PTR___sSSN_1000f02f8;
    __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF
              (uVar21,PTR___sSSN_1000f02f8,lVar10);
    (**(code **)(lVar20 + 8))(uVar21,lVar9);
    _swift_bridgeObjectRelease(lVar7);
    _swift_bridgeObjectRelease(puVar8);
    uVar21 = uVar11 & 0xffffffffffff;
    if (((ulong)puVar8 & 0x2000000000000000) != 0) {
      uVar21 = (ulong)puVar8 >> 0x38 & 0xf;
    }
    if (uVar21 != 0) {
      lStack_98 = unaff_x20[0xb];
      local_a0 = unaff_x20[10];
      local_90._0_1_ = *(undefined1 *)(unaff_x20 + 0xc);
      FUN_10000eb08(&DAT_1001031b8,&DAT_1000d31f0);
      FUN_10005ba24(&local_b8);
      lVar9 = local_b0;
      uVar14 = CONCAT71(uStack_b7,local_b8);
      lVar20 = local_b0;
      FUN_100041108(uVar14,local_b0,0x5f4e4f4953534553,0xec000000454d414e);
      if (unaff_x21 == 0) {
        _swift_bridgeObjectRelease(lVar9);
        puVar8 = &DAT_100102ba0;
        FUN_10000eb08(&DAT_100102ba0,&DAT_1000d0710);
        _swift_initStackObject();
        *(undefined8 *)(puVar8 + 0x18) = 4;
        *(undefined8 *)(puVar8 + 0x10) = 2;
        *(undefined8 *)(puVar8 + 0x20) = 0x6449656369766564;
        *(undefined8 *)(puVar8 + 0x28) = 0xe800000000000000;
        *(undefined8 *)(puVar8 + 0x30) = uVar1;
        *(long *)(puVar8 + 0x38) = lVar7;
        puVar13 = PTR___sSSN_1000f02f8;
        *(undefined **)(puVar8 + 0x48) = PTR___sSSN_1000f02f8;
        *(undefined8 *)(puVar8 + 0x50) = 0x4e6e6f6973736573;
        *(undefined **)(puVar8 + 0x78) = puVar13;
        *(undefined8 *)(puVar8 + 0x58) = 0xeb00000000656d61;
        *(undefined8 *)(puVar8 + 0x60) = uVar14;
        *(long *)(puVar8 + 0x68) = lVar20;
        puVar12 = puVar8;
        FUN_100020900();
        _swift_setDeallocating(puVar8);
        puVar13 = &DAT_100102bb0;
        FUN_10000eb08(&DAT_100102bb0,&DAT_1000d26e0);
        _swift_arrayDestroy(puVar8 + 0x20,2,puVar13);
        uVar14 = 0x18;
        puVar18 = puVar12;
        FUN_100040498(0x403e000000000000);
        _swift_bridgeObjectRelease(puVar12);
        lStack_98 = unaff_x20[6];
        local_a0 = unaff_x20[5];
        uStack_88 = unaff_x20[8];
        local_90 = unaff_x20[7];
        local_80 = unaff_x20[9];
        puVar8 = &DAT_100103000;
        FUN_10000eb08(&DAT_100103000,&DAT_1000d2700);
        FUN_10005ba24(&local_b8);
        uVar5 = local_a8;
        lVar7 = local_b0;
        uVar1 = CONCAT71(uStack_b7,local_b8);
        lStack_98 = local_b0;
        local_90 = CONCAT71(local_90._1_7_,local_a8);
        puVar13 = &DAT_100102fa8;
        local_148 = uVar14;
        FUN_10000eb08(&DAT_100102fa8,&DAT_1000cfa80);
        FUN_10005ba24(&local_b8);
        uVar14 = local_148;
        FUN_10002c9fc(uVar1,lVar7,uVar5);
        FUN_10004009c(lVar19,uVar14,puVar18,local_b8);
        bVar3 = *(byte *)(lVar19 + 1);
        if (bVar3 == 2) {
          puVar15 = (undefined4 *)0x69;
          FUN_100022760(0x69,0xd000000000000014,0x80000001000c4630,DAT_100105680);
          FUN_1000607a4();
          uVar2 = *puVar15;
          FUN_10002c948();
          _swift_allocError(&DAT_1000f78f0,puVar15,0,0);
          *puVar15 = uVar2;
          _swift_willThrow();
        }
        else {
          lStack_98 = unaff_x20[6];
          local_a0 = unaff_x20[5];
          uStack_88 = unaff_x20[8];
          local_90 = unaff_x20[7];
          local_80 = unaff_x20[9];
          FUN_10005ba24(&local_b8,puVar8);
          uVar1 = CONCAT71(uStack_b7,local_b8);
          lStack_98 = local_b0;
          local_90 = CONCAT71(local_90._1_7_,local_a8);
          FUN_10005ba24(&local_b8,puVar13);
          FUN_10002c9fc(uVar1,local_b0,local_a8);
          puVar16 = (uint *)&DAT_100102bd0;
          FUN_10000eb08(&DAT_100102bd0,&DAT_1000cf760);
          _swift_allocObject();
          pbVar4 = local_140;
          puVar16[6] = 2;
          puVar16[7] = 0;
          puVar16[4] = 1;
          puVar16[5] = 0;
          if (local_b8 == '\x01') {
            __sSS10FoundationE8EncodingV4utf8ACvgZ(local_140);
            uVar14 = local_148;
            uVar17 = local_148;
            puVar8 = puVar18;
            __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC
                      (local_148,puVar18,pbVar4);
            *(undefined **)(puVar16 + 0xe) = PTR___sSSN_1000f02f8;
            uVar1 = 0;
            if (puVar8 != (undefined *)0x0) {
              uVar1 = uVar17;
            }
            puVar13 = (undefined *)0xe000000000000000;
            if (puVar8 != (undefined *)0x0) {
              puVar13 = puVar8;
            }
            *(undefined8 *)(puVar16 + 8) = uVar1;
            *(undefined **)(puVar16 + 10) = puVar13;
            __ss5print_9separator10terminatoryypd_S2StF
                      (puVar16,0x20,0xe100000000000000,10,0xe100000000000000);
            _swift_bridgeObjectRelease();
          }
          else {
            bVar6 = (bVar3 & 1) == 0;
            uVar1 = 0x65757274;
            if (bVar6) {
              uVar1 = 0x65736c6166;
            }
            *(undefined **)(puVar16 + 0xe) = PTR___sSSN_1000f02f8;
            uVar14 = 0xe400000000000000;
            if (bVar6) {
              uVar14 = 0xe500000000000000;
            }
            *(undefined8 *)(puVar16 + 8) = uVar1;
            *(undefined8 *)(puVar16 + 10) = uVar14;
            __ss5print_9separator10terminatoryypd_S2StF
                      (puVar16,0x20,0xe100000000000000,10,0xe100000000000000);
            _swift_bridgeObjectRelease();
            uVar14 = local_148;
          }
          FUN_10002c948();
          _swift_allocError(&DAT_1000f78f0,puVar16,0,0);
          *puVar16 = (bVar3 ^ 0xffffffff) & 1;
          _swift_willThrow();
        }
        FUN_100020a0c(uVar14,puVar18);
        FUN_10001fc18(lVar19,&DAT_100102ef0,&DAT_1000d3210);
        return;
      }
      _swift_bridgeObjectRelease(lVar7);
      lVar7 = lVar9;
      goto LAB_1000432bc;
    }
  }
  puVar15 = (undefined4 *)0x68;
  FUN_100022760(0x68,0xd000000000000026,0x80000001000c6950,DAT_100105680);
  FUN_1000607a4();
  uVar2 = *puVar15;
  FUN_10002c948();
  _swift_allocError(&DAT_1000f78f0,puVar15,0,0);
  *puVar15 = uVar2;
  _swift_willThrow();
LAB_1000432bc:
  _swift_bridgeObjectRelease(lVar7);
  return;
}

