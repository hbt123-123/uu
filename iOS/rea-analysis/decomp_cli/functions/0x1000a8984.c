// rea decompile_all
// name: FUN_1000a8984
// address: 0x1000a8984
// body: available
// range: 0x1000a8984-0x1000a8a97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1000a8984(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = *param_1;
  if (((uVar5 == *param_2 && param_1[1] == param_2[1]) ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar5 & 1) != 0)) &&
     ((uVar5 = param_1[2], uVar5 == param_2[2] && param_1[3] == param_2[3] ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar5 & 1) != 0)))) {
    uVar5 = param_1[6];
    uVar1 = param_2[6];
    uVar2 = param_2[7];
    uVar6 = uVar1 & uVar2 & 0xf000000000000007;
    if (((uVar5 & param_1[7] ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
      if (uVar6 == 0xf000000000000007) {
        return 1;
      }
    }
    else if (uVar6 != 0xf000000000000007) {
      uVar6 = param_1[4];
      uVar3 = param_1[5];
      uVar4 = param_2[5];
      if ((long)param_1[7] < 0) {
        if ((long)uVar2 < 0) {
          if (uVar3 == 0) {
            if (uVar4 != 0) {
              return 0;
            }
          }
          else {
            if (uVar4 == 0) {
              return 0;
            }
            if (((uVar6 != param_2[4]) || (uVar3 != uVar4)) &&
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (), (uVar6 & 1) == 0)) {
              return 0;
            }
          }
          if (uVar5 == uVar1) {
            return 1;
          }
        }
      }
      else if (-1 < (long)uVar2) {
        if ((uVar6 == param_2[4]) && (uVar3 == uVar4)) {
          return 1;
        }
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        if ((uVar6 & 1) != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}

