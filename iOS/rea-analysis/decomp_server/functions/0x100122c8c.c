// rea decompile_all
// name: FUN_100122c8c
// address: 0x100122c8c
// body: available
// range: 0x100122c8c-0x100122cf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100122cf0 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100122c8c(undefined8 *param_1)

{
  undefined *puVar1;
  void *pvVar2;
  
  pvVar2 = (void *)*param_1;
  *(undefined8 *)((long)pvVar2 + 0x20) = *(undefined8 *)((long)pvVar2 + 0x18);
  puVar1 = &DAT_100a79718;
  FUN_100004bb4(&DAT_100a79718,&DAT_10080e5b0);
  FUN_10039f3d0((undefined8 *)((long)pvVar2 + 0x20),puVar1);
  _swift_endAccess(pvVar2);
  _free(pvVar2);
  return;
}

