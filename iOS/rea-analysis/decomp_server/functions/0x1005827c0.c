// rea decompile_all
// name: FUN_1005827c0
// address: 0x1005827c0
// body: available
// range: 0x1005827c0-0x10058288b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005827c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  ushort uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  uVar1 = *param_1;
  uVar5 = param_1[1];
  uVar11 = *(ushort *)(param_1 + 2);
  uVar2 = param_1[3];
  uVar6 = param_1[4];
  uVar9 = *(undefined1 *)(param_1 + 5);
  uVar12 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar14 = *(long *)(unaff_x20 + 0x18);
  if ((uVar12 & 1) == 0) {
    FUN_1005a84e4(0);
    _swift_allocObject();
    FUN_100595f48();
    *(long *)(unaff_x20 + 0x18) = lVar14;
  }
  _swift_beginAccess(lVar14 + 0x50,auStack_78,1,0);
  uVar3 = *(undefined8 *)(lVar14 + 0x50);
  uVar7 = *(undefined8 *)(lVar14 + 0x58);
  uVar4 = *(undefined8 *)(lVar14 + 0x60);
  uVar8 = *(undefined8 *)(lVar14 + 0x68);
  uVar13 = *(undefined8 *)(lVar14 + 0x70);
  *(undefined8 *)(lVar14 + 0x50) = uVar1;
  *(undefined8 *)(lVar14 + 0x58) = uVar5;
  *(ulong *)(lVar14 + 0x60) = (ulong)uVar11;
  *(undefined8 *)(lVar14 + 0x68) = uVar2;
  *(undefined8 *)(lVar14 + 0x70) = uVar6;
  uVar10 = *(undefined1 *)(lVar14 + 0x78);
  *(undefined1 *)(lVar14 + 0x78) = uVar9;
  FUN_1005419bc(uVar3,uVar7,uVar4,uVar8,uVar13,uVar10);
  return;
}

