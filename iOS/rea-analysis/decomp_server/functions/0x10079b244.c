// rea decompile_all
// name: FUN_10079b244
// address: 0x10079b244
// body: available
// range: 0x10079b244-0x10079b2e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10079b244(pthread_t param_1)

{
  int iVar1;
  int *piVar2;
  sched_param local_28;
  
  FUN_10079b210();
  if (param_1 == (pthread_t)0x0) {
    local_28.sched_priority = -1;
  }
  else {
    piVar2 = ___error();
    *piVar2 = 0;
    iVar1 = _pthread_getschedparam(param_1,(int *)0x0,&local_28);
    piVar2 = ___error();
    if (*piVar2 != 0) {
      _strerror(*piVar2);
      FUN_1007b02e4("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryThreadHandle.cpp"
                    ,0x81,"%s failed with code: %d, description: %s");
    }
    if (iVar1 != 0) {
      local_28.sched_priority = -1;
    }
  }
  return local_28.sched_priority;
}

