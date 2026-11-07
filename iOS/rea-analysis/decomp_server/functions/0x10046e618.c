// rea decompile_all
// name: FUN_10046e618
// address: 0x10046e618
// body: available
// range: 0x10046e618-0x10046e7b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10046e618(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  
  puVar2 = (undefined8 *)0x410;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar2 = _malloc(0x410);
  }
  else {
    _swift_coroFrameAlloc(0x410,0x7cf8);
  }
  *param_1 = puVar2;
  puVar2[0x81] = unaff_x20;
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(lVar4 + 0x20);
  puVar2[0x1a] = *(undefined8 *)(lVar4 + 0x28);
  puVar2[0x19] = uVar6;
  uVar7 = *(undefined8 *)(lVar4 + 0x38);
  uVar6 = *(undefined8 *)(lVar4 + 0x30);
  uVar9 = *(undefined8 *)(lVar4 + 0x48);
  uVar5 = *(undefined8 *)(lVar4 + 0x40);
  uVar11 = *(undefined8 *)(lVar4 + 0x58);
  uVar10 = *(undefined8 *)(lVar4 + 0x50);
  uVar12 = *(undefined8 *)(lVar4 + 0x60);
  puVar2[0x22] = *(undefined8 *)(lVar4 + 0x68);
  puVar2[0x21] = uVar12;
  puVar2[0x20] = uVar11;
  puVar2[0x1f] = uVar10;
  puVar2[0x1e] = uVar9;
  puVar2[0x1d] = uVar5;
  puVar2[0x1c] = uVar7;
  puVar2[0x1b] = uVar6;
  uVar7 = *(undefined8 *)(lVar4 + 0x78);
  uVar6 = *(undefined8 *)(lVar4 + 0x70);
  uVar9 = *(undefined8 *)(lVar4 + 0x88);
  uVar5 = *(undefined8 *)(lVar4 + 0x80);
  uVar10 = *(undefined8 *)(lVar4 + 0x90);
  uVar12 = *(undefined8 *)(lVar4 + 0xa8);
  uVar11 = *(undefined8 *)(lVar4 + 0xa0);
  puVar2[0x28] = *(undefined8 *)(lVar4 + 0x98);
  puVar2[0x27] = uVar10;
  puVar2[0x2a] = uVar12;
  puVar2[0x29] = uVar11;
  puVar2[0x24] = uVar7;
  puVar2[0x23] = uVar6;
  puVar2[0x26] = uVar9;
  puVar2[0x25] = uVar5;
  uVar7 = *(undefined8 *)(lVar4 + 0xb8);
  uVar6 = *(undefined8 *)(lVar4 + 0xb0);
  uVar9 = *(undefined8 *)(lVar4 + 200);
  uVar5 = *(undefined8 *)(lVar4 + 0xc0);
  uVar11 = *(undefined8 *)(lVar4 + 0xd8);
  uVar10 = *(undefined8 *)(lVar4 + 0xd0);
  *(undefined1 *)(puVar2 + 0x31) = *(undefined1 *)(lVar4 + 0xe0);
  puVar2[0x2e] = uVar9;
  puVar2[0x2d] = uVar5;
  puVar2[0x30] = uVar11;
  puVar2[0x2f] = uVar10;
  puVar2[0x2c] = uVar7;
  puVar2[0x2b] = uVar6;
  _memmove(puVar2,(void *)(lVar4 + 0x20),0xc1);
  puVar3 = puVar2;
  FUN_1001218ec();
  if ((int)puVar3 != 1) {
    puVar2[0x47] = puVar2[0x15];
    puVar2[0x46] = puVar2[0x14];
    puVar2[0x49] = puVar2[0x17];
    puVar2[0x48] = puVar2[0x16];
    *(undefined1 *)(puVar2 + 0x4a) = *(undefined1 *)(puVar2 + 0x18);
    puVar2[0x3f] = puVar2[0xd];
    puVar2[0x3e] = puVar2[0xc];
    puVar2[0x41] = puVar2[0xf];
    puVar2[0x40] = puVar2[0xe];
    puVar2[0x43] = puVar2[0x11];
    puVar2[0x42] = puVar2[0x10];
    puVar2[0x45] = puVar2[0x13];
    puVar2[0x44] = puVar2[0x12];
    puVar2[0x37] = puVar2[5];
    puVar2[0x36] = puVar2[4];
    puVar2[0x39] = puVar2[7];
    puVar2[0x38] = puVar2[6];
    puVar2[0x3b] = puVar2[9];
    puVar2[0x3a] = puVar2[8];
    puVar2[0x3d] = puVar2[0xb];
    puVar2[0x3c] = puVar2[10];
    puVar2[0x33] = puVar2[1];
    puVar2[0x32] = *puVar2;
    puVar2[0x35] = puVar2[3];
    puVar2[0x34] = puVar2[2];
    iVar1 = (int)puVar2 + 400;
    FUN_100121900();
    if (iVar1 == 0xd) {
      puVar3 = puVar2 + 0x32;
      FUN_100008290();
      uVar5 = *puVar3;
      uVar8 = *(undefined1 *)(puVar3 + 1);
      uVar6 = puVar3[2];
      uVar7 = puVar3[3];
      puVar2[0x60] = puVar2[0x2e];
      puVar2[0x5f] = puVar2[0x2d];
      puVar2[0x62] = puVar2[0x30];
      puVar2[0x61] = puVar2[0x2f];
      *(undefined1 *)(puVar2 + 99) = *(undefined1 *)(puVar2 + 0x31);
      puVar2[0x58] = puVar2[0x26];
      puVar2[0x57] = puVar2[0x25];
      puVar2[0x5a] = puVar2[0x28];
      puVar2[0x59] = puVar2[0x27];
      puVar2[0x5c] = puVar2[0x2a];
      puVar2[0x5b] = puVar2[0x29];
      puVar2[0x5e] = puVar2[0x2c];
      puVar2[0x5d] = puVar2[0x2b];
      puVar2[0x50] = puVar2[0x1e];
      puVar2[0x4f] = puVar2[0x1d];
      puVar2[0x52] = puVar2[0x20];
      puVar2[0x51] = puVar2[0x1f];
      puVar2[0x54] = puVar2[0x22];
      puVar2[0x53] = puVar2[0x21];
      puVar2[0x56] = puVar2[0x24];
      puVar2[0x55] = puVar2[0x23];
      puVar2[0x4c] = puVar2[0x1a];
      puVar2[0x4b] = puVar2[0x19];
      puVar2[0x4e] = puVar2[0x1c];
      puVar2[0x4d] = puVar2[0x1b];
      FUN_1004749f4(puVar2 + 0x4b,puVar2 + 100);
      goto LAB_10046e784;
    }
  }
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0xc000000000000000;
  uVar8 = 1;
LAB_10046e784:
  puVar2[0x7d] = uVar5;
  *(undefined1 *)(puVar2 + 0x7e) = uVar8;
  puVar2[0x7f] = uVar6;
  puVar2[0x80] = uVar7;
  auVar13._8_8_ = puVar2 + 0x7d;
  auVar13._0_8_ = FUN_10046e7b8;
  return auVar13;
}

