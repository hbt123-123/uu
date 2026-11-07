// rea decompile_all
// name: FUN_1003be440
// address: 0x1003be440
// body: available
// range: 0x1003be440-0x1003be55f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1003be440(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  long *unaff_x20;
  void *pvVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  puVar1 = PTR__swift_coroFrameAlloc_100995ec0;
  puVar2 = (undefined8 *)0x40;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar2 = _malloc(0x40);
  }
  else {
    _swift_coroFrameAlloc(0x40,0xfab9);
  }
  *param_1 = puVar2;
  *puVar2 = unaff_x20;
  lVar6 = *unaff_x20;
  lVar3 = 0;
  __sSqMa(0,*(undefined8 *)(lVar6 + 0x58));
  puVar2[1] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  puVar2[2] = lVar3;
  pvVar5 = *(void **)(lVar3 + 0x40);
  if (puVar1 == (undefined *)0x0) {
    pvVar4 = _malloc((size_t)pvVar5);
    puVar2[3] = pvVar4;
    pvVar5 = _malloc((size_t)pvVar5);
    puVar2[4] = pvVar5;
    lVar3 = *(long *)(lVar6 + 0x50);
    puVar2[5] = lVar3;
    lVar3 = *(long *)(lVar3 + -8);
    puVar2[6] = lVar3;
    pvVar4 = _malloc(*(size_t *)(lVar3 + 0x40));
  }
  else {
    pvVar4 = pvVar5;
    _swift_coroFrameAlloc(pvVar5,0xfab9);
    puVar2[3] = pvVar4;
    _swift_coroFrameAlloc(pvVar5,0xfab9);
    puVar2[4] = pvVar5;
    lVar3 = *(long *)(lVar6 + 0x50);
    puVar2[5] = lVar3;
    lVar3 = *(long *)(lVar3 + -8);
    puVar2[6] = lVar3;
    pvVar4 = *(void **)(lVar3 + 0x40);
    _swift_coroFrameAlloc(pvVar4,0xfab9);
  }
  puVar2[7] = pvVar4;
  (**(code **)(lVar3 + 0x10))();
  FUN_1003be1c4(pvVar5,param_2);
  auVar7._8_8_ = pvVar5;
  auVar7._0_8_ = FUN_1003be560;
  return auVar7;
}

