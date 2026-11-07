// rea decompile_all
// name: FUN_1007af3a4
// address: 0x1007af3a4
// body: available
// range: 0x1007af3a4-0x1007af3df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1007af3a4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  FUN_1007af3e0();
  lVar2 = 0x10;
  if ((int)lVar1 == 0) {
    lVar2 = 8;
  }
  lVar2 = *(long *)(param_1 + lVar2);
  if (lVar2 < 1) {
    lVar2 = 0;
  }
  return lVar2;
}

