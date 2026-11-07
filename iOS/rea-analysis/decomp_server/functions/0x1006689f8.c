// rea decompile_all
// name: FUN_1006689f8
// address: 0x1006689f8
// body: available
// range: 0x1006689f8-0x100668a3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100668a30 to 0x100629fb8 thunk_FUN_100629d98 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006689f8(long param_1)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    bVar1 = *(byte *)(param_1 + 0x20 + lVar2 + -1);
    lVar2 = lVar2 - (ulong)bVar1;
    if ((-1 < lVar2) && (bVar1 != 0)) {
      thunk_FUN_100629d98(param_1,param_1 + 0x20,0,lVar2 * 2 | 1);
      return;
    }
  }
  _swift_bridgeObjectRetain();
  return;
}

