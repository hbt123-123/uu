// rea decompile_all
// name: FUN_10004e73c
// address: 0x10004e73c
// body: available
// range: 0x10004e73c-0x10004e78b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10004e73c(long param_1)

{
  undefined4 local_30 [2];
  undefined *local_28;
  
  local_30[0] = 0x2713;
  local_28 = PTR___swiftEmptyArrayStorage_100995ea0;
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x10) = 1;
    (**(code **)(param_1 + 0x18))(local_30);
  }
  return;
}

