// rea decompile_all
// name: FUN_100472894
// address: 0x100472894
// body: available
// range: 0x100472894-0x100472ba3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100472894(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  long unaff_x20;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  
  puVar4 = (undefined8 *)0x540;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar4 = _malloc(0x540);
  }
  else {
    _swift_coroFrameAlloc(0x540,0x5d9b);
  }
  *param_1 = puVar4;
  puVar4[0xa7] = unaff_x20;
  lVar7 = *(long *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(lVar7 + 0x20);
  puVar4[0x1a] = *(undefined8 *)(lVar7 + 0x28);
  puVar4[0x19] = uVar8;
  uVar9 = *(undefined8 *)(lVar7 + 0x38);
  uVar8 = *(undefined8 *)(lVar7 + 0x30);
  uVar13 = *(undefined8 *)(lVar7 + 0x48);
  uVar10 = *(undefined8 *)(lVar7 + 0x40);
  uVar18 = *(undefined8 *)(lVar7 + 0x58);
  uVar15 = *(undefined8 *)(lVar7 + 0x50);
  uVar19 = *(undefined8 *)(lVar7 + 0x60);
  puVar4[0x22] = *(undefined8 *)(lVar7 + 0x68);
  puVar4[0x21] = uVar19;
  puVar4[0x20] = uVar18;
  puVar4[0x1f] = uVar15;
  puVar4[0x1e] = uVar13;
  puVar4[0x1d] = uVar10;
  puVar4[0x1c] = uVar9;
  puVar4[0x1b] = uVar8;
  uVar9 = *(undefined8 *)(lVar7 + 0x78);
  uVar8 = *(undefined8 *)(lVar7 + 0x70);
  uVar13 = *(undefined8 *)(lVar7 + 0x88);
  uVar10 = *(undefined8 *)(lVar7 + 0x80);
  uVar15 = *(undefined8 *)(lVar7 + 0x90);
  uVar19 = *(undefined8 *)(lVar7 + 0xa8);
  uVar18 = *(undefined8 *)(lVar7 + 0xa0);
  puVar4[0x28] = *(undefined8 *)(lVar7 + 0x98);
  puVar4[0x27] = uVar15;
  puVar4[0x2a] = uVar19;
  puVar4[0x29] = uVar18;
  puVar4[0x24] = uVar9;
  puVar4[0x23] = uVar8;
  puVar4[0x26] = uVar13;
  puVar4[0x25] = uVar10;
  uVar9 = *(undefined8 *)(lVar7 + 0xb8);
  uVar8 = *(undefined8 *)(lVar7 + 0xb0);
  uVar13 = *(undefined8 *)(lVar7 + 200);
  uVar10 = *(undefined8 *)(lVar7 + 0xc0);
  uVar18 = *(undefined8 *)(lVar7 + 0xd8);
  uVar15 = *(undefined8 *)(lVar7 + 0xd0);
  *(undefined1 *)(puVar4 + 0x31) = *(undefined1 *)(lVar7 + 0xe0);
  puVar4[0x2e] = uVar13;
  puVar4[0x2d] = uVar10;
  puVar4[0x30] = uVar18;
  puVar4[0x2f] = uVar15;
  puVar4[0x2c] = uVar9;
  puVar4[0x2b] = uVar8;
  _memmove(puVar4,(void *)(lVar7 + 0x20),0xc1);
  puVar5 = puVar4;
  FUN_1001218ec();
  if ((int)puVar5 != 1) {
    puVar4[0x47] = puVar4[0x15];
    puVar4[0x46] = puVar4[0x14];
    puVar4[0x49] = puVar4[0x17];
    puVar4[0x48] = puVar4[0x16];
    *(undefined1 *)(puVar4 + 0x4a) = *(undefined1 *)(puVar4 + 0x18);
    puVar4[0x3f] = puVar4[0xd];
    puVar4[0x3e] = puVar4[0xc];
    puVar4[0x41] = puVar4[0xf];
    puVar4[0x40] = puVar4[0xe];
    puVar4[0x43] = puVar4[0x11];
    puVar4[0x42] = puVar4[0x10];
    puVar4[0x45] = puVar4[0x13];
    puVar4[0x44] = puVar4[0x12];
    puVar4[0x37] = puVar4[5];
    puVar4[0x36] = puVar4[4];
    puVar4[0x39] = puVar4[7];
    puVar4[0x38] = puVar4[6];
    puVar4[0x3b] = puVar4[9];
    puVar4[0x3a] = puVar4[8];
    puVar4[0x3d] = puVar4[0xb];
    puVar4[0x3c] = puVar4[10];
    puVar4[0x33] = puVar4[1];
    puVar4[0x32] = *puVar4;
    puVar4[0x35] = puVar4[3];
    puVar4[0x34] = puVar4[2];
    iVar3 = (int)puVar4 + 400;
    FUN_100121900();
    if (iVar3 == 0x16) {
      puVar5 = puVar4 + 0x32;
      FUN_100008290();
      puVar4[0x60] = puVar4[0x2e];
      puVar4[0x5f] = puVar4[0x2d];
      puVar4[0x62] = puVar4[0x30];
      puVar4[0x61] = puVar4[0x2f];
      *(undefined1 *)(puVar4 + 99) = *(undefined1 *)(puVar4 + 0x31);
      puVar4[0x58] = puVar4[0x26];
      puVar4[0x57] = puVar4[0x25];
      puVar4[0x5a] = puVar4[0x28];
      puVar4[0x59] = puVar4[0x27];
      puVar4[0x5c] = puVar4[0x2a];
      puVar4[0x5b] = puVar4[0x29];
      puVar4[0x5e] = puVar4[0x2c];
      puVar4[0x5d] = puVar4[0x2b];
      puVar4[0x50] = puVar4[0x1e];
      puVar4[0x4f] = puVar4[0x1d];
      puVar4[0x52] = puVar4[0x20];
      puVar4[0x51] = puVar4[0x1f];
      puVar4[0x54] = puVar4[0x22];
      puVar4[0x53] = puVar4[0x21];
      puVar4[0x56] = puVar4[0x24];
      puVar4[0x55] = puVar4[0x23];
      puVar4[0x4c] = puVar4[0x1a];
      puVar4[0x4b] = puVar4[0x19];
      puVar4[0x4e] = puVar4[0x1c];
      puVar4[0x4d] = puVar4[0x1b];
      FUN_1004749f4(puVar4 + 0x4b,puVar4 + 100);
      uVar8 = *puVar5;
      uVar12 = *(undefined1 *)(puVar5 + 1);
      uVar11 = *(undefined4 *)((long)puVar5 + 9);
      *(undefined4 *)((long)puVar4 + 0xc4) = *(undefined4 *)((long)puVar5 + 0xc);
      *(undefined4 *)((long)puVar4 + 0xc1) = uVar11;
      uVar9 = puVar5[2];
      uVar16 = *(undefined1 *)(puVar5 + 3);
      uVar11 = *(undefined4 *)((long)puVar5 + 0x1c);
      *(undefined4 *)((long)puVar4 + 0x189) = *(undefined4 *)((long)puVar5 + 0x19);
      *(undefined4 *)((long)puVar4 + 0x18c) = uVar11;
      uVar10 = puVar5[4];
      uVar17 = *(undefined1 *)(puVar5 + 5);
      uVar2 = *(undefined1 *)((long)puVar5 + 0x2b);
      *(undefined2 *)((long)puVar4 + 0x319) = *(undefined2 *)((long)puVar5 + 0x29);
      *(undefined1 *)((long)puVar4 + 0x31b) = uVar2;
      uVar21 = *(undefined8 *)((long)puVar5 + 0x2c);
      uVar11 = *(undefined4 *)((long)puVar5 + 0x34);
      uVar13 = puVar5[7];
      uVar2 = *(undefined1 *)(puVar5 + 8);
      uVar6 = *(undefined1 *)((long)puVar5 + 0x43);
      *(undefined2 *)((long)puVar4 + 0x31c) = *(undefined2 *)((long)puVar5 + 0x41);
      *(undefined1 *)((long)puVar4 + 0x31e) = uVar6;
      uVar18 = *(undefined8 *)((long)puVar5 + 0x44);
      uVar14 = *(undefined4 *)((long)puVar5 + 0x4c);
      uVar15 = puVar5[10];
      uVar6 = *(undefined1 *)(puVar5 + 0xb);
      uVar1 = *(undefined4 *)((long)puVar5 + 0x5c);
      *(undefined4 *)((long)puVar4 + 0x251) = *(undefined4 *)((long)puVar5 + 0x59);
      *(undefined4 *)((long)puVar4 + 0x254) = uVar1;
      uVar20 = puVar5[0xd];
      uVar19 = puVar5[0xc];
      goto LAB_100472adc;
    }
  }
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar12 = 1;
  uVar18 = 0;
  uVar16 = 1;
  uVar20 = 0xc000000000000000;
  uVar19 = 0;
  uVar17 = 1;
  uVar2 = 1;
  uVar6 = 1;
  uVar21 = 0;
LAB_100472adc:
  puVar4[0x7d] = uVar8;
  *(undefined1 *)(puVar4 + 0x7e) = uVar12;
  *(undefined4 *)((long)puVar4 + 0x3f1) = *(undefined4 *)((long)puVar4 + 0xc1);
  *(undefined4 *)((long)puVar4 + 0x3f4) = *(undefined4 *)((long)puVar4 + 0xc4);
  puVar4[0x7f] = uVar9;
  *(undefined1 *)(puVar4 + 0x80) = uVar16;
  *(undefined4 *)((long)puVar4 + 0x401) = *(undefined4 *)((long)puVar4 + 0x189);
  *(undefined4 *)((long)puVar4 + 0x404) = *(undefined4 *)((long)puVar4 + 0x18c);
  puVar4[0x81] = uVar10;
  *(undefined1 *)(puVar4 + 0x82) = uVar17;
  *(undefined1 *)((long)puVar4 + 0x413) = *(undefined1 *)((long)puVar4 + 0x31b);
  *(undefined2 *)((long)puVar4 + 0x411) = *(undefined2 *)((long)puVar4 + 0x319);
  *(undefined8 *)((long)puVar4 + 0x414) = uVar21;
  *(undefined4 *)((long)puVar4 + 0x41c) = uVar11;
  puVar4[0x84] = uVar13;
  *(undefined1 *)(puVar4 + 0x85) = uVar2;
  *(undefined1 *)((long)puVar4 + 0x42b) = *(undefined1 *)((long)puVar4 + 0x31e);
  *(undefined2 *)((long)puVar4 + 0x429) = *(undefined2 *)((long)puVar4 + 0x31c);
  *(undefined8 *)((long)puVar4 + 0x42c) = uVar18;
  *(undefined4 *)((long)puVar4 + 0x434) = uVar14;
  puVar4[0x87] = uVar15;
  *(undefined1 *)(puVar4 + 0x88) = uVar6;
  *(undefined4 *)((long)puVar4 + 0x444) = *(undefined4 *)((long)puVar4 + 0x254);
  *(undefined4 *)((long)puVar4 + 0x441) = *(undefined4 *)((long)puVar4 + 0x251);
  puVar4[0x8a] = uVar20;
  puVar4[0x89] = uVar19;
  auVar22._8_8_ = puVar4 + 0x7d;
  auVar22._0_8_ = FUN_100472ba4;
  return auVar22;
}

