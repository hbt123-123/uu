// rea decompile_all
// name: _task_threads
// address: 0x1007df67c
// body: available
// range: 0x1007df67c-0x1007df687 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t
_task_threads(task_t target_task,thread_act_array_t *act_list,mach_msg_type_number_t *act_listCnt)

{
                    /* WARNING: Could not recover jumptable at 0x0001007df684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__task_threads_100a1f5a0)();
  return target_task;
}

