// rea decompile_all
// name: FUN_1005499c8
// address: 0x1005499c8
// body: available
// range: 0x1005499c8-0x100549a5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1005499c8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    _swift_bridgeObjectRelease(param_1);
    puVar1 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  }
  else {
    lVar4 = 0x20;
    do {
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      _swift_bridgeObjectRetain(uVar2);
      FUN_100549a5c();
      _swift_bridgeObjectRelease(uVar2);
      lVar4 = lVar4 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    _swift_bridgeObjectRelease(param_1);
  }
  return puVar1;
}

