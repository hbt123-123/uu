// rea decompile_all
// name: FUN_100487004
// address: 0x100487004
// body: available
// range: 0x100487004-0x10048717f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100487004(undefined8 *param_1)

{
  undefined6 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  byte bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  byte bVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  
  puVar2 = (undefined8 *)0x1a0;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar2 = _malloc(0x1a0);
  }
  else {
    _swift_coroFrameAlloc(0x1a0,0x3177);
  }
  *param_1 = puVar2;
  puVar2[0x32] = unaff_x20;
  puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
  uVar8 = unaff_x20[4];
  uVar3 = unaff_x20[6];
  if ((((uVar8 & uVar3 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) ||
     (((uint)(uVar3 >> 0x3b) & 6 | (uint)(uVar8 >> 0x3d) & 1) != 2)) {
    puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_10042e6bc();
    uVar5 = 0;
    bVar13 = 0;
    uVar8 = 0;
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = 0;
    uVar6 = 0;
    uVar14 = 0xc000000000000000;
    bVar9 = 1;
  }
  else {
    puVar7 = (undefined *)*unaff_x20;
    uVar5 = unaff_x20[1];
    bVar9 = *(byte *)(unaff_x20 + 2);
    bVar13 = *(byte *)((long)unaff_x20 + 0x11);
    uVar1 = *(undefined6 *)((long)unaff_x20 + 0x12);
    puVar4 = (undefined *)unaff_x20[3];
    uVar10 = unaff_x20[5];
    uVar11 = unaff_x20[7];
    uVar12 = unaff_x20[8];
    uVar6 = unaff_x20[9];
    uVar14 = uVar3 & 0xcfffffffffffffff;
    puVar2[10] = puVar7;
    puVar2[0xb] = uVar5;
    *(byte *)(puVar2 + 0xc) = bVar9;
    *(byte *)((long)puVar2 + 0x61) = bVar13;
    *(int *)((long)puVar2 + 0x62) = (int)uVar1;
    *(short *)((long)puVar2 + 0x66) = (short)((uint6)uVar1 >> 0x20);
    puVar2[0xd] = puVar4;
    puVar2[0xe] = uVar8;
    puVar2[0xf] = uVar10;
    puVar2[0x10] = uVar3;
    puVar2[0x11] = uVar11;
    puVar2[0x12] = uVar12;
    puVar2[0x13] = uVar6;
    FUN_100493064(puVar2 + 10,puVar2 + 0x14);
  }
  *(byte *)(puVar2 + 0x33) = bVar9 & 1;
  *puVar2 = puVar7;
  puVar2[1] = uVar5;
  *(byte *)(puVar2 + 2) = bVar9 & 1;
  *(byte *)((long)puVar2 + 0x11) = bVar13 & 1;
  puVar2[3] = puVar4;
  *(byte *)(puVar2 + 4) = (byte)uVar8 & 1;
  puVar2[5] = uVar10;
  puVar2[6] = uVar14;
  puVar2[7] = uVar11;
  puVar2[8] = uVar12;
  puVar2[9] = uVar6;
  auVar15._8_8_ = puVar2;
  auVar15._0_8_ = FUN_100487180;
  return auVar15;
}

