// rea decompile_all
// name: FUN_1000ec910
// address: 0x1000ec910
// body: available
// range: 0x1000ec910-0x1000eca47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_1000ec910(int *param_1,int *param_2)

{
  ulong uVar1;
  byte bVar2;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if ((((uVar1 == *(ulong *)(param_2 + 2) && *(long *)(param_1 + 4) == *(long *)(param_2 + 4)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar1,*(long *)(param_1 + 4),*(ulong *)(param_2 + 2),*(long *)(param_2 + 4),0),
       (uVar1 & 1) != 0)) && (*(long *)(param_1 + 6) == *(long *)(param_2 + 6))) &&
     (*(long *)(param_1 + 8) == *(long *)(param_2 + 8))) {
    uVar1 = *(ulong *)(param_1 + 10);
    if (((uVar1 == *(ulong *)(param_2 + 10)) &&
        (*(long *)(param_1 + 0xc) == *(long *)(param_2 + 0xc))) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar1,*(long *)(param_1 + 0xc),*(ulong *)(param_2 + 10),*(long *)(param_2 + 0xc),
                   0), (uVar1 & 1) != 0)) {
      uVar1 = *(ulong *)(param_1 + 0xe);
      if ((((uVar1 == *(ulong *)(param_2 + 0xe)) &&
           (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10))) ||
          (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                     (uVar1,*(long *)(param_1 + 0x10),*(ulong *)(param_2 + 0xe),
                      *(long *)(param_2 + 0x10),0), (uVar1 & 1) != 0)) &&
         (*(long *)(param_1 + 0x12) == *(long *)(param_2 + 0x12))) {
        bVar2 = *(byte *)(param_1 + 0x14) ^ *(byte *)(param_2 + 0x14) ^ 1;
        goto LAB_1000eca38;
      }
    }
  }
  bVar2 = 0;
LAB_1000eca38:
  return bVar2 & 1;
}

