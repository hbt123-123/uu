// rea decompile_all
// name: FUN_10074b318
// address: 0x10074b318
// body: available
// range: 0x10074b318-0x10074b34b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10074b348 to 0x10074b308 FUN_10074b308 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10074b318(long param_1,code *param_2,code *param_3)

{
  code *pcVar1;
  code *pcVar2;
  
  pcVar1 = FUN_10074b34c;
  if (param_3 != (code *)0x0) {
    pcVar1 = param_3;
  }
  pcVar2 = FUN_10074b308;
  if (param_2 != (code *)0x0) {
    pcVar2 = param_2;
  }
  *(code **)(param_1 + 0x38) = pcVar1;
  *(code **)(param_1 + 0x40) = FUN_10076c318;
  *(code **)(param_1 + 0x30) = pcVar2;
  (*pcVar2)();
  return;
}

