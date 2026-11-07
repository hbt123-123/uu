// rea decompile_all
// name: FUN_100450ef8
// address: 0x100450ef8
// body: available
// range: 0x100450ef8-0x100450fab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100450ef8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  byte bVar5;
  byte *pbVar6;
  undefined4 uVar7;
  byte bVar8;
  long unaff_x20;
  undefined1 auVar9 [16];
  
  pbVar6 = (byte *)0x30;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    pbVar6 = _malloc(0x30);
  }
  else {
    _swift_coroFrameAlloc(0x30,0x6f9f);
  }
  *param_1 = pbVar6;
  *(long *)(pbVar6 + 0x28) = unaff_x20;
  bVar4 = (*(ulong *)(unaff_x20 + 0x28) & 0xff) != 2;
  bVar5 = 0;
  if (bVar4) {
    bVar5 = (byte)*(ulong *)(unaff_x20 + 0x28);
  }
  uVar1 = 0;
  if (bVar4) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  }
  bVar8 = 1;
  if (bVar4) {
    bVar8 = (byte)*(undefined8 *)(unaff_x20 + 0x38);
  }
  uVar7 = 0;
  if (bVar4) {
    uVar7 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x38) >> 0x20);
  }
  uVar2 = 0;
  if (bVar4) {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  }
  uVar3 = 0xc000000000000000;
  if (bVar4) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
  }
  *pbVar6 = bVar5 & 1;
  *(undefined8 *)(pbVar6 + 8) = uVar1;
  pbVar6[0x10] = bVar8 & 1;
  *(undefined4 *)(pbVar6 + 0x14) = uVar7;
  *(undefined8 *)(pbVar6 + 0x18) = uVar2;
  *(undefined8 *)(pbVar6 + 0x20) = uVar3;
  FUN_10045ebb8();
  auVar9._8_8_ = pbVar6;
  auVar9._0_8_ = FUN_100450fac;
  return auVar9;
}

