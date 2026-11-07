// rea decompile_all
// name: FUN_100484ab4
// address: 0x100484ab4
// body: available
// range: 0x100484ab4-0x100484b7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100484ab4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined8 *puVar10;
  long unaff_x20;
  long lVar11;
  undefined1 auVar12 [16];
  
  puVar10 = (undefined8 *)0x88;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar10 = _malloc(0x88);
  }
  else {
    _swift_coroFrameAlloc(0x88,0x7755);
  }
  *param_1 = puVar10;
  puVar10[0x10] = unaff_x20;
  lVar11 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar11 + 0x28,puVar10 + 7,0,0);
  lVar7 = *(long *)(lVar11 + 0x30);
  bVar9 = lVar7 != 0;
  uVar1 = 0;
  if (bVar9) {
    uVar1 = *(undefined8 *)(lVar11 + 0x28);
  }
  lVar2 = -0x2000000000000000;
  if (bVar9) {
    lVar2 = lVar7;
  }
  uVar3 = 0;
  if (bVar9) {
    uVar3 = *(undefined8 *)(lVar11 + 0x38);
  }
  puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
  uVar8 = 0xe000000000000000;
  if (bVar9) {
    puVar4 = *(undefined **)(lVar11 + 0x48);
    uVar8 = *(undefined8 *)(lVar11 + 0x40);
  }
  uVar5 = 0;
  if (lVar7 != 0) {
    uVar5 = *(undefined8 *)(lVar11 + 0x50);
  }
  uVar6 = 0xc000000000000000;
  if (lVar7 != 0) {
    uVar6 = *(undefined8 *)(lVar11 + 0x58);
  }
  *puVar10 = uVar1;
  puVar10[1] = lVar2;
  puVar10[2] = uVar3;
  puVar10[3] = uVar8;
  puVar10[4] = puVar4;
  puVar10[5] = uVar5;
  puVar10[6] = uVar6;
  FUN_100492e64();
  auVar12._8_8_ = puVar10;
  auVar12._0_8_ = FUN_100484b80;
  return auVar12;
}

