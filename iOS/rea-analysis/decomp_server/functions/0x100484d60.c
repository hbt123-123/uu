// rea decompile_all
// name: FUN_100484d60
// address: 0x100484d60
// body: available
// range: 0x100484d60-0x100484dff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100484d60(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar7 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar9 = *(long *)(unaff_x20 + 0x10);
  if ((uVar7 & 1) == 0) {
    FUN_100492e44(0);
    _swift_allocObject();
    FUN_10048be0c();
    *(long *)(unaff_x20 + 0x10) = lVar9;
  }
  _swift_beginAccess(lVar9 + 0x28,auStack_48,1,0);
  uVar1 = *(undefined8 *)(lVar9 + 0x28);
  uVar4 = *(undefined8 *)(lVar9 + 0x30);
  uVar2 = *(undefined8 *)(lVar9 + 0x38);
  uVar5 = *(undefined8 *)(lVar9 + 0x40);
  uVar3 = *(undefined8 *)(lVar9 + 0x48);
  uVar6 = *(undefined8 *)(lVar9 + 0x50);
  uVar8 = *(undefined8 *)(lVar9 + 0x58);
  *(undefined8 *)(lVar9 + 0x30) = 0;
  *(undefined8 *)(lVar9 + 0x28) = 0;
  *(undefined8 *)(lVar9 + 0x40) = 0;
  *(undefined8 *)(lVar9 + 0x38) = 0;
  *(undefined8 *)(lVar9 + 0x50) = 0;
  *(undefined8 *)(lVar9 + 0x48) = 0;
  *(undefined8 *)(lVar9 + 0x58) = 0;
  FUN_100492ebc(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar8);
  return;
}

