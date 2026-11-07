// rea decompile_all
// name: FUN_100744ecc
// address: 0x100744ecc
// body: available
// range: 0x100744ecc-0x100744f53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100744f50 to 0x1007ddfe4 /usr/lib/libc++.1.dylib::operator.delete (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100744ecc(void *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  plVar2 = (long *)((long)param_1 + 0x40);
  plVar1 = *(long **)((long)param_1 + 0x58);
  if (plVar1 == plVar2) {
    lVar3 = 4;
LAB_100744f08:
    (**(code **)(*plVar2 + lVar3 * 8))();
  }
  else if (plVar1 != (long *)0x0) {
    lVar3 = 5;
    plVar2 = plVar1;
    goto LAB_100744f08;
  }
  plVar2 = (long *)((long)param_1 + 0x18);
  plVar1 = *(long **)((long)param_1 + 0x30);
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_100744f44;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_100744f44:
  operator_delete(param_1);
  return;
}

