// rea decompile_all
// name: FUN_100497efc
// address: 0x100497efc
// body: available
// range: 0x100497efc-0x10049804f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100497efc(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 *unaff_x20;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  
  puVar1 = (undefined4 *)0x198;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar1 = _malloc(0x198);
  }
  else {
    _swift_coroFrameAlloc(0x198,0x4d83);
  }
  *param_1 = puVar1;
  *(undefined8 **)(puVar1 + 100) = unaff_x20;
  uVar5 = *unaff_x20;
  uVar6 = unaff_x20[1];
  uVar7 = unaff_x20[2];
  uVar11 = unaff_x20[3];
  uVar8 = unaff_x20[4];
  uVar16 = unaff_x20[6];
  uVar15 = unaff_x20[5];
  uVar10 = unaff_x20[7];
  uVar9 = unaff_x20[8];
  uVar3 = unaff_x20[9];
  uVar13 = 0;
  uVar14 = 0;
  if ((((uVar8 < 0xffffffff00000000) || (uVar10 >> 0x20 != 0)) ||
      ((uVar3 & 0x3000000000000000) != 0)) &&
     (((uint)(uVar3 >> 0x3b) & 6 | (uint)(uVar10 >> 0x3f)) == 1)) {
    uVar4 = uVar3 & 0xcfffffffffffffff;
    *(undefined8 *)(puVar1 + 0x14) = uVar5;
    *(undefined8 *)(puVar1 + 0x16) = uVar6;
    uVar12 = (undefined4)((ulong)uVar6 >> 0x20);
    *(undefined8 *)(puVar1 + 0x18) = uVar7;
    *(undefined8 *)(puVar1 + 0x1a) = uVar11;
    *(ulong *)(puVar1 + 0x1c) = uVar8;
    *(undefined8 *)(puVar1 + 0x20) = uVar16;
    *(undefined8 *)(puVar1 + 0x1e) = uVar15;
    *(ulong *)(puVar1 + 0x22) = uVar10;
    *(undefined8 *)(puVar1 + 0x24) = uVar9;
    *(ulong *)(puVar1 + 0x26) = uVar3;
    FUN_10049d5cc(puVar1 + 0x14,puVar1 + 0x28);
    uVar2 = (undefined4)((ulong)uVar5 >> 0x20);
    uVar13 = uVar15;
    uVar14 = uVar16;
  }
  else {
    uVar5 = 0;
    uVar2 = 0;
    uVar6 = 0;
    uVar12 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar11 = 0xc000000000000000;
    uVar4 = 0xc000000000000000;
  }
  *puVar1 = (int)uVar5;
  puVar1[1] = uVar2;
  puVar1[2] = (int)uVar6;
  puVar1[3] = uVar12;
  *(undefined8 *)(puVar1 + 4) = uVar7;
  *(undefined8 *)(puVar1 + 6) = uVar11;
  puVar1[8] = (int)uVar8;
  *(undefined8 *)(puVar1 + 0xc) = uVar14;
  *(undefined8 *)(puVar1 + 10) = uVar13;
  puVar1[0xe] = (int)uVar10;
  *(undefined8 *)(puVar1 + 0x10) = uVar9;
  *(ulong *)(puVar1 + 0x12) = uVar4;
  auVar17._8_8_ = puVar1;
  auVar17._0_8_ = FUN_100498050;
  return auVar17;
}

