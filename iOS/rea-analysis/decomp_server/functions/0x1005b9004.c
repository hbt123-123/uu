// rea decompile_all
// name: FUN_1005b9004
// address: 0x1005b9004
// body: available
// range: 0x1005b9004-0x1005b915b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1005b9004(long param_1)

{
  undefined1 uVar1;
  byte bVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  if (puVar8 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_100995ea8;
  }
  FUN_100004bb4(&DAT_100aab9b8,&DAT_100838310);
  puVar4 = puVar8;
  __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
  uVar11 = *(ulong *)(param_1 + 0x20);
  uVar12 = *(ulong *)(param_1 + 0x28);
  uVar9 = *(ulong *)(param_1 + 0x30);
  uVar10 = *(ulong *)(param_1 + 0x38);
  uVar1 = *(undefined1 *)(param_1 + 0x40);
  bVar2 = *(byte *)(param_1 + 0x41);
  uVar14 = *(undefined8 *)(param_1 + 0x48);
  uVar5 = uVar11;
  uVar6 = uVar12;
  FUN_100511c0c();
  if ((uVar6 & 1) == 0) {
    puVar13 = (undefined8 *)(param_1 + 0x78);
    do {
      uVar6 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar4 + uVar6 + 0x40) = *(ulong *)(puVar4 + uVar6 + 0x40) | 1L << (uVar5 & 0x3f);
      puVar7 = (ulong *)(*(long *)(puVar4 + 0x30) + uVar5 * 0x28);
      *puVar7 = uVar11;
      puVar7[1] = uVar12;
      puVar7[2] = uVar9;
      puVar7[3] = uVar10;
      *(undefined1 *)(puVar7 + 4) = uVar1;
      *(byte *)((long)puVar7 + 0x21) = bVar2 & 1;
      *(undefined8 *)(*(long *)(puVar4 + 0x38) + uVar5 * 8) = uVar14;
      if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1005b915c);
        (*pcVar3)();
      }
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      FUN_10050f830(uVar9,uVar10,uVar1);
      puVar8 = puVar8 + -1;
      if (puVar8 == (undefined *)0x0) {
        return puVar4;
      }
      uVar11 = puVar13[-5];
      uVar12 = puVar13[-4];
      uVar9 = puVar13[-3];
      uVar10 = puVar13[-2];
      uVar1 = *(undefined1 *)(puVar13 + -1);
      bVar2 = *(byte *)((long)puVar13 + -7);
      uVar14 = *puVar13;
      uVar5 = uVar11;
      uVar6 = uVar12;
      FUN_100511c0c();
      puVar13 = puVar13 + 6;
    } while ((uVar6 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1005b912c);
  (*pcVar3)();
}

