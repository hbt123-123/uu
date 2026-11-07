// rea decompile_all
// name: FUN_100692884
// address: 0x100692884
// body: available
// range: 0x100692884-0x1006928db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100692884(long param_1)

{
  undefined1 auStack_80 [40];
  void *local_58;
  char local_41;
  void *local_40;
  char local_29;
  
  FUN_10069298c(auStack_80);
  FUN_10069ef08(param_1 + 8,auStack_80);
  if (local_29 < '\0') {
    operator_delete(local_40);
  }
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  return;
}

