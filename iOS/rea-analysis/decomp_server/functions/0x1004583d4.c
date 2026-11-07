// rea decompile_all
// name: FUN_1004583d4
// address: 0x1004583d4
// body: available
// range: 0x1004583d4-0x100458487 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10045846c to 0x1000094a4 FUN_1000094a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1004583d4(int *param_1,int *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  if (*param_1 == *param_2) {
    uVar6 = *(ulong *)(param_1 + 2);
    bVar4 = *(byte *)(param_1 + 6);
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 10);
    bVar5 = *(byte *)(param_2 + 6);
    uVar1 = *(undefined8 *)(param_2 + 8);
    uVar3 = *(undefined8 *)(param_2 + 10);
    if ((uVar6 == *(ulong *)(param_2 + 2)) && (*(long *)(param_1 + 4) == *(long *)(param_2 + 4))) {
      if (bVar4 == bVar5) {
LAB_10045844c:
        FUN_1000094a4(uVar7,uVar2,uVar1,uVar3);
        return uVar7;
      }
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      if (((uVar6 & 1) != 0) && (((bVar4 ^ bVar5) & 1) == 0)) goto LAB_10045844c;
    }
  }
  return 0;
}

