// rea decompile_all
// name: FUN_1005c04a4
// address: 0x1005c04a4
// body: available
// range: 0x1005c04a4-0x1005c052f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1005c04a4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  long unaff_x20;
  undefined1 auVar7 [16];
  
  puVar6 = (undefined8 *)0x28;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar6 = _malloc(0x28);
  }
  else {
    _swift_coroFrameAlloc(0x28,0xa555);
  }
  *param_1 = puVar6;
  puVar6[4] = unaff_x20;
  bVar5 = *(long *)(unaff_x20 + 0x58) != 0;
  uVar1 = 0;
  if (bVar5) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  }
  lVar2 = -0x2000000000000000;
  if (bVar5) {
    lVar2 = *(long *)(unaff_x20 + 0x58);
  }
  uVar3 = 0;
  if (bVar5) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x60);
  }
  uVar4 = 0xc000000000000000;
  if (bVar5) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x68);
  }
  *puVar6 = uVar1;
  puVar6[1] = lVar2;
  puVar6[2] = uVar3;
  puVar6[3] = uVar4;
  FUN_10045eb50();
  auVar7._8_8_ = puVar6;
  auVar7._0_8_ = FUN_1005c0530;
  return auVar7;
}

