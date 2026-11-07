// rea decompile_all
// name: FUN_100695890
// address: 0x100695890
// body: available
// range: 0x100695890-0x100695923 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100695890(int *param_1,int *param_2)

{
  int *piVar1;
  
  if (*param_2 < *param_1) {
    *param_2 = *param_1;
    *(char *)(param_2 + 0x1c) = (char)param_1[0x1c];
    *(undefined8 *)(param_2 + 0x1e) = *(undefined8 *)(param_1 + 0x1e);
  }
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  piVar1 = *(int **)(param_1 + 0x16);
  if (-1 < *(char *)((long)param_1 + 0x6f)) {
    piVar1 = param_1 + 0x16;
  }
  std::string::append((char *)(param_2 + 0x16),(ulong)piVar1);
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    **(undefined1 **)(param_1 + 0x16) = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x16) = 0;
    *(undefined1 *)((long)param_1 + 0x6f) = 0;
  }
  return;
}

