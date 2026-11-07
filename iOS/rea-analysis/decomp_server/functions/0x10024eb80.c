// rea decompile_all
// name: FUN_10024eb80
// address: 0x10024eb80
// body: available
// range: 0x10024eb80-0x10024ebcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10024eb80(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    if ((void *)param_2[2] != (void *)0x0) {
      _free((void *)param_2[2]);
    }
    iVar1 = _fclose((FILE *)*param_2);
    _free(param_2);
    return iVar1;
  }
  return -1;
}

