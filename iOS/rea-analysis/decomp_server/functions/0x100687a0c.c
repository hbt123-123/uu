// rea decompile_all
// name: FUN_100687a0c
// address: 0x100687a0c
// body: available
// range: 0x100687a0c-0x100687a53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100687a50 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100687a0c(undefined8 *param_1)

{
  void *pvVar1;
  undefined1 local_40 [24];
  undefined *local_28;
  
  pvVar1 = (void *)*param_1;
  local_40[0] = *(undefined1 *)((long)pvVar1 + 0x33);
  local_28 = PTR___sSbN_1009958c8;
  FUN_10067f3d8(local_40);
  _free(pvVar1);
  return;
}

