// rea decompile_all
// name: FUN_100043930
// address: 0x100043930
// body: available
// range: 0x100043930-0x100043d87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100043bcc) */

void FUN_100043930(void)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar14;
  undefined1 *puVar15;
  long lVar16;
  undefined1 auStack_170 [184];
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
  lVar16 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(lVar16 + 0x40));
  puVar15 = auStack_170 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_98 = unaff_x20[1];
  local_a0 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  local_90 = unaff_x20[2];
  local_80 = unaff_x20[4];
  FUN_10000eb08(&DAT_100103650,&DAT_1000d2298);
  FUN_10005ba24(&local_b8);
  uVar4 = local_a8;
  lVar14 = local_b0;
  uVar3 = CONCAT71(uStack_b7,local_b8);
  lStack_98 = local_b0;
  local_90._0_1_ = local_a8;
  local_a0 = uVar3;
  FUN_10000eb08(&DAT_1001036e0,&DAT_1000d26d0);
  FUN_10005ba24(&local_b8);
  FUN_10002d0ec(uVar3,lVar14,uVar4);
  lVar14 = local_b0;
  if (local_b0 != 0) {
    uVar3 = CONCAT71(uStack_b7,local_b8);
    lStack_98 = local_b0;
    lVar6 = local_b0;
    local_a0 = uVar3;
    _swift_bridgeObjectRetain(local_b0);
    __s10Foundation12CharacterSetV11whitespacesACvgZ(puVar15);
    FUN_10003da50();
    puVar7 = puVar15;
    puVar8 = PTR___sSSN_1000f02f8;
    __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF
              (puVar15,PTR___sSSN_1000f02f8,lVar6);
    (**(code **)(lVar16 + 8))(puVar15,lVar5);
    _swift_bridgeObjectRelease(lVar14);
    _swift_bridgeObjectRelease(puVar8);
    uVar1 = (ulong)puVar7 & 0xffffffffffff;
    if (((ulong)puVar8 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)puVar8 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      lStack_98 = unaff_x20[0xb];
      local_a0 = unaff_x20[10];
      local_90._0_1_ = *(undefined1 *)(unaff_x20 + 0xc);
      puVar8 = &DAT_1001031b8;
      FUN_10000eb08(&DAT_1001031b8,&DAT_1000d31f0);
      FUN_10005ba24(&local_b8);
      lVar5 = local_b0;
      uVar13 = CONCAT71(uStack_b7,local_b8);
      lVar16 = local_b0;
      FUN_100041108(uVar13,local_b0,0x454d414e5f444c4f,0xe800000000000000);
      if (unaff_x21 == 0) {
        _swift_bridgeObjectRelease(lVar5);
        lStack_98 = unaff_x20[0xe];
        local_a0 = unaff_x20[0xd];
        local_90._0_1_ = *(undefined1 *)(unaff_x20 + 0xf);
        FUN_10005ba24(&local_b8,puVar8);
        lVar5 = local_b0;
        uVar10 = CONCAT71(uStack_b7,local_b8);
        lVar6 = local_b0;
        FUN_100041108(uVar10,local_b0,0x454d414e5f57454e,0xe800000000000000);
        _swift_bridgeObjectRelease(lVar5);
        puVar8 = &DAT_100102ba0;
        FUN_10000eb08(&DAT_100102ba0,&DAT_1000d0710);
        _swift_initStackObject();
        *(undefined8 *)(puVar8 + 0x20) = 0x6449656369766564;
        *(undefined8 *)(puVar8 + 0x18) = 6;
        *(undefined8 *)(puVar8 + 0x10) = 3;
        *(undefined8 *)(puVar8 + 0x28) = 0xe800000000000000;
        *(undefined8 *)(puVar8 + 0x30) = uVar3;
        *(long *)(puVar8 + 0x38) = lVar14;
        puVar12 = PTR___sSSN_1000f02f8;
        *(undefined **)(puVar8 + 0x48) = PTR___sSSN_1000f02f8;
        *(undefined8 *)(puVar8 + 0x50) = 0x656d614e646c6f;
        *(undefined8 *)(puVar8 + 0x58) = 0xe700000000000000;
        *(undefined8 *)(puVar8 + 0x60) = uVar13;
        *(long *)(puVar8 + 0x68) = lVar16;
        *(undefined **)(puVar8 + 0x78) = puVar12;
        *(undefined8 *)(puVar8 + 0x80) = 0x656d614e77656e;
        *(undefined **)(puVar8 + 0xa8) = puVar12;
        *(undefined8 *)(puVar8 + 0x88) = 0xe700000000000000;
        *(undefined8 *)(puVar8 + 0x90) = uVar10;
        *(long *)(puVar8 + 0x98) = lVar6;
        puVar11 = puVar8;
        FUN_100020900();
        _swift_setDeallocating(puVar8);
        puVar12 = &DAT_100102bb0;
        FUN_10000eb08(&DAT_100102bb0,&DAT_1000d26e0);
        _swift_arrayDestroy(puVar8 + 0x20,3,puVar12);
        uVar13 = 0x19;
        puVar8 = puVar11;
        FUN_100040498(0x403e000000000000,0x19,puVar11);
        _swift_bridgeObjectRelease(puVar11);
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
        FUN_10002950c(uVar13,puVar8,local_b8);
        FUN_100020a0c(uVar13,puVar8);
        return;
      }
      _swift_bridgeObjectRelease(lVar14);
      lVar14 = lVar5;
      goto LAB_100043b40;
    }
  }
  puVar9 = (undefined4 *)0x68;
  FUN_100022760(0x68,0xd000000000000026,0x80000001000c6950,DAT_100105680);
  FUN_1000607a4();
  uVar2 = *puVar9;
  FUN_10002c948();
  _swift_allocError(&DAT_1000f78f0,puVar9,0,0);
  *puVar9 = uVar2;
  _swift_willThrow();
LAB_100043b40:
  _swift_bridgeObjectRelease(lVar14);
  return;
}

