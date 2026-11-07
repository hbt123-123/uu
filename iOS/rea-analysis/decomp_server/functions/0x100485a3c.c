// rea decompile_all
// name: FUN_100485a3c
// address: 0x100485a3c
// body: available
// range: 0x100485a3c-0x100485c3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100485a3c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
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
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long unaff_x20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  
  puVar1 = (undefined8 *)0x658;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar1 = _malloc(0x658);
  }
  else {
    _swift_coroFrameAlloc(0x658,0x6936);
  }
  *param_1 = puVar1;
  puVar1[0xca] = unaff_x20;
  lVar21 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar21 + 0xe8,puVar1 + 0xc4,0,0);
  uVar11 = *(undefined8 *)(lVar21 + 0xe8);
  uVar13 = *(undefined8 *)(lVar21 + 0x100);
  uVar12 = *(undefined8 *)(lVar21 + 0xf8);
  puVar1[0x1d] = *(undefined8 *)(lVar21 + 0xf0);
  puVar1[0x1c] = uVar11;
  puVar1[0x1f] = uVar13;
  puVar1[0x1e] = uVar12;
  uVar12 = *(undefined8 *)(lVar21 + 0x110);
  uVar11 = *(undefined8 *)(lVar21 + 0x108);
  uVar14 = *(undefined8 *)(lVar21 + 0x120);
  uVar13 = *(undefined8 *)(lVar21 + 0x118);
  uVar15 = *(undefined8 *)(lVar21 + 0x128);
  uVar17 = *(undefined8 *)(lVar21 + 0x140);
  uVar16 = *(undefined8 *)(lVar21 + 0x138);
  puVar1[0x25] = *(undefined8 *)(lVar21 + 0x130);
  puVar1[0x24] = uVar15;
  puVar1[0x27] = uVar17;
  puVar1[0x26] = uVar16;
  puVar1[0x21] = uVar12;
  puVar1[0x20] = uVar11;
  puVar1[0x23] = uVar14;
  puVar1[0x22] = uVar13;
  uVar12 = *(undefined8 *)(lVar21 + 0x150);
  uVar11 = *(undefined8 *)(lVar21 + 0x148);
  uVar14 = *(undefined8 *)(lVar21 + 0x160);
  uVar13 = *(undefined8 *)(lVar21 + 0x158);
  uVar15 = *(undefined8 *)(lVar21 + 0x168);
  uVar17 = *(undefined8 *)(lVar21 + 0x180);
  uVar16 = *(undefined8 *)(lVar21 + 0x178);
  puVar1[0x2d] = *(undefined8 *)(lVar21 + 0x170);
  puVar1[0x2c] = uVar15;
  puVar1[0x2f] = uVar17;
  puVar1[0x2e] = uVar16;
  puVar1[0x29] = uVar12;
  puVar1[0x28] = uVar11;
  puVar1[0x2b] = uVar14;
  puVar1[0x2a] = uVar13;
  uVar12 = *(undefined8 *)(lVar21 + 400);
  uVar11 = *(undefined8 *)(lVar21 + 0x188);
  uVar14 = *(undefined8 *)(lVar21 + 0x1a0);
  uVar13 = *(undefined8 *)(lVar21 + 0x198);
  uVar15 = *(undefined8 *)(lVar21 + 0x1a8);
  uVar17 = *(undefined8 *)(lVar21 + 0x1c0);
  uVar16 = *(undefined8 *)(lVar21 + 0x1b8);
  puVar1[0x35] = *(undefined8 *)(lVar21 + 0x1b0);
  puVar1[0x34] = uVar15;
  puVar1[0x37] = uVar17;
  puVar1[0x36] = uVar16;
  puVar1[0x31] = uVar12;
  puVar1[0x30] = uVar11;
  puVar1[0x33] = uVar14;
  puVar1[0x32] = uVar13;
  uVar11 = *(undefined8 *)(lVar21 + 0xe8);
  uVar13 = *(undefined8 *)(lVar21 + 0x100);
  uVar12 = *(undefined8 *)(lVar21 + 0xf8);
  puVar1[1] = *(undefined8 *)(lVar21 + 0xf0);
  *puVar1 = uVar11;
  puVar1[3] = uVar13;
  puVar1[2] = uVar12;
  uVar12 = *(undefined8 *)(lVar21 + 0x110);
  uVar11 = *(undefined8 *)(lVar21 + 0x108);
  uVar14 = *(undefined8 *)(lVar21 + 0x120);
  uVar13 = *(undefined8 *)(lVar21 + 0x118);
  uVar15 = *(undefined8 *)(lVar21 + 0x128);
  uVar17 = *(undefined8 *)(lVar21 + 0x140);
  uVar16 = *(undefined8 *)(lVar21 + 0x138);
  puVar1[9] = *(undefined8 *)(lVar21 + 0x130);
  puVar1[8] = uVar15;
  puVar1[0xb] = uVar17;
  puVar1[10] = uVar16;
  puVar1[5] = uVar12;
  puVar1[4] = uVar11;
  puVar1[7] = uVar14;
  puVar1[6] = uVar13;
  uVar12 = *(undefined8 *)(lVar21 + 0x150);
  uVar11 = *(undefined8 *)(lVar21 + 0x148);
  uVar14 = *(undefined8 *)(lVar21 + 0x160);
  uVar13 = *(undefined8 *)(lVar21 + 0x158);
  uVar15 = *(undefined8 *)(lVar21 + 0x168);
  uVar17 = *(undefined8 *)(lVar21 + 0x180);
  uVar16 = *(undefined8 *)(lVar21 + 0x178);
  puVar1[0x11] = *(undefined8 *)(lVar21 + 0x170);
  puVar1[0x10] = uVar15;
  puVar1[0x13] = uVar17;
  puVar1[0x12] = uVar16;
  puVar1[0xd] = uVar12;
  puVar1[0xc] = uVar11;
  puVar1[0xf] = uVar14;
  puVar1[0xe] = uVar13;
  uVar12 = *(undefined8 *)(lVar21 + 400);
  uVar11 = *(undefined8 *)(lVar21 + 0x188);
  uVar14 = *(undefined8 *)(lVar21 + 0x1a0);
  uVar13 = *(undefined8 *)(lVar21 + 0x198);
  uVar15 = *(undefined8 *)(lVar21 + 0x1a8);
  uVar17 = *(undefined8 *)(lVar21 + 0x1c0);
  uVar16 = *(undefined8 *)(lVar21 + 0x1b8);
  puVar1[0x19] = *(undefined8 *)(lVar21 + 0x1b0);
  puVar1[0x18] = uVar15;
  puVar1[0x1b] = uVar17;
  puVar1[0x1a] = uVar16;
  puVar1[0x15] = uVar12;
  puVar1[0x14] = uVar11;
  puVar1[0x17] = uVar14;
  puVar1[0x16] = uVar13;
  puVar2 = puVar1;
  FUN_1000ab18c();
  if ((int)puVar2 == 1) {
    uVar11 = 0;
    uVar12 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar19 = 0;
    uVar20 = 0;
    uVar23 = 0;
    uVar22 = 0xf000000000000000;
    uVar25 = 0xf000000000000000;
    uVar24 = 0;
    uVar27 = 0;
    uVar26 = 0xc000000000000000;
    uVar28 = 0;
    uVar29 = 0;
    uVar18 = 0xe000000000000000;
    uVar3 = 0xe000000000000000;
    uVar4 = 0xe000000000000000;
    uVar6 = 0xe000000000000000;
    uVar7 = 0xe000000000000000;
    uVar8 = 0xe000000000000000;
    uVar9 = 0xe000000000000000;
    uVar10 = 0xe000000000000000;
    puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
    uVar30 = uVar24;
    uVar31 = uVar25;
  }
  else {
    uVar11 = puVar1[0x1c];
    uVar18 = puVar1[0x1d];
    uVar12 = puVar1[0x1e];
    uVar3 = puVar1[0x1f];
    uVar13 = puVar1[0x20];
    uVar4 = puVar1[0x21];
    uVar14 = puVar1[0x22];
    uVar6 = puVar1[0x23];
    uVar15 = puVar1[0x24];
    uVar7 = puVar1[0x25];
    uVar16 = puVar1[0x26];
    uVar8 = puVar1[0x27];
    uVar17 = puVar1[0x28];
    uVar9 = puVar1[0x29];
    uVar19 = puVar1[0x2a];
    uVar10 = puVar1[0x2b];
    puVar5 = (undefined *)puVar1[0x2c];
    uVar20 = puVar1[0x2d];
    uVar27 = puVar1[0x2f];
    uVar26 = puVar1[0x2e];
    uVar25 = puVar1[0x31];
    uVar24 = puVar1[0x30];
    uVar29 = puVar1[0x33];
    uVar28 = puVar1[0x32];
    uVar23 = puVar1[0x35];
    uVar22 = puVar1[0x34];
    uVar31 = puVar1[0x37];
    uVar30 = puVar1[0x36];
  }
  puVar1[0x38] = uVar11;
  puVar1[0x39] = uVar18;
  puVar1[0x3a] = uVar12;
  puVar1[0x3b] = uVar3;
  puVar1[0x3c] = uVar13;
  puVar1[0x3d] = uVar4;
  puVar1[0x3e] = uVar14;
  puVar1[0x3f] = uVar6;
  puVar1[0x40] = uVar15;
  puVar1[0x41] = uVar7;
  puVar1[0x42] = uVar16;
  puVar1[0x43] = uVar8;
  puVar1[0x44] = uVar17;
  puVar1[0x45] = uVar9;
  puVar1[0x46] = uVar19;
  puVar1[0x47] = uVar10;
  puVar1[0x48] = puVar5;
  puVar1[0x49] = uVar20;
  puVar1[0x4b] = uVar27;
  puVar1[0x4a] = uVar26;
  puVar1[0x4d] = uVar25;
  puVar1[0x4c] = uVar24;
  puVar1[0x4f] = uVar29;
  puVar1[0x4e] = uVar28;
  puVar1[0x51] = uVar23;
  puVar1[0x50] = uVar22;
  puVar1[0x53] = uVar31;
  puVar1[0x52] = uVar30;
  FUN_10007f314(puVar1 + 0x1c,puVar1 + 0x54,&DAT_100aa0bc8,&DAT_10082de10);
  auVar32._8_8_ = puVar1 + 0x38;
  auVar32._0_8_ = FUN_100485c3c;
  return auVar32;
}

