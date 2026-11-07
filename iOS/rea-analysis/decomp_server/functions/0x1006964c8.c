// rea decompile_all
// name: FUN_1006964c8
// address: 0x1006964c8
// body: available
// range: 0x1006964c8-0x10069651b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100696518 to 0x1007ddfe4 /usr/lib/libc++.1.dylib::operator.delete (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006964c8(void *param_1)

{
  long *plVar1;
  long lVar2;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  plVar1 = *(long **)((long)param_1 + 0x28);
  if (plVar1 == (long *)((long)param_1 + 0x10)) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_10069650c;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_10069650c:
  operator_delete(param_1);
  return;
}

