// rea decompile_all
// name: FUN_100229eac
// address: 0x100229eac
// body: available
// range: 0x100229eac-0x100229f17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100229eac(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  pvVar2 = (void *)0x28;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    pvVar2 = _malloc(0x28);
  }
  else {
    _swift_coroFrameAlloc(0x28,0x4e);
  }
  *param_1 = pvVar2;
  lVar1 = FCountAppConfig::customLogger;
  *(long *)((long)pvVar2 + 0x18) = unaff_x20;
  *(long *)((long)pvVar2 + 0x20) = lVar1;
  _swift_beginAccess(unaff_x20 + lVar1,pvVar2,0x21,0);
  auVar3._8_8_ = unaff_x20 + lVar1;
  auVar3._0_8_ = FUN_100229f18;
  return auVar3;
}

