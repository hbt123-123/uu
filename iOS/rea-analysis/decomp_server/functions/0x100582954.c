// rea decompile_all
// name: FUN_100582954
// address: 0x100582954
// body: available
// range: 0x100582954-0x100582ad3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100582ad0 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100582954(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  ushort uVar9;
  ushort uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  
  param_1 = (undefined8 *)*param_1;
  uVar15 = *param_1;
  uVar3 = param_1[1];
  uVar10 = *(ushort *)(param_1 + 2);
  uVar9 = *(ushort *)(param_1 + 2);
  uVar1 = param_1[3];
  uVar4 = param_1[4];
  uVar7 = *(undefined1 *)(param_1 + 5);
  lVar14 = param_1[0xf];
  if ((param_2 & 1) == 0) {
    uVar11 = *(ulong *)(lVar14 + 0x18);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar14 = *(long *)(lVar14 + 0x18);
    if ((uVar11 & 1) == 0) {
      lVar16 = param_1[0xf];
      uVar12 = 0;
      FUN_1005a84e4(0);
      _swift_allocObject();
      FUN_100595f48(lVar14,uVar12);
      *(long *)(lVar16 + 0x18) = lVar14;
    }
    _swift_beginAccess(lVar14 + 0x50,param_1 + 0xc,1,0);
    uVar12 = *(undefined8 *)(lVar14 + 0x50);
    uVar5 = *(undefined8 *)(lVar14 + 0x58);
    uVar2 = *(undefined8 *)(lVar14 + 0x60);
    uVar6 = *(undefined8 *)(lVar14 + 0x68);
    uVar13 = *(undefined8 *)(lVar14 + 0x70);
    *(undefined8 *)(lVar14 + 0x50) = uVar15;
    *(undefined8 *)(lVar14 + 0x58) = uVar3;
    *(ulong *)(lVar14 + 0x60) = (ulong)uVar10;
    *(undefined8 *)(lVar14 + 0x68) = uVar1;
    *(undefined8 *)(lVar14 + 0x70) = uVar4;
    uVar8 = *(undefined1 *)(lVar14 + 0x78);
    *(undefined1 *)(lVar14 + 0x78) = uVar7;
    FUN_1005419bc(uVar12,uVar5,uVar2,uVar6,uVar13,uVar8);
  }
  else {
    FUN_100008184(uVar15,uVar3);
    _swift_bridgeObjectRetain(uVar4);
    uVar11 = *(ulong *)(lVar14 + 0x18);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar14 = *(long *)(lVar14 + 0x18);
    if ((uVar11 & 1) == 0) {
      lVar16 = param_1[0xf];
      uVar12 = 0;
      FUN_1005a84e4(0);
      _swift_allocObject();
      FUN_100595f48(lVar14,uVar12);
      *(long *)(lVar16 + 0x18) = lVar14;
    }
    _swift_beginAccess(lVar14 + 0x50,param_1 + 9,1,0);
    uVar12 = *(undefined8 *)(lVar14 + 0x50);
    uVar5 = *(undefined8 *)(lVar14 + 0x58);
    uVar2 = *(undefined8 *)(lVar14 + 0x60);
    uVar6 = *(undefined8 *)(lVar14 + 0x68);
    uVar13 = *(undefined8 *)(lVar14 + 0x70);
    *(undefined8 *)(lVar14 + 0x50) = uVar15;
    *(undefined8 *)(lVar14 + 0x58) = uVar3;
    *(ulong *)(lVar14 + 0x60) = (ulong)uVar9;
    *(undefined8 *)(lVar14 + 0x68) = uVar1;
    *(undefined8 *)(lVar14 + 0x70) = uVar4;
    uVar8 = *(undefined1 *)(lVar14 + 0x78);
    *(undefined1 *)(lVar14 + 0x78) = uVar7;
    FUN_1005419bc(uVar12,uVar5,uVar2,uVar6,uVar13,uVar8);
    uVar15 = param_1[4];
    FUN_100006cdc(*param_1,param_1[1]);
    _swift_bridgeObjectRelease(uVar15);
  }
  _free(param_1);
  return;
}

