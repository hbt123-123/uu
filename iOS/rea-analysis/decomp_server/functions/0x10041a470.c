// rea decompile_all
// name: FUN_10041a470
// address: 0x10041a470
// body: available
// range: 0x10041a470-0x10041a5a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10041a470(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined3 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte bVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  
  puVar4 = (undefined8 *)0xc0;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar4 = _malloc(0xc0);
  }
  else {
    _swift_coroFrameAlloc(0xc0,0x743d);
  }
  *param_1 = puVar4;
  puVar4[0x17] = unaff_x20;
  uVar12 = unaff_x20[5];
  uVar7 = unaff_x20[4];
  uVar14 = unaff_x20[7];
  uVar13 = unaff_x20[6];
  uVar5 = unaff_x20[8];
  if ((((uVar7 & uVar13 & uVar5 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) ||
     (((uint)(uVar5 >> 0x3b) & 6 | (uint)(uVar13 >> 0x3d) & 1) != 3)) {
    uVar8 = 0;
    uVar11 = 0;
    uVar9 = 0;
    uVar6 = 0;
    uVar7 = 0xc000000000000000;
    bVar10 = 1;
  }
  else {
    uVar8 = *unaff_x20;
    uVar9 = unaff_x20[1];
    bVar10 = *(byte *)(unaff_x20 + 2);
    uVar2 = *(undefined1 *)((long)unaff_x20 + 0x17);
    uVar3 = *(undefined3 *)((long)unaff_x20 + 0x15);
    uVar1 = *(undefined4 *)((long)unaff_x20 + 0x11);
    uVar6 = unaff_x20[3];
    uVar11 = (undefined4)((ulong)uVar8 >> 0x20);
    *puVar4 = uVar8;
    puVar4[1] = uVar9;
    *(byte *)(puVar4 + 2) = bVar10;
    *(undefined4 *)((long)puVar4 + 0x11) = uVar1;
    *(undefined1 *)((long)puVar4 + 0x17) = uVar2;
    *(short *)((long)puVar4 + 0x15) = (short)uVar3;
    puVar4[3] = uVar6;
    puVar4[5] = uVar12;
    puVar4[4] = uVar7;
    puVar4[7] = uVar14;
    puVar4[6] = uVar13;
    puVar4[8] = uVar5;
    FUN_10042d20c();
  }
  *(int *)(puVar4 + 0x12) = (int)uVar8;
  *(undefined4 *)((long)puVar4 + 0x94) = uVar11;
  puVar4[0x13] = uVar9;
  *(byte *)(puVar4 + 0x14) = bVar10 & 1;
  puVar4[0x15] = uVar6;
  puVar4[0x16] = uVar7;
  auVar15._8_8_ = puVar4 + 0x12;
  auVar15._0_8_ = FUN_10041a5a4;
  return auVar15;
}

