// rea decompile_all
// name: FUN_1000cd8f8
// address: 0x1000cd8f8
// body: available
// range: 0x1000cd8f8-0x1000cd9ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1000cd8f8(long param_1,undefined8 param_2,ulong param_3,code *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  puVar6 = *(undefined **)(param_1 + 0x10);
  if (puVar6 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_100995ea8;
  }
  FUN_100004bb4(param_2);
  puVar2 = puVar6;
  __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
  uVar7 = (ulong)*(uint *)(param_1 + 0x20);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar7;
  (*param_4)();
  if ((param_3 & 1) == 0) {
    puVar4 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar5 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar5 + 0x40) = *(ulong *)(puVar2 + uVar5 + 0x40) | 1L << (uVar3 & 0x3f);
      *(int *)(*(long *)(puVar2 + 0x30) + uVar3 * 4) = (int)uVar7;
      *(undefined8 *)(*(long *)(puVar2 + 0x38) + uVar3 * 8) = uVar8;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1000cda00);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      puVar6 = puVar6 + -1;
      if (puVar6 == (undefined *)0x0) {
        _swift_retain();
        return puVar2;
      }
      uVar7 = (ulong)*(uint *)(puVar4 + -1);
      uVar8 = *puVar4;
      _swift_retain();
      uVar3 = uVar7;
      (*param_4)();
      puVar4 = puVar4 + 2;
    } while ((param_3 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000cd9d0);
  (*pcVar1)();
}

