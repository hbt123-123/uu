// rea decompile_all
// name: FUN_10007354c
// address: 0x10007354c
// body: available
// range: 0x10007354c-0x100073663 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10007354c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  puVar9 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_1000f0748;
  if (puVar9 != (undefined *)0x0) {
    FUN_10000eb08(&DAT_1001044d8,&DAT_1000d4b38);
    puVar5 = puVar9;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    _swift_retain();
    puVar10 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar1 = puVar10[-3];
      uVar2 = puVar10[-2];
      uVar3 = *(undefined1 *)(puVar10 + -1);
      uVar11 = *puVar10;
      FUN_100065610(uVar1,uVar2,uVar3);
      uVar6 = uVar1;
      uVar7 = uVar2;
      FUN_100080fdc(uVar1,uVar2,uVar3);
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100073660);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar8 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x18);
      *puVar8 = uVar1;
      puVar8[1] = uVar2;
      *(undefined1 *)(puVar8 + 2) = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar11;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100073664);
        (*pcVar4)();
      }
      puVar10 = puVar10 + 4;
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar9 = puVar9 + -1;
    } while (puVar9 != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}

