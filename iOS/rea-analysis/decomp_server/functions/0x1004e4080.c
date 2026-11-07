// rea decompile_all
// name: FUN_1004e4080
// address: 0x1004e4080
// body: available
// range: 0x1004e4080-0x1004e4103 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1004e4080(undefined8 *param_1)

{
  undefined1 uVar1;
  void *pvVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  pvVar2 = (void *)0x60;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    pvVar2 = _malloc(0x60);
  }
  else {
    _swift_coroFrameAlloc(0x60,0x28c3);
  }
  *param_1 = pvVar2;
  *(long *)((long)pvVar2 + 0x58) = unaff_x20;
  lVar3 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar3 + 0x60,pvVar2,0,0);
  uVar1 = *(undefined1 *)(lVar3 + 0x68);
  *(undefined8 *)((long)pvVar2 + 0x48) = *(undefined8 *)(lVar3 + 0x60);
  *(undefined1 *)((long)pvVar2 + 0x50) = uVar1;
  auVar4._8_8_ = (undefined8 *)((long)pvVar2 + 0x48);
  auVar4._0_8_ = FUN_1004e4104;
  return auVar4;
}

