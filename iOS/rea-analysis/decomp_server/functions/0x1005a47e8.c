// rea decompile_all
// name: FUN_1005a47e8
// address: 0x1005a47e8
// body: available
// range: 0x1005a47e8-0x1005a494f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005a494c to 0x1000094a4 FUN_1000094a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1005a47e8(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  bVar1 = *(byte *)((long)param_2 + 0x14);
  if ((*(byte *)((long)param_1 + 0x14) & 1) == 0) {
    if (*(int *)(param_1 + 2) != *(int *)(param_2 + 2)) {
      bVar1 = 1;
    }
    if ((bVar1 & 1) != 0) {
      return 0;
    }
  }
  else if (bVar1 == 0) {
    return 0;
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
    uVar5 = param_1[3];
    if (((uVar5 != param_2[3]) || (lVar4 != lVar3)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar5,lVar4,param_2[3],lVar3,0), (uVar5 & 1) == 0)) {
      return 0;
    }
  }
  lVar4 = param_1[6];
  lVar3 = param_2[6];
  if (lVar4 == 0) {
    if (lVar3 != 0) {
      return 0;
    }
  }
  else {
    if (lVar3 == 0) {
      return 0;
    }
    uVar5 = param_1[5];
    if (((uVar5 != param_2[5]) || (lVar4 != lVar3)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar5,lVar4,param_2[5],lVar3,0), (uVar5 & 1) == 0)) {
      return 0;
    }
  }
  bVar1 = *(byte *)(param_2 + 7);
  if (*(byte *)(param_1 + 7) == 2) {
    if (bVar1 != 2) {
      return 0;
    }
  }
  else {
    if (bVar1 == 2) {
      return 0;
    }
    if (((*(byte *)(param_1 + 7) ^ bVar1) & 1) != 0) {
      return 0;
    }
  }
  bVar1 = *(byte *)((long)param_2 + 0x39);
  if (*(byte *)((long)param_1 + 0x39) == 2) {
    if (bVar1 == 2) {
LAB_1005a4934:
      uVar2 = *param_1;
      FUN_1000094a4(uVar2,param_1[1],*param_2,param_2[1]);
      return uVar2;
    }
  }
  else if ((bVar1 != 2) && (((*(byte *)((long)param_1 + 0x39) ^ bVar1) & 1) == 0))
  goto LAB_1005a4934;
  return 0;
}

