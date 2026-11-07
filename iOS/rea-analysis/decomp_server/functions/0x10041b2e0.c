// rea decompile_all
// name: FUN_10041b2e0
// address: 0x10041b2e0
// body: available
// range: 0x10041b2e0-0x10041b3fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10041b2e0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined3 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  
  puVar4 = (undefined8 *)0xb8;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar4 = _malloc(0xb8);
  }
  else {
    _swift_coroFrameAlloc(0xb8,0x9b40);
  }
  *param_1 = puVar4;
  puVar4[0x16] = unaff_x20;
  uVar11 = unaff_x20[5];
  uVar10 = unaff_x20[4];
  uVar13 = unaff_x20[7];
  uVar12 = unaff_x20[6];
  uVar5 = unaff_x20[8];
  if ((((uVar10 & uVar12 & uVar5 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) ||
     (((uint)(uVar5 >> 0x3b) & 6 | (uint)(uVar12 >> 0x3d) & 1) != 7)) {
    uVar7 = 0;
    uVar9 = 0;
    uVar6 = 0xc000000000000000;
    bVar8 = 1;
  }
  else {
    uVar7 = *unaff_x20;
    bVar8 = *(byte *)(unaff_x20 + 1);
    uVar2 = *(undefined1 *)((long)unaff_x20 + 0xf);
    uVar3 = *(undefined3 *)((long)unaff_x20 + 0xd);
    uVar1 = *(undefined4 *)((long)unaff_x20 + 9);
    uVar9 = unaff_x20[2];
    uVar6 = unaff_x20[3];
    *puVar4 = uVar7;
    *(byte *)(puVar4 + 1) = bVar8;
    *(undefined4 *)((long)puVar4 + 9) = uVar1;
    *(undefined1 *)((long)puVar4 + 0xf) = uVar2;
    *(short *)((long)puVar4 + 0xd) = (short)uVar3;
    puVar4[2] = uVar9;
    puVar4[3] = uVar6;
    puVar4[5] = uVar11;
    puVar4[4] = uVar10;
    puVar4[7] = uVar13;
    puVar4[6] = uVar12;
    puVar4[8] = uVar5;
    FUN_10042d20c();
  }
  puVar4[0x12] = uVar7;
  *(byte *)(puVar4 + 0x13) = bVar8 & 1;
  puVar4[0x14] = uVar9;
  puVar4[0x15] = uVar6;
  auVar14._8_8_ = puVar4 + 0x12;
  auVar14._0_8_ = FUN_10041b3fc;
  return auVar14;
}

