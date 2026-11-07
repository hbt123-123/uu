// rea decompile_all
// name: FUN_1005ff370
// address: 0x1005ff370
// body: available
// range: 0x1005ff370-0x1005ff4af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1005ff370(int *param_1,int *param_2)

{
  byte bVar1;
  
  if ((((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
       ((param_1[3] == param_2[3] && (param_1[4] == param_2[4])))) &&
      (((param_1[5] == param_2[5] && ((param_1[6] == param_2[6] && (param_1[7] == param_2[7])))) &&
       (param_1[8] == param_2[8])))) &&
     ((((param_1[9] == param_2[9] && (param_1[10] == param_2[10])) && (param_1[0xb] == param_2[0xb])
       ) && (((param_1[0xc] == param_2[0xc] && (param_1[0xd] == param_2[0xd])) &&
             ((param_1[0xe] == param_2[0xe] && (param_1[0xf] == param_2[0xf])))))))) {
    bVar1 = *(byte *)(param_2 + 0x10);
    if (*(byte *)(param_1 + 0x10) == 2) {
      if (bVar1 == 2) {
        return 1;
      }
    }
    else if ((bVar1 != 2) && (((bVar1 ^ *(byte *)(param_1 + 0x10)) & 1) == 0)) {
      return 1;
    }
  }
  return 0;
}

