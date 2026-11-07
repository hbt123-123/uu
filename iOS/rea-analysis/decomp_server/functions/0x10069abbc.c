// rea decompile_all
// name: FUN_10069abbc
// address: 0x10069abbc
// body: available
// range: 0x10069abbc-0x10069ac9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10069ac98 to 0x100699888 FUN_100699888 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10069abbc(long param_1,long param_2)

{
  char *pcVar1;
  ulong uVar2;
  char *pcVar3;
  long lVar4;
  int local_28 [2];
  
  pcVar3 = _getenv("TMPDIR");
  if (((pcVar3 == (char *)0x0) && (pcVar3 = _getenv("TMP"), pcVar3 == (char *)0x0)) &&
     (pcVar3 = _getenv("TEMP"), pcVar3 == (char *)0x0)) {
    pcVar3 = _getenv("TEMPDIR");
  }
  pcVar1 = "/tmp";
  if (pcVar3 != (char *)0x0) {
    pcVar1 = pcVar3;
  }
  FUN_1006928dc(param_1,pcVar1);
  uVar2 = *(ulong *)(param_1 + 8);
  if (-1 < (char)*(byte *)(param_1 + 0x17)) {
    uVar2 = (ulong)*(byte *)(param_1 + 0x17);
  }
  if (uVar2 != 0) {
    lVar4 = param_2;
    if (param_2 == 0) {
      lVar4 = 0;
    }
    FUN_10069a9a4(local_28,param_1,lVar4);
    if (local_28[0] == 3) {
      return;
    }
  }
  FUN_100699888(0x14,param_1,param_2,"mars_boost::filesystem::temp_directory_path");
  return;
}

