// rea decompile_all
// name: FUN_1004cd7c8
// address: 0x1004cd7c8
// body: available
// range: 0x1004cd7c8-0x1004cd8d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1004cd7c8(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  
  puVar1 = (undefined8 *)0x120;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar1 = _malloc(0x120);
  }
  else {
    _swift_coroFrameAlloc(0x120,0x998e);
  }
  *param_1 = puVar1;
  puVar1[0x23] = unaff_x20;
  uVar4 = *unaff_x20;
  uVar5 = unaff_x20[1];
  uVar7 = unaff_x20[2];
  uVar6 = unaff_x20[3];
  uVar16 = unaff_x20[5];
  uVar3 = unaff_x20[4];
  uVar9 = unaff_x20[7];
  uVar8 = unaff_x20[6];
  uVar11 = unaff_x20[9];
  uVar10 = unaff_x20[8];
  uVar13 = unaff_x20[0xb];
  uVar12 = unaff_x20[10];
  uVar15 = unaff_x20[0xd];
  uVar14 = unaff_x20[0xc];
  uVar2 = unaff_x20[0xe];
  if (((uVar14 >> 8 == 0xffffffff) && ((uVar2 & 0x3000000000000000) == 0)) ||
     (((uint)(uVar2 >> 0x39) & 0x18 | (uint)(uVar14 >> 0x3d)) != 0x16)) {
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar3 = 0xc000000000000000;
    uVar7 = 0xe000000000000000;
  }
  else {
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar7;
    puVar1[3] = uVar6;
    puVar1[5] = uVar16;
    puVar1[4] = uVar3;
    puVar1[7] = uVar9;
    puVar1[6] = uVar8;
    puVar1[9] = uVar11;
    puVar1[8] = uVar10;
    puVar1[0xb] = uVar13;
    puVar1[10] = uVar12;
    puVar1[0xd] = uVar15;
    puVar1[0xc] = uVar14;
    puVar1[0xe] = uVar2;
    FUN_1004df818();
  }
  *(int *)(puVar1 + 0x1e) = (int)uVar4;
  puVar1[0x1f] = uVar5;
  puVar1[0x20] = uVar7;
  puVar1[0x21] = uVar6;
  puVar1[0x22] = uVar3;
  auVar17._8_8_ = puVar1 + 0x1e;
  auVar17._0_8_ = FUN_1004cd8d4;
  return auVar17;
}

