// rea decompile_all
// name: FUN_1004a1554
// address: 0x1004a1554
// body: available
// range: 0x1004a1554-0x1004a178b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1004a1554(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *unaff_x20;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  
  puVar2 = (undefined8 *)0x4b8;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar2 = _malloc(0x4b8);
  }
  else {
    _swift_coroFrameAlloc(0x4b8,0x84f9);
  }
  *param_1 = puVar2;
  puVar2[0x95] = unaff_x20;
  uVar5 = *unaff_x20;
  puVar2[0x12] = unaff_x20[1];
  puVar2[0x11] = uVar5;
  uVar6 = unaff_x20[7];
  uVar5 = unaff_x20[6];
  uVar14 = unaff_x20[9];
  uVar7 = unaff_x20[8];
  uVar11 = unaff_x20[2];
  uVar13 = unaff_x20[5];
  uVar10 = unaff_x20[4];
  puVar2[0x14] = unaff_x20[3];
  puVar2[0x13] = uVar11;
  puVar2[0x1a] = uVar14;
  puVar2[0x19] = uVar7;
  puVar2[0x18] = uVar6;
  puVar2[0x17] = uVar5;
  puVar2[0x16] = uVar13;
  puVar2[0x15] = uVar10;
  uVar14 = unaff_x20[0xd];
  uVar7 = unaff_x20[0xc];
  uVar6 = unaff_x20[0xf];
  uVar5 = unaff_x20[0xe];
  uVar15 = *(undefined1 *)(unaff_x20 + 0x10);
  uVar10 = unaff_x20[10];
  puVar2[0x1c] = unaff_x20[0xb];
  puVar2[0x1b] = uVar10;
  *(undefined1 *)(puVar2 + 0x21) = uVar15;
  puVar2[0x20] = uVar6;
  puVar2[0x1f] = uVar5;
  puVar2[0x1e] = uVar14;
  puVar2[0x1d] = uVar7;
  uVar6 = unaff_x20[0xb];
  uVar5 = unaff_x20[10];
  uVar14 = unaff_x20[0xd];
  uVar7 = unaff_x20[0xc];
  uVar13 = unaff_x20[0xf];
  uVar10 = unaff_x20[0xe];
  *(undefined1 *)(puVar2 + 0x10) = *(undefined1 *)(unaff_x20 + 0x10);
  puVar2[0xd] = uVar14;
  puVar2[0xc] = uVar7;
  puVar2[0xf] = uVar13;
  puVar2[0xe] = uVar10;
  puVar2[0xb] = uVar6;
  puVar2[10] = uVar5;
  uVar6 = unaff_x20[3];
  uVar5 = unaff_x20[2];
  uVar14 = unaff_x20[5];
  uVar7 = unaff_x20[4];
  uVar10 = unaff_x20[6];
  uVar11 = unaff_x20[9];
  uVar13 = unaff_x20[8];
  puVar2[7] = unaff_x20[7];
  puVar2[6] = uVar10;
  puVar2[9] = uVar11;
  puVar2[8] = uVar13;
  puVar2[3] = uVar6;
  puVar2[2] = uVar5;
  puVar2[5] = uVar14;
  puVar2[4] = uVar7;
  uVar5 = *unaff_x20;
  puVar2[1] = unaff_x20[1];
  *puVar2 = uVar5;
  puVar3 = puVar2;
  FUN_1001241c4();
  if ((int)puVar3 != 1) {
    puVar2[0x2f] = puVar2[0xd];
    puVar2[0x2e] = puVar2[0xc];
    puVar2[0x31] = puVar2[0xf];
    puVar2[0x30] = puVar2[0xe];
    *(undefined1 *)(puVar2 + 0x32) = *(undefined1 *)(puVar2 + 0x10);
    puVar2[0x27] = puVar2[5];
    puVar2[0x26] = puVar2[4];
    puVar2[0x29] = puVar2[7];
    puVar2[0x28] = puVar2[6];
    puVar2[0x2b] = puVar2[9];
    puVar2[0x2a] = puVar2[8];
    puVar2[0x2d] = puVar2[0xb];
    puVar2[0x2c] = puVar2[10];
    puVar2[0x23] = puVar2[1];
    puVar2[0x22] = *puVar2;
    puVar2[0x25] = puVar2[3];
    puVar2[0x24] = puVar2[2];
    iVar1 = (int)puVar2 + 0x110;
    FUN_1001241ec();
    if (iVar1 == 0) {
      puVar3 = puVar2 + 0x22;
      FUN_100124204();
      uVar4 = puVar3[0xf];
      uVar19 = puVar3[0xe];
      uVar18 = puVar3[0xd];
      uVar17 = puVar3[0xc];
      uVar16 = puVar3[0xb];
      uVar5 = puVar3[9];
      uVar10 = puVar3[10];
      uVar6 = puVar3[7];
      uVar13 = puVar3[8];
      uVar7 = puVar3[5];
      uVar11 = puVar3[6];
      uVar15 = *(undefined1 *)(puVar3 + 4);
      puVar8 = (undefined *)puVar3[2];
      uVar12 = puVar3[3];
      uVar14 = *puVar3;
      uVar9 = puVar3[1];
      puVar2[0x40] = puVar2[0x1e];
      puVar2[0x3f] = puVar2[0x1d];
      puVar2[0x42] = puVar2[0x20];
      puVar2[0x41] = puVar2[0x1f];
      *(undefined1 *)(puVar2 + 0x43) = *(undefined1 *)(puVar2 + 0x21);
      puVar2[0x38] = puVar2[0x16];
      puVar2[0x37] = puVar2[0x15];
      puVar2[0x3a] = puVar2[0x18];
      puVar2[0x39] = puVar2[0x17];
      puVar2[0x34] = puVar2[0x12];
      puVar2[0x33] = puVar2[0x11];
      puVar2[0x36] = puVar2[0x14];
      puVar2[0x35] = puVar2[0x13];
      puVar2[0x3c] = puVar2[0x1a];
      puVar2[0x3b] = puVar2[0x19];
      puVar2[0x3e] = puVar2[0x1c];
      puVar2[0x3d] = puVar2[0x1b];
      FUN_1004a142c(puVar2 + 0x33,puVar2 + 0x44);
      goto LAB_1004a1690;
    }
  }
  uVar14 = 0;
  uVar12 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar17 = 0xc000000000000000;
  uVar16 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar4 = 0xf000000000000000;
  uVar13 = 0xc000000000000000;
  uVar15 = 1;
  uVar9 = 0xe000000000000000;
  uVar11 = 0xe000000000000000;
  uVar10 = 0xe000000000000000;
  puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
LAB_1004a1690:
  *(undefined1 *)(puVar2 + 0x96) = uVar15;
  puVar2[0x55] = uVar14;
  puVar2[0x56] = uVar9;
  puVar2[0x57] = puVar8;
  puVar2[0x58] = uVar12;
  *(undefined1 *)(puVar2 + 0x59) = uVar15;
  puVar2[0x5a] = uVar7;
  puVar2[0x5b] = uVar11;
  puVar2[0x5c] = uVar6;
  puVar2[0x5d] = uVar13;
  puVar2[0x5e] = uVar5;
  puVar2[0x5f] = uVar10;
  puVar2[0x61] = uVar17;
  puVar2[0x60] = uVar16;
  puVar2[99] = uVar19;
  puVar2[0x62] = uVar18;
  puVar2[100] = uVar4;
  auVar20._8_8_ = puVar2 + 0x55;
  auVar20._0_8_ = FUN_1004a178c;
  return auVar20;
}

