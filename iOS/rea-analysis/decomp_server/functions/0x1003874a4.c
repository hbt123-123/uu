// rea decompile_all
// name: FUN_1003874a4
// address: 0x1003874a4
// body: available
// range: 0x1003874a4-0x100387537 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1003874a4(long param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(*(long *)(param_1 + 0x80) + 0x20);
  if ((2 < *(uint *)(*(long *)(param_1 + 0xa8) + 4)) &&
     (*(int *)(*(long *)(param_1 + 0xa8) + 0x1c) != iVar1)) {
    FUN_100386734(2,"MMKV_IO.cpp","readActualSize",0x1d3,"[%s] actual size %u, meta actual size %u")
    ;
    iVar1 = *(int *)(*(long *)(param_1 + 0xa8) + 0x1c);
  }
  return iVar1;
}

