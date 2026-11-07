// rea decompile_all
// name: FUN_10057e060
// address: 0x10057e060
// body: available
// range: 0x10057e060-0x10057e0eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10057e060(undefined8 *param_1)

{
  byte bVar1;
  void *pvVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  pvVar2 = (void *)0x58;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    pvVar2 = _malloc(0x58);
  }
  else {
    _swift_coroFrameAlloc(0x58,0x664);
  }
  *param_1 = pvVar2;
  *(long *)((long)pvVar2 + 0x48) = unaff_x20;
  lVar3 = *(long *)(unaff_x20 + 0x18);
  _swift_beginAccess(lVar3 + 0x4c,pvVar2,0,0);
  bVar1 = *(byte *)(lVar3 + 0x4c);
  *(byte *)((long)pvVar2 + 0x50) = bVar1 == 2 | bVar1 & 1;
  auVar4._8_8_ = (byte *)((long)pvVar2 + 0x50);
  auVar4._0_8_ = FUN_10057e0ec;
  return auVar4;
}

