// rea decompile_all
// name: FUN_1005a4364
// address: 0x1005a4364
// body: available
// range: 0x1005a4364-0x1005a4487 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005a4470 to 0x1000094a4 FUN_1000094a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1005a4364(long *param_1,long *param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  int *piVar7;
  
  lVar4 = *param_1;
  lVar6 = *param_2;
  lVar3 = *(long *)(lVar4 + 0x10);
  if (lVar3 == *(long *)(lVar6 + 0x10)) {
    if (lVar3 != 0 && lVar4 != lVar6) {
      piVar5 = (int *)(lVar4 + 0x20);
      piVar7 = (int *)(lVar6 + 0x20);
      do {
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005a4488);
          (*pcVar1)();
        }
        if (*piVar5 != *piVar7) {
          return 0;
        }
        piVar5 = piVar5 + 1;
        piVar7 = piVar7 + 1;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    uVar2 = param_1[1];
    FUN_1000e3c6c(uVar2,param_2[1]);
    if ((uVar2 & 1) != 0) {
      lVar3 = param_2[6];
      if (param_1[6] == 0) {
        if (lVar3 != 0) {
          return 0;
        }
      }
      else {
        if (lVar3 == 0) {
          return 0;
        }
        uVar2 = param_1[5];
        if (((uVar2 != param_2[5]) || (param_1[6] != lVar3)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar2 & 1) == 0)) {
          return 0;
        }
      }
      lVar3 = param_2[8];
      if (param_1[8] == 0) {
        if (lVar3 != 0) {
          return 0;
        }
      }
      else {
        if (lVar3 == 0) {
          return 0;
        }
        uVar2 = param_1[7];
        if (((uVar2 != param_2[7]) || (param_1[8] != lVar3)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar2 & 1) == 0)) {
          return 0;
        }
      }
      uVar2 = param_1[2];
      FUN_1000e408c(uVar2,param_2[2]);
      if ((uVar2 & 1) != 0) {
        lVar3 = param_1[3];
        FUN_1000094a4(lVar3,param_1[4],param_2[3],param_2[4]);
        return lVar3;
      }
    }
  }
  return 0;
}

