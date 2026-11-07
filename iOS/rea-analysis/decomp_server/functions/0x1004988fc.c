// rea decompile_all
// name: FUN_1004988fc
// address: 0x1004988fc
// body: available
// range: 0x1004988fc-0x100498a4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1004988fc(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined3 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte bVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  
  puVar4 = (undefined8 *)0xe0;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar4 = _malloc(0xe0);
  }
  else {
    _swift_coroFrameAlloc(0xe0,0xf612);
  }
  *param_1 = puVar4;
  puVar4[0x1b] = unaff_x20;
  uVar6 = *unaff_x20;
  uVar7 = unaff_x20[1];
  bVar11 = *(byte *)(unaff_x20 + 2);
  uVar2 = *(undefined1 *)((long)unaff_x20 + 0x17);
  uVar3 = *(undefined3 *)((long)unaff_x20 + 0x15);
  uVar1 = *(undefined4 *)((long)unaff_x20 + 0x11);
  uVar10 = unaff_x20[3];
  uVar12 = unaff_x20[4];
  uVar8 = unaff_x20[5];
  uVar9 = unaff_x20[6];
  uVar14 = unaff_x20[8];
  uVar13 = unaff_x20[7];
  uVar5 = unaff_x20[9];
  if ((((uVar12 < 0xffffffff00000000) || (uVar13 >> 0x20 != 0)) ||
      ((uVar5 & 0x3000000000000000) != 0)) &&
     (((uint)(uVar5 >> 0x3b) & 6 | (uint)(uVar13 >> 0x3f)) == 4)) {
    *puVar4 = uVar6;
    puVar4[1] = uVar7;
    *(byte *)(puVar4 + 2) = bVar11;
    *(undefined4 *)((long)puVar4 + 0x11) = uVar1;
    *(undefined1 *)((long)puVar4 + 0x17) = uVar2;
    *(short *)((long)puVar4 + 0x15) = (short)uVar3;
    puVar4[3] = uVar10;
    puVar4[4] = uVar12;
    puVar4[5] = uVar8;
    puVar4[6] = uVar9;
    puVar4[8] = uVar14;
    puVar4[7] = uVar13;
    puVar4[9] = uVar5;
    FUN_10049d5cc();
  }
  else {
    uVar6 = 0;
    uVar7 = 0;
    uVar10 = 0;
    uVar8 = 0;
    uVar9 = 0xc000000000000000;
    bVar11 = 1;
    uVar12 = 1;
  }
  *(int *)(puVar4 + 0x14) = (int)uVar6;
  puVar4[0x15] = uVar7;
  *(byte *)(puVar4 + 0x16) = bVar11 & 1;
  puVar4[0x17] = uVar10;
  *(byte *)(puVar4 + 0x18) = (byte)uVar12 & 1;
  puVar4[0x19] = uVar8;
  puVar4[0x1a] = uVar9;
  auVar15._8_8_ = puVar4 + 0x14;
  auVar15._0_8_ = FUN_100498a50;
  return auVar15;
}

