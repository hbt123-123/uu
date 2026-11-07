// rea decompile_all
// name: FUN_10058288c
// address: 0x10058288c
// body: available
// range: 0x10058288c-0x100582953 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10058288c(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  long unaff_x20;
  long lVar10;
  undefined1 auVar11 [16];
  
  puVar7 = (undefined8 *)0x80;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar7 = _malloc(0x80);
  }
  else {
    _swift_coroFrameAlloc(0x80,0x1589);
  }
  *param_1 = puVar7;
  puVar7[0xf] = unaff_x20;
  lVar10 = *(long *)(unaff_x20 + 0x18);
  _swift_beginAccess(lVar10 + 0x50,puVar7 + 6,0,0);
  bVar6 = *(long *)(lVar10 + 0x70) != 1;
  uVar2 = 0;
  if (bVar6) {
    uVar2 = *(undefined8 *)(lVar10 + 0x50);
  }
  uVar3 = 0xc000000000000000;
  if (bVar6) {
    uVar3 = *(undefined8 *)(lVar10 + 0x58);
  }
  uVar9 = 0xc;
  uVar8 = uVar9;
  if (bVar6) {
    uVar8 = (undefined1)*(undefined8 *)(lVar10 + 0x60);
    uVar9 = (undefined1)((ulong)*(undefined8 *)(lVar10 + 0x60) >> 8);
  }
  uVar4 = 0;
  if (bVar6) {
    uVar4 = *(undefined8 *)(lVar10 + 0x68);
  }
  lVar5 = 0;
  if (bVar6) {
    lVar5 = *(long *)(lVar10 + 0x70);
  }
  uVar1 = 0xc;
  if (bVar6) {
    uVar1 = *(undefined1 *)(lVar10 + 0x78);
  }
  *puVar7 = uVar2;
  puVar7[1] = uVar3;
  *(undefined1 *)(puVar7 + 2) = uVar8;
  *(undefined1 *)((long)puVar7 + 0x11) = uVar9;
  puVar7[3] = uVar4;
  puVar7[4] = lVar5;
  *(undefined1 *)(puVar7 + 5) = uVar1;
  FUN_1005a8504();
  auVar11._8_8_ = puVar7;
  auVar11._0_8_ = FUN_100582954;
  return auVar11;
}

