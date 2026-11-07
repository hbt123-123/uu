// rea decompile_all
// name: FUN_10076bf3c
// address: 0x10076bf3c
// body: available
// range: 0x10076bf3c-0x10076c043 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10076c040 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10076bf3c(undefined8 param_1)

{
  char acStack_22c [500];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (DAT_100b2d4d0 == '\0') {
    DAT_100b2d4d0 = '\x01';
    _snprintf(acStack_22c,500,"%s/Reports");
    FUN_10074a914(acStack_22c);
    FUN_10074bde8(param_1,acStack_22c);
    _snprintf(acStack_22c,500,"%s/Data");
    FUN_10074a914(acStack_22c);
    _snprintf(acStack_22c,500,"%s/Data/CrashState.json");
    FUN_100788818(acStack_22c);
    FUN_100782b38(0x3c);
    FUN_1007655ac(FUN_10076c044);
    FUN_10076c150(DAT_100abb220);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

