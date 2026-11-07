// rea decompile_all
// name: FUN_1000e9694
// address: 0x1000e9694
// body: available
// range: 0x1000e9694-0x1000e970f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1000e9694(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = param_1[2];
  if (((uVar2 == param_2[2] && param_1[3] == param_2[3]) && *param_1 >> 0x10 == *param_2 >> 0x10) &&
      param_1[1] >> 0x10 == param_2[1] >> 0x10) {
    uVar1 = 1;
  }
  else {
    __ss22_stringCompareInternal____9expectingSbs11_StringGutsV_SnySiGAdEs01_E16ComparisonResultOtF
              ();
    uVar1 = (uint)uVar2 & 1;
  }
  return uVar1;
}

