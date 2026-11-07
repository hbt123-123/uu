// rea decompile_all
// name: FUN_100470e00
// address: 0x100470e00
// body: available
// range: 0x100470e00-0x10047101f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100470e00(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  
  puVar3 = (undefined8 *)0x6c8;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar3 = _malloc(0x6c8);
  }
  else {
    _swift_coroFrameAlloc(0x6c8,0xb71e);
  }
  *param_1 = puVar3;
  puVar1 = puVar3 + 0xc5;
  puVar3[0xd8] = unaff_x20;
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(lVar5 + 0x20);
  puVar3[0x1a] = *(undefined8 *)(lVar5 + 0x28);
  puVar3[0x19] = uVar6;
  uVar8 = *(undefined8 *)(lVar5 + 0x38);
  uVar6 = *(undefined8 *)(lVar5 + 0x30);
  uVar13 = *(undefined8 *)(lVar5 + 0x48);
  uVar9 = *(undefined8 *)(lVar5 + 0x40);
  uVar7 = *(undefined8 *)(lVar5 + 0x58);
  uVar16 = *(undefined8 *)(lVar5 + 0x50);
  uVar10 = *(undefined8 *)(lVar5 + 0x60);
  puVar3[0x22] = *(undefined8 *)(lVar5 + 0x68);
  puVar3[0x21] = uVar10;
  puVar3[0x20] = uVar7;
  puVar3[0x1f] = uVar16;
  puVar3[0x1e] = uVar13;
  puVar3[0x1d] = uVar9;
  puVar3[0x1c] = uVar8;
  puVar3[0x1b] = uVar6;
  uVar8 = *(undefined8 *)(lVar5 + 0x78);
  uVar6 = *(undefined8 *)(lVar5 + 0x70);
  uVar13 = *(undefined8 *)(lVar5 + 0x88);
  uVar9 = *(undefined8 *)(lVar5 + 0x80);
  uVar16 = *(undefined8 *)(lVar5 + 0x90);
  uVar10 = *(undefined8 *)(lVar5 + 0xa8);
  uVar7 = *(undefined8 *)(lVar5 + 0xa0);
  puVar3[0x28] = *(undefined8 *)(lVar5 + 0x98);
  puVar3[0x27] = uVar16;
  puVar3[0x2a] = uVar10;
  puVar3[0x29] = uVar7;
  puVar3[0x24] = uVar8;
  puVar3[0x23] = uVar6;
  puVar3[0x26] = uVar13;
  puVar3[0x25] = uVar9;
  uVar8 = *(undefined8 *)(lVar5 + 0xb8);
  uVar6 = *(undefined8 *)(lVar5 + 0xb0);
  uVar13 = *(undefined8 *)(lVar5 + 200);
  uVar9 = *(undefined8 *)(lVar5 + 0xc0);
  uVar7 = *(undefined8 *)(lVar5 + 0xd8);
  uVar16 = *(undefined8 *)(lVar5 + 0xd0);
  *(undefined1 *)(puVar3 + 0x31) = *(undefined1 *)(lVar5 + 0xe0);
  puVar3[0x2e] = uVar13;
  puVar3[0x2d] = uVar9;
  puVar3[0x30] = uVar7;
  puVar3[0x2f] = uVar16;
  puVar3[0x2c] = uVar8;
  puVar3[0x2b] = uVar6;
  _memmove(puVar3,(void *)(lVar5 + 0x20),0xc1);
  puVar4 = puVar3;
  FUN_1001218ec();
  if ((int)puVar4 != 1) {
    puVar3[0x47] = puVar3[0x15];
    puVar3[0x46] = puVar3[0x14];
    puVar3[0x49] = puVar3[0x17];
    puVar3[0x48] = puVar3[0x16];
    *(undefined1 *)(puVar3 + 0x4a) = *(undefined1 *)(puVar3 + 0x18);
    puVar3[0x3f] = puVar3[0xd];
    puVar3[0x3e] = puVar3[0xc];
    puVar3[0x41] = puVar3[0xf];
    puVar3[0x40] = puVar3[0xe];
    puVar3[0x43] = puVar3[0x11];
    puVar3[0x42] = puVar3[0x10];
    puVar3[0x45] = puVar3[0x13];
    puVar3[0x44] = puVar3[0x12];
    puVar3[0x37] = puVar3[5];
    puVar3[0x36] = puVar3[4];
    puVar3[0x39] = puVar3[7];
    puVar3[0x38] = puVar3[6];
    puVar3[0x3b] = puVar3[9];
    puVar3[0x3a] = puVar3[8];
    puVar3[0x3d] = puVar3[0xb];
    puVar3[0x3c] = puVar3[10];
    puVar3[0x33] = puVar3[1];
    puVar3[0x32] = *puVar3;
    puVar3[0x35] = puVar3[3];
    puVar3[0x34] = puVar3[2];
    iVar2 = (int)puVar3 + 400;
    FUN_100121900();
    if (iVar2 == 0x12) {
      puVar4 = puVar3 + 0x32;
      FUN_100008290();
      uVar16 = puVar4[0x16];
      uVar13 = puVar4[0x15];
      uVar6 = puVar4[0x17];
      uVar9 = puVar4[0x14];
      uVar8 = puVar4[0x13];
      puVar3[0x50] = puVar3[0x1e];
      puVar3[0x4f] = puVar3[0x1d];
      puVar3[0x52] = puVar3[0x20];
      puVar3[0x51] = puVar3[0x1f];
      puVar3[0x4c] = puVar3[0x1a];
      puVar3[0x4b] = puVar3[0x19];
      puVar3[0x4e] = puVar3[0x1c];
      puVar3[0x4d] = puVar3[0x1b];
      puVar3[0x58] = puVar3[0x26];
      puVar3[0x57] = puVar3[0x25];
      puVar3[0x5a] = puVar3[0x28];
      puVar3[0x59] = puVar3[0x27];
      puVar3[0x54] = puVar3[0x22];
      puVar3[0x53] = puVar3[0x21];
      puVar3[0x56] = puVar3[0x24];
      puVar3[0x55] = puVar3[0x23];
      *(undefined1 *)(puVar3 + 99) = *(undefined1 *)(puVar3 + 0x31);
      puVar3[0x60] = puVar3[0x2e];
      puVar3[0x5f] = puVar3[0x2d];
      puVar3[0x62] = puVar3[0x30];
      puVar3[0x61] = puVar3[0x2f];
      puVar3[0x5c] = puVar3[0x2a];
      puVar3[0x5b] = puVar3[0x29];
      puVar3[0x5e] = puVar3[0x2c];
      puVar3[0x5d] = puVar3[0x2b];
      FUN_1004749f4(puVar3 + 0x4b,puVar3 + 100);
      uVar11 = *puVar4;
      uVar10 = puVar4[3];
      uVar7 = puVar4[2];
      puVar3[0xc6] = puVar4[1];
      *puVar1 = uVar11;
      puVar3[200] = uVar10;
      puVar3[199] = uVar7;
      uVar7 = puVar4[8];
      uVar11 = puVar4[0xb];
      uVar10 = puVar4[10];
      uVar17 = puVar4[5];
      uVar15 = puVar4[4];
      uVar14 = puVar4[7];
      uVar12 = puVar4[6];
      puVar3[0xce] = puVar4[9];
      puVar3[0xcd] = uVar7;
      puVar3[0xd0] = uVar11;
      puVar3[0xcf] = uVar10;
      puVar3[0xca] = uVar17;
      puVar3[0xc9] = uVar15;
      puVar3[0xcc] = uVar14;
      puVar3[0xcb] = uVar12;
      uVar12 = puVar4[0xf];
      uVar11 = puVar4[0xe];
      uVar10 = puVar4[0x11];
      uVar7 = puVar4[0x10];
      uVar15 = puVar4[0xd];
      uVar14 = puVar4[0xc];
      puVar3[0xd7] = puVar4[0x12];
      puVar3[0xd4] = uVar12;
      puVar3[0xd3] = uVar11;
      puVar3[0xd6] = uVar10;
      puVar3[0xd5] = uVar7;
      puVar3[0xd2] = uVar15;
      puVar3[0xd1] = uVar14;
      goto LAB_100470fbc;
    }
  }
  FUN_100091474(puVar1);
  uVar9 = 0xc000000000000000;
  uVar8 = 0;
  uVar13 = 0;
  uVar16 = 0;
  uVar6 = 0xf000000000000000;
