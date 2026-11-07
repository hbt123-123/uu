// rea decompile_all
// name: FUN_1006966b0
// address: 0x1006966b0
// body: available
// range: 0x1006966b0-0x1006967b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006967ac to 0x1006967b4 FUN_1006967b4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1006967b0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006966b0(undefined8 param_1,undefined4 *param_2,char *param_3,va_list param_4)

{
  char acStack_1048 [4096];
  long local_48;
  
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (param_3 == (char *)0x0) {
    *param_2 = 5;
    if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
      FUN_1006967b4(param_1,param_2,"NULL == _format");
      return;
    }
  }
  else {
    _bzero(acStack_1048,0x1000);
    _vsnprintf(acStack_1048,0x1000,param_3,param_4);
    FUN_1006967b4(param_1,param_2,acStack_1048);
    if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

