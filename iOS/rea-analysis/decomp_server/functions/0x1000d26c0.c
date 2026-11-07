// rea decompile_all
// name: FUN_1000d26c0
// address: 0x1000d26c0
// body: available
// range: 0x1000d26c0-0x1000d27db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000d27bc to 0x1007dce80 _$ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1000d26c0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar6 = *param_1;
  uVar7 = param_1[1];
  bVar5 = (byte)param_1[4];
  uVar8 = *param_2;
  uVar9 = param_2[1];
  if (bVar5 < 2) {
    if (bVar5 == 0) {
      if ((char)param_2[4] != '\0') {
        return 0;
      }
    }
    else if ((char)param_2[4] != '\x01') {
      return 0;
    }
  }
  else {
    if (bVar5 != 2) {
      if (bVar5 != 3) {
        if ((char)param_2[4] == '\x04') {
          uVar1 = param_1[2];
          uVar3 = param_1[3];
          uVar2 = param_2[2];
          uVar4 = param_2[3];
          if (((uVar6 == uVar8) && (uVar7 == uVar9)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar6 & 1) != 0)) {
            uVar6 = uVar1;
            uVar7 = uVar3;
            uVar8 = uVar2;
            uVar9 = uVar4;
            if ((uVar1 == uVar2) && (uVar3 == uVar4)) {
              return 1;
            }
            goto LAB_1000d27ac;
          }
        }
        return 0;
      }
      if ((char)param_2[4] != '\x03') {
        return 0;
      }
      if ((uVar6 == uVar8) && (uVar7 == uVar9)) {
        return 1;
      }
      goto LAB_1000d27ac;
    }
    if ((char)param_2[4] != '\x02') {
      return 0;
    }
  }
  if (uVar6 == uVar8 && uVar7 == uVar9) {
    return 1;
  }
LAB_1000d27ac:
  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
            (uVar6,uVar7,uVar8,uVar9,0);
  return uVar6;
}

