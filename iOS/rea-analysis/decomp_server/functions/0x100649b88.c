// rea decompile_all
// name: FUN_100649b88
// address: 0x100649b88
// body: available
// range: 0x100649b88-0x100649c0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100649b88(long *param_1,undefined8 param_2,long param_3)

{
  void *pvVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  *param_1 = *(long *)(param_3 + 0x10);
  param_1[1] = lVar2;
  pvVar1 = *(void **)(lVar2 + 0x40);
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    pvVar1 = _malloc((size_t)pvVar1);
  }
  else {
    _swift_coroFrameAlloc(pvVar1,0x15f0);
  }
  param_1[2] = (long)pvVar1;
  FUN_1006493a0(pvVar1,param_2,param_3);
  auVar3._8_8_ = pvVar1;
  auVar3._0_8_ = FUN_100312640;
  return auVar3;
}

