// rea decompile_all
// name: FUN_1005dca48
// address: 0x1005dca48
// body: available
// range: 0x1005dca48-0x1005dcaff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1005dca48(int *param_1,int *param_2)

{
  ulong uVar1;
  
  if (*param_1 != *param_2) {
    return false;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (((uVar1 == *(ulong *)(param_2 + 2) && *(long *)(param_1 + 4) == *(long *)(param_2 + 4)) ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar1 & 1) != 0)) &&
     ((uVar1 = *(ulong *)(param_1 + 6),
      uVar1 == *(ulong *)(param_2 + 6) && *(long *)(param_1 + 8) == *(long *)(param_2 + 8) ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar1 & 1) != 0)))) {
    uVar1 = *(ulong *)(param_1 + 10);
    if (((uVar1 == *(ulong *)(param_2 + 10)) &&
        (*(long *)(param_1 + 0xc) == *(long *)(param_2 + 0xc))) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar1 & 1) != 0)) {
      return *(long *)(param_1 + 0xe) == *(long *)(param_2 + 0xe);
    }
  }
  return false;
}

