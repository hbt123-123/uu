// rea decompile_all
// name: FUN_100122c14
// address: 0x100122c14
// body: available
// range: 0x100122c14-0x100122c8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100122c14(undefined8 *param_1)

{
  void *pvVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  pvVar1 = (void *)0x30;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    pvVar1 = _malloc(0x30);
  }
  else {
    _swift_coroFrameAlloc(0x30,0xb6ec);
  }
  *param_1 = pvVar1;
  *(long *)((long)pvVar1 + 0x28) = unaff_x20;
  _swift_beginAccess(unaff_x20 + 0x18,pvVar1,0x21,0);
  *(undefined8 *)((long)pvVar1 + 0x18) = *(undefined8 *)(unaff_x20 + 0x20);
  auVar2._8_8_ = (undefined8 *)((long)pvVar1 + 0x18);
  auVar2._0_8_ = FUN_100122c8c;
  return auVar2;
}

