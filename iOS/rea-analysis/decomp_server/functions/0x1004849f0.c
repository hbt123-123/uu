// rea decompile_all
// name: FUN_1004849f0
// address: 0x1004849f0
// body: available
// range: 0x1004849f0-0x100484ab3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004849f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long unaff_x20;
  undefined8 uVar16;
  undefined1 auStack_78 [24];
  
  uVar1 = *param_1;
  uVar7 = param_1[1];
  uVar2 = param_1[2];
  uVar8 = param_1[3];
  uVar3 = param_1[4];
  uVar9 = param_1[5];
  uVar16 = param_1[6];
  uVar13 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar15 = *(long *)(unaff_x20 + 0x10);
  if ((uVar13 & 1) == 0) {
    FUN_100492e44(0);
    _swift_allocObject();
    FUN_10048be0c();
    *(long *)(unaff_x20 + 0x10) = lVar15;
  }
  _swift_beginAccess(lVar15 + 0x28,auStack_78,1,0);
  uVar4 = *(undefined8 *)(lVar15 + 0x28);
  uVar10 = *(undefined8 *)(lVar15 + 0x30);
  uVar5 = *(undefined8 *)(lVar15 + 0x38);
  uVar11 = *(undefined8 *)(lVar15 + 0x40);
  uVar6 = *(undefined8 *)(lVar15 + 0x48);
  uVar12 = *(undefined8 *)(lVar15 + 0x50);
  uVar14 = *(undefined8 *)(lVar15 + 0x58);
  *(undefined8 *)(lVar15 + 0x28) = uVar1;
  *(undefined8 *)(lVar15 + 0x30) = uVar7;
  *(undefined8 *)(lVar15 + 0x38) = uVar2;
  *(undefined8 *)(lVar15 + 0x40) = uVar8;
  *(undefined8 *)(lVar15 + 0x48) = uVar3;
  *(undefined8 *)(lVar15 + 0x50) = uVar9;
  *(undefined8 *)(lVar15 + 0x58) = uVar16;
  FUN_100492ebc(uVar4,uVar10,uVar5,uVar11,uVar6,uVar12,uVar14);
  return;
}

