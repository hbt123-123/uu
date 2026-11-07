// rea decompile_all
// name: FUN_100578d50
// address: 0x100578d50
// body: available
// range: 0x100578d50-0x100578e1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100578d50(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  
  puVar1 = (undefined8 *)0x188;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar1 = _malloc(0x188);
  }
  else {
    _swift_coroFrameAlloc(0x188,0x826b);
  }
  *param_1 = puVar1;
  puVar1[0x30] = unaff_x20;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar1[5] = *(undefined8 *)(unaff_x20 + 0x48);
  puVar1[4] = uVar4;
  puVar1[7] = uVar6;
  puVar1[6] = uVar5;
  puVar1[1] = uVar10;
  *puVar1 = uVar9;
  puVar1[3] = uVar8;
  puVar1[2] = uVar7;
  if ((undefined *)*puVar1 == (undefined *)0x0) {
    uVar5 = 0xc000000000000000;
    uVar4 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0;
    puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar3 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  }
  else {
    uVar5 = puVar1[2];
    uVar4 = puVar1[1];
    uVar7 = puVar1[5];
    uVar6 = puVar1[4];
    uVar9 = puVar1[7];
    uVar8 = puVar1[6];
    puVar2 = (undefined *)*puVar1;
    puVar3 = (undefined *)puVar1[3];
  }
  puVar1[8] = puVar2;
  puVar1[10] = uVar5;
  puVar1[9] = uVar4;
  puVar1[0xb] = puVar3;
  puVar1[0xd] = uVar7;
  puVar1[0xc] = uVar6;
  puVar1[0xf] = uVar9;
  puVar1[0xe] = uVar8;
  FUN_10007f314(puVar1,puVar1 + 0x10,&DAT_100aab4c0,&DAT_100837c30);
  auVar11._8_8_ = puVar1 + 8;
  auVar11._0_8_ = FUN_100578e20;
  return auVar11;
}

