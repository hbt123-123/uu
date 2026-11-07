// rea decompile_all
// name: FUN_1004512bc
// address: 0x1004512bc
// body: available
// range: 0x1004512bc-0x100451437 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1004512bc(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  long unaff_x20;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auVar18 [16];
  
  puVar2 = (undefined8 *)0x2c8;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar2 = _malloc(0x2c8);
  }
  else {
    _swift_coroFrameAlloc(0x2c8,0x19da);
  }
  *param_1 = puVar2;
  puVar2[0x54] = unaff_x20;
  uVar7 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x50);
  puVar2[1] = *(undefined8 *)(unaff_x20 + 0x58);
  *puVar2 = uVar5;
  puVar2[3] = uVar7;
  puVar2[2] = uVar6;
  puVar2[5] = uVar4;
  puVar2[4] = uVar3;
  uVar3 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar5 = *(undefined8 *)(unaff_x20 + 0xb8);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xb0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x90);
  puVar2[0xb] = *(undefined8 *)(unaff_x20 + 0xa8);
  puVar2[10] = uVar3;
  puVar2[0xd] = uVar5;
  puVar2[0xc] = uVar4;
  puVar2[7] = uVar15;
  puVar2[6] = uVar14;
  puVar2[9] = uVar7;
  puVar2[8] = uVar6;
  lVar8 = puVar2[2];
  if (lVar8 == 0) {
    uVar3 = 0;
    bVar9 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar15 = 0xc000000000000000;
    uVar14 = 0;
    uVar17 = 0;
    bVar10 = 1;
    lVar8 = -0x2000000000000000;
    bVar1 = 1;
    bVar12 = 1;
    bVar11 = 1;
  }
  else {
    uVar13 = *(undefined4 *)puVar2;
    uVar3 = puVar2[1];
    uVar4 = puVar2[4];
    uVar5 = puVar2[6];
    uVar6 = puVar2[8];
    uVar7 = puVar2[10];
    uVar15 = puVar2[0xd];
    uVar14 = puVar2[0xc];
    bVar11 = *(byte *)(puVar2 + 0xb);
    bVar12 = *(byte *)(puVar2 + 9);
    bVar1 = *(byte *)(puVar2 + 7);
    bVar10 = *(byte *)(puVar2 + 5);
    bVar9 = *(byte *)(puVar2 + 3);
    uVar17 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar13 >> 0x18),
                                             (uint6)(byte)((uint)uVar13 >> 0x10) << 0x20) >> 0x10),
                             (ushort)(byte)uVar13) & 0xffffffffffffff01;
    uVar16 = CONCAT44((int)(uVar17 >> 0x20),(uint)CONCAT12((char)((uint)uVar13 >> 8),(short)uVar17))
             & 0xffffffffff01ffff;
    uVar17 = CONCAT26((short)(uVar16 >> 0x30),CONCAT24((short)(uVar17 >> 0x20),(int)uVar16)) &
             0xff01ff01ffffffff;
  }
  *(byte *)(puVar2 + 0x55) = bVar10 & 1;
  *(byte *)(puVar2 + 0x56) = bVar1 & 1;
  *(byte *)(puVar2 + 0x57) = bVar12 & 1;
  *(byte *)(puVar2 + 0x58) = bVar11 & 1;
  *(uint *)(puVar2 + 0xe) =
       CONCAT13((char)(uVar17 >> 0x30),
                CONCAT12((char)(uVar17 >> 0x20),CONCAT11((char)(uVar17 >> 0x10),(char)uVar17)));
  puVar2[0xf] = uVar3;
  puVar2[0x10] = lVar8;
  *(byte *)(puVar2 + 0x11) = bVar9 & 1;
  puVar2[0x12] = uVar4;
  *(undefined1 *)(puVar2 + 0x13) = *(undefined1 *)(puVar2 + 0x55);
  puVar2[0x14] = uVar5;
  *(undefined1 *)(puVar2 + 0x15) = *(undefined1 *)(puVar2 + 0x56);
  puVar2[0x16] = uVar6;
  *(undefined1 *)(puVar2 + 0x17) = *(undefined1 *)(puVar2 + 0x57);
  puVar2[0x18] = uVar7;
  *(byte *)(puVar2 + 0x19) = bVar11 & 1;
  puVar2[0x1b] = uVar15;
  puVar2[0x1a] = uVar14;
  FUN_10007f314(puVar2,puVar2 + 0x1c,&DAT_100a9ffb0,&DAT_10082b118);
  auVar18._8_8_ = puVar2 + 0xe;
  auVar18._0_8_ = FUN_100451438;
  return auVar18;
}

