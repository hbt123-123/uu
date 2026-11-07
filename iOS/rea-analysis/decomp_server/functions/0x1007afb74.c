// rea decompile_all
// name: FUN_1007afb74
// address: 0x1007afb74
// body: available
// range: 0x1007afb74-0x1007afbd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1007afb74(char *param_1,int param_2,char *param_3)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = _vsnprintf(param_1,(long)param_2,param_3,&stack0x00000000);
  if (iVar1 < 0) {
    *param_1 = '\0';
    iVar1 = 0;
  }
  else if (param_2 < iVar1) {
    iVar1 = param_2 + -1;
  }
  return iVar1;
}

