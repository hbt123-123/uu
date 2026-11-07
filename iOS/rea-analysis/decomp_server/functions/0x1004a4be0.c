// rea decompile_all
// name: FUN_1004a4be0
// address: 0x1004a4be0
// body: available
// range: 0x1004a4be0-0x1004a4d87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1004a4be0(undefined8 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  
  puVar3 = (undefined8 *)0x2d8;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar3 = _malloc(0x2d8);
  }
  else {
    _swift_coroFrameAlloc(0x2d8,0xd136);
  }
  *param_1 = puVar3;
  puVar3[0x5a] = unaff_x20;
  uVar5 = *unaff_x20;
  puVar3[0x12] = unaff_x20[1];
  puVar3[0x11] = uVar5;
  uVar9 = unaff_x20[7];
  uVar5 = unaff_x20[6];
  uVar7 = unaff_x20[9];
  uVar6 = unaff_x20[8];
  uVar12 = unaff_x20[2];
  uVar11 = unaff_x20[5];
  uVar10 = unaff_x20[4];
  puVar3[0x14] = unaff_x20[3];
  puVar3[0x13] = uVar12;
  puVar3[0x1a] = uVar7;
  puVar3[0x19] = uVar6;
  puVar3[0x18] = uVar9;
  puVar3[0x17] = uVar5;
  puVar3[0x16] = uVar11;
  puVar3[0x15] = uVar10;
  uVar7 = unaff_x20[0xd];
  uVar6 = unaff_x20[0xc];
  uVar9 = unaff_x20[0xf];
  uVar5 = unaff_x20[0xe];
  uVar1 = *(undefined1 *)(unaff_x20 + 0x10);
  uVar10 = unaff_x20[10];
  puVar3[0x1c] = unaff_x20[0xb];
  puVar3[0x1b] = uVar10;
  *(undefined1 *)(puVar3 + 0x21) = uVar1;
  puVar3[0x20] = uVar9;
  puVar3[0x1f] = uVar5;
  puVar3[0x1e] = uVar7;
  puVar3[0x1d] = uVar6;
  uVar9 = unaff_x20[0xb];
  uVar5 = unaff_x20[10];
  uVar7 = unaff_x20[0xd];
  uVar6 = unaff_x20[0xc];
  uVar11 = unaff_x20[0xf];
  uVar10 = unaff_x20[0xe];
  *(undefined1 *)(puVar3 + 0x10) = *(undefined1 *)(unaff_x20 + 0x10);
  puVar3[0xd] = uVar7;
  puVar3[0xc] = uVar6;
  puVar3[0xf] = uVar11;
  puVar3[0xe] = uVar10;
  puVar3[0xb] = uVar9;
  puVar3[10] = uVar5;
  uVar9 = unaff_x20[3];
  uVar5 = unaff_x20[2];
  uVar7 = unaff_x20[5];
  uVar6 = unaff_x20[4];
  uVar10 = unaff_x20[6];
  uVar12 = unaff_x20[9];
  uVar11 = unaff_x20[8];
  puVar3[7] = unaff_x20[7];
  puVar3[6] = uVar10;
  puVar3[9] = uVar12;
  puVar3[8] = uVar11;
  puVar3[3] = uVar9;
  puVar3[2] = uVar5;
  puVar3[5] = uVar7;
  puVar3[4] = uVar6;
  uVar5 = *unaff_x20;
  puVar3[1] = unaff_x20[1];
  *puVar3 = uVar5;
  puVar4 = puVar3;
  FUN_1001241c4();
  if ((int)puVar4 != 1) {
    puVar3[0x2f] = puVar3[0xd];
    puVar3[0x2e] = puVar3[0xc];
    puVar3[0x31] = puVar3[0xf];
    puVar3[0x30] = puVar3[0xe];
    *(undefined1 *)(puVar3 + 0x32) = *(undefined1 *)(puVar3 + 0x10);
    puVar3[0x27] = puVar3[5];
    puVar3[0x26] = puVar3[4];
    puVar3[0x29] = puVar3[7];
    puVar3[0x28] = puVar3[6];
    puVar3[0x2b] = puVar3[9];
    puVar3[0x2a] = puVar3[8];
    puVar3[0x2d] = puVar3[0xb];
    puVar3[0x2c] = puVar3[10];
    puVar3[0x23] = puVar3[1];
    puVar3[0x22] = *puVar3;
    puVar3[0x25] = puVar3[3];
    puVar3[0x24] = puVar3[2];
    iVar2 = (int)puVar3 + 0x110;
    FUN_1001241ec();
    if (iVar2 == 10) {
      puVar4 = puVar3 + 0x22;
      FUN_100124204();
      uVar5 = *puVar4;
      uVar9 = puVar4[1];
      puVar8 = (undefined *)puVar4[2];
      uVar6 = puVar4[3];
      uVar7 = puVar4[4];
      puVar3[0x38] = puVar3[0x16];
      puVar3[0x37] = puVar3[0x15];
      puVar3[0x3a] = puVar3[0x18];
      puVar3[0x39] = puVar3[0x17];
      puVar3[0x34] = puVar3[0x12];
      puVar3[0x33] = puVar3[0x11];
      puVar3[0x36] = puVar3[0x14];
      puVar3[0x35] = puVar3[0x13];
      *(undefined1 *)(puVar3 + 0x43) = *(undefined1 *)(puVar3 + 0x21);
      puVar3[0x40] = puVar3[0x1e];
      puVar3[0x3f] = puVar3[0x1d];
      puVar3[0x42] = puVar3[0x20];
      puVar3[0x41] = puVar3[0x1f];
      puVar3[0x3c] = puVar3[0x1a];
      puVar3[0x3b] = puVar3[0x19];
      puVar3[0x3e] = puVar3[0x1c];
      puVar3[0x3d] = puVar3[0x1b];
      FUN_1004a142c(puVar3 + 0x33,puVar3 + 0x44);
      goto LAB_1004a4d50;
    }
  }
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0xc000000000000000;
  uVar9 = 0xe000000000000000;
  puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
LAB_1004a4d50:
  puVar3[0x55] = uVar5;
  puVar3[0x56] = uVar9;
  puVar3[0x57] = puVar8;
  puVar3[0x58] = uVar6;
  puVar3[0x59] = uVar7;
  auVar13._8_8_ = puVar3 + 0x55;
  auVar13._0_8_ = FUN_1004a4d88;
  return auVar13;
}