LAB_100470fbc:
  puVar3[0x8a] = puVar3[0xd2];
  puVar3[0x89] = puVar3[0xd1];
  puVar3[0x8c] = puVar3[0xd4];
  puVar3[0x8b] = puVar3[0xd3];
  puVar3[0x8e] = puVar3[0xd6];
  puVar3[0x8d] = puVar3[0xd5];
  puVar3[0x8f] = puVar3[0xd7];
  puVar3[0x82] = puVar3[0xca];
  puVar3[0x81] = puVar3[0xc9];
  puVar3[0x84] = puVar3[0xcc];
  puVar3[0x83] = puVar3[0xcb];
  puVar3[0x86] = puVar3[0xce];
  puVar3[0x85] = puVar3[0xcd];
  puVar3[0x88] = puVar3[0xd0];
  puVar3[0x87] = puVar3[0xcf];
  puVar3[0x7e] = puVar3[0xc6];
  puVar3[0x7d] = *puVar1;
  puVar3[0x80] = puVar3[200];
  puVar3[0x7f] = puVar3[199];
  puVar3[0x91] = uVar9;
  puVar3[0x90] = uVar8;
  puVar3[0x93] = uVar16;
  puVar3[0x92] = uVar13;
  puVar3[0x94] = uVar6;
  auVar18._8_8_ = puVar3 + 0x7d;
  auVar18._0_8_ = FUN_100471020;
  return auVar18;
}

