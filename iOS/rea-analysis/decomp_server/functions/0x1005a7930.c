// rea decompile_all
// name: FUN_1005a7930
// address: 0x1005a7930
// body: available
// range: 0x1005a7930-0x1005a7a27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1005a7930(long param_1)

{
  if (param_1 < 1000) {
    if (param_1 < 900) {
      if (param_1 == 0) {
        return 0;
      }
      if (param_1 == 1) {
        return 6;
      }
      if (param_1 == 2) {
        return 7;
      }
    }
    else {
      if (param_1 == 900) {
        return 1;
      }
      if (param_1 == 0x3e6) {
        return 2;
      }
      if (param_1 == 999) {
        return 3;
      }
    }
  }
  else if (param_1 < 0x1869e) {
    if (param_1 == 1000) {
      return 4;
    }
    if (param_1 == 0x3e9) {
      return 5;
    }
    if (param_1 == 0x1869d) {
      return 8;
    }
  }
  else {
    if (param_1 == 0x1869e) {
      return 9;
    }
    if (param_1 == 99999) {
      return 10;
    }
    if (param_1 == 0x7fffffff) {
      return 0xb;
    }
  }
  return 0xc;
}

