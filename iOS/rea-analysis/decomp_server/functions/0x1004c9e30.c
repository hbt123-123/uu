// rea decompile_all
// name: FUN_1004c9e30
// address: 0x1004c9e30
// body: available
// range: 0x1004c9e30-0x1004c9fab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1004c9e30(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  
  puVar1 = (undefined8 *)0x260;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar1 = _malloc(0x260);
  }
  else {
    _swift_coroFrameAlloc(0x260,0x6f4d);
  }
  *param_1 = puVar1;
  puVar1[0x4b] = unaff_x20;
  uVar5 = *unaff_x20;
  uVar16 = unaff_x20[1];
  uVar17 = unaff_x20[2];
  uVar10 = unaff_x20[3];
  uVar11 = unaff_x20[4];
  uVar12 = unaff_x20[5];
  uVar13 = unaff_x20[6];
  uVar7 = unaff_x20[7];
  uVar8 = unaff_x20[8];
  uVar14 = unaff_x20[9];
  uVar2 = unaff_x20[10];
  uVar9 = unaff_x20[0xb];
  uVar15 = unaff_x20[0xc];
  uVar3 = unaff_x20[0xd];
  uVar4 = unaff_x20[0xe];
  if (((uVar15 >> 8 == 0xffffffff) && ((uVar4 & 0x3000000000000000) == 0)) ||
     (((uint)(uVar4 >> 0x39) & 0x18 | (uint)(uVar15 >> 0x3d)) != 2)) {
    uVar5 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = 0;
    uVar13 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar14 = 0;
    uVar2 = 0;
    uVar9 = 0;
    uVar3 = 0;
    uVar6 = 0xc000000000000000;
    uVar15 = 0xff;
  }
  else {
    uVar6 = uVar4 & 0xcfffffffffffffff;
    puVar1[0xf] = uVar5;
    puVar1[0x10] = uVar16;
    puVar1[0x11] = uVar17;
    puVar1[0x12] = uVar10;
    puVar1[0x13] = uVar11;
    puVar1[0x14] = uVar12;
    puVar1[0x15] = uVar13;
    puVar1[0x16] = uVar7;
    puVar1[0x17] = uVar8;
    puVar1[0x18] = uVar14;
    puVar1[0x19] = uVar2;
    puVar1[0x1a] = uVar9;
    puVar1[0x1b] = uVar15;
    puVar1[0x1c] = uVar3;
    puVar1[0x1d] = uVar4;
    FUN_1004df818(puVar1 + 0xf,puVar1 + 0x1e);
  }
  *puVar1 = uVar5;
  puVar1[1] = uVar16;
  puVar1[2] = uVar17;
  puVar1[3] = uVar10;
  puVar1[4] = uVar11;
  puVar1[5] = uVar12;
  puVar1[6] = uVar13;
  puVar1[7] = uVar7;
  puVar1[8] = uVar8;
  puVar1[9] = uVar14;
  puVar1[10] = uVar2;
  puVar1[0xb] = uVar9;
  *(char *)(puVar1 + 0xc) = (char)uVar15;
  puVar1[0xd] = uVar3;
  puVar1[0xe] = uVar6;
  auVar18._8_8_ = puVar1;
  auVar18._0_8_ = FUN_1004c9fac;
  return auVar18;
}

