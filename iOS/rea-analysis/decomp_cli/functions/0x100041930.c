// rea decompile_all
// name: FUN_100041930
// address: 0x100041930
// body: available
// range: 0x100041930-0x100041df3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100041930(void)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined *puVar11;
  long extraout_x8;
  long lVar12;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar13;
  undefined1 auStack_130 [16];
  undefined8 auStack_120 [2];
  undefined1 auStack_110 [8];
  undefined8 local_100;
  undefined *local_f8;
  undefined1 local_f0;
  undefined8 local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  
  lVar3 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(lVar12 + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar13 = auStack_110 + lVar2;
  puStack_88 = (undefined *)unaff_x20[1];
  local_90 = *unaff_x20;
  local_78 = (undefined *)unaff_x20[3];
  local_80 = unaff_x20[2];
  local_70 = unaff_x20[4];
  FUN_10000eb08(&DAT_100103650,&DAT_1000d2298);
  FUN_10005ba24(&local_100);
  puVar7 = local_f8;
  uVar9 = local_100;
  local_90 = local_100;
  puStack_88 = local_f8;
  local_80._0_1_ = local_f0;
  puVar4 = &DAT_1001036e0;
  FUN_10000eb08(&DAT_1001036e0,&DAT_1000d26d0);
  FUN_10005ba24(&local_100);
  FUN_10002d0ec(uVar9,puVar7,local_f0);
  puVar7 = local_f8;
  uVar9 = local_100;
  if (local_f8 != (undefined *)0x0) {
    local_90 = local_100;
    puStack_88 = local_f8;
    puVar5 = local_f8;
    _swift_bridgeObjectRetain(local_f8);
    __s10Foundation12CharacterSetV11whitespacesACvgZ(puVar13);
    FUN_10003da50();
    puVar6 = puVar13;
    puVar11 = PTR___sSSN_1000f02f8;
    __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF
              (puVar13,PTR___sSSN_1000f02f8,puVar5);
    (**(code **)(lVar12 + 8))(puVar13,lVar3);
    _swift_bridgeObjectRelease(puVar7);
    _swift_bridgeObjectRelease(puVar11);
    uVar8 = (ulong)puVar6 & 0xffffffffffff;
    if (((ulong)puVar11 & 0x2000000000000000) != 0) {
      uVar8 = (ulong)puVar11 >> 0x38 & 0xf;
    }
    if (uVar8 != 0) {
      puVar5 = &DAT_100102ba0;
      FUN_10000eb08(&DAT_100102ba0,&DAT_1000d0710);
      _swift_initStackObject();
      *(undefined8 *)(puVar5 + 0x20) = 0x6449656369766564;
      *(undefined8 *)(puVar5 + 0x18) = 2;
      *(undefined8 *)(puVar5 + 0x10) = 1;
      puVar11 = PTR___sSSN_1000f02f8;
      *(undefined **)(puVar5 + 0x48) = PTR___sSSN_1000f02f8;
      *(undefined8 *)(puVar5 + 0x28) = 0xe800000000000000;
      *(undefined8 *)(puVar5 + 0x30) = uVar9;
      *(undefined **)(puVar5 + 0x38) = puVar7;
      puVar7 = puVar5;
      FUN_100020900();
      _swift_setDeallocating(puVar5);
      FUN_10001fc18(puVar5 + 0x20,&DAT_100102bb0,&DAT_1000d26e0);
      puStack_88 = (undefined *)unaff_x20[6];
      local_90 = unaff_x20[5];
      local_80 = CONCAT71(local_80._1_7_,*(undefined1 *)(unaff_x20 + 7));
      FUN_10000eb08(&DAT_1001031b8,&DAT_1000d31f0);
      FUN_10005ba24(&local_100);
      if (local_f8 != (undefined *)0x0) {
        local_78 = puVar11;
        local_90 = local_100;
        puStack_88 = local_f8;
        FUN_100020a9c(&local_90,&local_100);
        puVar5 = puVar7;
        _swift_isUniquelyReferenced_nonNull_native(puVar7);
        FUN_100033400(&local_100,0x4e6e6f6973736573,0xeb00000000656d61,puVar5);
      }
      puStack_88 = (undefined *)unaff_x20[9];
      local_90 = unaff_x20[8];
      local_80._0_1_ = *(undefined1 *)(unaff_x20 + 10);
      FUN_10005ba24(&local_100,puVar4);
      if (local_f8 != (undefined *)0x0) {
        uVar9 = local_100;
        puVar11 = local_f8;
        __sSS10lowercasedSSyF();
        _swift_bridgeObjectRelease(local_f8);
        puVar4 = &DAT_100102c30;
        FUN_10000eb08(&DAT_100102c30,&DAT_1000d0700);
        _swift_initStaticObject();
        (*(code *)PTR____chkstk_darwin_1000f0278)();
        *(undefined8 **)((long)auStack_120 + lVar2) = &local_90;
        uVar8 = 0;
        FUN_10002150c(FUN_100046614,auStack_130 + lVar2,puVar4);
        puVar5 = PTR___sSSN_1000f02f8;
        _swift_arrayDestroy(puVar4 + 0x20,4,PTR___sSSN_1000f02f8);
        if ((uVar8 & 1) == 0) {
          _swift_bridgeObjectRelease(puVar11);
          _swift_bridgeObjectRelease(puVar7);
          puVar10 = (undefined4 *)0x2;
          FUN_100022760(2,0xd00000000000003c,0x80000001000c6980,DAT_100105680);
          FUN_1000607a4();
          uVar1 = *puVar10;
          FUN_10002c948();
          _swift_allocError(&DAT_1000f78f0,puVar10,0,0);
          *puVar10 = uVar1;
          _swift_willThrow();
          return;
        }
        local_78 = puVar5;
        local_90 = uVar9;
        puStack_88 = puVar11;
        FUN_100020a9c(&local_90,&local_100);
        puVar4 = puVar7;
        _swift_isUniquelyReferenced_nonNull_native(puVar7);
        FUN_100033400(&local_100,0x6c6c656873,0xe500000000000000,puVar4);
      }
      uVar9 = 0x1b;
      puVar4 = puVar7;
      FUN_100040498(0x403e000000000000,0x1b,puVar7);
      if (unaff_x21 == 0) {
        _swift_bridgeObjectRelease(puVar7);
        FUN_10002d05c(uVar9,puVar4,0);
        FUN_100020a0c(uVar9,puVar4);
        return;
      }
      goto LAB_100041d1c;
    }
  }
  puVar10 = (undefined4 *)0x68;
  FUN_100022760(0x68,0xd000000000000026,0x80000001000c6950,DAT_100105680);
  FUN_1000607a4();
  uVar1 = *puVar10;
  FUN_10002c948();
  _swift_allocError(&DAT_1000f78f0,puVar10,0,0);
  *puVar10 = uVar1;
  _swift_willThrow();
LAB_100041d1c:
  _swift_bridgeObjectRelease(puVar7);
  return;
}

