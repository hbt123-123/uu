// rea decompile_all
// name: FUN_1000e9798
// address: 0x1000e9798
// body: available
// range: 0x1000e9798-0x1000e984b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000e9834 to 0x1000e3cc8 FUN_1000e3cc8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1000e9798(int *param_1,int *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if ((*param_1 == *param_2) && (*(long *)(param_1 + 2) == *(long *)(param_2 + 2))) {
    lVar3 = 0;
    FUN_1000e49dc();
    uVar4 = (long)param_1 + (long)*(int *)(lVar3 + 0x18);
    __s10Foundation3URLV2eeoiySbAC_ACtFZ(uVar4,(long)param_2 + (long)*(int *)(lVar3 + 0x18));
    if (((uVar4 & 1) != 0) &&
       ((puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lVar3 + 0x1c)), uVar4 = *puVar1,
        puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lVar3 + 0x1c)),
        uVar4 == *puVar2 && puVar1[1] == puVar2[1] ||
        (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (), (uVar4 & 1) != 0)))) {
      uVar5 = *(undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x20));
      FUN_1000e3cc8(uVar5,*(undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x20)));
      return uVar5;
    }
  }
  return 0;
}

