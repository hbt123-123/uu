// rea decompile_all
// name: FUN_100128ec0
// address: 0x100128ec0
// body: available
// range: 0x100128ec0-0x100128ef7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_100128ec0(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*param_1 == *param_2) &&
     (bVar1 = false, !NAN(*(double *)(param_1 + 2)) && !NAN(*(double *)(param_2 + 2)))) {
    bVar1 = *(double *)(param_1 + 2) == *(double *)(param_2 + 2);
  }
  if (!bVar1) {
    return false;
  }
  return *(double *)(param_1 + 4) == *(double *)(param_2 + 4);
}

