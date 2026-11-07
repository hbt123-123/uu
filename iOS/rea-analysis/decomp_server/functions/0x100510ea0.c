// rea decompile_all
// name: FUN_100510ea0
// address: 0x100510ea0
// body: available
// range: 0x100510ea0-0x100510fcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100510ea0(ulong *param_1)

{
  long *plVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *local_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long *local_50;
  ulong uStack_48;
  
  uVar11 = *param_1;
  uVar5 = uVar11;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar5 & 1) == 0) {
    FUN_10051f10c();
  }
  uVar12 = *(ulong *)(uVar11 + 0x10);
  plVar1 = (long *)(uVar11 + 0x20);
  uVar5 = uVar12;
  local_50 = plVar1;
  uStack_48 = uVar12;
  __ss22_minimumMergeRunLengthyS2iF();
  if ((long)uVar5 < (long)uVar12) {
    puVar13 = (undefined *)(uVar12 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (1 < uVar12) {
      puVar3 = puVar13;
      __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
                (puVar13,PTR___sSiN_100995968);
      *(undefined **)(puVar3 + 0x10) = puVar13;
    }
    local_68 = puVar3 + 0x20;
    puStack_60 = puVar13;
    FUN_100510fd0(&local_68,auStack_58,&local_50,uVar5);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    _swift_bridgeObjectRelease(puVar3);
  }
  else if (1 < uVar12) {
    lVar4 = -1;
    uVar5 = 1;
    plVar6 = plVar1;
    do {
      lVar7 = plVar1[uVar5];
      lVar8 = lVar4;
      plVar9 = plVar6;
      do {
        lVar10 = *plVar9;
        if (lVar10 <= lVar7) break;
        *plVar9 = lVar7;
        plVar9[1] = lVar10;
        bVar2 = lVar8 != -1;
        lVar8 = lVar8 + 1;
        plVar9 = plVar9 + -1;
      } while (bVar2);
      uVar5 = uVar5 + 1;
      plVar6 = plVar6 + 1;
      lVar4 = lVar4 + -1;
    } while (uVar5 != uVar12);
  }
  *param_1 = uVar11;
  return;
}

