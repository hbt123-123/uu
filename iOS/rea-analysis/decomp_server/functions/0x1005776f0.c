// rea decompile_all
// name: FUN_1005776f0
// address: 0x1005776f0
// body: available
// range: 0x1005776f0-0x1005777eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1005776f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  
  puVar1 = (undefined8 *)0x1e8;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar1 = _malloc(0x1e8);
  }
  else {
    _swift_coroFrameAlloc(0x1e8,0x9513);
  }
  *param_1 = puVar1;
  puVar1[0x3c] = unaff_x20;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar1[1] = *(undefined8 *)(unaff_x20 + 0x28);
  *puVar1 = uVar6;
  uVar10 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x59);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)((long)puVar1 + 0x41) = *(undefined8 *)(unaff_x20 + 0x61);
  *(undefined8 *)((long)puVar1 + 0x39) = uVar8;
  puVar1[5] = uVar10;
  puVar1[4] = uVar9;
  puVar1[7] = uVar7;
  puVar1[6] = uVar6;
  puVar1[3] = uVar12;
  puVar1[2] = uVar11;
  if ((undefined *)*puVar1 == (undefined *)0x0) {
    uVar7 = 0xc000000000000000;
    uVar6 = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar3 = 2;
    uVar10 = 0;
    uVar11 = 0;
    puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar4 = PTR___swiftEmptyDictionarySingleton_100995ea8;
    puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    uVar7 = puVar1[3];
    uVar6 = puVar1[2];
    uVar9 = puVar1[6];
    uVar8 = puVar1[5];
    uVar11 = puVar1[8];
    uVar10 = puVar1[7];
    uVar3 = *(undefined1 *)(puVar1 + 9);
    puVar2 = (undefined *)*puVar1;
    puVar4 = (undefined *)puVar1[4];
    puVar5 = (undefined *)puVar1[1];
  }
  puVar1[10] = puVar2;
  puVar1[0xb] = puVar5;
  puVar1[0xd] = uVar7;
  puVar1[0xc] = uVar6;
  puVar1[0xe] = puVar4;
  puVar1[0x10] = uVar9;
  puVar1[0xf] = uVar8;
  puVar1[0x12] = uVar11;
  puVar1[0x11] = uVar10;
  *(undefined1 *)(puVar1 + 0x13) = uVar3;
  FUN_10007f314(puVar1,puVar1 + 0x14,&DAT_100aab4f8,&DAT_100838f20);
  auVar13._8_8_ = puVar1 + 10;
  auVar13._0_8_ = FUN_1005777ec;
  return auVar13;
}

