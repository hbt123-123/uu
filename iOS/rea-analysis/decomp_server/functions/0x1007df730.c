// rea decompile_all
// name: _vm_deallocate
// address: 0x1007df730
// body: available
// range: 0x1007df730-0x1007df73b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t _vm_deallocate(vm_map_t target_task,vm_address_t address,vm_size_t size)

{
                    /* WARNING: Could not recover jumptable at 0x0001007df738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__vm_deallocate_100a1f618)();
  return target_task;
}

