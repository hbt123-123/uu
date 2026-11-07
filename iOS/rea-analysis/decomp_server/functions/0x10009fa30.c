// rea decompile_all
// name: FUN_10009fa30
// address: 0x10009fa30
// body: available
// range: 0x10009fa30-0x10009faab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10009faa8 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10009fa30(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1009954a0;
  (**(code **)(*(long *)(unaff_x22 + 0x440) + 8))
            (*(undefined8 *)(unaff_x22 + 0x450),*(undefined8 *)(unaff_x22 + 0x438));
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x450));
  if (*(long *)PTR____stack_chk_guard_1009954a0 == lVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010009faa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

