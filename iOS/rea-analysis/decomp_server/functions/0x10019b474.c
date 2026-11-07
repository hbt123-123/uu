// rea decompile_all
// name: FUN_10019b474
// address: 0x10019b474
// body: available
// range: 0x10019b474-0x10019b603 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10019b474(ulong *param_1)

{
  long lVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined1 auStack_b8 [8];
  undefined *local_b0;
  undefined *puStack_a8;
  long local_50;
  ulong uStack_48;
  
  uVar10 = *param_1;
  uVar7 = uVar10;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar7 & 1) == 0) {
    FUN_100074bd0();
  }
  uVar11 = *(ulong *)(uVar10 + 0x10);
  local_50 = uVar10 + 0x20;
  uVar7 = uVar11;
  uStack_48 = uVar11;
  __ss22_minimumMergeRunLengthyS2iF();
  if ((long)uVar7 < (long)uVar11) {
    puVar12 = (undefined *)(uVar11 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (1 < uVar11) {
      puVar3 = puVar12;
      __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
                (puVar12,&DAT_1009a19c0);
      *(undefined **)(puVar3 + 0x10) = puVar12;
    }
    local_b0 = puVar3 + 0x20;
    puStack_a8 = puVar12;
    FUN_10019c03c(&local_b0,auStack_b8,&local_50,uVar7);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    _swift_bridgeObjectRelease(puVar3);
  }
  else if (1 < uVar11) {
    plVar8 = (long *)(uVar10 + 0x78);
    lVar5 = -1;
    uVar7 = 1;
    lVar6 = lVar5;
    plVar4 = plVar8;
LAB_10019b51c:
    do {
      plVar9 = plVar8 + -0xb;
      if (*plVar8 < *plVar9) {
        lVar15 = plVar8[1];
        lVar13 = *plVar8;
        lVar19 = plVar8[3];
        lVar17 = plVar8[2];
        lVar16 = plVar8[5];
        lVar14 = plVar8[4];
        lVar20 = plVar8[7];
        lVar18 = plVar8[6];
        lVar22 = plVar8[9];
        lVar21 = plVar8[8];
        lVar1 = plVar8[10];
        plVar8[10] = plVar8[-1];
        plVar8[7] = plVar8[-4];
        plVar8[6] = plVar8[-5];
        plVar8[9] = plVar8[-2];
        plVar8[8] = plVar8[-3];
        plVar8[3] = plVar8[-8];
        plVar8[2] = plVar8[-9];
        plVar8[5] = plVar8[-6];
        plVar8[4] = plVar8[-7];
        plVar8[1] = plVar8[-10];
        *plVar8 = *plVar9;
        plVar8[-10] = lVar15;
        *plVar9 = lVar13;
        plVar8[-8] = lVar19;
        plVar8[-9] = lVar17;
        *(char *)(plVar8 + -1) = (char)lVar1;
        plVar8[-4] = lVar20;
        plVar8[-5] = lVar18;
        plVar8[-2] = lVar22;
        plVar8[-3] = lVar21;
        plVar8[-6] = lVar16;
        plVar8[-7] = lVar14;
        bVar2 = lVar5 != -1;
        lVar5 = lVar5 + 1;
        plVar8 = plVar8 + -0xb;
        if (bVar2) goto LAB_10019b51c;
      }
      uVar7 = uVar7 + 1;
      plVar8 = plVar4 + 0xb;
      lVar5 = lVar6 + -1;
      lVar6 = lVar5;
      plVar4 = plVar8;
    } while (uVar7 != uVar11);
  }
  *param_1 = uVar10;
  return;
}

