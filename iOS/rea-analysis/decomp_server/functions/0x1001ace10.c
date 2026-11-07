// rea decompile_all
// name: FUN_1001ace10
// address: 0x1001ace10
// body: available
// range: 0x1001ace10-0x1001acedb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1001ace10(byte *param_1,byte *param_2)

{
  if ((((((((*param_1 ^ *param_2) & 1) == 0) && (*(int *)(param_1 + 4) == *(int *)(param_2 + 4))) &&
        (*(int *)(param_1 + 8) == *(int *)(param_2 + 8))) &&
       ((*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc) &&
        (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10))))) &&
      ((*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14) &&
       ((*(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x18) &&
        (*(int *)(param_1 + 0x1c) == *(int *)(param_2 + 0x1c))))))) &&
     ((*(int *)(param_1 + 0x20) == *(int *)(param_2 + 0x20) &&
      ((*(int *)(param_1 + 0x24) == *(int *)(param_2 + 0x24) &&
       (*(int *)(param_1 + 0x28) == *(int *)(param_2 + 0x28))))))) {
    return *(int *)(param_1 + 0x2c) == *(int *)(param_2 + 0x2c);
  }
  return false;
}

