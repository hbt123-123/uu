// rea decompile_all
// name: FUN_1004a8d6c
// address: 0x1004a8d6c
// body: available
// range: 0x1004a8d6c-0x1004a8e0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004a8dec to 0x1000094a4 FUN_1000094a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1004a8d6c(ulong *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  ulong uVar6;
  ulong uVar7;
  
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar7 = param_1[4];
  uVar3 = *unaff_x20;
  uVar4 = unaff_x20[2];
  uVar5 = unaff_x20[3];
  uVar6 = unaff_x20[4];
  if (((uVar3 == *param_1 && unaff_x20[1] == param_1[1]) ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar3 & 1) != 0)) && ((*param_4)(uVar4,uVar1), (uVar4 & 1) != 0)) {
    FUN_1000094a4(uVar5,uVar6,uVar2,uVar7);
    return uVar5;
  }
  return 0;
}

