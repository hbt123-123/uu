// rea decompile_all
// name: FUN_1005ceb44
// address: 0x1005ceb44
// body: available
// range: 0x1005ceb44-0x1005ceb8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005ceb44(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_30 [8];
  long local_28;
  
  FUN_1005ce7d4(auStack_30,param_1);
  if (local_28 != 0) {
    FUN_1006a9938(local_28,param_2);
  }
  FUN_1005ce830(auStack_30);
  return;
}

