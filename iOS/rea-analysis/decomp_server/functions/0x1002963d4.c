// rea decompile_all
// name: FUN_1002963d4
// address: 0x1002963d4
// body: available
// range: 0x1002963d4-0x10029642b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002963d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_70 [40];
  undefined1 auStack_48 [40];
  
  FUN_1000b142c(param_3,auStack_48);
  FUN_1000b142c(param_4,auStack_70);
  FUN_1000a0074(auStack_48,param_1);
  FUN_1000a0074(auStack_70,param_1 + 0x28);
  return;
}

