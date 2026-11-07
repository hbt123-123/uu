// rea decompile_all
// name: FUN_10038028c
// address: 0x10038028c
// body: available
// range: 0x10038028c-0x100380337 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100380334 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10038028c(undefined8 param_1,long param_2)

{
  size_t sVar1;
  long local_40;
  char acStack_38 [16];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_40 = *(long *)(param_2 + 0xb8);
  if (local_40 != 0) {
    FUN_100392994();
  }
  if (*(long *)(param_2 + 0xb0) == 0) {
    FUN_100384ff4(param_1,"");
  }
  else {
    FUN_100392ca0(*(long *)(param_2 + 0xb0),acStack_38);
    sVar1 = _strnlen(acStack_38,0x10);
    FUN_100384db8(param_1,acStack_38,sVar1);
  }
  FUN_100385098(&local_40);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

