// rea decompile_all
// name: FUN_100435920
// address: 0x100435920
// body: available
// range: 0x100435920-0x1004359af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100435920(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar3 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar3 & 1) == 0) {
    FUN_1004341f8(0);
    _swift_allocObject();
    FUN_10043886c();
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  _swift_beginAccess(lVar5 + 0xd0,auStack_48,1,0);
  uVar1 = *(undefined8 *)(lVar5 + 0xd0);
  uVar2 = *(undefined8 *)(lVar5 + 0xd8);
  uVar4 = *(undefined8 *)(lVar5 + 0xe0);
  *(undefined8 *)(lVar5 + 0xd0) = 0;
  *(undefined8 *)(lVar5 + 0xd8) = 0;
  *(undefined8 *)(lVar5 + 0xe0) = 0xf000000000000000;
  switchD_10004048c::caseD_6d(uVar1,uVar2,uVar4);
  return;
}

