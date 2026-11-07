// rea decompile_all
// name: FUN_1000cbb5c
// address: 0x1000cbb5c
// body: available
// range: 0x1000cbb5c-0x1000cbc3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1000cbb5c(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar7 = *(undefined **)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  if (puVar7 != (undefined *)0x0) {
    uVar5 = 0;
    FUN_100004bb4(&DAT_100a761a8);
    puVar4 = puVar7;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    puVar9 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = *(uint *)(puVar9 + -1);
      uVar8 = (ulong)uVar1;
      uVar11 = puVar9[1];
      uVar10 = *puVar9;
      thunk_FUN_1001a2c34();
      if ((uVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000cbc3c);
        (*pcVar3)();
      }
      uVar6 = uVar8 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar4 + uVar6 + 0x40) = *(ulong *)(puVar4 + uVar6 + 0x40) | 1L << (uVar8 & 0x3f);
      *(uint *)(*(long *)(puVar4 + 0x30) + uVar8 * 4) = uVar1;
      puVar2 = (undefined8 *)(*(long *)(puVar4 + 0x38) + uVar8 * 0x10);
      puVar2[1] = uVar11;
      *puVar2 = uVar10;
      if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000cbc40);
        (*pcVar3)();
      }
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      puVar9 = puVar9 + 3;
      puVar7 = puVar7 + -1;
    } while (puVar7 != (undefined *)0x0);
  }
  return puVar4;
}

