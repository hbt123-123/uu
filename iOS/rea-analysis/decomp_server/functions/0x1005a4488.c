// rea decompile_all
// name: FUN_1005a4488
// address: 0x1005a4488
// body: available
// range: 0x1005a4488-0x1005a45db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005a45d4 to 0x1000094a4 FUN_1000094a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1005a4488(long *param_1,long *param_2)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  
  lVar4 = *param_1;
  lVar7 = *param_2;
  lVar3 = *(long *)(lVar4 + 0x10);
  if (lVar3 != *(long *)(lVar7 + 0x10)) {
    return 0;
  }
  if (lVar3 != 0 && lVar4 != lVar7) {
    piVar5 = (int *)(lVar4 + 0x20);
    piVar8 = (int *)(lVar7 + 0x20);
    do {
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005a45dc);
        (*pcVar2)();
      }
      if (*piVar5 != *piVar8) {
        return 0;
      }
      piVar5 = piVar5 + 1;
      piVar8 = piVar8 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  lVar4 = param_1[4];
  lVar3 = param_2[4];
  if (lVar4 == 0) {
    if (lVar3 != 0) {
      return 0;
    }
  }
  else {
    if (lVar3 == 0) {
      return 0;
    }
    uVar6 = param_1[3];
    if (((uVar6 != param_2[3]) || (lVar4 != lVar3)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar6,lVar4,param_2[3],lVar3,0), (uVar6 & 1) == 0)) {
      return 0;
    }
  }
  bVar1 = *(byte *)((long)param_2 + 0x2c);
  if ((*(byte *)((long)param_1 + 0x2c) & 1) == 0) {
    if ((int)param_1[5] != (int)param_2[5]) {
      bVar1 = 1;
    }
    if ((bVar1 & 1) != 0) {
      return 0;
    }
  }
  else if (bVar1 == 0) {
    return 0;
  }
  bVar1 = *(byte *)((long)param_2 + 0x34);
  if ((*(byte *)((long)param_1 + 0x34) & 1) == 0) {
    if ((int)param_1[6] != (int)param_2[6]) {
      bVar1 = 1;
    }
    if ((bVar1 & 1) != 0) {
      return 0;
    }
  }
  else if (bVar1 == 0) {
    return 0;
  }
  if (*(char *)((long)param_1 + 0x35) == '\x03') {
    if (*(char *)((long)param_2 + 0x35) == '\x03') {
LAB_1005a45bc:
      lVar3 = param_1[1];
      FUN_1000094a4(lVar3,param_1[2],param_2[1],param_2[2]);
      return lVar3;
    }
  }
  else if (*(char *)((long)param_1 + 0x35) == *(char *)((long)param_2 + 0x35)) goto LAB_1005a45bc;
  return 0;
}

