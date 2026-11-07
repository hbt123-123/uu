// rea decompile_all
// name: FUN_10009ebac
// address: 0x10009ebac
// body: available
// range: 0x10009ebac-0x10009edb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10009ec18 to 0x1000c2570 _$ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10009ebac(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  
  uVar5 = *param_1;
  uVar6 = param_1[1];
  uVar1 = param_1[2];
  if ((uVar1 >> 0x3d & 3) == 0) {
    uVar11 = param_2[2];
    if ((uVar11 & 0x6000000000000000) == 0) {
      uVar7 = *param_2;
      uVar8 = param_2[1];
      uVar10 = (uint)uVar11;
      uVar9 = (uint)uVar1;
      if ((long)uVar1 < 0) {
        if ((long)uVar11 < 0) {
          uVar1 = param_1[3];
          uVar2 = param_1[4];
          uVar4 = uVar9 >> 6 & 3;
          uVar11 = param_2[3];
          uVar3 = param_2[4];
          if (uVar4 == 0) {
            if ((uVar10 & 0xff) < 0x40) {
LAB_10009ed3c:
              if (((uVar5 == uVar7) && (uVar6 == uVar8)) ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (), (uVar5 & 1) != 0)) goto LAB_10009ed58;
            }
          }
          else if (uVar4 == 1) {
            if (((uVar10 & 0xc0) == 0x40) &&
               ((((uVar5 == uVar7 && (uVar6 == uVar8)) ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (), (uVar5 & 1) != 0)) && (((uVar9 ^ uVar10) & 1) == 0)))) {
LAB_10009ed58:
              uVar5 = uVar1;
              uVar6 = uVar2;
              uVar7 = uVar11;
              uVar8 = uVar3;
              if ((uVar1 == uVar11) && (uVar2 == uVar3)) goto LAB_10009eca4;
              goto LAB_10009ed78;
            }
          }
          else if ((uVar10 & 0xc0) == 0x80) goto LAB_10009ed3c;
        }
      }
      else if (-1 < (long)uVar11) {
        uVar4 = uVar9 >> 6 & 3;
        if (uVar4 == 0) {
          if ((uVar10 & 0xff) < 0x40) {
LAB_10009ed14:
            if ((uVar5 == uVar7) && (uVar6 == uVar8)) goto LAB_10009eca4;
LAB_10009ed78:
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar5,uVar6,uVar7,uVar8,0);
joined_r0x00010009ed80:
            if ((uVar5 & 1) != 0) goto LAB_10009eca4;
          }
        }
        else if (uVar4 == 1) {
          if ((uVar10 & 0xc0) == 0x40) {
            if ((uVar5 == uVar7) && (uVar6 == uVar8)) {
              if (((uVar9 ^ uVar10) & 1) == 0) goto LAB_10009eca4;
            }
            else {
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        ();
              if (((uVar9 ^ uVar10) & 1) == 0) goto joined_r0x00010009ed80;
            }
          }
        }
        else if ((uVar10 & 0xc0) == 0x80) goto LAB_10009ed14;
      }
    }
LAB_10009ed84:
    uVar6 = 0;
  }
  else {
    if (((uint)(uVar1 >> 0x3d) & 3) == 1) {
      if ((param_2[2] & 0x6000000000000000) != 0x2000000000000000) goto LAB_10009ed84;
      if (uVar5 != *param_2 || uVar6 != param_2[1]) {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        return uVar5;
      }
    }
    else if ((((param_2[2] & 0x6000000000000000) != 0x4000000000000000) ||
             (param_2[2] != 0x4000000000000000)) ||
            ((param_2[3] != 0 || param_2[4] != 0) || (param_2[1] != 0 || *param_2 != 0)))
    goto LAB_10009ed84;
LAB_10009eca4:
    uVar6 = 1;
  }
  return uVar6;
}

