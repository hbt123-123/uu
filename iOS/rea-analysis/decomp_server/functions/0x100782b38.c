// rea decompile_all
// name: FUN_100782b38
// address: 0x100782b38
// body: available
// range: 0x100782b38-0x100782bff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100782bfc to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100782b38(undefined4 param_1)

{
  int iVar1;
  pthread_attr_t pStack_58;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_1009954a0;
  if ((DAT_100b2e010 & 1) == 0) {
    DAT_100b2e010 = 1;
    DAT_100b2e014 = param_1;
    _pthread_attr_init(&pStack_58);
    _pthread_attr_setdetachstate(&pStack_58,2);
    iVar1 = _pthread_create((pthread_t *)&DAT_100b2e018,&pStack_58,(void **)FUN_100782c00,
                            "SentryCrash Cached Data Monitor");
    if (iVar1 != 0) {
      _strerror(iVar1);
      FUN_1007b02e4("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrashCachedData.c"
                    ,0xa6,"pthread_create_suspended_np: %s");
    }
    _pthread_attr_destroy(&pStack_58);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

