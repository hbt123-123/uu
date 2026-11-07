// rea decompile_all
// name: FUN_1003125c4
// address: 0x1003125c4
// body: available
// range: 0x1003125c4-0x10031263f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1003125c4(long *param_1,undefined8 param_2)

{
  long lVar1;
  void *pvVar2;
  undefined1 auVar3 [16];
  
  lVar1 = 0;
  FUN_100312788();
  *param_1 = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  param_1[1] = lVar1;
  pvVar2 = *(void **)(lVar1 + 0x40);
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    pvVar2 = _malloc((size_t)pvVar2);
  }
  else {
    _swift_coroFrameAlloc(pvVar2,0x37f9);
  }
  param_1[2] = (long)pvVar2;
  FUN_1003124cc(pvVar2,param_2);
  auVar3._8_8_ = pvVar2;
  auVar3._0_8_ = FUN_100312640;
  return auVar3;
}

