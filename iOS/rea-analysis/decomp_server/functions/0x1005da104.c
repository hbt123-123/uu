// rea decompile_all
// name: FUN_1005da104
// address: 0x1005da104
// body: available
// range: 0x1005da104-0x1005da1c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1005da104(ulong *param_1,ulong *param_2)

{
  byte bVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  if ((((uVar2 == *param_2 && param_1[1] == param_2[1]) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar2 & 1) != 0)) &&
      ((uVar2 = param_1[2], uVar2 == param_2[2] && param_1[3] == param_2[3] ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar2 & 1) != 0)))) && ((double)param_1[4] == (double)param_2[4])) {
    bVar1 = (byte)param_2[6];
    if ((param_1[6] & 1) == 0) {
      if (param_1[5] != param_2[5]) {
        bVar1 = 1;
      }
      if ((bVar1 & 1) != 0) {
        return 0;
      }
    }
    else if (bVar1 == 0) {
      return 0;
    }
    uVar2 = param_1[7];
    if (uVar2 == 0) {
      if (param_2[7] == 0) {
        return 1;
      }
    }
    else if ((param_2[7] != 0) && (FUN_1000e408c(), (uVar2 & 1) != 0)) {
      return 1;
    }
  }
  return 0;
}

