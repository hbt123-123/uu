// rea decompile_all
// name: FUN_10024ede4
// address: 0x10024ede4
// body: available
// range: 0x10024ede4-0x10024ee57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_10024ede4(long param_1,char *param_2)

{
  int iVar1;
  long *plVar2;
  size_t sVar3;
  char *pcVar4;
  
  if (param_1 == 0) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = _malloc(0x18);
    *plVar2 = param_1;
    sVar3 = _strlen(param_2);
    iVar1 = (int)sVar3 + 1;
    *(int *)(plVar2 + 1) = iVar1;
    pcVar4 = _malloc((long)iVar1);
    plVar2[2] = (long)pcVar4;
    _strncpy(pcVar4,param_2,(long)iVar1);
  }
  return plVar2;
}

