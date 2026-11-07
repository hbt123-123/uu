// rea decompile_all
// name: /usr/lib/libc++.1.dylib::std::string::__grow_by
// address: 0x1007dddb0
// body: available
// range: 0x1007dddb0-0x1007dddbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::string::__grow_by(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long,
   unsigned long) */

void std::string::__grow_by
               (ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6)

{
                    /* WARNING: Could not recover jumptable at 0x0001007dddb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___grow_by_100a1e580)();
  return;
}

