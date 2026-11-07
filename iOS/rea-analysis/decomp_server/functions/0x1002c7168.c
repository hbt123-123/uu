// rea decompile_all
// name: FUN_1002c7168
// address: 0x1002c7168
// body: available
// range: 0x1002c7168-0x1002c71b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002c7168(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x20;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  local_40 = *(undefined8 *)(*unaff_x20 + 0x50);
  uStack_38 = param_2;
  local_30 = param_1;
  FUN_1002c6bac(FUN_1002c734c,auStack_50,PTR___sytN_100995e90 + 8);
  return;
}

