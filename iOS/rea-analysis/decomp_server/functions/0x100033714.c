// rea decompile_all
// name: FUN_100033714
// address: 0x100033714
// body: available
// range: 0x100033714-0x10003386f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100033714(ulong *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *local_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long local_50;
  ulong uStack_48;
  
  uVar12 = *param_1;
  uVar8 = uVar12;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar8 & 1) == 0) {
    FUN_100074b44();
  }
  uVar13 = *(ulong *)(uVar12 + 0x10);
  uVar8 = uVar13;
  local_50 = uVar12 + 0x20;
  uStack_48 = uVar13;
  __ss22_minimumMergeRunLengthyS2iF();
  if ((long)uVar8 < (long)uVar13) {
    puVar14 = (undefined *)(uVar13 >> 1);
    puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (1 < uVar13) {
      puVar4 = &DAT_100a75a68;
      FUN_100004bb4(&DAT_100a75a68,&DAT_100809b18);
      puVar5 = puVar14;
      __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ(puVar14,puVar4);
      *(undefined **)(puVar5 + 0x10) = puVar14;
    }
    local_68 = puVar5 + 0x20;
    puStack_60 = puVar14;
    FUN_1000379f4(&local_68,auStack_58,&local_50,uVar8);
    *(undefined8 *)(puVar5 + 0x10) = 0;
    _swift_bridgeObjectRelease(puVar5);
  }
  else if (1 < uVar13) {
    puVar6 = (undefined8 *)(uVar12 + 0x28);
    lVar7 = -1;
    uVar8 = 1;
    do {
      uVar1 = *(uint *)(uVar12 + 0x20 + uVar8 * 8 + 4);
      lVar9 = lVar7;
      puVar10 = puVar6;
      do {
        if (*(uint *)((long)puVar10 + -4) <= uVar1) break;
        puVar11 = puVar10 + -1;
        uVar2 = *(undefined4 *)puVar10;
        *puVar10 = *puVar11;
        *(undefined4 *)puVar11 = uVar2;
        *(uint *)((long)puVar10 + -4) = uVar1;
        bVar3 = lVar9 != -1;
        lVar9 = lVar9 + 1;
        puVar10 = puVar11;
      } while (bVar3);
      uVar8 = uVar8 + 1;
      puVar6 = puVar6 + 1;
      lVar7 = lVar7 + -1;
    } while (uVar8 != uVar13);
  }
  *param_1 = uVar12;
  return;
}

