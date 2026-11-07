// rea decompile_all
// name: FUN_1005854b8
// address: 0x1005854b8
// body: available
// range: 0x1005854b8-0x100585547 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005854b8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar5 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar6 = *(long *)(unaff_x20 + 0x10);
  if ((uVar5 & 1) == 0) {
    FUN_1005a8534(0);
    _swift_allocObject();
    FUN_1005a0a24();
    *(long *)(unaff_x20 + 0x10) = lVar6;
  }
  _swift_beginAccess(lVar6 + 0x18,auStack_48,1,0);
  uVar1 = *(undefined8 *)(lVar6 + 0x18);
  uVar3 = *(undefined8 *)(lVar6 + 0x20);
  uVar2 = *(undefined8 *)(lVar6 + 0x28);
  uVar4 = *(undefined8 *)(lVar6 + 0x30);
  *(undefined8 *)(lVar6 + 0x20) = 0;
  *(undefined8 *)(lVar6 + 0x18) = 0;
  *(undefined8 *)(lVar6 + 0x30) = 0;
  *(undefined8 *)(lVar6 + 0x28) = 0;
  FUN_100541944(uVar1,uVar3,uVar2,uVar4);
  return;
}

