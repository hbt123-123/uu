// rea decompile_all
// name: FUN_1000f71ec
// address: 0x1000f71ec
// body: available
// range: 0x1000f71ec-0x1000f7673 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1000f71ec(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long *plVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined1 auStack_e0 [16];
  long **local_d0;
  undefined *local_c0;
  undefined8 uStack_b8;
  long *local_a0;
  undefined *puStack_98;
  undefined *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined1 auStack_70 [24];
  long *local_58;
  
  _swift_beginAccess(param_1 + 0x10,auStack_70,0,0);
  plVar16 = *(long **)(param_1 + 0x10);
  plVar1 = plVar16;
  local_58 = plVar16;
  _swift_bridgeObjectRetain();
  FUN_1003a1820();
  if (plVar16[2] == 0) {
    uStack_88 = 0;
    local_90 = (undefined *)0x0;
    local_78 = (undefined *)0x0;
    uStack_80 = 0;
LAB_1000f73e4:
    ppuVar6 = &local_90;
    FUN_1000c776c();
  }
  else {
    lVar2 = *plVar1;
    plVar3 = (long *)plVar1[1];
    _swift_bridgeObjectRetain(plVar16);
    _swift_bridgeObjectRetain(plVar3);
    plVar11 = plVar3;
    FUN_1001a2c70(lVar2);
    if (((ulong)plVar11 & 1) == 0) {
      _swift_bridgeObjectRelease(plVar16);
      uStack_88 = 0;
      local_90 = (undefined *)0x0;
      local_78 = (undefined *)0x0;
      uStack_80 = 0;
    }
    else {
      FUN_10003e8bc(plVar16[7] + lVar2 * 0x20,&local_90);
      _swift_bridgeObjectRelease(plVar3);
      plVar3 = plVar16;
    }
    _swift_bridgeObjectRelease(plVar3);
    if (local_78 == (undefined *)0x0) goto LAB_1000f73e4;
    ppuVar6 = &local_c0;
    puVar7 = PTR___sSSN_1009957f8;
    _swift_dynamicCast(ppuVar6,&local_90,PTR___sypN_100995e88 + 8,PTR___sSSN_1009957f8,6);
    if (((ulong)ppuVar6 & 1) != 0) {
      lVar2 = *plVar1;
      ppuVar6 = (undefined **)plVar1[1];
      _swift_bridgeObjectRetain(ppuVar6);
      uVar4 = 4;
      puVar10 = local_c0;
      uVar15 = uStack_b8;
      FUN_100075d40(4,local_c0,uStack_b8);
      _swift_bridgeObjectRelease(uStack_b8);
      local_78 = PTR___sSsN_100995a28;
      puVar5 = &DAT_10099c950;
      _swift_allocObject(&DAT_10099c950,0x30,7);
      local_c0 = (undefined *)0x2a2a2a;
      uStack_b8 = 0xe300000000000000;
      puVar13 = puVar7;
      local_90 = puVar5;
      __sSS14_fromSubstringySSSshFZ(uVar4,puVar10,uVar15);
      _swift_bridgeObjectRelease(puVar7);
      puVar12 = PTR___sSSSTsWP_100995820;
      local_a0 = (long *)uVar4;
      puStack_98 = puVar10;
      __sSS6append10contentsOfyx_tSTRzSJ7ElementRtzlF(&local_c0,PTR___sSSN_1009957f8);
      plVar1 = local_a0;
      puVar7 = puStack_98;
      __sSsySsSScfC();
      *(long **)(puVar5 + 0x10) = plVar1;
      *(undefined **)(puVar5 + 0x18) = puVar7;
      *(undefined **)(puVar5 + 0x20) = puVar12;
      *(undefined **)(puVar5 + 0x28) = puVar13;
      FUN_10007f3d4(&local_90,&local_c0);
      plVar1 = local_58;
      plVar16 = local_58;
      _swift_isUniquelyReferenced_nonNull_native(local_58);
      local_a0 = plVar1;
      FUN_100061e1c(&local_c0,lVar2,ppuVar6,plVar16);
      _swift_bridgeObjectRelease();
      local_58 = local_a0;
      plVar16 = local_a0;
    }
  }
  FUN_1003a17f0();
  if (plVar16[2] == 0) {
    uStack_88 = 0;
    local_90 = (undefined *)0x0;
    local_78 = (undefined *)0x0;
    uStack_80 = 0;
  }
  else {
    puVar7 = *ppuVar6;
    plVar1 = (long *)ppuVar6[1];
    _swift_bridgeObjectRetain(plVar1);
    _swift_bridgeObjectRetain(plVar16);
    plVar3 = plVar1;
    FUN_1001a2c70(puVar7);
    if (((ulong)plVar3 & 1) == 0) {
      _swift_bridgeObjectRelease(plVar16);
      uStack_88 = 0;
      local_90 = (undefined *)0x0;
      local_78 = (undefined *)0x0;
      uStack_80 = 0;
    }
    else {
      FUN_10003e8bc(plVar16[7] + (long)puVar7 * 0x20,&local_90);
      _swift_bridgeObjectRelease(plVar1);
      plVar1 = plVar16;
    }
    _swift_bridgeObjectRelease(plVar1);
    if (local_78 != (undefined *)0x0) {
      ppuVar8 = &local_c0;
      puVar5 = PTR___sSSN_1009957f8;
      _swift_dynamicCast(ppuVar8,&local_90,PTR___sypN_100995e88 + 8,PTR___sSSN_1009957f8,6);
      uVar15 = uStack_b8;
      puVar7 = local_c0;
      if (((ulong)ppuVar8 & 1) != 0) {
        puVar12 = *ppuVar6;
        puVar13 = ppuVar6[1];
        _swift_bridgeObjectRetain(puVar13);
        uVar9 = 4;
        uVar4 = uVar15;
        FUN_100075d40(4,puVar7,uVar15);
        _swift_bridgeObjectRelease(uVar15);
        local_78 = PTR___sSsN_100995a28;
        puVar10 = &DAT_10099c950;
        _swift_allocObject(&DAT_10099c950,0x30,7);
        local_c0 = (undefined *)0x2a2a2a;
        uStack_b8 = 0xe300000000000000;
        puVar14 = puVar5;
        local_90 = puVar10;
        __sSS14_fromSubstringySSSshFZ(uVar9,puVar7,uVar4);
        _swift_bridgeObjectRelease(puVar5);
        puVar5 = PTR___sSSSTsWP_100995820;
        local_a0 = (long *)uVar9;
        puStack_98 = puVar7;
        __sSS6append10contentsOfyx_tSTRzSJ7ElementRtzlF(&local_c0,PTR___sSSN_1009957f8);
        plVar1 = local_a0;
        puVar7 = puStack_98;
        __sSsySsSScfC();
        *(long **)(puVar10 + 0x10) = plVar1;
        *(undefined **)(puVar10 + 0x18) = puVar7;
        *(undefined **)(puVar10 + 0x20) = puVar5;
        *(undefined **)(puVar10 + 0x28) = puVar14;
        FUN_10007f3d4(&local_90,&local_c0);
        plVar1 = local_58;
        plVar16 = local_58;
        _swift_isUniquelyReferenced_nonNull_native(local_58);
        local_a0 = plVar1;
        FUN_100061e1c(&local_c0,puVar12,puVar13,plVar16);
        _swift_bridgeObjectRelease(puVar13);
        local_58 = local_a0;
      }
      goto LAB_1000f75a8;
    }
  }
  FUN_1000c776c(&local_90);
LAB_1000f75a8:
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_d0 = &local_58;
  FUN_1003fb48c(FUN_1000f79fc,auStack_e0,0xd000000000000097,0x80000001008896d0,0xd000000000000023,
                0x80000001008897b0,0x52,0);
  _swift_beginAccess(param_1 + 0x10,&local_90,0,0);
  plVar1 = local_58;
  uVar15 = *(undefined8 *)(param_1 + 0x10);
  _swift_bridgeObjectRetain(uVar15);
  _swift_bridgeObjectRelease(plVar1);
  return uVar15;
}

