// rea decompile_all
// name: FUN_10039bc28
// address: 0x10039bc28
// body: available
// range: 0x10039bc28-0x10039bd1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10039bc28(long *param_1,long *param_2)

{
  byte bVar1;
  ulong uVar2;
  
  if (*param_1 == *param_2) {
    uVar2 = param_1[1];
    if ((((uVar2 == param_2[1] && param_1[2] == param_2[2]) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar2,param_1[2],param_2[1],param_2[2],0), (uVar2 & 1) != 0)) &&
        (param_1[3] == param_2[3])) &&
       (((param_1[4] == param_2[4] && (((*(byte *)(param_1 + 5) ^ *(byte *)(param_2 + 5)) & 1) == 0)
         ) && (param_1[6] == param_2[6])))) {
      bVar1 = *(byte *)(param_2 + 8);
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        if (param_1[7] != param_2[7]) {
          bVar1 = 1;
        }
        if ((bVar1 & 1) != 0) {
          return false;
        }
      }
      else if (bVar1 == 0) {
        return false;
      }
      if ((double)param_1[9] == (double)param_2[9]) {
        return (double)param_1[10] == (double)param_2[10];
      }
    }
  }
  return false;
}

