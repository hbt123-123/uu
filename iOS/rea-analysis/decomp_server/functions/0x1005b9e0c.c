// rea decompile_all
// name: FUN_1005b9e0c
// address: 0x1005b9e0c
// body: available
// range: 0x1005b9e0c-0x1005b9eff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1005b9e0c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  
  puVar10 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  if (puVar10 != (undefined *)0x0) {
    uVar7 = 0;
    FUN_100004bb4(&DAT_100aad218);
    puVar5 = puVar10;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    puVar11 = (undefined1 *)(param_1 + 0x38);
    do {
      uVar1 = *(ulong *)(puVar11 + -0x18);
      uVar2 = *(undefined8 *)(puVar11 + -0x10);
      uVar12 = *(undefined8 *)(puVar11 + -8);
      uVar3 = *puVar11;
      uVar6 = uVar1;
      FUN_1003618e4();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b9efc);
        (*pcVar4)();
      }
      uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar8 + 0x40) = *(ulong *)(puVar5 + uVar8 + 0x40) | 1L << (uVar6 & 0x3f);
      *(ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 8) = uVar1;
      puVar9 = (undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 0x18);
      *puVar9 = uVar2;
      puVar9[1] = uVar12;
      *(undefined1 *)(puVar9 + 2) = uVar3;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b9f00);
        (*pcVar4)();
      }
      puVar11 = puVar11 + 0x20;
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar10 = puVar10 + -1;
    } while (puVar10 != (undefined *)0x0);
  }
  return puVar5;
}

