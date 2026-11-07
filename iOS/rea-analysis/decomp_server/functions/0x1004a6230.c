// rea decompile_all
// name: FUN_1004a6230
// address: 0x1004a6230
// body: available
// range: 0x1004a6230-0x1004a6373 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1004a6230(undefined8 *param_1)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte bVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  
  puVar2 = (undefined8 *)0x1a0;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar2 = _malloc(0x1a0);
  }
  else {
    _swift_coroFrameAlloc(0x1a0,0xe528);
  }
  *param_1 = puVar2;
  puVar2[0x32] = unaff_x20;
  if (*(char *)(unaff_x20 + 0xc) == '\x03') {
    uVar5 = unaff_x20[6];
    uVar4 = unaff_x20[7];
    uVar9 = unaff_x20[4];
    uVar6 = unaff_x20[5];
    uVar7 = unaff_x20[3];
    uVar8 = *(undefined4 *)((long)unaff_x20 + 0x14);
    uVar10 = unaff_x20[1];
    bVar11 = *(byte *)(unaff_x20 + 2);
    uVar12 = *unaff_x20;
    *puVar2 = uVar12;
    puVar2[1] = uVar10;
    *(byte *)(puVar2 + 2) = bVar11;
    uVar1 = *(undefined2 *)((long)unaff_x20 + 0x11);
    *(undefined1 *)((long)puVar2 + 0x13) = *(undefined1 *)((long)unaff_x20 + 0x13);
    *(undefined2 *)((long)puVar2 + 0x11) = uVar1;
    *(undefined4 *)((long)puVar2 + 0x14) = uVar8;
    puVar2[3] = uVar7;
    puVar2[4] = uVar9;
    puVar2[5] = uVar6;
    puVar2[6] = uVar5;
    puVar2[7] = uVar4;
    uVar13 = unaff_x20[8];
    uVar15 = unaff_x20[0xb];
    uVar14 = unaff_x20[10];
    puVar2[9] = unaff_x20[9];
    puVar2[8] = uVar13;
    puVar2[0xb] = uVar15;
    puVar2[10] = uVar14;
    *(undefined1 *)(puVar2 + 0xc) = 3;
    FUN_1004b8d5c(puVar2,puVar2 + 0xd);
    uVar3 = (undefined4)uVar12;
  }
  else {
    uVar3 = 0;
    uVar10 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0xf000000000000000;
    uVar9 = 0xc000000000000000;
    bVar11 = 1;
  }
  *(byte *)(puVar2 + 0x33) = bVar11 & 1;
  *(undefined4 *)(puVar2 + 0x1a) = uVar3;
  puVar2[0x1b] = uVar10;
  *(byte *)(puVar2 + 0x1c) = bVar11 & 1;
  *(undefined4 *)((long)puVar2 + 0xe4) = uVar8;
  puVar2[0x1d] = uVar7;
  puVar2[0x1e] = uVar9;
  puVar2[0x1f] = uVar6;
  puVar2[0x20] = uVar5;
  puVar2[0x21] = uVar4;
  auVar16._8_8_ = puVar2 + 0x1a;
  auVar16._0_8_ = FUN_1004a6374;
  return auVar16;
}

