// rea decompile_all
// name: FUN_10078916c
// address: 0x10078916c
// body: available
// range: 0x10078916c-0x100789237 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100789234 to 0x1007890e8 FUN_1007890e8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_10078916c(char *param_1,long param_2,long param_3)

{
  int iVar1;
  
  if (param_1 == (char *)0x0) {
    return (char *)0x5;
  }
  iVar1 = _strcmp(param_1,"version");
  if (iVar1 == 0) {
    if (param_2 != 1) {
      FUN_1007b02e4("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Monitors/SentryCrashMonitor_AppState.c"
                    ,0x7f,"Expected version 1 but got %lld");
      return (char *)0x5;
    }
  }
  else {
    iVar1 = _strcmp(param_1,"launchesSinceLastCrash");
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x10) = (int)param_2;
    }
    else {
      iVar1 = _strcmp(param_1,"sessionsSinceLastCrash");
      if (iVar1 == 0) {
        *(int *)(param_3 + 0x14) = (int)param_2;
      }
    }
  }
  FUN_1007890e8((double)param_2,param_1,param_3);
  return param_1;
}

