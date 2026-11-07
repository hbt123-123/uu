// rea decompile_all
// name: FUN_1004a6898
// address: 0x1004a6898
// body: available
// range: 0x1004a6898-0x1004a69d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1004a6898(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  
  puVar2 = (undefined8 *)0x1b8;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar2 = _malloc(0x1b8);
  }
  else {
    _swift_coroFrameAlloc(0x1b8,0x9567);
  }
  *param_1 = puVar2;
  puVar2[0x35] = unaff_x20;
  if (*(char *)(unaff_x20 + 0xc) == '\x05') {
    uVar8 = unaff_x20[7];
    uVar7 = unaff_x20[8];
    uVar3 = unaff_x20[5];
    uVar9 = unaff_x20[6];
    uVar11 = unaff_x20[3];
    uVar6 = unaff_x20[4];
    uVar10 = unaff_x20[2];
    uVar5 = *unaff_x20;
    bVar4 = *(byte *)(unaff_x20 + 1);
    *puVar2 = uVar5;
    *(byte *)(puVar2 + 1) = bVar4;
    uVar1 = *(undefined4 *)((long)unaff_x20 + 9);
    *(undefined4 *)((long)puVar2 + 0xc) = *(undefined4 *)((long)unaff_x20 + 0xc);
    *(undefined4 *)((long)puVar2 + 9) = uVar1;
    puVar2[2] = uVar10;
    puVar2[3] = uVar11;
    puVar2[4] = uVar6;
    puVar2[5] = uVar3;
    puVar2[6] = uVar9;
    puVar2[7] = uVar8;
    puVar2[8] = uVar7;
    uVar13 = unaff_x20[10];
    uVar12 = unaff_x20[9];
    puVar2[0xb] = unaff_x20[0xb];
    puVar2[10] = uVar13;
    puVar2[9] = uVar12;
    *(undefined1 *)(puVar2 + 0xc) = 5;
    FUN_1004b8d5c(puVar2,puVar2 + 0xd);
  }
  else {
    uVar5 = 0;
    uVar10 = 0;
    uVar6 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0xf000000000000000;
    uVar3 = 0xc000000000000000;
    uVar11 = 0xe000000000000000;
    bVar4 = 1;
  }
  *(byte *)(puVar2 + 0x36) = bVar4 & 1;
  puVar2[0x1a] = uVar5;
  *(byte *)(puVar2 + 0x1b) = bVar4 & 1;
  puVar2[0x1c] = uVar10;
  puVar2[0x1d] = uVar11;
  puVar2[0x1e] = uVar6;
  puVar2[0x1f] = uVar3;
  puVar2[0x20] = uVar9;
  puVar2[0x21] = uVar8;
  puVar2[0x22] = uVar7;
  auVar14._8_8_ = puVar2 + 0x1a;
  auVar14._0_8_ = FUN_1004a69d4;
  return auVar14;
}

