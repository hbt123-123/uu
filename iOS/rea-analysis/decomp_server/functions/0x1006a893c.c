// rea decompile_all
// name: FUN_1006a893c
// address: 0x1006a893c
// body: available
// range: 0x1006a893c-0x1006a898b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a893c(long param_1)

{
  void *pvVar1;
  size_t sVar2;
  
  pvVar1 = (void *)(param_1 + 8);
  FUN_100692ca0();
  sVar2 = param_1 + 8;
  FUN_100692ea0();
  _bzero(pvVar1,sVar2);
  FUN_100692dd4(param_1 + 8,0,0);
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}

