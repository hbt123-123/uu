// rea decompile_all
// name: FUN_10079abe4
// address: 0x10079abe4
// body: available
// range: 0x10079abe4-0x10079ac23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10079abe4(undefined8 *param_1)

{
  mach_port_t mVar1;
  pthread_t p_Var2;
  mach_port_t *pmVar3;
  
  p_Var2 = _pthread_self();
  mVar1 = _pthread_mach_thread_np(p_Var2);
  pmVar3 = operator_new(0x10);
  *pmVar3 = mVar1;
  *(undefined1 *)(pmVar3 + 1) = 0;
  pmVar3[2] = 0;
  pmVar3[3] = 0;
  *param_1 = pmVar3;
  return;
}

