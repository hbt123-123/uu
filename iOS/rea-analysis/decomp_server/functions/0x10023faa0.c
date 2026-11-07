// rea decompile_all
// name: FUN_10023faa0
// address: 0x10023faa0
// body: available
// range: 0x10023faa0-0x10023fd43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10023faa0(ulong *param_1)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long extraout_x8;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined1 *puVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  undefined8 auStack_e0 [2];
  undefined1 auStack_d0 [8];
  ulong local_c8;
  ulong *local_c0;
  undefined8 local_90;
  long lStack_88;
  long local_80;
  undefined *puStack_78;
  long *local_70;
  ulong uStack_68;
  
  puVar4 = &DAT_100a7f918;
  FUN_100004bb4(&DAT_100a7f918,&DAT_100813fe8);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = -extraout_x8;
  puVar15 = auStack_d0 + lVar2;
  uVar17 = *param_1;
  uVar8 = uVar17;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar8 & 1) == 0) {
    FUN_100240e8c();
  }
  uVar12 = *(ulong *)(uVar17 + 0x10);
  plVar1 = (long *)(uVar17 + 0x20);
  uVar8 = uVar12;
  local_70 = plVar1;
  uStack_68 = uVar12;
  __ss22_minimumMergeRunLengthyS2iF();
  puVar4 = PTR___sSSN_1009957f8;
  local_c8 = uVar17;
  if ((long)uVar8 < (long)uVar12) {
    puVar10 = (undefined *)(uVar12 >> 1);
    puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (1 < uVar12) {
      uVar17 = uVar8;
      FUN_10023f724();
      puVar4 = puVar10;
      __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ(puVar10,uVar17);
      *(undefined **)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10) = puVar10;
    }
    local_80 = ((ulong)puVar4 & 0xffffffffffffff8) + 0x20;
    puStack_78 = puVar10;
    FUN_10023fd44(&local_80,&local_90,&local_70,uVar8);
    *(undefined8 *)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10) = 0;
    _swift_bridgeObjectRelease(puVar4);
  }
  else if (1 < uVar12) {
    lVar18 = -1;
    uVar8 = 1;
    plVar20 = plVar1;
    local_c0 = param_1;
    do {
      lVar13 = plVar1[uVar8];
      lVar19 = lVar18;
      plVar21 = plVar20;
      do {
        lVar9 = *(long *)(lVar13 + 0x28);
        if (lVar9 == 0) break;
        lVar14 = *plVar21;
        local_80 = *(long *)(lVar13 + 0x20);
        lVar11 = *(long *)(lVar14 + 0x28);
        if (lVar11 == 0) {
          local_90 = 0;
          lVar16 = -0x2000000000000000;
        }
        else {
          local_90 = *(undefined8 *)(lVar14 + 0x20);
          lVar16 = lVar11;
        }
        lVar5 = 0;
        lStack_88 = lVar16;
        puStack_78 = (undefined *)lVar9;
        __s10Foundation6LocaleVMa();
        puVar6 = puVar15;
        (**(code **)(*(long *)(lVar5 + -8) + 0x38))(puVar15,1,1,lVar5);
        FUN_10021e96c();
        _swift_retain(lVar13);
        _swift_retain(lVar14);
        _swift_bridgeObjectRetain(lVar9);
        _swift_bridgeObjectRetain(lVar11);
        *(undefined1 **)((long)auStack_e0 + lVar2) = puVar6;
        *(undefined1 **)((long)auStack_e0 + lVar2 + 8) = puVar6;
        puVar7 = &local_90;
        __sSy10FoundationE7compare_7options5range6localeSo18NSComparisonResultVqd___So22NSStringCompareOptionsVSnySS5IndexVGSgAA6LocaleVSgtSyRd__lF
                  (puVar7,0,0,0,1,puVar15,puVar4,puVar4);
        FUN_100040bb4(puVar15,&DAT_100a7f918,&DAT_100813fe8);
        _swift_release(lVar13);
        _swift_release(lVar14);
        _swift_bridgeObjectRelease(lVar9);
        _swift_bridgeObjectRelease(lVar16);
        if (puVar7 != (undefined8 *)0x1) break;
        lVar9 = *plVar21;
        lVar13 = plVar21[1];
        *plVar21 = lVar13;
        plVar21[1] = lVar9;
        bVar3 = lVar19 != -1;
        lVar19 = lVar19 + 1;
        plVar21 = plVar21 + -1;
      } while (bVar3);
      uVar8 = uVar8 + 1;
      plVar20 = plVar20 + 1;
      lVar18 = lVar18 + -1;
      param_1 = local_c0;
    } while (uVar8 != uVar12);
  }
  *param_1 = local_c8;
  return;
}

