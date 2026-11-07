// rea decompile_all
// name: FUN_1005d4f08
// address: 0x1005d4f08
// body: available
// range: 0x1005d4f08-0x1005d4f73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005d4f70 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1005d4f08(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  _swift_unknownObjectWeakAssign
            (*(long *)((long)pvVar1 + 0x20) + 0x10,*(undefined8 *)((long)pvVar1 + 0x18));
  if ((param_2 & 1) == 0) {
    _swift_endAccess(pvVar1);
  }
  else {
    _swift_endAccess(pvVar1);
  }
  _free(pvVar1);
  return;
}

