// rea decompile_all
// name: FUN_1004c29b8
// address: 0x1004c29b8
// body: available
// range: 0x1004c29b8-0x1004c2b7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1004c29b8(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  
  puVar2 = (undefined8 *)0x338;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar2 = _malloc(0x338);
  }
  else {
    _swift_coroFrameAlloc(0x338,0x374);
  }
  *param_1 = puVar2;
  puVar2[0x66] = unaff_x20;
  uVar9 = *unaff_x20;
  uVar8 = unaff_x20[3];
  uVar4 = unaff_x20[2];
  puVar2[0x14] = unaff_x20[1];
  puVar2[0x13] = uVar9;
  puVar2[0x16] = uVar8;
  puVar2[0x15] = uVar4;
  uVar8 = unaff_x20[9];
  uVar4 = unaff_x20[8];
  uVar7 = unaff_x20[0xb];
  uVar9 = unaff_x20[10];
  uVar12 = unaff_x20[4];
  uVar11 = unaff_x20[7];
  uVar6 = unaff_x20[6];
  puVar2[0x18] = unaff_x20[5];
  puVar2[0x17] = uVar12;
  puVar2[0x1e] = uVar7;
  puVar2[0x1d] = uVar9;
  puVar2[0x1c] = uVar8;
  puVar2[0x1b] = uVar4;
  puVar2[0x1a] = uVar11;
  puVar2[0x19] = uVar6;
  uVar6 = unaff_x20[0xf];
  uVar7 = unaff_x20[0xe];
  uVar9 = unaff_x20[0x11];
  uVar8 = unaff_x20[0x10];
  uVar4 = unaff_x20[0x12];
  uVar11 = unaff_x20[0xc];
  puVar2[0x20] = unaff_x20[0xd];
  puVar2[0x1f] = uVar11;
  puVar2[0x25] = uVar4;
  puVar2[0x22] = uVar6;
  puVar2[0x21] = uVar7;
  puVar2[0x24] = uVar9;
  puVar2[0x23] = uVar8;
  uVar9 = *unaff_x20;
  uVar8 = unaff_x20[3];
  uVar4 = unaff_x20[2];
  puVar2[1] = unaff_x20[1];
  *puVar2 = uVar9;
  puVar2[3] = uVar8;
  puVar2[2] = uVar4;
  uVar4 = unaff_x20[8];
  uVar9 = unaff_x20[0xb];
  uVar8 = unaff_x20[10];
  uVar12 = unaff_x20[5];
  uVar11 = unaff_x20[4];
  uVar6 = unaff_x20[7];
  uVar7 = unaff_x20[6];
  puVar2[9] = unaff_x20[9];
  puVar2[8] = uVar4;
  puVar2[0xb] = uVar9;
  puVar2[10] = uVar8;
  puVar2[5] = uVar12;
  puVar2[4] = uVar11;
  puVar2[7] = uVar6;
  puVar2[6] = uVar7;
  uVar7 = unaff_x20[0xf];
  uVar9 = unaff_x20[0xe];
  uVar8 = unaff_x20[0x11];
  uVar4 = unaff_x20[0x10];
  uVar11 = unaff_x20[0xd];
  uVar6 = unaff_x20[0xc];
  puVar2[0x12] = unaff_x20[0x12];
  puVar2[0xf] = uVar7;
  puVar2[0xe] = uVar9;
  puVar2[0x11] = uVar8;
  puVar2[0x10] = uVar4;
  puVar2[0xd] = uVar11;
  puVar2[0xc] = uVar6;
  puVar3 = puVar2;
  FUN_100040934();
  if ((int)puVar3 != 1) {
    puVar2[0x33] = puVar2[0xd];
    puVar2[0x32] = puVar2[0xc];
    puVar2[0x35] = puVar2[0xf];
    puVar2[0x34] = puVar2[0xe];
    puVar2[0x37] = puVar2[0x11];
    puVar2[0x36] = puVar2[0x10];
    puVar2[0x38] = puVar2[0x12];
    puVar2[0x2b] = puVar2[5];
    puVar2[0x2a] = puVar2[4];
    puVar2[0x2d] = puVar2[7];
    puVar2[0x2c] = puVar2[6];
    puVar2[0x2f] = puVar2[9];
    puVar2[0x2e] = puVar2[8];
    puVar2[0x31] = puVar2[0xb];
    puVar2[0x30] = puVar2[10];
    puVar2[0x27] = puVar2[1];
    puVar2[0x26] = *puVar2;
    puVar2[0x29] = puVar2[3];
    puVar2[0x28] = puVar2[2];
    iVar1 = (int)puVar2 + 0x130;
    FUN_100040948();
    if (iVar1 == 5) {
      puVar3 = puVar2 + 0x26;
      FUN_100040964();
      uVar5 = *(undefined1 *)puVar3;
      uVar6 = puVar3[1];
      uVar10 = *(undefined1 *)(puVar3 + 2);
      uVar4 = puVar3[3];
      uVar9 = puVar3[4];
      uVar8 = puVar3[5];
      uVar7 = puVar3[6];
      puVar2[0x3a] = puVar2[0x14];
      puVar2[0x39] = puVar2[0x13];
      puVar2[0x3c] = puVar2[0x16];
      puVar2[0x3b] = puVar2[0x15];
      puVar2[0x42] = puVar2[0x1c];
      puVar2[0x41] = puVar2[0x1b];
      puVar2[0x44] = puVar2[0x1e];
      puVar2[0x43] = puVar2[0x1d];
      puVar2[0x3e] = puVar2[0x18];
      puVar2[0x3d] = puVar2[0x17];
      puVar2[0x40] = puVar2[0x1a];
      puVar2[0x3f] = puVar2[0x19];
      puVar2[0x4b] = puVar2[0x25];
      puVar2[0x48] = puVar2[0x22];
      puVar2[0x47] = puVar2[0x21];
      puVar2[0x4a] = puVar2[0x24];
      puVar2[0x49] = puVar2[0x23];
      puVar2[0x46] = puVar2[0x20];
      puVar2[0x45] = puVar2[0x1f];
      FUN_1004df3f8(puVar2 + 0x39,puVar2 + 0x4c);
      goto LAB_1004c2b3c;
    }
  }
  uVar5 = 0;
  uVar6 = 0;
  uVar4 = 0;
  uVar8 = 0;
  uVar7 = 0xc000000000000000;
  uVar9 = 0xe000000000000000;
  uVar10 = 1;
LAB_1004c2b3c:
  *(undefined1 *)(puVar2 + 0x5f) = uVar5;
  puVar2[0x60] = uVar6;
  *(undefined1 *)(puVar2 + 0x61) = uVar10;
  puVar2[0x62] = uVar4;
  puVar2[99] = uVar9;
  puVar2[100] = uVar8;
  puVar2[0x65] = uVar7;
  auVar13._8_8_ = puVar2 + 0x5f;
  auVar13._0_8_ = FUN_1004c2b80;
  return auVar13;
}

