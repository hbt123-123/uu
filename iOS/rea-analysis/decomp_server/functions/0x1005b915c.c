// rea decompile_all
// name: FUN_1005b915c
// address: 0x1005b915c
// body: available
// range: 0x1005b915c-0x1005b92b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1005b915c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  code *pcVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  
  puVar15 = *(undefined **)(param_1 + 0x10);
  puVar10 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  if (puVar15 != (undefined *)0x0) {
    FUN_100004bb4(&DAT_100aab9c8,&DAT_100838320);
    puVar10 = puVar15;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    _swift_retain();
    puVar14 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar14[-2];
      uVar5 = puVar14[-1];
      uVar3 = *puVar14;
      uVar6 = puVar14[1];
      uVar16 = puVar14[2];
      uVar8 = *(undefined1 *)(puVar14 + 3);
      uVar4 = puVar14[4];
      uVar7 = puVar14[5];
      _swift_bridgeObjectRetain(uVar5);
      FUN_10051fe90(uVar3,uVar6,uVar16,uVar8);
      FUN_100008184(uVar4,uVar7);
      uVar11 = uVar2;
      uVar12 = uVar5;
      FUN_1001a2c70();
      if ((uVar12 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1005b92b0);
        (*pcVar9)();
      }
      uVar12 = uVar11 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar10 + uVar12 + 0x40) =
           *(ulong *)(puVar10 + uVar12 + 0x40) | 1L << (uVar11 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar10 + 0x30) + uVar11 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar5;
      puVar13 = (undefined8 *)(*(long *)(puVar10 + 0x38) + uVar11 * 0x30);
      *puVar13 = uVar3;
      puVar13[1] = uVar6;
      puVar13[2] = uVar16;
      *(undefined1 *)(puVar13 + 3) = uVar8;
      puVar13[4] = uVar4;
      puVar13[5] = uVar7;
      if (SCARRY8(*(long *)(puVar10 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1005b92b4);
        (*pcVar9)();
      }
      *(long *)(puVar10 + 0x10) = *(long *)(puVar10 + 0x10) + 1;
      puVar14 = puVar14 + 8;
      puVar15 = puVar15 + -1;
    } while (puVar15 != (undefined *)0x0);
    _swift_release(puVar10);
  }
  return puVar10;
}

