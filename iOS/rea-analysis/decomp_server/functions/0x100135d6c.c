// rea decompile_all
// name: FUN_100135d6c
// address: 0x100135d6c
// body: available
// range: 0x100135d6c-0x100135edb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100135d6c(ulong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *local_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long local_50;
  ulong uStack_48;
  
  uVar11 = *param_1;
  uVar8 = uVar11;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar8 & 1) == 0) {
    FUN_10006f9b0();
  }
  uVar12 = *(ulong *)(uVar11 + 0x10);
  uVar8 = uVar12;
  local_50 = uVar11 + 0x20;
  uStack_48 = uVar12;
  __ss22_minimumMergeRunLengthyS2iF();
  if ((long)uVar8 < (long)uVar12) {
    puVar13 = (undefined *)(uVar12 >> 1);
    puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (1 < uVar12) {
      puVar5 = puVar13;
      __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
                (puVar13,&DAT_1009be950);
      *(undefined **)(puVar5 + 0x10) = puVar13;
    }
    local_68 = puVar5 + 0x20;
    puStack_60 = puVar13;
    FUN_1001391c4(&local_68,auStack_58,&local_50,uVar8);
    *(undefined8 *)(puVar5 + 0x10) = 0;
    _swift_bridgeObjectRelease(puVar5);
  }
  else if (1 < uVar12) {
    puVar6 = (undefined8 *)(uVar11 + 0x48);
    lVar7 = -1;
    uVar8 = 1;
    do {
      iVar3 = *(int *)(uVar11 + 0x20 + uVar8 * 0x38 + 0x10);
      lVar9 = lVar7;
      puVar10 = puVar6;
      do {
        if (*(int *)(puVar10 + -3) <= iVar3) break;
        uVar1 = puVar10[2];
        uVar2 = puVar10[3];
        uVar15 = puVar10[6];
        uVar14 = puVar10[5];
        uVar17 = puVar10[8];
        uVar16 = puVar10[7];
        puVar10[3] = puVar10[-4];
        puVar10[2] = puVar10[-5];
        puVar10[5] = puVar10[-2];
        puVar10[4] = puVar10[-3];
        puVar10[7] = *puVar10;
        puVar10[6] = puVar10[-1];
        puVar10[8] = puVar10[1];
        puVar10[-5] = uVar1;
        puVar10[-4] = uVar2;
        *(int *)(puVar10 + -3) = iVar3;
        puVar10[-1] = uVar15;
        puVar10[-2] = uVar14;
        puVar10[1] = uVar17;
        *puVar10 = uVar16;
        puVar10 = puVar10 + -7;
        bVar4 = lVar9 != -1;
        lVar9 = lVar9 + 1;
      } while (bVar4);
      uVar8 = uVar8 + 1;
      puVar6 = puVar6 + 7;
      lVar7 = lVar7 + -1;
    } while (uVar8 != uVar12);
  }
  *param_1 = uVar11;
  return;
}

