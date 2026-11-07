// rea decompile_all
// name: FUN_100046a9c
// address: 0x100046a9c
// body: available
// range: 0x100046a9c-0x100046bcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100046a9c(ulong *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  uint *puVar8;
  long lVar9;
  uint *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *local_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  uint *local_50;
  ulong uStack_48;
  
  uVar11 = *param_1;
  uVar7 = uVar11;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar7 & 1) == 0) {
    FUN_100074ae8();
  }
  uVar12 = *(ulong *)(uVar11 + 0x10);
  puVar1 = (uint *)(uVar11 + 0x20);
  uVar7 = uVar12;
  local_50 = puVar1;
  uStack_48 = uVar12;
  __ss22_minimumMergeRunLengthyS2iF();
  if ((long)uVar7 < (long)uVar12) {
    puVar13 = (undefined *)(uVar12 >> 1);
    puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (1 < uVar12) {
      puVar5 = puVar13;
      __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
                (puVar13,PTR___ss6UInt32VN_100995dc0);
      *(undefined **)(puVar5 + 0x10) = puVar13;
    }
    local_68 = puVar5 + 0x20;
    puStack_60 = puVar13;
    FUN_1000471f8(&local_68,auStack_58,&local_50,uVar7);
    *(undefined8 *)(puVar5 + 0x10) = 0;
    _swift_bridgeObjectRelease(puVar5);
  }
  else if (1 < uVar12) {
    lVar6 = -1;
    uVar7 = 1;
    puVar8 = puVar1;
    do {
      uVar3 = puVar1[uVar7];
      lVar9 = lVar6;
      puVar10 = puVar8;
      do {
        uVar2 = *puVar10;
        if (uVar2 <= uVar3) break;
        *puVar10 = uVar3;
        puVar10[1] = uVar2;
        bVar4 = lVar9 != -1;
        lVar9 = lVar9 + 1;
        puVar10 = puVar10 + -1;
      } while (bVar4);
      uVar7 = uVar7 + 1;
      puVar8 = puVar8 + 1;
      lVar6 = lVar6 + -1;
    } while (uVar7 != uVar12);
  }
  *param_1 = uVar11;
  return;
}

