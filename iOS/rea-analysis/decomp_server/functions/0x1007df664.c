// rea decompile_all
// name: _task_info
// address: 0x1007df664
// body: available
// range: 0x1007df664-0x1007df66f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t
_task_info(task_name_t target_task,task_flavor_t flavor,task_info_t task_info_out,
          mach_msg_type_number_t *task_info_outCnt)

{
                    /* WARNING: Could not recover jumptable at 0x0001007df66c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__task_info_100a1f590)(target_task,flavor);
  return target_task;
}

