// rea decompile_all
// name: FUN_1007411d0
// address: 0x1007411d0
// body: available
// range: 0x1007411d0-0x1007412af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007412ac to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007411d0(void)

{
  int iVar1;
  int *piVar2;
  size_t local_2d0 [2];
  int aiStack_2c0 [3];
  pid_t local_2b4;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_2d0[1] = 4;
  _sysctlnametomib("kern.proc.pid",aiStack_2c0,local_2d0 + 1);
  local_2b4 = _getpid();
  local_2d0[0] = 0x288;
  iVar1 = _sysctl(aiStack_2c0,4,&local_2b0,local_2d0,(void *)0x0,0);
  if (iVar1 != 0) {
    piVar2 = ___error();
    _strerror(*piVar2);
    FUN_1007b02e4("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashSysCtl.c"
                  ,0xd2,"Could not get current process start time: %s");
    uStack_2a8 = 0;
    local_2b0 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(local_2b0,uStack_2a8);
  }
  return;
}

