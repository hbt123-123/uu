// rea decompile_all
// name: FUN_10024e98c
// address: 0x10024e98c
// body: available
// range: 0x10024e98c-0x10024ea13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10024ea00 to 0x10024ede4 FUN_10024ede4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


FILE * FUN_10024e98c(undefined8 param_1,char *param_2,uint param_3)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  FILE *pFVar5;
  
  pcVar1 = "wb";
  if ((param_3 & 8) == 0) {
    pcVar1 = (char *)0x0;
  }
  pcVar2 = "r+b";
  uVar3 = 1;
  if ((param_3 & 4) == 0) {
    pcVar2 = pcVar1;
    uVar3 = (param_3 & 8) >> 3;
  }
  pcVar1 = "rb";
  uVar4 = 1;
  if ((param_3 & 3) != 1) {
    pcVar1 = pcVar2;
    uVar4 = uVar3;
  }
  if ((param_2 != (char *)0x0) && (uVar4 != 0)) {
    pFVar5 = _fopen(param_2,pcVar1);
    FUN_10024ede4(pFVar5,param_2);
    return pFVar5;
  }
  return (FILE *)0x0;
}

