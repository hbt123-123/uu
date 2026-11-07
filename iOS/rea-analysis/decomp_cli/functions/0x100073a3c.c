// rea decompile_all
// name: FUN_100073a3c
// address: 0x100073a3c
// body: available
// range: 0x100073a3c-0x100073b5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100073a3c(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong local_50;
  ulong uStack_48;
  
  puVar6 = *(undefined **)(param_1 + 0x10);
  if (puVar6 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_1000f0748;
  }
  uVar4 = 0;
  FUN_10000eb08(&DAT_1001044e8);
  puVar2 = puVar6;
  __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
  uStack_48 = *(ulong *)(param_1 + 0x28);
  local_50 = *(ulong *)(param_1 + 0x20);
  uVar3 = local_50;
  FUN_1000811b0();
  if ((uVar4 & 1) == 0) {
    puVar7 = (ulong *)(param_1 + 0x30);
    do {
      puVar6 = puVar6 + -1;
      uVar5 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar5 + 0x40) = *(ulong *)(puVar2 + uVar5 + 0x40) | 1L << (uVar3 & 0x3f);
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar3 * 8) = local_50;
      *(ulong *)(*(long *)(puVar2 + 0x38) + uVar3 * 8) = uStack_48;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100073b5c);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      if (puVar6 == (undefined *)0x0) {
        _swift_retain(local_50);
        _swift_retain(uStack_48);
        return puVar2;
      }
      uVar8 = puVar7[1];
      uVar5 = *puVar7;
      _swift_retain(local_50);
      _swift_retain(uStack_48);
      uVar3 = uVar5;
      FUN_1000811b0();
      puVar7 = puVar7 + 2;
      local_50 = uVar5;
      uStack_48 = uVar8;
    } while ((uVar4 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100073b24);
  (*pcVar1)();
}

