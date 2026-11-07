// rea decompile_all
// name: FUN_10003987c
// address: 0x10003987c
// body: available
// range: 0x10003987c-0x10003990b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_10003987c(int *param_1,int *param_2)

{
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (((param_1[3] == param_2[3] && (param_1[4] == param_2[4])) &&
      ((*(double *)(param_1 + 6) == *(double *)(param_2 + 6) &&
       (*(double *)(param_1 + 8) == *(double *)(param_2 + 8))))))) {
    return (*(byte *)(param_1 + 10) ^ *(byte *)(param_2 + 10) ^ 1) & 1;
  }
  return 0;
}

