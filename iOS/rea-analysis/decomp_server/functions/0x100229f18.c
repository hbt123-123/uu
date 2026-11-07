// rea decompile_all
// name: FUN_100229f18
// address: 0x100229f18
// body: available
// range: 0x100229f18-0x100229f7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100229f78 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100229f18(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  pvVar4 = (void *)*param_1;
  _swift_endAccess(pvVar4);
  uVar3 = DAT_100b362c0;
  uVar2 = DAT_100b362b8;
  if ((param_2 & 1) == 0) {
    puVar1 = (undefined8 *)(*(long *)((long)pvVar4 + 0x18) + *(long *)((long)pvVar4 + 0x20));
    DAT_100b362b8 = *puVar1;
    DAT_100b362c0 = puVar1[1];
    FUN_10004090c();
    FUN_10007ed2c(uVar2,uVar3);
  }
  _free(pvVar4);
  return;
}

