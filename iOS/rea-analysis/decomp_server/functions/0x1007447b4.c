// rea decompile_all
// name: FUN_1007447b4
// address: 0x1007447b4
// body: available
// range: 0x1007447b4-0x1007448c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007448ac to 0x1007ddeb8 /usr/lib/libc++.1.dylib::std::mutex::unlock (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007447b4(long param_1)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    std::mutex::lock();
    if (*(char *)(param_1 + 0x78) != '\0') {
      piVar1 = ___error();
      *piVar1 = 0;
      _pthread_cancel(*(pthread_t *)(param_1 + 0x80));
      piVar1 = ___error();
      if (*piVar1 != 0) {
        _strerror(*piVar1);
        FUN_1007b02e4("ERROR",
                      "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySamplingProfiler.cpp"
                      ,0xa4,"%s failed with code: %d, description: %s");
      }
      piVar1 = ___error();
      *piVar1 = 0;
      _pthread_join(*(pthread_t *)(param_1 + 0x80),(void **)0x0);
      piVar1 = ___error();
      if (*piVar1 != 0) {
        _strerror(*piVar1);
        FUN_1007b02e4("ERROR",
                      "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySamplingProfiler.cpp"
                      ,0xa5,"%s failed with code: %d, description: %s");
      }
      *(undefined1 *)(param_1 + 0x78) = 0;
    }
    std::mutex::unlock();
    return;
  }
  return;
}

