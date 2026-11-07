// rea decompile_all
// name: FUN_1004ca7e0
// address: 0x1004ca7e0
// body: available
// range: 0x1004ca7e0-0x1004ca933 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1004ca7e0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined3 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  byte bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  
  puVar4 = (undefined8 *)0x118;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar4 = _malloc(0x118);
  }
  else {
    _swift_coroFrameAlloc(0x118,0x3d5);
  }
  *param_1 = puVar4;
  puVar4[0x22] = unaff_x20;
  uVar8 = *unaff_x20;
  bVar10 = *(byte *)(unaff_x20 + 1);
  uVar2 = *(undefined1 *)((long)unaff_x20 + 0xf);
  uVar3 = *(undefined3 *)((long)unaff_x20 + 0xd);
  uVar1 = *(undefined4 *)((long)unaff_x20 + 9);
  uVar9 = unaff_x20[2];
  uVar19 = unaff_x20[4];
  uVar6 = unaff_x20[3];
  uVar12 = unaff_x20[6];
  uVar11 = unaff_x20[5];
  uVar14 = unaff_x20[8];
  uVar13 = unaff_x20[7];
  uVar16 = unaff_x20[10];
  uVar15 = unaff_x20[9];
  uVar5 = unaff_x20[0xb];
  uVar18 = unaff_x20[0xd];
  uVar17 = unaff_x20[0xc];
  uVar7 = unaff_x20[0xe];
  if (((uVar17 >> 8 == 0xffffffff) && ((uVar7 & 0x3000000000000000) == 0)) ||
     (((uint)(uVar7 >> 0x39) & 0x18 | (uint)(uVar17 >> 0x3d)) != 4)) {
    uVar8 = 0;
    uVar9 = 0;
    uVar6 = 0xc000000000000000;
    bVar10 = 1;
  }
  else {
    *puVar4 = uVar8;
    *(byte *)(puVar4 + 1) = bVar10;
    *(undefined4 *)((long)puVar4 + 9) = uVar1;
    *(undefined1 *)((long)puVar4 + 0xf) = uVar2;
    *(short *)((long)puVar4 + 0xd) = (short)uVar3;
    puVar4[2] = uVar9;
    puVar4[4] = uVar19;
    puVar4[3] = uVar6;
    puVar4[6] = uVar12;
    puVar4[5] = uVar11;
    puVar4[8] = uVar14;
    puVar4[7] = uVar13;
    puVar4[10] = uVar16;
    puVar4[9] = uVar15;
    puVar4[0xb] = uVar5;
    puVar4[0xd] = uVar18;
    puVar4[0xc] = uVar17;
    puVar4[0xe] = uVar7;
    FUN_1004df818();
  }
  puVar4[0x1e] = uVar8;
  *(byte *)(puVar4 + 0x1f) = bVar10 & 1;
  puVar4[0x20] = uVar9;
  puVar4[0x21] = uVar6;
  auVar20._8_8_ = puVar4 + 0x1e;
  auVar20._0_8_ = FUN_1004ca934;
  return auVar20;
}

