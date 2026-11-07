// rea decompile_all
// name: FUN_100442c14
// address: 0x100442c14
// body: available
// range: 0x100442c14-0x100442d93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100442c14(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  undefined4 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *unaff_x20;
  undefined8 uVar9;
  byte bVar10;
  undefined *puVar11;
  byte bVar12;
  ulong uVar13;
  ulong uVar14;
  byte bVar15;
  undefined1 auVar16 [16];
  
  puVar4 = (undefined4 *)0xf8;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar4 = _malloc(0xf8);
  }
  else {
    _swift_coroFrameAlloc(0xf8,0xa28d);
  }
  uVar8 = 0;
  uVar9 = 0;
  *param_1 = puVar4;
  *(undefined8 **)(puVar4 + 0x38) = unaff_x20;
  uVar1 = unaff_x20[3];
  uVar2 = unaff_x20[4];
  uVar13 = unaff_x20[5];
  bVar3 = *(byte *)((long)unaff_x20 + 0x34);
  bVar15 = 1;
  uVar5 = 0xc000000000000000;
  puVar11 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (bVar3 >> 6 == 0) {
    bVar10 = 1;
    uVar14 = 0;
    bVar12 = 1;
    uVar6 = 0;
    uVar7 = 0;
    if (((((uVar1 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 || uVar2 >> 0x21 != 0x3fffffff)
        || uVar13 >> 0x21 != 0) || bVar3 >> 1 != 0) {
      uVar14 = (ulong)CONCAT14(bVar3,*(undefined4 *)(unaff_x20 + 6));
      puVar11 = (undefined *)unaff_x20[1];
      uVar8 = unaff_x20[2];
      bVar15 = (byte)(uVar2 >> 0x20) & 1;
      uVar9 = *unaff_x20;
      bVar10 = (byte)(uVar13 >> 0x20) & 1;
      bVar12 = bVar3 & 1;
      FUN_10017ac64(uVar9,puVar11,uVar8,uVar1,uVar2,uVar13,uVar14);
      uVar5 = uVar1;
      uVar6 = uVar2;
      uVar7 = uVar13;
    }
  }
  else {
    uVar6 = 0;
    uVar7 = 0;
    bVar10 = 1;
    uVar14 = 0;
    bVar12 = 1;
  }
  *(byte *)(puVar4 + 0x3a) = bVar15;
  *(byte *)(puVar4 + 0x3b) = bVar10;
  *(byte *)(puVar4 + 0x3c) = bVar12;
  *puVar4 = (int)uVar9;
  *(undefined **)(puVar4 + 2) = puVar11;
  *(undefined8 *)(puVar4 + 4) = uVar8;
  *(ulong *)(puVar4 + 6) = uVar5;
  puVar4[8] = (int)uVar6;
  *(byte *)(puVar4 + 9) = bVar15;
  puVar4[10] = (int)uVar7;
  *(byte *)(puVar4 + 0xb) = bVar10;
  puVar4[0xc] = (int)uVar14;
  *(byte *)(puVar4 + 0xd) = bVar12;
  auVar16._8_8_ = puVar4;
  auVar16._0_8_ = FUN_100442d94;
  return auVar16;
}

