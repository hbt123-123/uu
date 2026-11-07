// rea decompile_all
// name: FUN_100044058
// address: 0x100044058
// body: available
// range: 0x100044058-0x100044423 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100044058(void)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined1 auStack_140 [136];
  undefined1 local_b8;
  undefined7 uStack_b7;
  long local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  lVar5 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar15 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(lVar15 + 0x40));
  puVar14 = auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_98 = unaff_x20[1];
  local_a0 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  local_90 = unaff_x20[2];
  local_80 = unaff_x20[4];
  FUN_10000eb08(&DAT_100103650,&DAT_1000d2298);
  FUN_10005ba24(&local_b8);
  uVar4 = local_a8;
  lVar13 = local_b0;
  uVar3 = CONCAT71(uStack_b7,local_b8);
  lStack_98 = local_b0;
  local_90._0_1_ = local_a8;
  local_a0 = uVar3;
  FUN_10000eb08(&DAT_1001036e0,&DAT_1000d26d0);
  FUN_10005ba24(&local_b8);
  FUN_10002d0ec(uVar3,lVar13,uVar4);
  lVar13 = local_b0;
  if (local_b0 != 0) {
    uVar3 = CONCAT71(uStack_b7,local_b8);
    lStack_98 = local_b0;
    lVar6 = local_b0;
    local_a0 = uVar3;
    _swift_bridgeObjectRetain(local_b0);
    __s10Foundation12CharacterSetV11whitespacesACvgZ(puVar14);
    FUN_10003da50();
    puVar7 = puVar14;
    puVar9 = PTR___sSSN_1000f02f8;
    __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF
              (puVar14,PTR___sSSN_1000f02f8,lVar6);
    (**(code **)(lVar15 + 8))(puVar14,lVar5);
    _swift_bridgeObjectRelease(lVar13);
    _swift_bridgeObjectRelease(puVar9);
    uVar1 = (ulong)puVar7 & 0xffffffffffff;
    if (((ulong)puVar9 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)puVar9 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      lStack_98 = unaff_x20[0xb];
      local_a0 = unaff_x20[10];
      local_90._0_1_ = *(undefined1 *)(unaff_x20 + 0xc);
      FUN_10000eb08(&DAT_1001031b8,&DAT_1000d31f0);
      FUN_10005ba24(&local_b8);
      lVar5 = local_b0;
      uVar12 = CONCAT71(uStack_b7,local_b8);
      lVar15 = local_b0;
      FUN_100041108(uVar12,local_b0,0x5f4e4f4953534553,0xec000000454d414e);
      if (unaff_x21 == 0) {
        _swift_bridgeObjectRelease(lVar5);
        puVar9 = &DAT_100102ba0;
        FUN_10000eb08(&DAT_100102ba0,&DAT_1000d0710);
        _swift_initStackObject();
        *(undefined8 *)(puVar9 + 0x18) = 4;
        *(undefined8 *)(puVar9 + 0x10) = 2;
        *(undefined8 *)(puVar9 + 0x20) = 0x6449656369766564;
        *(undefined8 *)(puVar9 + 0x28) = 0xe800000000000000;
        *(undefined8 *)(puVar9 + 0x30) = uVar3;
        *(long *)(puVar9 + 0x38) = lVar13;
        puVar11 = PTR___sSSN_1000f02f8;
        *(undefined **)(puVar9 + 0x48) = PTR___sSSN_1000f02f8;
        *(undefined8 *)(puVar9 + 0x50) = 0x4e6e6f6973736573;
        *(undefined **)(puVar9 + 0x78) = puVar11;
        *(undefined8 *)(puVar9 + 0x58) = 0xeb00000000656d61;
        *(undefined8 *)(puVar9 + 0x60) = uVar12;
        *(long *)(puVar9 + 0x68) = lVar15;
        puVar10 = puVar9;
        FUN_100020900();
        _swift_setDeallocating(puVar9);
        puVar11 = &DAT_100102bb0;
        FUN_10000eb08(&DAT_100102bb0,&DAT_1000d26e0);
        _swift_arrayDestroy(puVar9 + 0x20,2,puVar11);
        uVar12 = 0x1a;
        puVar9 = puVar10;
        FUN_100040498(0x403e000000000000,0x1a,puVar10);
        _swift_bridgeObjectRelease(puVar10);
        lStack_98 = unaff_x20[6];
        local_a0 = unaff_x20[5];
        uStack_88 = unaff_x20[8];
        local_90 = unaff_x20[7];
        local_80 = unaff_x20[9];
        FUN_10000eb08(&DAT_100103000,&DAT_1000d2700);
        FUN_10005ba24(&local_b8);
        uVar3 = CONCAT71(uStack_b7,local_b8);
        lStack_98 = local_b0;
        local_90 = CONCAT71(local_90._1_7_,local_a8);
        FUN_10000eb08(&DAT_100102fa8,&DAT_1000cfa80);
        FUN_10005ba24(&local_b8);
        FUN_10002c9fc(uVar3,local_b0,local_a8);
        FUN_100028244(uVar12,puVar9,local_b8);
        FUN_100020a0c(uVar12,puVar9);
        return;
      }
      _swift_bridgeObjectRelease(lVar13);
      lVar13 = lVar5;
      goto LAB_10004426c;
    }
  }
  puVar8 = (undefined4 *)0x68;
  FUN_100022760(0x68,0xd000000000000026,0x80000001000c6950,DAT_100105680);
  FUN_1000607a4();
  uVar2 = *puVar8;
  FUN_10002c948();
  _swift_allocError(&DAT_1000f78f0,puVar8,0,0);
  *puVar8 = uVar2;
  _swift_willThrow();
LAB_10004426c:
  _swift_bridgeObjectRelease(lVar13);
  return;
}

