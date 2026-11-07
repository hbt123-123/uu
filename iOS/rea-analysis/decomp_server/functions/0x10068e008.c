// rea decompile_all
// name: FUN_10068e008
// address: 0x10068e008
// body: available
// range: 0x10068e008-0x10068e11f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10068e008(long param_1)

{
  byte bVar1;
  code *pcVar2;
  undefined *puVar3;
  byte *pbVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  byte local_88 [8];
  undefined1 auStack_80 [32];
  
  puVar6 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  if (puVar6 != (undefined *)0x0) {
    FUN_100004bb4(&DAT_100aba030,&DAT_10084ddb0);
    puVar3 = puVar6;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    param_1 = param_1 + 0x20;
    do {
      pbVar4 = local_88;
      FUN_10007f314(param_1,pbVar4,&DAT_100ab9eb8,&DAT_10084d538);
      bVar1 = local_88[0];
      uVar7 = (ulong)local_88[0];
      FUN_10068c64c();
      if (((ulong)pbVar4 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10068e11c);
        (*pcVar2)();
      }
      uVar5 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar5 + 0x40) = *(ulong *)(puVar3 + uVar5 + 0x40) | 1L << (uVar7 & 0x3f);
      *(byte *)(*(long *)(puVar3 + 0x30) + uVar7) = bVar1;
      FUN_10007f3d4(auStack_80,*(long *)(puVar3 + 0x38) + uVar7 * 0x20);
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10068e120);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      param_1 = param_1 + 0x28;
      puVar6 = puVar6 + -1;
    } while (puVar6 != (undefined *)0x0);
  }
  return puVar3;
}

