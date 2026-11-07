// rea decompile_all
// name: FUN_100414840
// address: 0x100414840
// body: available
// range: 0x100414840-0x1004148f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100414840(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x60);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = lVar3;
    _swift_getObjectType(lVar3);
    _swift_unknownObjectRetain(lVar3);
    __sSo18OS_dispatch_sourceP8DispatchE6cancelyyF(lVar1);
    _swift_unknownObjectRelease(lVar3);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x60);
  }
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  _swift_unknownObjectRelease(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x78);
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  _swift_bridgeObjectRelease(uVar2);
  _swift_beginAccess(unaff_x20 + 0x90,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined **)(unaff_x20 + 0x90) = PTR___swiftEmptySetSingleton_100995eb0;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined1 *)(unaff_x20 + 0xa0) = 1;
  return;
}

