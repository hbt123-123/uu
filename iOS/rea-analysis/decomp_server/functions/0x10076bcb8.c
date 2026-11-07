// rea decompile_all
// name: FUN_10076bcb8
// address: 0x10076bcb8
// body: available
// range: 0x10076bcb8-0x10076bd8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10076bd88 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10076bcb8(ID param_1,SEL param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  size_t local_2c8;
  int local_2c0 [3];
  pid_t local_2b4;
  undefined1 auStack_2b0 [32];
  uint local_290;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_290 = 0;
  local_2c8 = 0x288;
  local_2c0[0] = 1;
  local_2c0[1] = 0xe;
  local_2c0[2] = 1;
  local_2b4 = _getpid();
  iVar1 = _sysctl(local_2c0,4,auStack_2b0,&local_2c8,(void *)0x0,0);
  if (iVar1 == 0) {
    uVar2 = local_290 >> 0xb & 1;
  }
  else {
    piVar3 = ___error();
    _strerror(*piVar3);
    FUN_1007b02e4("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashDebug.c"
                  ,0x37,"sysctl: %s");
    uVar2 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

