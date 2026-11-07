// rea decompile_all
// name: FUN_1004a6cf8
// address: 0x1004a6cf8
// body: available
// range: 0x1004a6cf8-0x1004a6e4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1004a6cf8(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte bVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined8 local_68;
  
  puVar2 = (undefined8 *)0x200;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar2 = _malloc(0x200);
  }
  else {
    _swift_coroFrameAlloc(0x200,0x2847);
  }
  *param_1 = puVar2;
  puVar2[0x3e] = unaff_x20;
  if (*(char *)(unaff_x20 + 0xc) == '\x06') {
    uVar5 = unaff_x20[10];
    local_68 = unaff_x20[0xb];
    uVar8 = unaff_x20[8];
    uVar7 = unaff_x20[9];
    uVar9 = unaff_x20[6];
    uVar13 = unaff_x20[7];
    uVar3 = unaff_x20[5];
    puVar12 = (undefined *)unaff_x20[2];
    uVar4 = unaff_x20[3];
    uVar6 = *unaff_x20;
    uVar10 = unaff_x20[1];
    bVar11 = *(byte *)(unaff_x20 + 4);
    *puVar2 = uVar6;
    puVar2[1] = uVar10;
    puVar2[2] = puVar12;
    puVar2[3] = uVar4;
    *(byte *)(puVar2 + 4) = bVar11;
    uVar1 = *(undefined4 *)((long)unaff_x20 + 0x21);
    *(undefined4 *)((long)puVar2 + 0x24) = *(undefined4 *)((long)unaff_x20 + 0x24);
    *(undefined4 *)((long)puVar2 + 0x21) = uVar1;
    puVar2[5] = uVar3;
    puVar2[6] = uVar9;
    puVar2[7] = uVar13;
    puVar2[8] = uVar8;
    puVar2[9] = uVar7;
    puVar2[10] = uVar5;
    puVar2[0xb] = local_68;
    *(undefined1 *)(puVar2 + 0xc) = 6;
    FUN_1004b8d5c(puVar2,puVar2 + 0xd);
  }
  else {
    uVar6 = 0;
    uVar4 = 0;
    uVar3 = 0;
    uVar13 = 0;
    uVar7 = 0;
    uVar5 = 0;
    local_68 = 0xf000000000000000;
    uVar9 = 0xc000000000000000;
    bVar11 = 1;
    uVar10 = 0xe000000000000000;
    uVar8 = 0xc000000000000000;
    puVar12 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  *(byte *)(puVar2 + 0x3f) = bVar11 & 1;
  puVar2[0x1a] = uVar6;
  puVar2[0x1b] = uVar10;
  puVar2[0x1c] = puVar12;
  puVar2[0x1d] = uVar4;
  *(byte *)(puVar2 + 0x1e) = bVar11 & 1;
  puVar2[0x1f] = uVar3;
  puVar2[0x20] = uVar9;
  puVar2[0x21] = uVar13;
  puVar2[0x22] = uVar8;
  puVar2[0x23] = uVar7;
  puVar2[0x24] = uVar5;
  puVar2[0x25] = local_68;
  auVar14._8_8_ = puVar2 + 0x1a;
  auVar14._0_8_ = FUN_1004a6e50;
  return auVar14;
}

