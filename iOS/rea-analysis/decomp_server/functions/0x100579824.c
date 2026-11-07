// rea decompile_all
// name: FUN_100579824
// address: 0x100579824
// body: available
// range: 0x100579824-0x100579947 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100579824(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  
  puVar1 = (undefined8 *)0x1a0;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar1 = _malloc(0x1a0);
  }
  else {
    _swift_coroFrameAlloc(0x1a0,0x47f3);
  }
  *param_1 = puVar1;
  puVar1[0x33] = unaff_x20;
  lVar7 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar7 + 0x28,puVar1 + 0x2d,0,0);
  uVar8 = *(undefined8 *)(lVar7 + 0x28);
  puVar1[1] = *(undefined8 *)(lVar7 + 0x30);
  *puVar1 = uVar8;
  uVar9 = *(undefined8 *)(lVar7 + 0x40);
  uVar8 = *(undefined8 *)(lVar7 + 0x38);
  uVar11 = *(undefined8 *)(lVar7 + 0x50);
  uVar10 = *(undefined8 *)(lVar7 + 0x48);
  uVar13 = *(undefined8 *)(lVar7 + 0x60);
  uVar12 = *(undefined8 *)(lVar7 + 0x58);
  puVar1[8] = *(undefined8 *)(lVar7 + 0x68);
  puVar1[5] = uVar11;
  puVar1[4] = uVar10;
  puVar1[7] = uVar13;
  puVar1[6] = uVar12;
  puVar1[3] = uVar9;
  puVar1[2] = uVar8;
  if ((undefined *)*puVar1 == (undefined *)0x0) {
    uVar9 = 0xc000000000000000;
    uVar8 = 0;
    uVar10 = 0;
    uVar11 = 0;
    uVar4 = 2;
    uVar5 = 2;
    uVar6 = 2;
    uVar12 = 0;
    uVar13 = 0;
    puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar3 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  }
  else {
    uVar9 = puVar1[2];
    uVar8 = puVar1[1];
    uVar4 = *(undefined1 *)(puVar1 + 4);
    uVar5 = *(undefined1 *)((long)puVar1 + 0x21);
    uVar6 = *(undefined1 *)((long)puVar1 + 0x22);
    uVar11 = puVar1[6];
    uVar10 = puVar1[5];
    uVar13 = puVar1[8];
    uVar12 = puVar1[7];
    puVar2 = (undefined *)*puVar1;
    puVar3 = (undefined *)puVar1[3];
  }
  puVar1[9] = puVar2;
  puVar1[0xb] = uVar9;
  puVar1[10] = uVar8;
  puVar1[0xc] = puVar3;
  *(undefined1 *)(puVar1 + 0xd) = uVar4;
  *(undefined1 *)((long)puVar1 + 0x69) = uVar5;
  *(undefined1 *)((long)puVar1 + 0x6a) = uVar6;
  puVar1[0xf] = uVar11;
  puVar1[0xe] = uVar10;
  puVar1[0x11] = uVar13;
  puVar1[0x10] = uVar12;
  FUN_10007f314(puVar1,puVar1 + 0x12,&DAT_100aab4b8,&DAT_100837c28);
  auVar14._8_8_ = puVar1 + 9;
  auVar14._0_8_ = FUN_100579948;
  return auVar14;
}

