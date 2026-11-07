// rea decompile_all
// name: FUN_10000df0c
// address: 0x10000df0c
// body: available
// range: 0x10000df0c-0x10000df37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000df0c(undefined8 param_1)

{
  uint uVar1;
  byte *unaff_x20;
  
  uVar1 = 0x100;
  if (unaff_x20[1] == 0) {
    uVar1 = 0;
  }
  FUN_10000dcf0(param_1,uVar1 | *unaff_x20);
  return;
}

