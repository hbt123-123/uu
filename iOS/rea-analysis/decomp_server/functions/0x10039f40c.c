// rea decompile_all
// name: FUN_10039f40c
// address: 0x10039f40c
// body: available
// range: 0x10039f40c-0x10039f4e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10039f40c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  code *pcVar4;
  long unaff_x20;
  long lVar5;
  void *pvVar6;
  undefined1 auVar7 [16];
  
  puVar1 = PTR__swift_coroFrameAlloc_100995ec0;
  plVar2 = (long *)0x38;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    plVar2 = _malloc(0x38);
  }
  else {
    _swift_coroFrameAlloc(0x38,0x7447);
  }
  *param_1 = plVar2;
  *plVar2 = param_2;
  plVar2[1] = unaff_x20;
  lVar5 = *(long *)(param_2 + 0x10);
  plVar2[2] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar2[3] = lVar5;
  pvVar6 = *(void **)(lVar5 + 0x40);
  if (puVar1 == (undefined *)0x0) {
    pvVar3 = _malloc((size_t)pvVar6);
    plVar2[4] = (long)pvVar3;
    pvVar6 = _malloc((size_t)pvVar6);
  }
  else {
    pvVar3 = pvVar6;
    _swift_coroFrameAlloc(pvVar6,0x7447);
    plVar2[4] = (long)pvVar3;
    _swift_coroFrameAlloc(pvVar6,0x7447);
  }
  plVar2[5] = (long)pvVar6;
  pcVar4 = *(code **)(lVar5 + 0x10);
  plVar2[6] = (long)pcVar4;
  (*pcVar4)();
  auVar7._8_8_ = pvVar6;
  auVar7._0_8_ = FUN_10039f4e4;
  return auVar7;
}

