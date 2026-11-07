// rea decompile_all
// name: FUN_100583914
// address: 0x100583914
// body: available
// range: 0x100583914-0x100583a2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100583a28 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100583914(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  ushort uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  param_1 = (undefined8 *)*param_1;
  lVar11 = param_1[6];
  uVar12 = *param_1;
  uVar4 = param_1[1];
  uVar1 = param_1[3];
  uVar5 = param_1[4];
  uVar8 = *(undefined1 *)(param_1 + 5);
  uVar10 = *(ushort *)(param_1 + 2);
  uVar2 = *(undefined8 *)(lVar11 + 0x50);
  uVar6 = *(undefined8 *)(lVar11 + 0x58);
  uVar3 = *(undefined8 *)(lVar11 + 0x60);
  uVar7 = *(undefined8 *)(lVar11 + 0x68);
  uVar13 = *(undefined8 *)(lVar11 + 0x70);
  uVar9 = *(undefined1 *)(lVar11 + 0x78);
  if ((param_2 & 1) == 0) {
    FUN_1005419bc(uVar2,uVar6,uVar3,uVar7,uVar13,uVar9);
    *(undefined8 *)(lVar11 + 0x50) = uVar12;
    *(undefined8 *)(lVar11 + 0x58) = uVar4;
    *(ulong *)(lVar11 + 0x60) = (ulong)uVar10;
    *(undefined8 *)(lVar11 + 0x68) = uVar1;
    *(undefined8 *)(lVar11 + 0x70) = uVar5;
    *(undefined1 *)(lVar11 + 0x78) = uVar8;
  }
  else {
    FUN_100008184(uVar12,uVar4);
    _swift_bridgeObjectRetain(uVar5);
    FUN_1005419bc(uVar2,uVar6,uVar3,uVar7,uVar13,uVar9);
    *(undefined8 *)(lVar11 + 0x50) = uVar12;
    *(undefined8 *)(lVar11 + 0x58) = uVar4;
    *(ulong *)(lVar11 + 0x60) = (ulong)uVar10;
    *(undefined8 *)(lVar11 + 0x68) = uVar1;
    *(undefined8 *)(lVar11 + 0x70) = uVar5;
    *(undefined1 *)(lVar11 + 0x78) = uVar8;
    uVar12 = param_1[4];
    FUN_100006cdc(*param_1,param_1[1]);
    _swift_bridgeObjectRelease(uVar12);
  }
  _free(param_1);
  return;
}

