// rea decompile_all
// name: FUN_1005787c8
// address: 0x1005787c8
// body: available
// range: 0x1005787c8-0x100578893 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100578890 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005787c8(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = param_1[3];
  lVar5 = param_1[4];
  uVar2 = *param_1;
  uVar6 = param_1[1];
  uVar9 = param_1[2];
  uVar3 = *(undefined8 *)(lVar5 + 0x70);
  uVar7 = *(undefined8 *)(lVar5 + 0x78);
  uVar4 = *(undefined8 *)(lVar5 + 0x80);
  uVar8 = *(undefined8 *)(lVar5 + 0x88);
  if ((param_2 & 1) == 0) {
    FUN_1005419ec(uVar3,uVar7,uVar4,uVar8);
    *(undefined8 *)(lVar5 + 0x70) = uVar2;
    *(undefined8 *)(lVar5 + 0x78) = uVar6;
    *(undefined8 *)(lVar5 + 0x80) = uVar9;
    *(undefined8 *)(lVar5 + 0x88) = uVar1;
  }
  else {
    FUN_100008184(uVar2,uVar6);
    _swift_bridgeObjectRetain(uVar9);
    _swift_retain(uVar1);
    FUN_1005419ec(uVar3,uVar7,uVar4,uVar8);
    *(undefined8 *)(lVar5 + 0x70) = uVar2;
    *(undefined8 *)(lVar5 + 0x78) = uVar6;
    *(undefined8 *)(lVar5 + 0x80) = uVar9;
    *(undefined8 *)(lVar5 + 0x88) = uVar1;
    uVar1 = param_1[2];
    uVar2 = param_1[3];
    FUN_100006cdc(*param_1,param_1[1]);
    _swift_bridgeObjectRelease(uVar1);
    _swift_release(uVar2);
  }
  _free(param_1);
  return;
}

