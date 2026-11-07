// rea decompile_all
// name: FUN_10057b58c
// address: 0x10057b58c
// body: available
// range: 0x10057b58c-0x10057b67f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10057b58c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  
  puVar1 = (undefined8 *)0x1b8;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar1 = _malloc(0x1b8);
  }
  else {
    _swift_coroFrameAlloc(0x1b8,0x2801);
  }
  *param_1 = puVar1;
  puVar1[0x36] = unaff_x20;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar1[1] = *(undefined8 *)(unaff_x20 + 0x30);
  *puVar1 = uVar5;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(unaff_x20 + 0x68);
  puVar1[5] = uVar6;
  puVar1[4] = uVar5;
  puVar1[7] = uVar8;
  puVar1[6] = uVar7;
  puVar1[3] = uVar10;
  puVar1[2] = uVar9;
  if ((undefined *)*puVar1 == (undefined *)0x0) {
    uVar6 = 0xc000000000000000;
    uVar5 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar3 = 2;
    uVar9 = 0;
    uVar10 = 0;
    puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar4 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  }
  else {
    uVar6 = puVar1[2];
    uVar5 = puVar1[1];
    uVar8 = puVar1[5];
    uVar7 = puVar1[4];
    uVar10 = puVar1[7];
    uVar9 = puVar1[6];
    uVar3 = *(undefined1 *)(puVar1 + 8);
    puVar2 = (undefined *)*puVar1;
    puVar4 = (undefined *)puVar1[3];
  }
  puVar1[9] = puVar2;
  puVar1[0xb] = uVar6;
  puVar1[10] = uVar5;
  puVar1[0xc] = puVar4;
  puVar1[0xe] = uVar8;
  puVar1[0xd] = uVar7;
  puVar1[0x10] = uVar10;
  puVar1[0xf] = uVar9;
  *(undefined1 *)(puVar1 + 0x11) = uVar3;
  FUN_10007f314(puVar1,puVar1 + 0x12,&DAT_100aab4a8,&DAT_10083e020);
  auVar11._8_8_ = puVar1 + 9;
  auVar11._0_8_ = FUN_10057b680;
  return auVar11;
}

