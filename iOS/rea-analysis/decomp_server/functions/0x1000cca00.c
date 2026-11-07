// rea decompile_all
// name: FUN_1000cca00
// address: 0x1000cca00
// body: available
// range: 0x1000cca00-0x1000ccb43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1000cca00(long param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  
  puVar11 = *(undefined **)(param_1 + 0x10);
  if (puVar11 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_100995ea8;
  }
  uVar8 = 0;
  FUN_100004bb4(&DAT_100a76420);
  puVar5 = puVar11;
  __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
  uVar12 = (ulong)*(uint *)(param_1 + 0x20);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  uVar13 = *(undefined8 *)(param_1 + 0x30);
  bVar2 = *(byte *)(param_1 + 0x38);
  uVar14 = *(undefined4 *)(param_1 + 0x3c);
  bVar3 = *(byte *)(param_1 + 0x40);
  uVar6 = uVar12;
  thunk_FUN_1001a2c34();
  if ((uVar8 & 1) == 0) {
    pbVar9 = (byte *)(param_1 + 0x68);
    do {
      uVar10 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar10 + 0x40) = *(ulong *)(puVar5 + uVar10 + 0x40) | 1L << (uVar6 & 0x3f)
      ;
      *(int *)(*(long *)(puVar5 + 0x30) + uVar6 * 4) = (int)uVar12;
      puVar1 = (undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 0x20);
      *puVar1 = uVar7;
      puVar1[1] = uVar13;
      *(byte *)(puVar1 + 2) = bVar2 & 1;
      *(undefined4 *)((long)puVar1 + 0x14) = uVar14;
      *(byte *)(puVar1 + 3) = bVar3 & 1;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000ccb44);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar11 = puVar11 + -1;
      if (puVar11 == (undefined *)0x0) {
        _swift_bridgeObjectRetain();
        return puVar5;
      }
      uVar12 = (ulong)*(uint *)(pbVar9 + -0x20);
      uVar7 = *(undefined8 *)(pbVar9 + -0x18);
      uVar13 = *(undefined8 *)(pbVar9 + -0x10);
      bVar2 = pbVar9[-8];
      uVar14 = *(undefined4 *)(pbVar9 + -4);
      bVar3 = *pbVar9;
      _swift_bridgeObjectRetain();
      uVar6 = uVar12;
      thunk_FUN_1001a2c34();
      pbVar9 = pbVar9 + 0x28;
    } while ((uVar8 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1000ccb10);
  (*pcVar4)();
}

