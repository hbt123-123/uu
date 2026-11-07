// rea decompile_all
// name: FUN_100699838
// address: 0x100699838
// body: available
// range: 0x100699838-0x100699887 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100699884 to 0x100699888 FUN_100699888 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100699838(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  pcVar1 = *(char **)param_1;
  if (-1 < param_1[0x17]) {
    pcVar1 = param_1;
  }
  iVar2 = _chdir(pcVar1);
  iVar3 = 0;
  if (iVar2 != 0) {
    piVar4 = ___error();
    iVar3 = *piVar4;
  }
  FUN_100699888(iVar3,param_1,param_2,"mars_boost::filesystem::current_path");
  return;
}

