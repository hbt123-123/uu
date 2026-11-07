// rea decompile_all
// name: FUN_10068de6c
// address: 0x10068de6c
// body: available
// range: 0x10068de6c-0x10068dedb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10068de6c(long param_1)

{
  if (param_1 < 0x385) {
    if (param_1 == 0x1ea) {
      return 5;
    }
    if (param_1 == 500) {
      return 4;
    }
    if (param_1 == 900) {
      return 1;
    }
  }
  else {
    if (param_1 == 0x385) {
      return 3;
    }
    if (param_1 == 999) {
      return 0;
    }
    if (param_1 == 0x386) {
      return 2;
    }
  }
  return 6;
}

