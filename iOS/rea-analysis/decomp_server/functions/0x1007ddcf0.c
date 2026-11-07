// rea decompile_all
// name: /usr/lib/libc++.1.dylib::std::logic_error::logic_error
// address: 0x1007ddcf0
// body: available
// range: 0x1007ddcf0-0x1007ddcfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::logic_error::logic_error(std::string const&) */

void __thiscall std::logic_error::logic_error(logic_error *this,string *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001007ddcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_logic_error_100a1e500)();
  return;
}

