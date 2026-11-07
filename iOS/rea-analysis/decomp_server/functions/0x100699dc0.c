// rea decompile_all
// name: FUN_100699dc0
// address: 0x100699dc0
// body: available
// range: 0x100699dc0-0x100699e6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100699dc0(char *param_1,time_t param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  utimbuf local_d0;
  stat sStack_c0;
  
  pcVar1 = *(char **)param_1;
  if (-1 < param_1[0x17]) {
    pcVar1 = param_1;
  }
  iVar2 = _stat(pcVar1,&sStack_c0);
  uVar4 = (ulong)(iVar2 != 0);
  FUN_100699888(uVar4,param_1,param_3,"mars_boost::filesystem::last_write_time");
  if ((uVar4 & 1) == 0) {
    local_d0.actime = sStack_c0.st_atimespec.tv_sec;
    pcVar1 = *(char **)param_1;
    if (-1 < param_1[0x17]) {
      pcVar1 = param_1;
    }
    local_d0.modtime = param_2;
    iVar3 = _utime(pcVar1,&local_d0);
    iVar2 = 0;
    if (iVar3 != 0) {
      piVar5 = ___error();
      iVar2 = *piVar5;
    }
    FUN_100699888(iVar2,param_1,param_3,"mars_boost::filesystem::last_write_time");
  }
  return;
}

