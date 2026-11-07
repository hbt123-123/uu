// rea decompile_all
// name: FUN_10003c928
// address: 0x10003c928
// body: available
// range: 0x10003c928-0x10003ce0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10003c928(void)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined4 *puVar12;
  long extraout_x8;
  undefined *puVar13;
  undefined8 *unaff_x20;
  undefined8 uVar14;
  long lVar15;
  undefined *puVar16;
  undefined1 *puVar17;
  undefined1 auStack_140 [8];
  byte local_128;
  undefined7 uStack_127;
  undefined *local_120;
  undefined1 local_118;
  undefined *local_110;
  undefined *puStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  
  lVar4 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar15 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(lVar15 + 0x40));
  puVar17 = auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_108 = (undefined *)unaff_x20[1];
  local_110 = (undefined *)*unaff_x20;
  puVar5 = &DAT_1001031b8;
  local_100._0_1_ = *(undefined1 *)(unaff_x20 + 2);
  FUN_10000eb08(&DAT_1001031b8,&DAT_1000d31f0);
  FUN_10005ba24(&local_128);
  puVar9 = local_120;
  if (local_120 == (undefined *)0x0) {
    pcVar1 = "Missing required argument ASSIST_ID";
    lVar4 = -0x13;
LAB_10003ca98:
    lVar4 = lVar4 + -0x2fffffffffffffca;
  }
  else {
    uVar10 = CONCAT71(uStack_127,local_128);
    puStack_108 = (undefined *)unaff_x20[4];
    local_110 = (undefined *)unaff_x20[3];
    local_100._0_1_ = *(undefined1 *)(unaff_x20 + 5);
    FUN_10005ba24(&local_128,puVar5);
    puVar13 = local_120;
    puVar16 = (undefined *)CONCAT71(uStack_127,local_128);
    puStack_108 = (undefined *)unaff_x20[7];
    local_110 = (undefined *)unaff_x20[6];
    local_100._0_1_ = *(undefined1 *)(unaff_x20 + 8);
    puVar5 = &DAT_100102fa8;
    puVar8 = &DAT_1000cfa80;
    FUN_10000eb08();
    puVar6 = puVar5;
    FUN_10005ba24(&local_128);
    if (puVar13 == (undefined *)0x0) {
      if (local_128 != 0) {
        FUN_10003b260();
        _swift_bridgeObjectRetain(puVar8);
        puVar13 = (undefined *)0x0;
        puVar16 = puVar6;
        goto LAB_10003cad8;
      }
    }
    else {
      puVar8 = puVar13;
      if ((local_128 & 1) != 0) {
        _swift_bridgeObjectRelease(puVar13);
        _swift_bridgeObjectRelease(puVar9);
        pcVar1 = "CODE and --code-stdin are mutually exclusive";
        lVar4 = -10;
        goto LAB_10003ca98;
      }
LAB_10003cad8:
      local_110 = puVar16;
      puStack_108 = puVar8;
      _swift_bridgeObjectRetain(puVar13);
      __s10Foundation12CharacterSetV22whitespacesAndNewlinesACvgZ(puVar17);
      FUN_10003da50();
      puVar7 = puVar17;
      puVar6 = PTR___sSSN_1000f02f8;
      __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF
                (puVar17,PTR___sSSN_1000f02f8,puVar13);
      (**(code **)(lVar15 + 8))(puVar17,lVar4);
      _swift_bridgeObjectRelease(puVar8);
      _swift_bridgeObjectRelease(puVar6);
      uVar11 = (ulong)puVar7 & 0xffffffffffff;
      if (((ulong)puVar6 & 0x2000000000000000) != 0) {
        uVar11 = (ulong)puVar6 >> 0x38 & 0xf;
      }
      if (uVar11 != 0) {
        lVar4 = 0;
        FUN_100020760();
        _swift_initStaticObject();
        puVar13 = &DAT_100102ba0;
        FUN_10000eb08(&DAT_100102ba0,&DAT_1000d0710);
        _swift_initStackObject();
        *(undefined8 *)(puVar13 + 0x18) = 4;
        *(undefined8 *)(puVar13 + 0x10) = 2;
        *(undefined8 *)(puVar13 + 0x20) = 0x6449656369766564;
        *(undefined8 *)(puVar13 + 0x28) = 0xe800000000000000;
        *(undefined8 *)(puVar13 + 0x30) = uVar10;
        *(undefined **)(puVar13 + 0x38) = puVar9;
        puVar9 = PTR___sSSN_1000f02f8;
        *(undefined **)(puVar13 + 0x48) = PTR___sSSN_1000f02f8;
        *(undefined8 *)(puVar13 + 0x50) = 0x65646f63;
        *(undefined **)(puVar13 + 0x78) = puVar9;
        *(undefined8 *)(puVar13 + 0x58) = 0xe400000000000000;
        *(undefined **)(puVar13 + 0x60) = puVar16;
        *(undefined **)(puVar13 + 0x68) = puVar8;
        puVar8 = puVar13;
        FUN_100020900();
        _swift_setDeallocating(puVar13);
        puVar9 = &DAT_100102bb0;
        FUN_10000eb08(&DAT_100102bb0,&DAT_1000d26e0);
        _swift_arrayDestroy(puVar13 + 0x20,2,puVar9);
        uVar10 = 0x7453747369737361;
        uVar11 = 0xeb00000000747261;
        FUN_1000201c8(0x7453747369737361,0xeb00000000747261,puVar8,0x403e000000000000,0);
        _swift_bridgeObjectRelease(puVar8);
        uVar3 = DAT_100105680;
        if (uVar11 >> 0x3c < 0xf) {
          puStack_108 = (undefined *)unaff_x20[10];
          local_110 = (undefined *)unaff_x20[9];
          uStack_f8 = unaff_x20[0xc];
          local_100 = unaff_x20[0xb];
          local_f0 = unaff_x20[0xd];
          FUN_10000eb08(&DAT_100103000,&DAT_1000d2700);
          FUN_10005ba24(&local_128);
          uVar14 = CONCAT71(uStack_127,local_128);
          puStack_108 = local_120;
          local_100 = CONCAT71(local_100._1_7_,local_118);
          FUN_10005ba24(&local_128,puVar5);
          FUN_10002c9fc(uVar14,local_120,local_118);
          FUN_100029fac(uVar10,uVar11,local_128);
          FUN_10002ed24(uVar10,uVar11);
          return;
        }
        uVar10 = *(undefined8 *)(lVar4 + 0x10);
        uVar14 = *(undefined8 *)(lVar4 + 0x18);
        lVar15 = *(long *)(lVar4 + 0x20);
        puVar12 = *(undefined4 **)(lVar4 + 0x30);
        if (lVar15 == 0) {
          lVar15 = -0x7ffffffefff3ba80;
          puVar12 = (undefined4 *)0x80000001000c45b0;
          uVar14 = 0xd00000000000002e;
          uVar10 = 0x66;
        }
        FUN_10002c918();
        FUN_100022760(uVar10,uVar14,lVar15,uVar3);
        _swift_bridgeObjectRelease(lVar15);
        _swift_bridgeObjectRelease();
        goto LAB_10003cd10;
      }
      _swift_bridgeObjectRelease(puVar9);
      puVar9 = puVar8;
    }
    _swift_bridgeObjectRelease(puVar9);
    pcVar1 = "A verification code is required to start remote assist";
    lVar4 = -0x2fffffffffffffca;
  }
  puVar12 = (undefined4 *)0x68;
  FUN_100022760(0x68,lVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000,DAT_100105680);
LAB_10003cd10:
  FUN_1000607a4();
  uVar2 = *puVar12;
  FUN_10002c948();
  _swift_allocError(&DAT_1000f78f0,puVar12,0,0);
  *puVar12 = uVar2;
  _swift_willThrow();
  return;
}

