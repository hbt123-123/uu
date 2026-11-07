// rea decompile_all
// name: FUN_10057d5a4
// address: 0x10057d5a4
// body: available
// range: 0x10057d5a4-0x10057d623 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10057d5a4(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  pvVar1 = (void *)0x58;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    pvVar1 = _malloc(0x58);
  }
  else {
    _swift_coroFrameAlloc(0x58,0x4c03);
  }
  *param_1 = pvVar1;
  *(long *)((long)pvVar1 + 0x48) = unaff_x20;
  lVar2 = *(long *)(unaff_x20 + 0x18);
  _swift_beginAccess(lVar2 + 0x48,pvVar1,0,0);
  *(byte *)((long)pvVar1 + 0x50) = *(byte *)(lVar2 + 0x48) & 1;
  auVar3._8_8_ = (byte *)((long)pvVar1 + 0x50);
  auVar3._0_8_ = FUN_10057d624;
  return auVar3;
}

