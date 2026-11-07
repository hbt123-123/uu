// rea decompile_all
// name: FUN_100510bb4
// address: 0x100510bb4
// body: available
// range: 0x100510bb4-0x100510c37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100510c34 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100510bb4(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  
  pvVar2 = (void *)*param_1;
  if ((param_2 & 1) == 0) {
    uVar1 = *(undefined8 *)((long)pvVar2 + 0x78);
    FUN_10050fb8c(pvVar2,(long)pvVar2 + 0x28);
    FUN_10050f90c((long)pvVar2 + 0x28,uVar1);
  }
  else {
    uVar1 = *(undefined8 *)((long)pvVar2 + 0x78);
    FUN_10050fb8c(pvVar2,(long)pvVar2 + 0x28);
    FUN_10050fb8c((long)pvVar2 + 0x28,(long)pvVar2 + 0x50);
    FUN_10050f90c((long)pvVar2 + 0x50,uVar1);
    FUN_1005115c4((long)pvVar2 + 0x28);
  }
  FUN_1005115c4(pvVar2);
  _free(pvVar2);
  return;
}

