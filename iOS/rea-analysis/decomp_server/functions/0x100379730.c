// rea decompile_all
// name: MMKV::checkReSetCryptKey:
// address: 0x100379730
// body: available
// range: 0x100379730-0x1003797c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003797c4 to 0x100380350 FUN_100380350 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

void MMKV::checkReSetCryptKey_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  void *local_48 [2];
  char local_31;
  
  IVar1 = objc_stub::length(param_3);
  if (IVar1 != 0) {
    IVar1 = objc_stub::bytes(param_3);
    IVar2 = objc_stub::length(param_3);
    FUN_10037b73c(local_48,IVar1,IVar2);
    FUN_100380350(*(undefined8 *)(param_1 + 0x18),local_48);
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
    return;
  }
  FUN_100380350(*(undefined8 *)(param_1 + 0x18),0);
  return;
}

