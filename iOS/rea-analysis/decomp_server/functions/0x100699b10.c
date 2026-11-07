// rea decompile_all
// name: FUN_100699b10
// address: 0x100699b10
// body: available
// range: 0x100699b10-0x100699b7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


nlink_t FUN_100699b10(char *param_1,undefined8 param_2)

{
  nlink_t nVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  stat sStack_b0;
  
  pcVar2 = *(char **)param_1;
  if (-1 < param_1[0x17]) {
    pcVar2 = param_1;
  }
  iVar3 = _stat(pcVar2,&sStack_b0);
  iVar4 = 0;
  if (iVar3 != 0) {
    piVar5 = ___error();
    iVar4 = *piVar5;
  }
  FUN_100699888(iVar4,param_1,param_2,"mars_boost::filesystem::hard_link_count");
  nVar1 = 0;
  if (iVar4 == 0) {
    nVar1 = sStack_b0.st_nlink;
  }
  return nVar1;
}

