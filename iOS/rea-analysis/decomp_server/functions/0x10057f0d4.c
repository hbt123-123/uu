// rea decompile_all
// name: FUN_10057f0d4
// address: 0x10057f0d4
// body: available
// range: 0x10057f0d4-0x10057f16f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10057f0d4(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auVar5 [16];
  
  pvVar1 = (void *)0x60;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    pvVar1 = _malloc(0x60);
  }
  else {
    _swift_coroFrameAlloc(0x60,0xa9e4);
  }
  *param_1 = pvVar1;
  *(long *)((long)pvVar1 + 0x58) = unaff_x20;
  lVar4 = *(long *)(unaff_x20 + 0x18);
  _swift_beginAccess(lVar4 + 0x90,pvVar1,0,0);
  lVar2 = *(long *)(lVar4 + 0x98);
  if (lVar2 == 0) {
    uVar3 = 0;
    lVar2 = -0x2000000000000000;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 0x90);
  }
  *(undefined8 *)((long)pvVar1 + 0x48) = uVar3;
  *(long *)((long)pvVar1 + 0x50) = lVar2;
  _swift_bridgeObjectRetain();
  auVar5._8_8_ = (long)pvVar1 + 0x48;
  auVar5._0_8_ = FUN_10057f170;
  return auVar5;
}

