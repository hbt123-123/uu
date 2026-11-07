// rea decompile_all
// name: FUN_10079f800
// address: 0x10079f800
// body: available
// range: 0x10079f800-0x10079f85b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10079f800(long param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x2718);
  if (iVar2 < 100) {
    pcVar1 = (char *)(param_1 + (long)iVar2 * 100 + 8);
    if (param_2 == (char *)0x0) {
      *pcVar1 = '\0';
    }
    else {
      _strlcpy(pcVar1,param_2,100);
    }
    *(int *)(param_1 + 0x2718) = *(int *)(param_1 + 0x2718) + 1;
  }
  return iVar2 < 100;
}

