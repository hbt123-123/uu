// rea decompile_all
// name: FUN_100046bcc
// address: 0x100046bcc
// body: available
// range: 0x100046bcc-0x100046d5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100046bcc(ulong *param_1)

{
  bool bVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
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
  uVar6 = uVar10;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar6 & 1) == 0) {
    FUN_100074b58();
  }
  uVar11 = *(ulong *)(uVar10 + 0x10);
  local_50 = uVar10 + 0x20;
  uVar6 = uVar11;
  uStack_48 = uVar11;
  __ss22_minimumMergeRunLengthyS2iF();
  if ((long)uVar6 < (long)uVar11) {
    puVar12 = (undefined *)(uVar11 >> 1);
    puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (1 < uVar11) {
      puVar2 = puVar12;
      __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
                (puVar12,&DAT_1009b62a8);
      *(undefined **)(puVar2 + 0x10) = puVar12;
    }
    local_b0 = puVar2 + 0x20;
    puStack_a8 = puVar12;
    FUN_100047564(&local_b0,auStack_b8,&local_50,uVar6);
    *(undefined8 *)(puVar2 + 0x10) = 0;
    _swift_bridgeObjectRelease(puVar2);
  }
  else if (1 < uVar11) {
    plVar7 = (long *)(uVar10 + 0x78);
    lVar4 = -1;
    uVar6 = 1;
    lVar5 = lVar4;
    plVar3 = plVar7;
LAB_100046c74:
    do {
      plVar8 = plVar7 + -0xb;
      if (*plVar7 < *plVar8) {
        lVar15 = plVar7[1];
        lVar13 = *plVar7;
        lVar19 = plVar7[3];
        lVar17 = plVar7[2];
        lVar16 = plVar7[5];
        lVar14 = plVar7[4];
        lVar20 = plVar7[7];
        lVar18 = plVar7[6];
        lVar22 = plVar7[9];
        lVar21 = plVar7[8];
        lVar9 = plVar7[10];
        plVar7[10] = plVar7[-1];
        plVar7[7] = plVar7[-4];
        plVar7[6] = plVar7[-5];
        plVar7[9] = plVar7[-2];
        plVar7[8] = plVar7[-3];
        plVar7[3] = plVar7[-8];
        plVar7[2] = plVar7[-9];
        plVar7[5] = plVar7[-6];
        plVar7[4] = plVar7[-7];
        plVar7[1] = plVar7[-10];
        *plVar7 = *plVar8;
        plVar7[-10] = lVar15;
        *plVar8 = lVar13;
        plVar7[-8] = lVar19;
        plVar7[-9] = lVar17;
        plVar7[-1] = lVar9;
        plVar7[-4] = lVar20;
        plVar7[-5] = lVar18;
        plVar7[-2] = lVar22;
        plVar7[-3] = lVar21;
        plVar7[-6] = lVar16;
        plVar7[-7] = lVar14;
        bVar1 = lVar4 != -1;
        lVar4 = lVar4 + 1;
        plVar7 = plVar7 + -0xb;
        if (bVar1) goto LAB_100046c74;
      }
      uVar6 = uVar6 + 1;
      plVar7 = plVar3 + 0xb;
      lVar4 = lVar5 + -1;
      lVar5 = lVar4;
      plVar3 = plVar7;
    } while (uVar6 != uVar11);
  }
  *param_1 = uVar10;
  return;
}

