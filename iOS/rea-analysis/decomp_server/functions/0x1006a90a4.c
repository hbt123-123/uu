// rea decompile_all
// name: FUN_1006a90a4
// address: 0x1006a90a4
// body: available
// range: 0x1006a90a4-0x1006a90ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1006a90a4(long param_1,Bytef *param_2,undefined4 param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  
  ((z_streamp)(param_1 + 0x48))->next_in = param_2;
  *(undefined4 *)(param_1 + 0x50) = param_3;
  *(undefined8 *)(param_1 + 0x60) = param_4;
  *(int *)(param_1 + 0x68) = (int)param_5;
  iVar1 = _deflate((z_streamp)(param_1 + 0x48),2);
  if (iVar1 == 0) {
    param_5 = param_5 - (ulong)*(uint *)(param_1 + 0x68);
  }
  else {
    param_5 = -1;
  }
  return param_5;
}

