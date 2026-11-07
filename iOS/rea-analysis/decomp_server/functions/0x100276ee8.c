// rea decompile_all
// name: FUN_100276ee8
// address: 0x100276ee8
// body: available
// range: 0x100276ee8-0x100276fdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_100276ee8(long param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  
  puVar10 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  if (puVar10 != (undefined *)0x0) {
    uVar8 = 0;
    FUN_100004bb4(&DAT_100a82400);
    puVar5 = puVar10;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    _swift_retain();
    puVar11 = (undefined1 *)(param_1 + 0x29);
    do {
      uVar6 = *(ulong *)(puVar11 + -9);
      uVar3 = puVar11[-1];
      uVar2 = *puVar11;
      uVar7 = uVar6;
      FUN_100280258();
      if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100276fdc);
        (*pcVar4)();
      }
      uVar9 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar9 + 0x40) = *(ulong *)(puVar5 + uVar9 + 0x40) | 1L << (uVar7 & 0x3f);
      *(ulong *)(*(long *)(puVar5 + 0x30) + uVar7 * 8) = uVar6;
      puVar1 = (undefined1 *)(*(long *)(puVar5 + 0x38) + uVar7 * 2);
      *puVar1 = uVar3;
      puVar1[1] = uVar2;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100276fe0);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar11 = puVar11 + 0x10;
      puVar10 = puVar10 + -1;
    } while (puVar10 != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}

