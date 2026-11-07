// rea decompile_all
// name: FUN_1006995b4
// address: 0x1006995b4
// body: available
// range: 0x1006995b4-0x100699623 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100699620 to 0x100698e34 FUN_100698e34 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006995b4(char *param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  pcVar1 = *(char **)param_1;
  if (-1 < param_1[0x17]) {
    pcVar1 = param_1;
  }
  pcVar2 = *(char **)param_2;
  if (-1 < param_2[0x17]) {
    pcVar2 = param_2;
  }
  iVar3 = _symlink(pcVar1,pcVar2);
  iVar4 = 0;
  if (iVar3 != 0) {
    piVar5 = ___error();
    iVar4 = *piVar5;
  }
  FUN_100698e34(iVar4,param_1,param_2,param_3,"mars_boost::filesystem::create_directory_symlink");
  return;
}

