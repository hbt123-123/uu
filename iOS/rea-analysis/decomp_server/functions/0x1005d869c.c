// rea decompile_all
// name: FUN_1005d869c
// address: 0x1005d869c
// body: available
// range: 0x1005d869c-0x1005d8793 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005d8790 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1005d869c(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong local_48;
  ulong local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_48 = 0;
  local_40 = 0;
  FUN_1005d9698(param_1,&local_40,&local_48);
  if (((param_1 & 1) == 0) ||
     ((local_48 != 0 && (uVar1 = local_48, FUN_1005d7858(), (uVar1 & 1) == 0)))) {
    uVar2 = 0;
  }
  else if ((local_40 == 0) || (uVar1 = local_40, FUN_1005d8100(), (uVar1 & 1) != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar2);
  }
  return;
}

