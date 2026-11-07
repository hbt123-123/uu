// rea decompile_all
// name: FUN_100737a70
// address: 0x100737a70
// body: available
// range: 0x100737a70-0x100737b43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100737b3c to 0x1007a4d2c FUN_1007a4d2c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100737b40 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100737a70(long param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_70 [56];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (param_3 == 0) {
    if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
      FUN_1007a4d2c(*(undefined8 *)(param_1 + 0x88),param_2);
      return;
    }
  }
  else {
    (*(code *)PTR____chkstk_darwin_100995498)();
    FUN_10076bd8c(param_3,auStack_70);
    FUN_1007a4e8c(*(undefined8 *)(param_1 + 0x88),param_2,auStack_70,0x24);
    if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

