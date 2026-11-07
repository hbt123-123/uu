// rea decompile_all
// name: FUN_1007ae6e0
// address: 0x1007ae6e0
// body: available
// range: 0x1007ae6e0-0x1007ae72b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1007ae6e0(vm_address_t param_1,vm_address_t param_2,int param_3)

{
  kern_return_t kVar1;
  vm_size_t local_18;
  
  local_18 = 0;
  kVar1 = _vm_read_overwrite(*(vm_map_t *)PTR__mach_task_self__1009954c8,param_1,(long)param_3,
                             param_2,&local_18);
  return kVar1 == 0 && (int)local_18 != 0;
}

