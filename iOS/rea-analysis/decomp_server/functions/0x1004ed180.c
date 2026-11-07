// rea decompile_all
// name: FUN_1004ed180
// address: 0x1004ed180
// body: available
// range: 0x1004ed180-0x1004ed22f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004ed210 to 0x1000094a4 FUN_1000094a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1004ed180(int *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  int *unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (*unaff_x20 == *param_1) {
    uVar1 = *(undefined8 *)(param_1 + 6);
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar7 = *(undefined8 *)(param_1 + 10);
    uVar3 = *(ulong *)(unaff_x20 + 2);
    uVar4 = *(ulong *)(unaff_x20 + 6);
    uVar5 = *(undefined8 *)(unaff_x20 + 8);
    uVar6 = *(undefined8 *)(unaff_x20 + 10);
    if ((((uVar3 == *(ulong *)(param_1 + 2)) && (*(long *)(unaff_x20 + 4) == *(long *)(param_1 + 4))
         ) || (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                         (), (uVar3 & 1) != 0)) && (FUN_100428c64(uVar4,uVar1), (uVar4 & 1) != 0)) {
      FUN_1000094a4(uVar5,uVar6,uVar2,uVar7);
      return uVar5;
    }
  }
  return 0;
}

