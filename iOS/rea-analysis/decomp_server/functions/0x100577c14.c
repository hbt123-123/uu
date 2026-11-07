// rea decompile_all
// name: FUN_100577c14
// address: 0x100577c14
// body: available
// range: 0x100577c14-0x100577d0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100577c14(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  long unaff_x20;
  undefined1 auVar14 [16];
  
  puVar7 = (undefined8 *)0x88;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar7 = _malloc(0x88);
  }
  else {
    _swift_coroFrameAlloc(0x88,0x7f35);
  }
  *param_1 = puVar7;
  puVar7[0x10] = unaff_x20;
  puVar3 = *(undefined **)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  bVar6 = puVar3 != (undefined *)0x0;
  uVar1 = 0;
  if (bVar6) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  }
  puVar2 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  uVar5 = 0xc000000000000000;
  if (bVar6) {
    puVar2 = puVar3;
    uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  }
  uVar10 = 4;
  if (bVar6) {
    uVar10 = (undefined1)uVar4;
  }
  *puVar7 = uVar1;
  puVar7[1] = uVar5;
  uVar8 = 3;
  uVar11 = uVar8;
  if (bVar6) {
    uVar11 = (undefined1)((ulong)uVar4 >> 8);
  }
  bVar6 = puVar3 != (undefined *)0x0;
  puVar7[2] = puVar2;
  if (bVar6) {
    uVar8 = (undefined1)((ulong)uVar4 >> 0x10);
  }
  uVar9 = 3;
  uVar12 = uVar9;
  if (bVar6) {
    uVar12 = (undefined1)((ulong)uVar4 >> 0x18);
  }
  *(undefined1 *)(puVar7 + 3) = uVar10;
  uVar10 = uVar9;
  uVar13 = uVar9;
  if (bVar6) {
    uVar13 = (undefined1)((ulong)uVar4 >> 0x20);
    uVar10 = (undefined1)((ulong)uVar4 >> 0x28);
  }
  *(undefined1 *)((long)puVar7 + 0x19) = uVar11;
  if (bVar6) {
    uVar9 = (undefined1)((ulong)uVar4 >> 0x30);
  }
  *(undefined1 *)((long)puVar7 + 0x1a) = uVar8;
  uVar11 = 5;
  if (puVar3 != (undefined *)0x0) {
    uVar11 = (undefined1)((ulong)uVar4 >> 0x38);
  }
  *(undefined1 *)((long)puVar7 + 0x1b) = uVar12;
  *(undefined1 *)((long)puVar7 + 0x1c) = uVar13;
  *(undefined1 *)((long)puVar7 + 0x1d) = uVar10;
  *(undefined1 *)((long)puVar7 + 0x1e) = uVar9;
  *(undefined1 *)((long)puVar7 + 0x1f) = uVar11;
  FUN_1005a7f54();
  auVar14._8_8_ = puVar7;
  auVar14._0_8_ = thunk_FUN_100583dc8;
  return auVar14;
}

