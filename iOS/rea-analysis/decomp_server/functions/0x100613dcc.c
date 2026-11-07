// rea decompile_all
// name: FUN_100613dcc
// address: 0x100613dcc
// body: available
// range: 0x100613dcc-0x100613e4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100613dcc(long *param_1,code *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long *plVar3;
  long lVar4;
  
  lVar1 = *(long *)(*param_1 + 0x50);
  lVar4 = *(long *)(lVar1 + -8);
  puVar2 = &stack0xffffffffffffffc0 + -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar3 = (long *)param_1[2];
  (*param_2)(puVar2);
  (**(code **)(*plVar3 + 0x68))(puVar2);
  (**(code **)(lVar4 + 8))(puVar2,lVar1);
  return;
}

