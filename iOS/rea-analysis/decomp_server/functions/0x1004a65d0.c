// rea decompile_all
// name: FUN_1004a65d0
// address: 0x1004a65d0
// body: available
// range: 0x1004a65d0-0x1004a66e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1004a65d0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  
  puVar2 = (undefined8 *)0x1a0;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar2 = _malloc(0x1a0);
  }
  else {
    _swift_coroFrameAlloc(0x1a0,0x903a);
  }
  *param_1 = puVar2;
  puVar2[0x32] = unaff_x20;
  if (*(char *)(unaff_x20 + 0xc) == '\x04') {
    uVar4 = unaff_x20[6];
    uVar3 = unaff_x20[7];
    uVar5 = unaff_x20[4];
    uVar9 = unaff_x20[5];
    uVar6 = unaff_x20[2];
    uVar7 = unaff_x20[3];
    uVar8 = *unaff_x20;
    bVar10 = *(byte *)(unaff_x20 + 1);
    *puVar2 = uVar8;
    *(byte *)(puVar2 + 1) = bVar10;
    uVar1 = *(undefined4 *)((long)unaff_x20 + 9);
    *(undefined4 *)((long)puVar2 + 0xc) = *(undefined4 *)((long)unaff_x20 + 0xc);
    *(undefined4 *)((long)puVar2 + 9) = uVar1;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    puVar2[4] = uVar5;
    puVar2[5] = uVar9;
    puVar2[6] = uVar4;
    puVar2[7] = uVar3;
    uVar11 = unaff_x20[8];
    uVar13 = unaff_x20[0xb];
    uVar12 = unaff_x20[10];
    puVar2[9] = unaff_x20[9];
    puVar2[8] = uVar11;
    puVar2[0xb] = uVar13;
    puVar2[10] = uVar12;
    *(undefined1 *)(puVar2 + 0xc) = 4;
    FUN_1004b8d5c(puVar2,puVar2 + 0xd);
  }
  else {
    uVar8 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0xc000000000000000;
    uVar7 = 0xe000000000000000;
    bVar10 = 1;
    uVar9 = 0xe000000000000000;
  }
  *(byte *)(puVar2 + 0x33) = bVar10 & 1;
  puVar2[0x1a] = uVar8;
  *(byte *)(puVar2 + 0x1b) = bVar10 & 1;
  puVar2[0x1c] = uVar6;
  puVar2[0x1d] = uVar7;
  puVar2[0x1e] = uVar5;
  puVar2[0x1f] = uVar9;
  puVar2[0x20] = uVar4;
  puVar2[0x21] = uVar3;
  auVar14._8_8_ = puVar2 + 0x1a;
  auVar14._0_8_ = FUN_1004a66e4;
  return auVar14;
}

