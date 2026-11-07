// rea decompile_all
// name: FUN_10031178c
// address: 0x10031178c
// body: available
// range: 0x10031178c-0x10031185b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10031178c(undefined8 param_1,long param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_2 + -8);
  puVar4 = &stack0xffffffffffffffd0 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar5 + 0x10))(puVar4);
  puVar2 = puVar4;
  _swift_getEnumCaseMultiPayload(puVar4,param_2);
  bVar1 = (int)puVar2 != 1;
  if (bVar1) {
    (**(code **)(lVar5 + 8))(puVar4,param_2);
    lVar5 = *(long *)(param_2 + 0x18);
    pcVar3 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
  }
  else {
    lVar5 = *(long *)(param_2 + 0x18);
    lVar6 = *(long *)(lVar5 + -8);
    (**(code **)(lVar6 + 0x20))(param_1,puVar4,lVar5);
    pcVar3 = *(code **)(lVar6 + 0x38);
  }
  (*pcVar3)(param_1,bVar1,1,lVar5);
  return;
}

