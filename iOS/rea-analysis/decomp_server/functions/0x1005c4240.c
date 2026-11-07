// rea decompile_all
// name: FUN_1005c4240
// address: 0x1005c4240
// body: available
// range: 0x1005c4240-0x1005c43b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005c4378 to 0x1000094a4 FUN_1000094a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1005c4240(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  FUN_1004a0174(uVar1,(char)param_1[1],*param_2,*(undefined1 *)(param_2 + 1));
  if ((uVar1 & 1) != 0) {
    uVar1 = param_1[2];
    uVar2 = param_2[2];
    if ((*(byte *)(param_2 + 3) & 1) == 0) {
      if (uVar1 != uVar2) {
        return 0;
      }
    }
    else if ((long)uVar2 < 2) {
      if (uVar2 == 0) {
        if (uVar1 != 0) {
          return 0;
        }
      }
      else if (uVar1 != 1) {
        return 0;
      }
    }
    else if (uVar2 == 2) {
      if (uVar1 != 2) {
        return 0;
      }
    }
    else if (uVar1 != 3) {
      return 0;
    }
    if (*(int *)((long)param_1 + 0x1c) == *(int *)((long)param_2 + 0x1c)) {
      uVar1 = param_1[4];
      if (((uVar1 == param_2[4]) && (param_1[5] == param_2[5])) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar1 & 1) != 0)) {
        uVar1 = param_1[6];
        if ((((uVar1 == param_2[6]) && (param_1[7] == param_2[7])) ||
            (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                       (), (uVar1 & 1) != 0)) &&
           (((int)param_1[8] == *(int *)(param_2 + 8) &&
            (((*(byte *)((long)param_1 + 0x44) ^ *(byte *)((long)param_2 + 0x44)) & 1) == 0)))) {
          uVar1 = param_1[9];
          FUN_10056acec(uVar1,param_2[9]);
          if ((uVar1 & 1) != 0) {
            uVar1 = param_1[10];
            if (((uVar1 == param_2[10]) && (param_1[0xb] == param_2[0xb])) ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (), (uVar1 & 1) != 0)) {
              uVar1 = param_1[0xc];
              if (((uVar1 == param_2[0xc]) && (param_1[0xd] == param_2[0xd])) ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (), (uVar1 & 1) != 0)) {
                uVar1 = param_1[0xe];
                FUN_1000094a4(uVar1,param_1[0xf],param_2[0xe],param_2[0xf]);
                return uVar1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

