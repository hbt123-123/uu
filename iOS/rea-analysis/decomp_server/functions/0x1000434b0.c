// rea decompile_all
// name: FUN_1000434b0
// address: 0x1000434b0
// body: available
// range: 0x1000434b0-0x1000435a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_1000434b0(long *param_1,long *param_2)

{
  ulong uVar1;
  byte bVar2;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  uVar1 = param_1[1];
  if ((((uVar1 == param_2[1] && param_1[2] == param_2[2]) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar1,param_1[2],param_2[1],param_2[2],0), (uVar1 & 1) != 0)) &&
      (param_1[3] == param_2[3])) && (param_1[4] == param_2[4])) {
    uVar1 = param_1[5];
    FUN_1000e3bf4(uVar1,param_2[5]);
    if ((((uVar1 & 1) != 0) && (param_1[6] == param_2[6])) &&
       ((((*(byte *)(param_1 + 7) ^ *(byte *)(param_2 + 7)) & 1) == 0 && (param_1[8] == param_2[8]))
       )) {
      bVar2 = *(byte *)(param_1 + 9) ^ *(byte *)(param_2 + 9) ^ 1;
      goto LAB_100043598;
    }
  }
  bVar2 = 0;
LAB_100043598:
  return bVar2 & 1;
}

