// rea decompile_all
// name: FUN_1004a5f28
// address: 0x1004a5f28
// body: available
// range: 0x1004a5f28-0x1004a6077 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1004a5f28(undefined8 *param_1)

{
  undefined4 uVar1;
  byte *pbVar2;
  undefined8 uVar3;
  byte *unaff_x20;
  byte bVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  
  pbVar2 = (byte *)0x1b8;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    pbVar2 = _malloc(0x1b8);
  }
  else {
    _swift_coroFrameAlloc(0x1b8,0x6c68);
  }
  *param_1 = pbVar2;
  *(byte **)(pbVar2 + 0x1a8) = unaff_x20;
  if (unaff_x20[0x60] == 2) {
    uVar8 = *(undefined8 *)(unaff_x20 + 0x38);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x40);
    uVar11 = *(undefined8 *)(unaff_x20 + 0x28);
    uVar10 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar5 = *(undefined8 *)(unaff_x20 + 8);
    bVar6 = *unaff_x20;
    bVar4 = unaff_x20[0x10];
    *pbVar2 = bVar6;
    uVar1 = *(undefined4 *)(unaff_x20 + 1);
    *(undefined4 *)(pbVar2 + 4) = *(undefined4 *)(unaff_x20 + 4);
    *(undefined4 *)(pbVar2 + 1) = uVar1;
    *(undefined8 *)(pbVar2 + 8) = uVar5;
    pbVar2[0x10] = bVar4;
    uVar1 = *(undefined4 *)(unaff_x20 + 0x11);
    *(undefined4 *)(pbVar2 + 0x14) = *(undefined4 *)(unaff_x20 + 0x14);
    *(undefined4 *)(pbVar2 + 0x11) = uVar1;
    *(undefined8 *)(pbVar2 + 0x18) = uVar9;
    *(undefined8 *)(pbVar2 + 0x20) = uVar3;
    *(undefined8 *)(pbVar2 + 0x28) = uVar11;
    *(undefined8 *)(pbVar2 + 0x30) = uVar10;
    *(undefined8 *)(pbVar2 + 0x38) = uVar8;
    *(undefined8 *)(pbVar2 + 0x40) = uVar7;
    uVar13 = *(undefined8 *)(unaff_x20 + 0x50);
    uVar12 = *(undefined8 *)(unaff_x20 + 0x48);
    *(undefined8 *)(pbVar2 + 0x58) = *(undefined8 *)(unaff_x20 + 0x58);
    *(undefined8 *)(pbVar2 + 0x50) = uVar13;
    *(undefined8 *)(pbVar2 + 0x48) = uVar12;
    pbVar2[0x60] = 2;
    FUN_1004b8d5c(pbVar2,pbVar2 + 0x68);
  }
  else {
    bVar6 = 0;
    uVar5 = 0;
    uVar9 = 0;
    uVar3 = 0;
    uVar10 = 0;
    uVar8 = 0;
    uVar7 = 0xf000000000000000;
    uVar11 = 0xc000000000000000;
    bVar4 = 1;
  }
  pbVar2[0x1b0] = bVar4 & 1;
  pbVar2[0xd0] = bVar6 & 1;
  *(undefined8 *)(pbVar2 + 0xd8) = uVar5;
  pbVar2[0xe0] = bVar4 & 1;
  *(undefined8 *)(pbVar2 + 0xe8) = uVar9;
  *(undefined8 *)(pbVar2 + 0xf0) = uVar3;
  *(undefined8 *)(pbVar2 + 0xf8) = uVar11;
  *(undefined8 *)(pbVar2 + 0x100) = uVar10;
  *(undefined8 *)(pbVar2 + 0x108) = uVar8;
  *(undefined8 *)(pbVar2 + 0x110) = uVar7;
  auVar14._8_8_ = pbVar2 + 0xd0;
  auVar14._0_8_ = FUN_1004a6078;
  return auVar14;
}

