// rea decompile_all
// name: FUN_1004e8d20
// address: 0x1004e8d20
// body: available
// range: 0x1004e8d20-0x1004e8d9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004e8d84 to 0x1000094a4 FUN_1000094a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1004e8d20(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar7 = *param_1;
  uVar5 = param_1[1];
  uVar6 = param_1[2];
  uVar2 = param_1[3];
  iVar4 = *(int *)(param_2 + 1);
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  FUN_10042a654(uVar7,*param_2);
  if (((uVar7 & 1) != 0) && ((int)uVar5 == iVar4)) {
    FUN_1000094a4(uVar6,uVar2,uVar1,uVar3);
    return uVar6;
  }
  return 0;
}

