// rea decompile_all
// name: FUN_1005cecbc
// address: 0x1005cecbc
// body: available
// range: 0x1005cecbc-0x1005ced2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005ced1c to 0x1007ddfe4 /usr/lib/libc++.1.dylib::operator.delete (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005cecbc(undefined8 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  long *plVar2;
  undefined4 *puVar3;
  
  plVar2 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar2 != (long *)0x0) {
    puVar3 = (undefined4 *)*plVar2;
    puVar1 = (undefined4 *)plVar2[1];
    if (puVar3 != puVar1) {
      do {
        _close(*puVar3);
        puVar3 = puVar3 + 1;
      } while (puVar3 != puVar1);
      puVar3 = (undefined4 *)*plVar2;
    }
    if (puVar3 != (undefined4 *)0x0) {
      plVar2[1] = (long)puVar3;
      operator_delete(puVar3);
    }
    operator_delete(plVar2);
    return;
  }
  return;
}

