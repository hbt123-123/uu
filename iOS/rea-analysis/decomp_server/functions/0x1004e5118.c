// rea decompile_all
// name: FUN_1004e5118
// address: 0x1004e5118
// body: available
// range: 0x1004e5118-0x1004e51bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004e5188 to 0x100006cdc FUN_100006cdc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004e5118(uint *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(param_1 + 4);
  lVar3 = *(long *)(param_1 + 6);
  uVar5 = *param_1;
  uVar6 = *(undefined8 *)(param_1 + 2);
  uVar2 = *(undefined8 *)(lVar3 + 0x10);
  uVar4 = *(undefined8 *)(lVar3 + 0x18);
  uVar7 = *(undefined8 *)(lVar3 + 0x20);
  if ((param_2 & 1) != 0) {
    FUN_100008184(uVar6,uVar1);
    switchD_10004048c::caseD_6d(uVar2,uVar4,uVar7);
    *(ulong *)(lVar3 + 0x10) = (ulong)uVar5;
    *(undefined8 *)(lVar3 + 0x18) = uVar6;
    *(undefined8 *)(lVar3 + 0x20) = uVar1;
    FUN_100006cdc(uVar6,uVar1);
    return;
  }
  switchD_10004048c::caseD_6d(uVar2,uVar4,uVar7);
  *(ulong *)(lVar3 + 0x10) = (ulong)uVar5;
  *(undefined8 *)(lVar3 + 0x18) = uVar6;
  *(undefined8 *)(lVar3 + 0x20) = uVar1;
  return;
}

