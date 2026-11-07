// rea decompile_all
// name: FUN_1004c9958
// address: 0x1004c9958
// body: available
// range: 0x1004c9958-0x1004c9ae7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1004c9958(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined3 uVar5;
  undefined3 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  byte bVar14;
  byte bVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  
  puVar7 = (undefined8 *)0x130;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar7 = _malloc(0x130);
  }
  else {
    _swift_coroFrameAlloc(0x130,0xc1);
  }
  *param_1 = puVar7;
  puVar7[0x25] = unaff_x20;
  uVar10 = *unaff_x20;
  uVar11 = unaff_x20[1];
  bVar14 = *(byte *)(unaff_x20 + 2);
  uVar3 = *(undefined1 *)((long)unaff_x20 + 0x17);
  uVar5 = *(undefined3 *)((long)unaff_x20 + 0x15);
  uVar1 = *(undefined4 *)((long)unaff_x20 + 0x11);
  uVar13 = unaff_x20[3];
  bVar15 = *(byte *)(unaff_x20 + 4);
  uVar4 = *(undefined1 *)((long)unaff_x20 + 0x27);
  uVar6 = *(undefined3 *)((long)unaff_x20 + 0x25);
  uVar2 = *(undefined4 *)((long)unaff_x20 + 0x21);
  uVar12 = unaff_x20[5];
  uVar17 = unaff_x20[0xb];
  uVar16 = unaff_x20[10];
  uVar19 = unaff_x20[0xd];
  uVar18 = unaff_x20[0xc];
  uVar22 = unaff_x20[7];
  uVar9 = unaff_x20[6];
  uVar21 = unaff_x20[9];
  uVar20 = unaff_x20[8];
  uVar8 = unaff_x20[0xe];
  if (((uVar18 >> 8 == 0xffffffff) && ((uVar8 & 0x3000000000000000) == 0)) ||
     (((uint)(uVar8 >> 0x39) & 0x18 | (uint)(uVar18 >> 0x3d)) != 1)) {
    uVar10 = 0;
    uVar11 = 0;
    uVar13 = 0;
    uVar12 = 0;
    uVar9 = 0xc000000000000000;
    bVar14 = 1;
    bVar15 = 1;
  }
  else {
    *puVar7 = uVar10;
    puVar7[1] = uVar11;
    *(byte *)(puVar7 + 2) = bVar14;
    *(undefined4 *)((long)puVar7 + 0x11) = uVar1;
    *(undefined1 *)((long)puVar7 + 0x17) = uVar3;
    *(short *)((long)puVar7 + 0x15) = (short)uVar5;
    puVar7[3] = uVar13;
    *(byte *)(puVar7 + 4) = bVar15;
    *(undefined4 *)((long)puVar7 + 0x21) = uVar2;
    *(undefined1 *)((long)puVar7 + 0x27) = uVar4;
    *(short *)((long)puVar7 + 0x25) = (short)uVar6;
    puVar7[5] = uVar12;
    puVar7[7] = uVar22;
    puVar7[6] = uVar9;
    puVar7[9] = uVar21;
    puVar7[8] = uVar20;
    puVar7[0xb] = uVar17;
    puVar7[10] = uVar16;
    puVar7[0xd] = uVar19;
    puVar7[0xc] = uVar18;
    puVar7[0xe] = uVar8;
    FUN_1004df818();
  }
  *(int *)(puVar7 + 0x1e) = (int)uVar10;
  puVar7[0x1f] = uVar11;
  *(byte *)(puVar7 + 0x20) = bVar14 & 1;
  puVar7[0x21] = uVar13;
  *(byte *)(puVar7 + 0x22) = bVar15 & 1;
  puVar7[0x23] = uVar12;
  puVar7[0x24] = uVar9;
  auVar23._8_8_ = puVar7 + 0x1e;
  auVar23._0_8_ = FUN_1004c9ae8;
  return auVar23;
}

