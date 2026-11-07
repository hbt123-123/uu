// rea decompile_all
// name: FUN_1004a39c8
// address: 0x1004a39c8
// body: available
// range: 0x1004a39c8-0x1004a3b83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1004a39c8(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
  puVar2 = (undefined8 *)0x3b0;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar2 = _malloc(0x3b0);
  }
  else {
    _swift_coroFrameAlloc(0x3b0,0xd0d9);
  }
  *param_1 = puVar2;
  puVar2[0x75] = unaff_x20;
  uVar6 = *unaff_x20;
  puVar2[0x12] = unaff_x20[1];
  puVar2[0x11] = uVar6;
  uVar7 = unaff_x20[7];
  uVar6 = unaff_x20[6];
  uVar8 = unaff_x20[9];
  uVar4 = unaff_x20[8];
  uVar11 = unaff_x20[2];
  uVar10 = unaff_x20[5];
  uVar9 = unaff_x20[4];
  puVar2[0x14] = unaff_x20[3];
  puVar2[0x13] = uVar11;
  puVar2[0x1a] = uVar8;
  puVar2[0x19] = uVar4;
  puVar2[0x18] = uVar7;
  puVar2[0x17] = uVar6;
  puVar2[0x16] = uVar10;
  puVar2[0x15] = uVar9;
  uVar8 = unaff_x20[0xd];
  uVar4 = unaff_x20[0xc];
  uVar7 = unaff_x20[0xf];
  uVar6 = unaff_x20[0xe];
  uVar5 = *(undefined1 *)(unaff_x20 + 0x10);
  uVar9 = unaff_x20[10];
  puVar2[0x1c] = unaff_x20[0xb];
  puVar2[0x1b] = uVar9;
  *(undefined1 *)(puVar2 + 0x21) = uVar5;
  puVar2[0x20] = uVar7;
  puVar2[0x1f] = uVar6;
  puVar2[0x1e] = uVar8;
  puVar2[0x1d] = uVar4;
  uVar7 = unaff_x20[0xb];
  uVar6 = unaff_x20[10];
  uVar8 = unaff_x20[0xd];
  uVar4 = unaff_x20[0xc];
  uVar10 = unaff_x20[0xf];
  uVar9 = unaff_x20[0xe];
  *(undefined1 *)(puVar2 + 0x10) = *(undefined1 *)(unaff_x20 + 0x10);
  puVar2[0xd] = uVar8;
  puVar2[0xc] = uVar4;
  puVar2[0xf] = uVar10;
  puVar2[0xe] = uVar9;
  puVar2[0xb] = uVar7;
  puVar2[10] = uVar6;
  uVar7 = unaff_x20[3];
  uVar6 = unaff_x20[2];
  uVar8 = unaff_x20[5];
  uVar4 = unaff_x20[4];
  uVar9 = unaff_x20[6];
  uVar11 = unaff_x20[9];
  uVar10 = unaff_x20[8];
  puVar2[7] = unaff_x20[7];
  puVar2[6] = uVar9;
  puVar2[9] = uVar11;
  puVar2[8] = uVar10;
  puVar2[3] = uVar7;
  puVar2[2] = uVar6;
  puVar2[5] = uVar8;
  puVar2[4] = uVar4;
  uVar6 = *unaff_x20;
  puVar2[1] = unaff_x20[1];
  *puVar2 = uVar6;
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
    if (iVar1 == 7) {
      puVar3 = puVar2 + 0x22;
      FUN_100124204();
      uVar4 = puVar3[7];
      uVar11 = puVar3[6];
      uVar10 = puVar3[5];
      uVar9 = puVar3[4];
      uVar8 = puVar3[3];
      uVar5 = *(undefined1 *)(puVar3 + 2);
      uVar6 = *puVar3;
      uVar7 = puVar3[1];
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
      goto LAB_1004a3b4c;
    }
  }
  uVar6 = 0;
  uVar5 = 0;
  uVar9 = 0xc000000000000000;
  uVar8 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar4 = 0xf000000000000000;
  uVar7 = 0xe000000000000000;
LAB_1004a3b4c:
  puVar2[0x55] = uVar6;
  puVar2[0x56] = uVar7;
  *(undefined1 *)(puVar2 + 0x57) = uVar5;
  puVar2[0x59] = uVar9;
  puVar2[0x58] = uVar8;
  puVar2[0x5b] = uVar11;
  puVar2[0x5a] = uVar10;
  puVar2[0x5c] = uVar4;
  auVar12._8_8_ = puVar2 + 0x55;
  auVar12._0_8_ = FUN_1004a3b84;
  return auVar12;
}

