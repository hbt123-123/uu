// rea decompile_all
// name: FUN_1005c0530
// address: 0x1005c0530
// body: available
// range: 0x1005c0530-0x1005c05ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005c05ec to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005c0530(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = param_1[3];
  lVar4 = param_1[4];
  uVar9 = *param_1;
  uVar5 = param_1[1];
  uVar8 = param_1[2];
  uVar2 = *(undefined8 *)(lVar4 + 0x50);
  uVar6 = *(undefined8 *)(lVar4 + 0x58);
  uVar3 = *(undefined8 *)(lVar4 + 0x60);
  uVar7 = *(undefined8 *)(lVar4 + 0x68);
  if ((param_2 & 1) == 0) {
    FUN_1004338a4(uVar2,uVar6,uVar3,uVar7);
    *(undefined8 *)(lVar4 + 0x50) = uVar9;
    *(undefined8 *)(lVar4 + 0x58) = uVar5;
    *(undefined8 *)(lVar4 + 0x60) = uVar8;
    *(undefined8 *)(lVar4 + 0x68) = uVar1;
  }
  else {
    _swift_bridgeObjectRetain(uVar5);
    FUN_100008184(uVar8,uVar1);
    FUN_1004338a4(uVar2,uVar6,uVar3,uVar7);
    *(undefined8 *)(lVar4 + 0x50) = uVar9;
    *(undefined8 *)(lVar4 + 0x58) = uVar5;
    *(undefined8 *)(lVar4 + 0x60) = uVar8;
    *(undefined8 *)(lVar4 + 0x68) = uVar1;
    uVar1 = param_1[2];
    uVar9 = param_1[3];
    _swift_bridgeObjectRelease(param_1[1]);
    FUN_100006cdc(uVar1,uVar9);
  }
  _free(param_1);
  return;
}

