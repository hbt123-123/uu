// rea decompile_all
// name: FUN_100043388
// address: 0x100043388
// body: available
// range: 0x100043388-0x10004349b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100043440 to 0x100043234 FUN_100043234 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100043494 to 0x1007dce80 _$ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_100043388(ulong param_1,long param_2,byte param_3,ulong param_4,long param_5,char param_6)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  
  if (param_3 < 3) {
    if (param_3 == 0) {
      if ((param_6 == '\0') &&
         (lVar5 = *(long *)(param_1 + 0x10), lVar5 == *(long *)(param_4 + 0x10))) {
        if (lVar5 == 0) {
          return 1;
        }
        if (param_1 == param_4) {
          return 1;
        }
        piVar7 = (int *)(param_1 + 0x20);
        piVar8 = (int *)(param_4 + 0x20);
        do {
          if (lVar5 == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10004349c);
            (*pcVar3)();
          }
          iVar1 = *piVar7;
          iVar2 = *piVar8;
          bVar4 = lVar5 != 1;
          lVar5 = lVar5 + -1;
          piVar7 = piVar7 + 1;
          piVar8 = piVar8 + 1;
        } while (iVar1 == iVar2 && bVar4);
        return (ulong)(iVar1 == iVar2);
      }
    }
    else {
      if (param_3 != 1) {
        uVar6 = (uint)((int)param_1 == (int)param_4);
        if (param_6 != '\x02') {
          uVar6 = 0;
        }
        return (ulong)uVar6;
      }
      if (param_6 == '\x01') goto LAB_10004343c;
    }
  }
  else {
    if (param_3 != 3) {
      if (param_3 == 4) {
        if (param_6 != '\x04') {
          return 0;
        }
      }
      else if (param_6 != '\x05') {
        return 0;
      }
      if ((param_1 == param_4) && (param_2 == param_5)) {
        return 1;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (param_1,param_2,param_4,param_5,0);
      return param_1;
    }
    if (param_6 == '\x03') {
LAB_10004343c:
      FUN_100043234(param_1,param_4);
      return param_1;
    }
  }
  return 0;
}

