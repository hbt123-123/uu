// rea decompile_all
// name: FUN_1004cb610
// address: 0x1004cb610
// body: available
// range: 0x1004cb610-0x1004cb757 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1004cb610(undefined8 *param_1)

{
  undefined3 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 *unaff_x20;
  undefined4 uVar5;
  byte bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  
  puVar2 = (undefined4 *)0x120;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar2 = _malloc(0x120);
  }
  else {
    _swift_coroFrameAlloc(0x120,0x4e3);
  }
  *param_1 = puVar2;
  *(undefined4 **)(puVar2 + 0x46) = unaff_x20;
  uVar5 = *unaff_x20;
  bVar6 = *(byte *)(unaff_x20 + 1);
  uVar1 = *(undefined3 *)((long)unaff_x20 + 5);
  uVar7 = *(undefined8 *)(unaff_x20 + 2);
  uVar9 = *(undefined8 *)(unaff_x20 + 4);
  uVar8 = *(undefined8 *)(unaff_x20 + 6);
  uVar18 = *(undefined8 *)(unaff_x20 + 10);
  uVar3 = *(undefined8 *)(unaff_x20 + 8);
  uVar11 = *(undefined8 *)(unaff_x20 + 0xe);
  uVar10 = *(undefined8 *)(unaff_x20 + 0xc);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x12);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x16);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x14);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x1a);
  uVar16 = *(ulong *)(unaff_x20 + 0x18);
  uVar4 = *(ulong *)(unaff_x20 + 0x1c);
  if (((uVar16 >> 8 == 0xffffffff) && ((uVar4 & 0x3000000000000000) == 0)) ||
     (((uint)(uVar4 >> 0x39) & 0x18 | (uint)(uVar16 >> 0x3d)) != 10)) {
    uVar5 = 0;
    bVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar3 = 0xc000000000000000;
    uVar9 = 0xe000000000000000;
  }
  else {
    *puVar2 = uVar5;
    *(byte *)(puVar2 + 1) = bVar6;
    *(short *)((long)puVar2 + 5) = (short)uVar1;
    *(char *)((long)puVar2 + 7) = (char)((uint3)uVar1 >> 0x10);
    *(undefined8 *)(puVar2 + 2) = uVar7;
    *(undefined8 *)(puVar2 + 4) = uVar9;
    *(undefined8 *)(puVar2 + 6) = uVar8;
    *(undefined8 *)(puVar2 + 10) = uVar18;
    *(undefined8 *)(puVar2 + 8) = uVar3;
    *(undefined8 *)(puVar2 + 0xe) = uVar11;
    *(undefined8 *)(puVar2 + 0xc) = uVar10;
    *(undefined8 *)(puVar2 + 0x12) = uVar13;
    *(undefined8 *)(puVar2 + 0x10) = uVar12;
    *(undefined8 *)(puVar2 + 0x16) = uVar15;
    *(undefined8 *)(puVar2 + 0x14) = uVar14;
    *(undefined8 *)(puVar2 + 0x1a) = uVar17;
    *(ulong *)(puVar2 + 0x18) = uVar16;
    *(ulong *)(puVar2 + 0x1c) = uVar4;
    FUN_1004df818();
  }
  puVar2[0x3c] = uVar5;
  *(byte *)(puVar2 + 0x3d) = bVar6 & 1;
  *(undefined8 *)(puVar2 + 0x3e) = uVar7;
  *(undefined8 *)(puVar2 + 0x40) = uVar9;
  *(undefined8 *)(puVar2 + 0x42) = uVar8;
  *(undefined8 *)(puVar2 + 0x44) = uVar3;
  auVar19._8_8_ = puVar2 + 0x3c;
  auVar19._0_8_ = FUN_1004cb758;
  return auVar19;
}

