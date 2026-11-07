// rea decompile_all
// name: FUN_1006b5e40
// address: 0x1006b5e40
// body: available
// range: 0x1006b5e40-0x1006b5ebf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006b5ebc to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006b5e40(void)

{
  long lVar1;
  
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar1 = *(long *)PTR____stack_chk_guard_1009954a0;
  FUN_1006b5188();
  if (*(long *)PTR____stack_chk_guard_1009954a0 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

