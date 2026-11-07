// rea decompile_all
// name: FUN_1003ef420
// address: 0x1003ef420
// body: available
// range: 0x1003ef420-0x1003ef4d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1003ef420(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  long *unaff_x20;
  void *pvVar5;
  undefined1 auVar6 [16];
  
  puVar1 = PTR__swift_coroFrameAlloc_100995ec0;
  puVar2 = (undefined8 *)0x28;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar2 = _malloc(0x28);
  }
  else {
    _swift_coroFrameAlloc(0x28,0x4876);
  }
  *param_1 = puVar2;
  *puVar2 = unaff_x20;
  lVar4 = *(long *)(*unaff_x20 + 0x50);
  puVar2[1] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  puVar2[2] = lVar4;
  pvVar5 = *(void **)(lVar4 + 0x40);
  if (puVar1 == (undefined *)0x0) {
    pvVar3 = _malloc((size_t)pvVar5);
    puVar2[3] = pvVar3;
    pvVar5 = _malloc((size_t)pvVar5);
  }
  else {
    pvVar3 = pvVar5;
    _swift_coroFrameAlloc(pvVar5,0x4876);
    puVar2[3] = pvVar3;
    _swift_coroFrameAlloc(pvVar5,0x4876);
  }
  puVar2[4] = pvVar5;
  FUN_1003ef1fc(pvVar5);
  auVar6._8_8_ = pvVar5;
  auVar6._0_8_ = FUN_1003ef4d8;
  return auVar6;
}

