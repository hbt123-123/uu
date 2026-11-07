// rea decompile_all
// name: FUN_100688914
// address: 0x100688914
// body: available
// range: 0x100688914-0x1006889eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100688914(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  void *pvVar4;
  undefined8 *unaff_x20;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
  puVar1 = PTR__swift_coroFrameAlloc_100995ec0;
  puVar2 = (undefined8 *)0x50;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar2 = _malloc(0x50);
  }
  else {
    _swift_coroFrameAlloc(0x50,0x3d8);
  }
  *param_1 = puVar2;
  puVar2[7] = unaff_x20;
  puVar3 = &DAT_100ab9ef0;
  FUN_100004bb4(&DAT_100ab9ef0,&DAT_10084d560);
  pvVar5 = *(void **)(*(long *)(puVar3 + -8) + 0x40);
  if (puVar1 == (undefined *)0x0) {
    pvVar4 = _malloc((size_t)pvVar5);
    puVar2[8] = pvVar4;
    pvVar5 = _malloc((size_t)pvVar5);
  }
  else {
    pvVar4 = pvVar5;
    _swift_coroFrameAlloc(pvVar5,0x3d8);
    puVar2[8] = pvVar4;
    _swift_coroFrameAlloc(pvVar5,0x3d8);
  }
  puVar2[9] = pvVar5;
  uVar7 = unaff_x20[1];
  uVar6 = *unaff_x20;
  uVar9 = unaff_x20[3];
  uVar8 = unaff_x20[2];
  uVar11 = unaff_x20[5];
  uVar10 = unaff_x20[4];
  *(undefined4 *)((long)puVar2 + 0x2f) = *(undefined4 *)((long)unaff_x20 + 0x2f);
  puVar2[3] = uVar9;
  puVar2[2] = uVar8;
  puVar2[5] = uVar11;
  puVar2[4] = uVar10;
  puVar2[1] = uVar7;
  *puVar2 = uVar6;
  FUN_10068854c(pvVar5);
  auVar12._8_8_ = pvVar5;
  auVar12._0_8_ = FUN_1006889ec;
  return auVar12;
}

