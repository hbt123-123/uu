// rea decompile_all
// name: FUN_1000ccc6c
// address: 0x1000ccc6c
// body: available
// range: 0x1000ccc6c-0x1000ccd83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1000ccc6c(long param_1)

{
  ulong *puVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  puVar7 = *(undefined **)(param_1 + 0x10);
  if (puVar7 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_100995ea8;
  }
  FUN_100004bb4(&DAT_100a76430,&DAT_10080c200);
  puVar3 = puVar7;
  __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
  uVar8 = *(ulong *)(param_1 + 0x20);
  uVar9 = *(ulong *)(param_1 + 0x28);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = uVar8;
  uVar6 = uVar9;
  FUN_1001a3028();
  if ((uVar6 & 1) == 0) {
    puVar5 = (undefined8 *)(param_1 + 0x48);
    do {
      uVar6 = uVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar6 + 0x40) = *(ulong *)(puVar3 + uVar6 + 0x40) | 1L << (uVar4 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar3 + 0x30) + uVar4 * 0x10);
      *puVar1 = uVar8;
      puVar1[1] = uVar9;
      *(undefined8 *)(*(long *)(puVar3 + 0x38) + uVar4 * 8) = uVar10;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000ccd84);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      puVar7 = puVar7 + -1;
      if (puVar7 == (undefined *)0x0) {
        _swift_retain();
        return puVar3;
      }
      uVar8 = puVar5[-2];
      uVar9 = puVar5[-1];
      uVar10 = *puVar5;
      _swift_retain();
      uVar4 = uVar8;
      uVar6 = uVar9;
      FUN_1001a3028();
      puVar5 = puVar5 + 3;
    } while ((uVar6 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1000ccd54);
  (*pcVar2)();
}

