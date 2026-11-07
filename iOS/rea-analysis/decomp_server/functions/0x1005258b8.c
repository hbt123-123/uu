// rea decompile_all
// name: FUN_1005258b8
// address: 0x1005258b8
// body: available
// range: 0x1005258b8-0x10052592f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005258b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar2 = *(long *)(param_1 + 0x10);
  __ss6HasherV8_combineyySuF(lVar2);
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = *puVar3;
      _swift_bridgeObjectRetain(uVar1);
      __sSS4hash4intoys6HasherVz_tF();
      _swift_bridgeObjectRelease(uVar1);
      puVar3 = puVar3 + 2;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}

