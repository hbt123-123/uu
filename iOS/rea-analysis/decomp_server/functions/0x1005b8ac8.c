// rea decompile_all
// name: FUN_1005b8ac8
// address: 0x1005b8ac8
// body: available
// range: 0x1005b8ac8-0x1005b8c57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005b8be8 to 0x1007dce80 _$ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


double FUN_1005b8ac8(double param_1,ulong param_2,ulong param_3,uint param_4,double param_5,
                    ulong param_6,ulong param_7,uint param_8)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)(param_3 >> 0x3c) & 3 | (param_4 & 1) << 2;
  uVar2 = (uint)(param_7 >> 0x20);
  if (uVar3 < 3) {
    if (uVar3 == 0) {
      if ((uVar2 >> 0x1c & 3) == 0 && (param_8 & 1) == 0) {
        dVar1 = 0.0;
        if ((param_2 & 1) == 0) {
          dVar1 = param_1;
        }
        if ((param_6 & 1) == 0) {
          if (dVar1 == param_5) goto LAB_1005b8c30;
        }
        else if (dVar1 == 0.0) goto LAB_1005b8c30;
      }
    }
    else {
      if (uVar3 == 1) {
        uVar3 = (uint)(param_1 == param_5);
        if ((uVar2 >> 0x1c & 3 | (param_8 & 1) << 2) != 1) {
          uVar3 = 0;
        }
        goto LAB_1005b8c44;
      }
      if ((uVar2 >> 0x1c & 3 | (param_8 & 1) << 2) == 2) {
        if ((param_1 != param_5) || (param_2 != param_6)) {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (param_1,param_2,param_5,param_6,0);
          return param_1;
        }
        goto LAB_1005b8c30;
      }
    }
  }
  else {
    if (uVar3 == 3) {
      uVar3 = SUB84(param_5,0) ^ SUB84(param_1,0) ^ 1;
      if ((uVar2 >> 0x1c & 3 | (param_8 & 1) << 2) != 3) {
        uVar3 = 0;
      }
      goto LAB_1005b8c44;
    }
    if (uVar3 == 4) {
      if (((uVar2 >> 0x1c & 3 | (param_8 & 1) << 2) == 4) &&
         (FUN_1005b776c(param_1,param_5), ((ulong)param_1 & 1) != 0)) {
        FUN_1000094a4(param_2,param_3,param_6,param_7);
joined_r0x0001005b8c2c:
        if ((param_2 & 1) != 0) {
LAB_1005b8c30:
          uVar3 = 1;
          goto LAB_1005b8c44;
        }
      }
    }
    else if (((uVar2 >> 0x1c & 3 | (param_8 & 1) << 2) == 5) &&
            (FUN_10056ba40(param_1,param_5), ((ulong)param_1 & 1) != 0)) {
      FUN_1000094a4(param_2,param_3 & 0xcfffffffffffffff,param_6,param_7 & 0xcfffffffffffffff);
      goto joined_r0x0001005b8c2c;
    }
  }
  uVar3 = 0;
LAB_1005b8c44:
  return (double)(ulong)(uVar3 & 1);
}

