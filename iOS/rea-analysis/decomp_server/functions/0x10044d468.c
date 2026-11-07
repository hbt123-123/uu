// rea decompile_all
// name: FUN_10044d468
// address: 0x10044d468
// body: available
// range: 0x10044d468-0x10044d5a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10044d468(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  byte bVar13;
  byte bVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  
  puVar7 = (undefined8 *)0xb8;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar7 = _malloc(0xb8);
  }
  else {
    _swift_coroFrameAlloc(0xb8,0x17c7);
  }
  *param_1 = puVar7;
  puVar7[0x16] = unaff_x20;
  uVar8 = *(ulong *)(unaff_x20 + 0x58);
  if ((uVar8 & 0x3000000000000000) == 0) {
    uVar1 = *(undefined4 *)(unaff_x20 + 0x29);
    uVar2 = *(undefined4 *)(unaff_x20 + 0x39);
    uVar5 = *(undefined2 *)(unaff_x20 + 0x3d);
    uVar10 = *(undefined8 *)(unaff_x20 + 0x40);
    uVar11 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar6 = *(undefined2 *)(unaff_x20 + 0x2d);
    uVar12 = *(undefined8 *)(unaff_x20 + 0x20);
    bVar14 = *(byte *)(unaff_x20 + 0x38);
    bVar13 = *(byte *)(unaff_x20 + 0x28);
    uVar15 = *(undefined8 *)(unaff_x20 + 0x50);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar3 = *(undefined1 *)(unaff_x20 + 0x2f);
    uVar4 = *(undefined1 *)(unaff_x20 + 0x3f);
    *puVar7 = uVar12;
    *(byte *)(puVar7 + 1) = bVar13;
    *(undefined4 *)((long)puVar7 + 9) = uVar1;
    *(undefined2 *)((long)puVar7 + 0xd) = uVar6;
    *(undefined1 *)((long)puVar7 + 0xf) = uVar3;
    puVar7[2] = uVar11;
    *(byte *)(puVar7 + 3) = bVar14;
    *(undefined4 *)((long)puVar7 + 0x19) = uVar2;
    *(undefined2 *)((long)puVar7 + 0x1d) = uVar5;
    *(undefined1 *)((long)puVar7 + 0x1f) = uVar4;
    puVar7[4] = uVar10;
    puVar7[6] = uVar15;
    puVar7[5] = uVar9;
    puVar7[7] = uVar8;
    FUN_10045e614(puVar7,puVar7 + 8);
  }
  else {
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0xc000000000000000;
    bVar13 = 1;
    bVar14 = 1;
  }
  puVar7[0x10] = uVar12;
  *(byte *)(puVar7 + 0x11) = bVar13 & 1;
  puVar7[0x12] = uVar11;
  *(byte *)(puVar7 + 0x13) = bVar14 & 1;
  puVar7[0x14] = uVar10;
  puVar7[0x15] = uVar9;
  auVar16._8_8_ = puVar7 + 0x10;
  auVar16._0_8_ = FUN_10044d5a4;
  return auVar16;
}

