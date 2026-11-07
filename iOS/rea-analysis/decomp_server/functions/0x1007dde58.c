// rea decompile_all
// name: /usr/lib/libc++.1.dylib::std::condition_variable::__do_timed_wait
// address: 0x1007dde58
// body: available
// range: 0x1007dde58-0x1007dde63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::condition_variable::__do_timed_wait(std::unique_lock<std::mutex>&,
   std::chrono::time_point<std::chrono::system_clock, std::chrono::duration<long long,
   std::ratio<1l, 1000000000l> > >) */

void std::condition_variable::__do_timed_wait(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001007dde60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___do_timed_wait_100a1e5f0)();
  return;
}

