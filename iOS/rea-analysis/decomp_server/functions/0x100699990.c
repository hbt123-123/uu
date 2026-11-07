// rea decompile_all
// name: FUN_100699990
// address: 0x100699990
// body: available
// range: 0x100699990-0x100699a77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_100699990(char *param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  stat local_160;
  stat local_d0;
  
  pcVar1 = *(char **)param_2;
  if (-1 < param_2[0x17]) {
    pcVar1 = param_2;
  }
  iVar2 = _stat(pcVar1,&local_d0);
  pcVar1 = *(char **)param_1;
  if (-1 < param_1[0x17]) {
    pcVar1 = param_1;
  }
  iVar3 = _stat(pcVar1,&local_160);
  if (iVar3 == 0 && iVar2 == 0) {
    if (((local_160.st_dev == local_d0.st_dev) && (local_160.st_ino == local_d0.st_ino)) &&
       (local_160.st_size == local_d0.st_size)) {
      return local_160.st_mtimespec.tv_sec == local_d0.st_mtimespec.tv_sec;
    }
  }
  else {
    FUN_100698e34(iVar3 != 0 && iVar2 != 0,param_1,param_2,param_3,
                  "mars_boost::filesystem::equivalent");
  }
  return false;
}

