// rea decompile_all
// name: FUN_100042098
// address: 0x100042098
// body: available
// range: 0x100042098-0x1000423bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100042098(void)

{
  ulong uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar12;
  long lVar13;
  undefined1 auStack_110 [8];
  undefined8 local_100;
  long local_f8;
  undefined1 local_f0;
  undefined8 local_90;
  long lStack_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  
  lVar4 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar13 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(lVar13 + 0x40));
  puVar12 = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_88 = unaff_x20[1];
  local_90 = *unaff_x20;
  local_78 = (undefined *)unaff_x20[3];
  local_80 = unaff_x20[2];
  local_70 = unaff_x20[4];
  FUN_10000eb08(&DAT_100103650,&DAT_1000d2298);
  FUN_10005ba24(&local_100);
  lVar3 = local_f8;
  uVar10 = local_100;
  local_90 = local_100;
  lStack_88 = local_f8;
  FUN_10000eb08(&DAT_1001036e0,&DAT_1000d26d0);
  FUN_10005ba24(&local_100);
  FUN_10002d0ec(uVar10,lVar3,local_f0);
  lVar3 = local_f8;
  uVar10 = local_100;
  if (local_f8 != 0) {
    local_90 = local_100;
    lStack_88 = local_f8;
    lVar5 = local_f8;
    _swift_bridgeObjectRetain(local_f8);
    __s10Foundation12CharacterSetV11whitespacesACvgZ(puVar12);
    FUN_10003da50();
    puVar9 = PTR___sSSN_1000f02f8;
    puVar6 = puVar12;
    puVar7 = PTR___sSSN_1000f02f8;
    __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF
              (puVar12,PTR___sSSN_1000f02f8,lVar5);
    (**(code **)(lVar13 + 8))(puVar12,lVar4);
    _swift_bridgeObjectRelease(lVar3);
    _swift_bridgeObjectRelease(puVar7);
    uVar1 = (ulong)puVar6 & 0xffffffffffff;
    if (((ulong)puVar7 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)puVar7 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      puVar7 = &DAT_100102ba0;
      FUN_10000eb08(&DAT_100102ba0,&DAT_1000d0710);
      _swift_initStackObject();
      *(undefined8 *)(puVar7 + 0x20) = 0x6449656369766564;
      *(undefined8 *)(puVar7 + 0x18) = 2;
      *(undefined8 *)(puVar7 + 0x10) = 1;
      *(undefined **)(puVar7 + 0x48) = puVar9;
      *(undefined8 *)(puVar7 + 0x28) = 0xe800000000000000;
      *(undefined8 *)(puVar7 + 0x30) = uVar10;
      *(long *)(puVar7 + 0x38) = lVar3;
      puVar8 = puVar7;
      FUN_100020900();
      _swift_setDeallocating(puVar7);
      FUN_10001fc18(puVar7 + 0x20,&DAT_100102bb0,&DAT_1000d26e0);
      lStack_88 = unaff_x20[6];
      local_90 = unaff_x20[5];
      local_80 = CONCAT71(local_80._1_7_,*(undefined1 *)(unaff_x20 + 7));
      FUN_10000eb08(&DAT_1001031b8,&DAT_1000d31f0);
      FUN_10005ba24(&local_100);
      if (local_f8 != 0) {
        local_78 = puVar9;
        local_90 = local_100;
        lStack_88 = local_f8;
        FUN_100020a9c(&local_90,&local_100);
        puVar9 = puVar8;
        _swift_isUniquelyReferenced_nonNull_native(puVar8);
        FUN_100033400(&local_100,0x4e6e6f6973736573,0xeb00000000656d61,puVar9);
      }
      uVar10 = 0x1c;
      puVar9 = puVar8;
      FUN_100040498(0x403e000000000000,0x1c,puVar8);
      _swift_bridgeObjectRelease(puVar8);
      if (unaff_x21 != 0) {
        return;
      }
      FUN_10002d05c(uVar10,puVar9,0);
      FUN_100020a0c(uVar10,puVar9);
      return;
    }
  }
  puVar11 = (undefined4 *)0x68;
  FUN_100022760(0x68,0xd000000000000026,0x80000001000c6950,DAT_100105680);
  FUN_1000607a4();
  uVar2 = *puVar11;
  FUN_10002c948();
  _swift_allocError(&DAT_1000f78f0,puVar11,0,0);
  *puVar11 = uVar2;
  _swift_willThrow();
  _swift_bridgeObjectRelease(lVar3);
  return;
}

