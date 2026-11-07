// rea decompile_all
// name: FUN_100724644
// address: 0x100724644
// body: available
// range: 0x100724644-0x1007246a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007246a0 to 0x1007f5120 objc_stub::setTimer: (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100724644(long param_1)

{
  ID IVar1;
  
  IVar1 = objc_stub::timer(*(ID *)(param_1 + 0x20));
  if (IVar1 != 0) {
    IVar1 = objc_stub::timer(*(ID *)(param_1 + 0x20));
    objc_stub::invalidate(IVar1);
  }
  objc_stub::setTimer_(*(ID *)(param_1 + 0x20),0);
  return;
}

