// rea decompile_all
// name: FUN_100338320
// address: 0x100338320
// body: available
// range: 0x100338320-0x1003383cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100338320(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if (lVar1 == 0) {
    __ss11_StringGutsV4growyySiF(0x20);
    _swift_bridgeObjectRelease(0xe000000000000000);
    __sSS6appendyySSF(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
    uVar2 = 0xd00000000000001e;
    lVar3 = -0x7ffffffeff754fb0;
    uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
    *(undefined8 *)(unaff_x20 + 0x10) = 0xd00000000000001e;
    *(undefined8 *)(unaff_x20 + 0x18) = 0x80000001008ab050;
    _swift_bridgeObjectRetain(0x80000001008ab050);
    _swift_bridgeObjectRelease(uVar4);
    lVar1 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
    lVar3 = lVar1;
  }
  _swift_bridgeObjectRetain(lVar1);
  auVar5._8_8_ = lVar3;
  auVar5._0_8_ = uVar2;
  return auVar5;
}

