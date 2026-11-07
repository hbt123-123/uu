// rea decompile_all
// name: FUN_1006ab764
// address: 0x1006ab764
// body: available
// range: 0x1006ab764-0x1006ab7f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006ab7f4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006ab764(long param_1,char *param_2)

{
  long lVar1;
  undefined1 auStack_78 [64];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar1 = (long)param_2[1];
  FUN_1006aaf60(auStack_78,param_1,lVar1);
  FUN_1006aaf60(auStack_78 + (long)*param_2 * 8,param_1 + lVar1,lVar1);
  FUN_1006ab5dc(auStack_78,param_2);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

