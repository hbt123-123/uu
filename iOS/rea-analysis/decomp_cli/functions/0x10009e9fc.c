// rea decompile_all
// name: FUN_10009e9fc
// address: 0x10009e9fc
// body: available
// range: 0x10009e9fc-0x10009ebab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10009eba8 to 0x1000c2570 _$ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10009e9fc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar6 = *param_1;
  uVar1 = param_1[1];
  uVar9 = (uint)param_1[2];
  if ((long)param_1[2] < 0) {
    if (-1 < (long)param_2[2]) {
      return 0;
    }
    uVar7 = param_1[3];
    uVar3 = param_1[4];
    uVar8 = (uint)param_2[2];
    uVar5 = uVar9 >> 6 & 3;
    uVar2 = param_2[3];
    uVar4 = param_2[4];
    if (uVar5 == 0) {
      if (0x3f < (uVar8 & 0xff)) {
        return 0;
      }
    }
    else {
      if (uVar5 == 1) {
        if ((uVar8 & 0xc0) != 0x40) {
          return 0;
        }
        if ((uVar6 == *param_2) && (uVar1 == param_2[1])) {
          if (((uVar9 ^ uVar8) & 1) != 0) {
            return 0;
          }
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          if ((uVar6 & 1) == 0) {
            return 0;
          }
          if (((uVar9 ^ uVar8) & 1) != 0) {
            return 0;
          }
        }
        goto LAB_10009eb6c;
      }
      if ((uVar8 & 0xc0) != 0x80) {
        return 0;
      }
    }
    if (((uVar6 != *param_2) || (uVar1 != param_2[1])) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar6 & 1) == 0)) {
      return 0;
    }
LAB_10009eb6c:
    if ((uVar7 == uVar2) && (uVar3 == uVar4)) {
      return 1;
    }
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar7,uVar3,uVar2,uVar4,0);
    return uVar7;
  }
  if ((long)param_2[2] < 0) {
    return 0;
  }
  uVar8 = (uint)param_2[2];
  uVar5 = uVar9 >> 6 & 3;
  if (uVar5 == 0) {
    if (0x3f < (uVar8 & 0xff)) {
      return 0;
    }
  }
  else {
    if (uVar5 == 1) {
      if ((uVar8 & 0xc0) != 0x40) {
        return 0;
      }
      if ((uVar6 == *param_2) && (uVar1 == param_2[1])) {
        if (((uVar9 ^ uVar8) & 1) == 0) {
          return 1;
        }
        return 0;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      if (((uVar9 ^ uVar8) & 1) != 0) {
        return 0;
      }
      goto joined_r0x00010009eae8;
    }
    if ((uVar8 & 0xc0) != 0x80) {
      return 0;
    }
  }
  if ((uVar6 == *param_2) && (uVar1 == param_2[1])) {
    return 1;
  }
  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
joined_r0x00010009eae8:
  if ((uVar6 & 1) != 0) {
    return 1;
  }
  return 0;
}

