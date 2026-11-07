// rea decompile_all
// name: FUN_1003d74a0
// address: 0x1003d74a0
// body: available
// range: 0x1003d74a0-0x1003d757f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1003d74a0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  long *unaff_x20;
  void *pvVar6;
  undefined1 auVar7 [16];
  
  puVar1 = PTR__swift_coroFrameAlloc_100995ec0;
  puVar2 = (undefined8 *)0x28;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar2 = _malloc(0x28);
  }
  else {
    _swift_coroFrameAlloc(0x28,0x7ee3);
  }
  *param_1 = puVar2;
  *puVar2 = unaff_x20;
  uVar5 = *(undefined8 *)(*unaff_x20 + 0xe0);
  lVar3 = 0;
  __sSqMa(0,uVar5);
  puVar2[1] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  puVar2[2] = lVar3;
  pvVar6 = *(void **)(lVar3 + 0x40);
  if (puVar1 == (undefined *)0x0) {
    pvVar4 = _malloc((size_t)pvVar6);
    puVar2[3] = pvVar4;
    pvVar6 = _malloc((size_t)pvVar6);
  }
  else {
    pvVar4 = pvVar6;
    _swift_coroFrameAlloc(pvVar6,0x7ee3);
    puVar2[3] = pvVar4;
    uVar5 = 0x7ee3;
    _swift_coroFrameAlloc(pvVar6,0x7ee3);
  }
  puVar2[4] = pvVar6;
  pvVar4 = pvVar6;
  FUN_1003d8888();
  (**(code **)(*unaff_x20 + 0x128))(pvVar6);
  FUN_100006cc8(pvVar4,uVar5);
  auVar7._8_8_ = pvVar6;
  auVar7._0_8_ = FUN_1003d7580;
  return auVar7;
}

