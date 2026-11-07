// rea decompile_all
// name: FUN_100312acc
// address: 0x100312acc
// body: available
// range: 0x100312acc-0x100312ba3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100312acc(undefined8 *param_1)

{
  undefined *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  long lVar4;
  void *pvVar5;
  long *unaff_x20;
  void *pvVar6;
  undefined1 auVar7 [16];
  
  puVar1 = PTR__swift_coroFrameAlloc_100995ec0;
  pvVar2 = (void *)0x78;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    pvVar2 = _malloc(0x78);
  }
  else {
    _swift_coroFrameAlloc(0x78,0xc577);
  }
  *param_1 = pvVar2;
  *(long **)((long)pvVar2 + 0x28) = unaff_x20;
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(*unaff_x20 + 0x58),*(undefined8 *)(*unaff_x20 + 0x50),0x1008f97a8,
             &TargetProtocolRequirement_1008f97b8);
  lVar4 = 0;
  __sSqMa(0,uVar3);
  *(long *)((long)pvVar2 + 0x58) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)((long)pvVar2 + 0x60) = lVar4;
  pvVar6 = *(void **)(lVar4 + 0x40);
  if (puVar1 == (undefined *)0x0) {
    pvVar5 = _malloc((size_t)pvVar6);
    *(void **)((long)pvVar2 + 0x68) = pvVar5;
    pvVar6 = _malloc((size_t)pvVar6);
  }
  else {
    pvVar5 = pvVar6;
    _swift_coroFrameAlloc(pvVar6,0xc577);
    *(void **)((long)pvVar2 + 0x68) = pvVar5;
    _swift_coroFrameAlloc(pvVar6,0xc577);
  }
  *(void **)((long)pvVar2 + 0x70) = pvVar6;
  FUN_1003129a0(pvVar6);
  auVar7._8_8_ = pvVar6;
  auVar7._0_8_ = FUN_100312ba4;
  return auVar7;
}

