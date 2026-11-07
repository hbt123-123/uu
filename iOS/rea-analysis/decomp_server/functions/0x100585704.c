// rea decompile_all
// name: FUN_100585704
// address: 0x100585704
// body: available
// range: 0x100585704-0x100585817 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100585704(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  long unaff_x20;
  long lVar13;
  undefined1 auVar14 [16];
  
  puVar7 = (undefined8 *)0x98;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar7 = _malloc(0x98);
  }
  else {
    _swift_coroFrameAlloc(0x98,0x40ea);
  }
  *param_1 = puVar7;
  puVar7[0x12] = unaff_x20;
  lVar13 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar13 + 0x38,puVar7 + 0xc,0,0);
  puVar3 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  puVar4 = *(undefined **)(lVar13 + 0x48);
  uVar5 = *(undefined8 *)(lVar13 + 0x50);
  bVar6 = puVar4 != (undefined *)0x0;
  uVar1 = 0;
  if (bVar6) {
    uVar1 = *(undefined8 *)(lVar13 + 0x38);
  }
  uVar2 = 0xc000000000000000;
  if (bVar6) {
    uVar2 = *(undefined8 *)(lVar13 + 0x40);
  }
  *puVar7 = uVar1;
  puVar7[1] = uVar2;
  if (bVar6) {
    puVar3 = puVar4;
  }
  puVar7[2] = puVar3;
  uVar9 = 4;
  if (bVar6) {
    uVar9 = (undefined1)uVar5;
  }
  uVar8 = 3;
  uVar10 = uVar8;
  if (bVar6) {
    uVar10 = (undefined1)((ulong)uVar5 >> 8);
  }
  *(undefined1 *)(puVar7 + 3) = uVar9;
  *(undefined1 *)((long)puVar7 + 0x19) = uVar10;
  if (puVar4 != (undefined *)0x0) {
    uVar8 = (undefined1)((ulong)uVar5 >> 0x10);
  }
  uVar9 = 3;
  uVar10 = uVar9;
  uVar12 = uVar9;
  uVar11 = uVar9;
  if (puVar4 != (undefined *)0x0) {
    uVar11 = (undefined1)((ulong)uVar5 >> 0x18);
    uVar12 = (undefined1)((ulong)uVar5 >> 0x20);
    uVar10 = (undefined1)((ulong)uVar5 >> 0x28);
    uVar9 = (undefined1)((ulong)uVar5 >> 0x30);
  }
  *(undefined1 *)((long)puVar7 + 0x1a) = uVar8;
  *(undefined1 *)((long)puVar7 + 0x1b) = uVar11;
  *(undefined1 *)((long)puVar7 + 0x1c) = uVar12;
  uVar8 = 5;
  if (puVar4 != (undefined *)0x0) {
    uVar8 = (undefined1)((ulong)uVar5 >> 0x38);
  }
  *(undefined1 *)((long)puVar7 + 0x1d) = uVar10;
  *(undefined1 *)((long)puVar7 + 0x1e) = uVar9;
  *(undefined1 *)((long)puVar7 + 0x1f) = uVar8;
  FUN_1005a7f54();
  auVar14._8_8_ = puVar7;
  auVar14._0_8_ = FUN_100585818;
  return auVar14;
}

