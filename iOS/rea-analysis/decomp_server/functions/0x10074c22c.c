// rea decompile_all
// name: FUN_10074c22c
// address: 0x10074c22c
// body: available
// range: 0x10074c22c-0x10074c2e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10074c2e0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10074c22c(void)

{
  undefined8 local_238;
  char acStack_22c [500];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  _pthread_mutex_lock((pthread_mutex_t *)&DAT_100abaf90);
  _snprintf(acStack_22c,500,"%s/%s-report-%016llx.json");
  FUN_10074a50c(acStack_22c,&local_238,0,2000000);
  _pthread_mutex_unlock((pthread_mutex_t *)&DAT_100abaf90);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(local_238);
}

