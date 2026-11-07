// rea decompile_all
// name: FUN_10008faa0
// address: 0x10008faa0
// body: available
// range: 0x10008faa0-0x10008fc37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010008fc18) */

undefined * FUN_10008faa0(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  FUN_100075194();
  puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
  lVar6 = *(long *)(param_3 + 0x10);
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease(param_3);
    puVar5 = *(undefined **)(PTR___swiftEmptyArrayStorage_100995ea0 + 0x10);
    puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar4 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  }
  else {
    FUN_10006fbe4(0,lVar6,0);
    lVar7 = 0x20;
    do {
      uVar2 = *(undefined4 *)(param_3 + lVar7);
      _CGDisplayBounds(uVar2);
      uVar1 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
        FUN_10006fbe4(1 < *(ulong *)(puVar3 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar1 + 1;
      *(undefined4 *)(puVar3 + uVar1 * 0x18 + 0x20) = uVar2;
      *(undefined8 *)(puVar3 + uVar1 * 0x18 + 0x28) = param_1;
      *(undefined8 *)(puVar3 + uVar1 * 0x18 + 0x30) = param_2;
      lVar7 = lVar7 + 4;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    _swift_bridgeObjectRelease(param_3);
    puVar5 = *(undefined **)(puVar3 + 0x10);
    puVar4 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  }
  PTR___swiftEmptyDictionarySingleton_100995ea8 = puVar4;
  if (puVar5 != (undefined *)0x0) {
    puVar4 = &DAT_100a761a8;
    FUN_100004bb4(&DAT_100a761a8,&DAT_10080c1e0);
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ(puVar5,puVar4);
    puVar4 = puVar5;
  }
  _swift_bridgeObjectRetain(puVar3);
  FUN_100073284();
  _swift_bridgeObjectRelease(puVar3);
  return puVar4;
}

