// rea decompile_all
// name: FUN_10005fc0c
// address: 0x10005fc0c
// body: available
// range: 0x10005fc0c-0x10005fd5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005fc0c(ulong *param_1)

{
  long lVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  long *plVar13;
  undefined *local_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long *local_50;
  ulong uStack_48;
  
  uVar10 = *param_1;
  uVar7 = uVar10;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar7 & 1) == 0) {
    FUN_100074b80();
  }
  uVar11 = *(ulong *)(uVar10 + 0x10);
  plVar8 = (long *)(uVar10 + 0x20);
  uVar7 = uVar11;
  local_50 = plVar8;
  uStack_48 = uVar11;
  __ss22_minimumMergeRunLengthyS2iF();
  if ((long)uVar7 < (long)uVar11) {
    puVar12 = (undefined *)(uVar11 >> 1);
    puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (1 < uVar11) {
      puVar3 = &DAT_100a761c0;
      FUN_100004bb4(&DAT_100a761c0,&DAT_10080a950);
      puVar4 = puVar12;
      __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ(puVar12,puVar3);
      *(undefined **)(puVar4 + 0x10) = puVar12;
    }
    local_68 = puVar4 + 0x20;
    puStack_60 = puVar12;
    FUN_10006f0fc(&local_68,auStack_58,&local_50,uVar7);
    *(undefined8 *)(puVar4 + 0x10) = 0;
    _swift_bridgeObjectRelease(puVar4);
  }
  else if (1 < uVar11) {
    lVar5 = -1;
    uVar7 = 1;
    plVar13 = plVar8;
    lVar6 = lVar5;
LAB_10005fcb0:
    do {
      lVar9 = plVar8[2];
      if (lVar9 < *plVar8) {
        lVar1 = plVar8[3];
        plVar8[3] = plVar8[1];
        plVar8[2] = *plVar8;
        *plVar8 = lVar9;
        *(int *)(plVar8 + 1) = (int)lVar1;
        plVar8 = plVar8 + -2;
        bVar2 = lVar5 != -1;
        lVar5 = lVar5 + 1;
        if (bVar2) goto LAB_10005fcb0;
      }
      uVar7 = uVar7 + 1;
      plVar8 = plVar13 + 2;
      lVar5 = lVar6 + -1;
      plVar13 = plVar8;
      lVar6 = lVar5;
    } while (uVar7 != uVar11);
  }
  *param_1 = uVar10;
  return;
}

