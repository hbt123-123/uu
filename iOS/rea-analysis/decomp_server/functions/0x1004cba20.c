// rea decompile_all
// name: FUN_1004cba20
// address: 0x1004cba20
// body: available
// range: 0x1004cba20-0x1004cbb77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1004cba20(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined3 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte bVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  
  puVar4 = (undefined8 *)0x130;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar4 = _malloc(0x130);
  }
  else {
    _swift_coroFrameAlloc(0x130,0xa989);
  }
  *param_1 = puVar4;
  puVar4[0x25] = unaff_x20;
  uVar7 = *unaff_x20;
  uVar8 = unaff_x20[1];
  uVar9 = unaff_x20[2];
  uVar12 = unaff_x20[3];
  bVar11 = *(byte *)(unaff_x20 + 4);
  uVar2 = *(undefined1 *)((long)unaff_x20 + 0x27);
  uVar3 = *(undefined3 *)((long)unaff_x20 + 0x25);
  uVar1 = *(undefined4 *)((long)unaff_x20 + 0x21);
  uVar10 = unaff_x20[5];
  uVar14 = unaff_x20[0xb];
  uVar13 = unaff_x20[10];
  uVar16 = unaff_x20[0xd];
  uVar15 = unaff_x20[0xc];
  uVar19 = unaff_x20[7];
  uVar6 = unaff_x20[6];
  uVar18 = unaff_x20[9];
  uVar17 = unaff_x20[8];
  uVar5 = unaff_x20[0xe];
  if (((uVar15 >> 8 == 0xffffffff) && ((uVar5 & 0x3000000000000000) == 0)) ||
     (((uint)(uVar5 >> 0x39) & 0x18 | (uint)(uVar15 >> 0x3d)) != 0xb)) {
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0;
    bVar11 = 0;
    uVar10 = 0;
    uVar6 = 0xc000000000000000;
    uVar12 = 0xe000000000000000;
  }
  else {
    *puVar4 = uVar7;
    puVar4[1] = uVar8;
    puVar4[2] = uVar9;
    puVar4[3] = uVar12;
    *(byte *)(puVar4 + 4) = bVar11;
    *(undefined4 *)((long)puVar4 + 0x21) = uVar1;
    *(undefined1 *)((long)puVar4 + 0x27) = uVar2;
    *(short *)((long)puVar4 + 0x25) = (short)uVar3;
    puVar4[5] = uVar10;
    puVar4[7] = uVar19;
    puVar4[6] = uVar6;
    puVar4[9] = uVar18;
    puVar4[8] = uVar17;
    puVar4[0xb] = uVar14;
    puVar4[10] = uVar13;
    puVar4[0xd] = uVar16;
    puVar4[0xc] = uVar15;
    puVar4[0xe] = uVar5;
    FUN_1004df818();
  }
  *(int *)(puVar4 + 0x1e) = (int)uVar7;
  puVar4[0x1f] = uVar8;
  puVar4[0x20] = uVar9;
  puVar4[0x21] = uVar12;
  *(byte *)(puVar4 + 0x22) = bVar11 & 1;
  puVar4[0x23] = uVar10;
  puVar4[0x24] = uVar6;
  auVar20._8_8_ = puVar4 + 0x1e;
  auVar20._0_8_ = FUN_1004cbb78;
  return auVar20;
}

