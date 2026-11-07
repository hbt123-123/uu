// rea decompile_all
// name: FUN_10054a43c
// address: 0x10054a43c
// body: available
// range: 0x10054a43c-0x10054a4f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10054a43c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_2 + 0x10) + 1;
  lVar4 = param_2 + 0x20;
  do {
    lVar5 = lVar5 + -1;
    if (lVar5 == 0) break;
    lVar2 = *(long *)(param_1 + 0x18);
    lVar3 = *(long *)(param_1 + 0x20);
    FUN_10003f030(param_1,lVar2);
    (**(code **)(lVar3 + 0x18))(lVar2,lVar3);
    lVar3 = *(long *)(lVar4 + 0x18);
    lVar1 = *(long *)(lVar4 + 0x20);
    FUN_10003f030(lVar4,lVar3);
    (**(code **)(lVar1 + 0x18))(lVar3,lVar1);
    lVar4 = lVar4 + 0x28;
  } while (lVar2 != lVar3);
  return lVar5 == 0;
}

