// rea decompile_all
// name: FUN_1004982ec
// address: 0x1004982ec
// body: available
// range: 0x1004982ec-0x10049842b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1004982ec(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined3 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 *unaff_x20;
  byte bVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  
  puVar3 = (undefined4 *)0xc0;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar3 = _malloc(0xc0);
  }
  else {
    _swift_coroFrameAlloc(0xc0,0x6918);
  }
  *param_1 = puVar3;
  *(undefined4 **)(puVar3 + 0x2e) = unaff_x20;
  uVar1 = *unaff_x20;
  bVar7 = *(byte *)(unaff_x20 + 1);
  uVar2 = *(undefined3 *)((long)unaff_x20 + 5);
  uVar8 = *(undefined8 *)(unaff_x20 + 2);
  uVar14 = *(undefined8 *)(unaff_x20 + 6);
  uVar5 = *(undefined8 *)(unaff_x20 + 4);
  uVar11 = *(undefined8 *)(unaff_x20 + 10);
  uVar10 = *(ulong *)(unaff_x20 + 8);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xc);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar12 = *(ulong *)(unaff_x20 + 0xe);
  uVar6 = *(ulong *)(unaff_x20 + 0x12);
  if ((((uVar10 < 0xffffffff00000000) || (uVar12 >> 0x20 != 0)) ||
      ((uVar6 & 0x3000000000000000) != 0)) &&
     (((uint)(uVar6 >> 0x3b) & 6 | (uint)(uVar12 >> 0x3f)) == 2)) {
    uVar9 = (undefined1)((uint)uVar1 >> 8);
    *puVar3 = uVar1;
    *(byte *)(puVar3 + 1) = bVar7;
    *(short *)((long)puVar3 + 5) = (short)uVar2;
    *(char *)((long)puVar3 + 7) = (char)((uint3)uVar2 >> 0x10);
    *(undefined8 *)(puVar3 + 2) = uVar8;
    *(undefined8 *)(puVar3 + 6) = uVar14;
    *(undefined8 *)(puVar3 + 4) = uVar5;
    *(undefined8 *)(puVar3 + 10) = uVar11;
    *(ulong *)(puVar3 + 8) = uVar10;
    *(undefined8 *)(puVar3 + 0xc) = uVar4;
    *(undefined8 *)(puVar3 + 0x10) = uVar13;
    *(ulong *)(puVar3 + 0xe) = uVar12;
    *(ulong *)(puVar3 + 0x12) = uVar6;
    FUN_10049d5cc();
    uVar6 = (ulong)CONCAT16((char)((uint)uVar1 >> 0x18),
                            (uint6)CONCAT14((char)((uint)uVar1 >> 0x10),
                                            (uint)CONCAT12(uVar9,(ushort)(byte)uVar1))) &
            0xffffffffffffff01;
    uVar10 = CONCAT44((int)(uVar6 >> 0x20),(uint)CONCAT12(uVar9,(short)uVar6)) & 0xffffffffff01ffff;
    uVar6 = CONCAT26((short)(uVar10 >> 0x30),CONCAT24((short)(uVar6 >> 0x20),(int)uVar10)) &
            0xff01ff01ffffffff;
  }
  else {
    bVar7 = 0;
    uVar8 = 0;
    uVar6 = 0;
    uVar5 = 0xc000000000000000;
  }
  puVar3[0x28] = CONCAT13((char)(uVar6 >> 0x30),
                          CONCAT12((char)(uVar6 >> 0x20),CONCAT11((char)(uVar6 >> 0x10),(char)uVar6)
                                  ));
  *(byte *)(puVar3 + 0x29) = bVar7 & 1;
  *(undefined8 *)(puVar3 + 0x2a) = uVar8;
  *(undefined8 *)(puVar3 + 0x2c) = uVar5;
  auVar15._8_8_ = puVar3 + 0x28;
  auVar15._0_8_ = FUN_10049842c;
  return auVar15;
}

