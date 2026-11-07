// rea decompile_all
// name: SentryProfilerState::cacheMainThreadID
// address: 0x1007a23e8
// body: available
// range: 0x1007a23e8-0x1007a242b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007a2428 to 0x1007ddeb8 /usr/lib/libc++.1.dylib::std::mutex::unlock (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

void SentryProfilerState::cacheMainThreadID(ID param_1,SEL param_2)

{
  mach_port_t mVar1;
  pthread_t p_Var2;
  
  std::mutex::lock();
  p_Var2 = _pthread_self();
  mVar1 = _pthread_mach_thread_np(p_Var2);
  if (mVar1 - 1 < 0xfffffffe) {
    *(mach_port_t *)(param_1 + 0x50) = mVar1;
  }
  std::mutex::unlock();
  return;
}

