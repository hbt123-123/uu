// rea decompile_all
// name: FUN_10021866c
// address: 0x10021866c
// body: available
// range: 0x10021866c-0x1002186a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10021869c to 0x100006cdc FUN_100006cdc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10021866c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  
  uVar1 = (uint)(param_3 >> 0x3c) & 3;
  if (uVar1 < 2) {
    if (uVar1 != 0) {
      param_3 = param_3 & 0xcfffffffffffffff;
    }
  }
  else {
    if (uVar1 != 2) {
      return;
    }
    param_3 = param_3 & 0xcfffffffffffffff;
  }
  FUN_100006cdc(param_2,param_3);
  return;
}

