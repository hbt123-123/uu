// rea decompile_all
// name: mars::comm::Thread::start_routine
// address: 0x1006a4a9c
// body: available
// range: 0x1006a4a9c-0x1006a4b0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* mars::comm::Thread::start_routine(void*) */

undefined8 mars::comm::Thread::start_routine(void *param_1)

{
  pthread_t p_Var1;
  __darwin_pthread_handler_rec local_38;
  
  FUN_100696a70();
  p_Var1 = _pthread_self();
  local_38.__routine = (_func_1 *)PTR_cleanup_1009965a0;
  local_38.__next = p_Var1->__cleanup_stack;
  p_Var1->__cleanup_stack = &local_38;
  local_38.__arg = param_1;
  (**(code **)(**(long **)param_1 + 0x10))();
  p_Var1->__cleanup_stack = local_38.__next;
  (*local_38.__routine)(local_38.__arg);
  return 0;
}

