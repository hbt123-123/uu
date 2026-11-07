// rea decompile_all
// name: FUN_100498cf4
// address: 0x100498cf4
// body: available
// range: 0x100498cf4-0x100498e23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100498cf4(undefined8 *param_1)

{
  undefined4 uVar1;
  byte bVar2;
  undefined3 uVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte *unaff_x20;
  byte bVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  
  pbVar4 = (byte *)0xc0;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    pbVar4 = _malloc(0xc0);
  }
  else {
    _swift_coroFrameAlloc(0xc0,0x24e5);
  }
  *param_1 = pbVar4;
  *(byte **)(pbVar4 + 0xb8) = unaff_x20;
  bVar8 = *unaff_x20;
  bVar2 = unaff_x20[7];
  uVar3 = *(undefined3 *)(unaff_x20 + 5);
  uVar1 = *(undefined4 *)(unaff_x20 + 1);
  uVar9 = *(undefined8 *)(unaff_x20 + 8);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar10 = *(ulong *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar12 = *(ulong *)(unaff_x20 + 0x38);
  uVar7 = *(ulong *)(unaff_x20 + 0x48);
  if ((((uVar10 < 0xffffffff00000000) || (uVar12 >> 0x20 != 0)) ||
      ((uVar7 & 0x3000000000000000) != 0)) &&
     (((uint)(uVar7 >> 0x3b) & 6 | (uint)(uVar12 >> 0x3f)) == 5)) {
    *pbVar4 = bVar8;
    *(undefined4 *)(pbVar4 + 1) = uVar1;
    pbVar4[7] = bVar2;
    *(short *)(pbVar4 + 5) = (short)uVar3;
    *(undefined8 *)(pbVar4 + 8) = uVar9;
    *(undefined8 *)(pbVar4 + 0x18) = uVar14;
    *(undefined8 *)(pbVar4 + 0x10) = uVar6;
    *(undefined8 *)(pbVar4 + 0x28) = uVar11;
    *(ulong *)(pbVar4 + 0x20) = uVar10;
    *(undefined8 *)(pbVar4 + 0x30) = uVar5;
    *(undefined8 *)(pbVar4 + 0x40) = uVar13;
    *(ulong *)(pbVar4 + 0x38) = uVar12;
    *(ulong *)(pbVar4 + 0x48) = uVar7;
    FUN_10049d5cc();
  }
  else {
    bVar8 = 0;
    uVar9 = 0;
    uVar6 = 0xc000000000000000;
  }
  pbVar4[0xa0] = bVar8 & 1;
  *(undefined8 *)(pbVar4 + 0xa8) = uVar9;
  *(undefined8 *)(pbVar4 + 0xb0) = uVar6;
  auVar15._8_8_ = pbVar4 + 0xa0;
  auVar15._0_8_ = FUN_100498e24;
  return auVar15;
}

