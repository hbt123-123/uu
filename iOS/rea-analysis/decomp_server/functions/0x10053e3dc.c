// rea decompile_all
// name: FUN_10053e3dc
// address: 0x10053e3dc
// body: available
// range: 0x10053e3dc-0x10053e483 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10053e480 to 0x1000094a4 FUN_1000094a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10053e3dc(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *unaff_x20;
  
  lVar3 = param_1[3];
  if (unaff_x20[3] == 0) {
    if (lVar3 != 0) {
      return 0;
    }
  }
  else {
    if (lVar3 == 0) {
      return 0;
    }
    uVar4 = unaff_x20[2];
    if ((uVar4 != param_1[2] || unaff_x20[3] != lVar3) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar4 & 1) == 0)) {
      return 0;
    }
  }
  bVar1 = *(byte *)(param_1 + 4);
  if (*(byte *)(unaff_x20 + 4) == 2) {
    if (bVar1 == 2) {
LAB_10053e46c:
      uVar2 = *unaff_x20;
      FUN_1000094a4(uVar2,unaff_x20[1],*param_1,param_1[1]);
      return uVar2;
    }
  }
  else if ((bVar1 != 2) && (((*(byte *)(unaff_x20 + 4) ^ bVar1) & 1) == 0)) goto LAB_10053e46c;
  return 0;
}

