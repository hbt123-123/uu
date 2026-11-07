// rea decompile_all
// name: FUN_1007412b0
// address: 0x1007412b0
// body: available
// range: 0x1007412b0-0x100741377 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100741374 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007412b0(undefined4 param_1,void *param_2)

{
  int iVar1;
  int *piVar2;
  size_t local_40;
  int local_38 [4];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_38[0] = 1;
  local_38[1] = 0xe;
  local_38[2] = 1;
  local_40 = 0x288;
  local_38[3] = param_1;
  iVar1 = _sysctl(local_38,4,param_2,&local_40,(void *)0x0,0);
  if (iVar1 != 0) {
    piVar2 = ___error();
    _strerror(*piVar2);
    FUN_1007b02e4("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashSysCtl.c"
                  ,0xe2,"Could not get the name for process %d: %s");
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(iVar1 == 0);
}

