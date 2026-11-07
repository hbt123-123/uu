// rea decompile_all
// name: FUN_100582b18
// address: 0x100582b18
// body: available
// range: 0x100582b18-0x100582bb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100582b18(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar6 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar8 = *(long *)(unaff_x20 + 0x18);
  if ((uVar6 & 1) == 0) {
    FUN_1005a84e4(0);
    _swift_allocObject();
    FUN_100595f48();
    *(long *)(unaff_x20 + 0x18) = lVar8;
  }
  _swift_beginAccess(lVar8 + 0x50,auStack_48,1,0);
  uVar1 = *(undefined8 *)(lVar8 + 0x50);
  uVar3 = *(undefined8 *)(lVar8 + 0x58);
  uVar2 = *(undefined8 *)(lVar8 + 0x60);
  uVar4 = *(undefined8 *)(lVar8 + 0x68);
  uVar7 = *(undefined8 *)(lVar8 + 0x70);
  *(undefined8 *)(lVar8 + 0x58) = 0;
  *(undefined8 *)(lVar8 + 0x50) = 0;
  *(undefined8 *)(lVar8 + 0x68) = 0;
  *(undefined8 *)(lVar8 + 0x60) = 0;
  *(undefined8 *)(lVar8 + 0x70) = 1;
  uVar5 = *(undefined1 *)(lVar8 + 0x78);
  *(undefined1 *)(lVar8 + 0x78) = 0;
  FUN_1005419bc(uVar1,uVar3,uVar2,uVar4,uVar7,uVar5);
  return;
}

