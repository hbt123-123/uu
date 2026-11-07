// rea decompile_all
// name: FUN_100740eac
// address: 0x100740eac
// body: available
// range: 0x100740eac-0x100740f3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100740eac(char *param_1)

{
  int iVar1;
  int *piVar2;
  size_t local_30;
  undefined8 local_28;
  
  local_28 = 0;
  local_30 = 8;
  iVar1 = _sysctlbyname(param_1,&local_28,&local_30,(void *)0x0,0);
  if (iVar1 != 0) {
    piVar2 = ___error();
    _strerror(*piVar2);
    FUN_1007b02e4("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashSysCtl.c"
                  ,0x8c,"Could not get %s value for %s: %s");
    local_28 = 0;
  }
  return local_28;
}

