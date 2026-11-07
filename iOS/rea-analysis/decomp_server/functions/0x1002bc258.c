// rea decompile_all
// name: FUN_1002bc258
// address: 0x1002bc258
// body: available
// range: 0x1002bc258-0x1002bc3af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001002bc39c) */

undefined * FUN_1002bc258(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined *local_68;
  
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 == 0) {
    puVar10 = *(undefined **)(PTR___swiftEmptyArrayStorage_100995ea0 + 0x10);
    puVar7 = PTR___swiftEmptyDictionarySingleton_100995ea8;
    puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (puVar10 == (undefined *)0x0) goto LAB_1002bc348;
  }
  else {
    local_68 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_1002c0b08(0,lVar9,0);
    puVar11 = (undefined8 *)(param_1 + 0x38);
    puVar8 = local_68;
    do {
      uVar1 = puVar11[-3];
      uVar4 = puVar11[-2];
      uVar2 = puVar11[-1];
      uVar5 = *puVar11;
      uVar3 = *(ulong *)(puVar8 + 0x10);
      uVar6 = *(ulong *)(puVar8 + 0x18);
      puVar10 = (undefined *)(uVar3 + 1);
      local_68 = puVar8;
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar5);
      if (uVar6 >> 1 <= uVar3) {
        FUN_1002c0b08(1 < uVar6,puVar10,1);
        puVar8 = local_68;
      }
      *(undefined **)(puVar8 + 0x10) = puVar10;
      *(undefined8 *)(puVar8 + uVar3 * 0x20 + 0x20) = uVar1;
      *(undefined8 *)(puVar8 + uVar3 * 0x20 + 0x28) = uVar4;
      *(undefined8 *)(puVar8 + uVar3 * 0x20 + 0x30) = uVar2;
      *(undefined8 *)(puVar8 + uVar3 * 0x20 + 0x38) = uVar5;
      puVar11 = puVar11 + 4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  FUN_100004bb4(&DAT_100a83908,&DAT_100818fd0);
  __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
  puVar7 = puVar10;
LAB_1002bc348:
  local_68 = puVar7;
  FUN_1002c1034(puVar8,1,&local_68);
  _swift_bridgeObjectRelease(puVar8);
  return local_68;
}

