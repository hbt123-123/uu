// rea decompile_all
// name: FUN_1002bc480
// address: 0x1002bc480
// body: available
// range: 0x1002bc480-0x1002bc52b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002bc480(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  lVar5 = *(long *)(param_2 + 0x10);
  __ss6HasherV8_combineyySuF(lVar5);
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)(param_2 + 0x38);
    do {
      uVar1 = puVar6[-3];
      uVar3 = puVar6[-2];
      uVar2 = puVar6[-1];
      uVar4 = *puVar6;
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar4);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar3);
      _swift_bridgeObjectRetain(uVar4);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,uVar4);
      _swift_bridgeObjectRelease_n(uVar4,2);
      _swift_bridgeObjectRelease(uVar3);
      puVar6 = puVar6 + 4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}

