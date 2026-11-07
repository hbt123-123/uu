// rea decompile_all
// name: FUN_100698da8
// address: 0x100698da8
// body: available
// range: 0x100698da8-0x100698e33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100698da8(char *param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  stat sStack_c0;
  
  pcVar1 = *(char **)param_1;
  if (-1 < param_1[0x17]) {
    pcVar1 = param_1;
  }
  iVar2 = _stat(pcVar1,&sStack_c0);
  if (iVar2 == 0) {
    pcVar1 = *(char **)param_2;
    if (-1 < param_2[0x17]) {
      pcVar1 = param_2;
    }
    iVar3 = _mkdir(pcVar1,sStack_c0.st_mode);
    iVar2 = 0;
    if (iVar3 == 0) goto LAB_100698e08;
  }
  piVar4 = ___error();
  iVar2 = *piVar4;
LAB_100698e08:
  FUN_100698e34(iVar2,param_1,param_2,param_3,"mars_boost::filesystem::copy_directory");
  return;
}

