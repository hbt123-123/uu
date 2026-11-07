// rea decompile_all
// name: FUN_1005dae14
// address: 0x1005dae14
// body: available
// range: 0x1005dae14-0x1005dae67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1005dae14(ulong param_1,long param_2,ulong param_3,long param_4)

{
  if (param_2 == 0) {
    if (param_4 == 0) {
      return 1;
    }
  }
  else if (param_4 != 0) {
    if ((param_1 == param_3) && (param_2 == param_4)) {
      return 1;
    }
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    if ((param_1 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}

