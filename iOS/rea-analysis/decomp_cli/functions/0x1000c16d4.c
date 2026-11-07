// rea decompile_all
// name: FUN_1000c16d4
// address: 0x1000c16d4
// body: available
// range: 0x1000c16d4-0x1000c1737 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000c1734 to 0x1000c0da0 FUN_1000c0da0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1000c16d4(pthread_rwlock_t *param_1)

{
  uint uVar1;
  
  uVar1 = _pthread_rwlock_tryrdlock(param_1);
  if ((uVar1 | 0x10) == 0x10) {
    return uVar1 == 0;
  }
  FUN_1000c11ac();
                    /* WARNING: Subroutine does not return */
  FUN_1000c0da0(0,"\'%s\' failed with error \'%s\'(%d)\n");
}

