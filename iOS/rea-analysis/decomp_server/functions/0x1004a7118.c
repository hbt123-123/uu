// rea decompile_all
// name: FUN_1004a7118
// address: 0x1004a7118
// body: available
// range: 0x1004a7118-0x1004a7203 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1004a7118(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  
  puVar1 = (undefined8 *)0x100;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar1 = _malloc(0x100);
  }
  else {
    _swift_coroFrameAlloc(0x100,0x3de);
  }
  *param_1 = puVar1;
  puVar1[0x1f] = unaff_x20;
  if (*(char *)(unaff_x20 + 0xc) == '\a') {
    uVar3 = unaff_x20[3];
    uVar2 = unaff_x20[4];
    uVar6 = unaff_x20[1];
    puVar4 = (undefined *)unaff_x20[2];
    uVar5 = *unaff_x20;
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    puVar1[2] = puVar4;
    puVar1[3] = uVar3;
    puVar1[4] = uVar2;
    uVar8 = unaff_x20[6];
    uVar7 = unaff_x20[5];
    uVar10 = unaff_x20[8];
    uVar9 = unaff_x20[7];
    uVar12 = unaff_x20[10];
    uVar11 = unaff_x20[9];
    puVar1[0xb] = unaff_x20[0xb];
    puVar1[10] = uVar12;
    puVar1[9] = uVar11;
    puVar1[8] = uVar10;
    puVar1[7] = uVar9;
    puVar1[6] = uVar8;
    puVar1[5] = uVar7;
    *(undefined1 *)(puVar1 + 0xc) = 7;
    FUN_1004b8d5c(puVar1,puVar1 + 0xd);
  }
  else {
    uVar5 = 0;
    uVar3 = 0;
    uVar2 = 0xc000000000000000;
    uVar6 = 0xe000000000000000;
    puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  puVar1[0x1a] = uVar5;
  puVar1[0x1b] = uVar6;
  puVar1[0x1c] = puVar4;
  puVar1[0x1d] = uVar3;
  puVar1[0x1e] = uVar2;
  auVar13._8_8_ = puVar1 + 0x1a;
  auVar13._0_8_ = FUN_1004a7204;
  return auVar13;
}

