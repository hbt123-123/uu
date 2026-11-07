// rea decompile_all
// name: FUN_100435708
// address: 0x100435708
// body: available
// range: 0x100435708-0x1004357af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100435708(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  undefined1 auVar8 [16];
  
  puVar4 = (undefined4 *)0x68;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar4 = _malloc(0x68);
  }
  else {
    _swift_coroFrameAlloc(0x68,0xd110);
  }
  *param_1 = puVar4;
  *(long *)(puVar4 + 0x18) = unaff_x20;
  lVar7 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar7 + 0xd0,puVar4 + 6,0,0);
  uVar6 = *(ulong *)(lVar7 + 0xe0) >> 0x3c;
  uVar3 = 0;
  if (uVar6 < 0xf) {
    uVar3 = (undefined4)*(undefined8 *)(lVar7 + 0xd0);
  }
  uVar5 = 0;
  if (uVar6 < 0xf) {
    uVar5 = (undefined4)((ulong)*(undefined8 *)(lVar7 + 0xd0) >> 0x20);
  }
  uVar1 = 0;
  if (uVar6 < 0xf) {
    uVar1 = *(undefined8 *)(lVar7 + 0xd8);
  }
  uVar2 = 0xc000000000000000;
  if (uVar6 < 0xf) {
    uVar2 = *(ulong *)(lVar7 + 0xe0);
  }
  *puVar4 = uVar3;
  puVar4[1] = uVar5;
  *(undefined8 *)(puVar4 + 2) = uVar1;
  *(ulong *)(puVar4 + 4) = uVar2;
  FUN_100040b80();
  auVar8._8_8_ = puVar4;
  auVar8._0_8_ = FUN_1004357b0;
  return auVar8;
}

