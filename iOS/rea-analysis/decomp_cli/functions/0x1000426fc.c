// rea decompile_all
// name: FUN_1000426fc
// address: 0x1000426fc
// body: available
// range: 0x1000426fc-0x100042a07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000426fc(void)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar13;
  long lVar14;
  undefined1 auStack_100 [88];
  undefined1 local_a8;
  undefined7 uStack_a7;
  long local_a0;
  undefined1 local_98;
  undefined8 local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  lVar6 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar14 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(lVar14 + 0x40));
  puVar13 = auStack_100 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_88 = unaff_x20[1];
  local_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  local_80 = unaff_x20[2];
  local_70 = unaff_x20[4];
  FUN_10000eb08(&DAT_100103650,&DAT_1000d2298);
  FUN_10005ba24(&local_a8);
  uVar5 = local_98;
  lVar4 = local_a0;
  uVar11 = CONCAT71(uStack_a7,local_a8);
  lStack_88 = local_a0;
  local_80 = CONCAT71(local_80._1_7_,local_98);
  FUN_10000eb08(&DAT_1001036e0,&DAT_1000d26d0);
  FUN_10005ba24(&local_a8);
  FUN_10002d0ec(uVar11,lVar4,uVar5);
  lVar4 = local_a0;
  if (local_a0 != 0) {
    uVar11 = CONCAT71(uStack_a7,local_a8);
    lStack_88 = local_a0;
    lVar7 = local_a0;
    _swift_bridgeObjectRetain(local_a0);
    __s10Foundation12CharacterSetV11whitespacesACvgZ(puVar13);
    FUN_10003da50();
    puVar10 = PTR___sSSN_1000f02f8;
    puVar8 = puVar13;
    puVar9 = PTR___sSSN_1000f02f8;
    __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF
              (puVar13,PTR___sSSN_1000f02f8,lVar7);
    (**(code **)(lVar14 + 8))(puVar13,lVar6);
    _swift_bridgeObjectRelease(lVar4);
    _swift_bridgeObjectRelease(puVar9);
    uVar1 = (ulong)puVar8 & 0xffffffffffff;
    if (((ulong)puVar9 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)puVar9 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      puVar9 = &DAT_100102ba0;
      FUN_10000eb08(&DAT_100102ba0,&DAT_1000d0710);
      _swift_initStackObject();
      *(undefined8 *)(puVar9 + 0x20) = 0x6449656369766564;
      *(undefined8 *)(puVar9 + 0x18) = 2;
      *(undefined8 *)(puVar9 + 0x10) = 1;
      *(undefined **)(puVar9 + 0x48) = puVar10;
      *(undefined8 *)(puVar9 + 0x28) = 0xe800000000000000;
      *(undefined8 *)(puVar9 + 0x30) = uVar11;
      *(long *)(puVar9 + 0x38) = lVar4;
      puVar10 = puVar9;
      FUN_100020900();
      _swift_setDeallocating(puVar9);
      FUN_10001fc18(puVar9 + 0x20,&DAT_100102bb0,&DAT_1000d26e0);
      uVar11 = 0x17;
      puVar9 = puVar10;
      FUN_100040498(0x403e000000000000,0x17,puVar10);
      _swift_bridgeObjectRelease(puVar10);
      if (unaff_x21 != 0) {
        return;
      }
      lStack_88 = unaff_x20[6];
      local_90 = unaff_x20[5];
      uStack_78 = unaff_x20[8];
      local_80 = unaff_x20[7];
      local_70 = unaff_x20[9];
      FUN_10000eb08(&DAT_100103000,&DAT_1000d2700);
      FUN_10005ba24(&local_a8);
      uVar3 = CONCAT71(uStack_a7,local_a8);
      lStack_88 = local_a0;
      local_80 = CONCAT71(local_80._1_7_,local_98);
      FUN_10000eb08(&DAT_100102fa8,&DAT_1000cfa80);
      FUN_10005ba24(&local_a8);
      FUN_10002c9fc(uVar3,local_a0,local_98);
      FUN_1000285fc(uVar11,puVar9,local_a8);
      FUN_100020a0c(uVar11,puVar9);
      return;
    }
  }
  puVar12 = (undefined4 *)0x68;
  FUN_100022760(0x68,0xd000000000000026,0x80000001000c6950,DAT_100105680);
  FUN_1000607a4();
  uVar2 = *puVar12;
  FUN_10002c948();
  _swift_allocError(&DAT_1000f78f0,puVar12,0,0);
  *puVar12 = uVar2;
  _swift_willThrow();
  _swift_bridgeObjectRelease(lVar4);
  return;
}

