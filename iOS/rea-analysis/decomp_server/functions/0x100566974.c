// rea decompile_all
// name: FUN_100566974
// address: 0x100566974
// body: available
// range: 0x100566974-0x1005669db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100566974(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 unaff_x20;
  undefined1 auVar3 [16];
  
  pvVar1 = (void *)0x60;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    pvVar1 = _malloc(0x60);
  }
  else {
    param_2 = 0x1647;
    _swift_coroFrameAlloc();
  }
  *param_1 = pvVar1;
  *(undefined8 *)((long)pvVar1 + 0x58) = unaff_x20;
  pvVar2 = pvVar1;
  FUN_1004f6144();
  *(undefined8 *)((long)pvVar1 + 0x48) = pvVar2;
  *(undefined8 *)((long)pvVar1 + 0x50) = param_2;
  auVar3._8_8_ = (undefined8 *)((long)pvVar1 + 0x48);
  auVar3._0_8_ = FUN_1005669dc;
  return auVar3;
}

