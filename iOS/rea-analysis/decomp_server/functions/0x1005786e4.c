// rea decompile_all
// name: FUN_1005786e4
// address: 0x1005786e4
// body: available
// range: 0x1005786e4-0x1005787c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1005786e4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined1 auVar10 [16];
  
  puVar5 = (undefined8 *)0x28;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar5 = _malloc(0x28);
  }
  else {
    _swift_coroFrameAlloc(0x28,0x14cd);
  }
  *param_1 = puVar5;
  puVar5[4] = unaff_x20;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x78);
  puVar2 = *(undefined **)(unaff_x20 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar6 = uVar4;
  uVar7 = uVar1;
  puVar8 = puVar2;
  uVar9 = uVar3;
  if (puVar2 == (undefined *)0x0) {
    if (DAT_100aa27e0 != -1) {
      _swift_once(&DAT_100aa27e0,FUN_100595ed4);
    }
    uVar6 = DAT_100aabbf0;
    _swift_retain();
    uVar7 = 0;
    puVar8 = PTR___swiftEmptyDictionarySingleton_100995ea8;
    uVar9 = 0xc000000000000000;
  }
  *puVar5 = uVar7;
  puVar5[1] = uVar9;
  puVar5[2] = puVar8;
  puVar5[3] = uVar6;
  FUN_1005a7fe8(uVar1,uVar3,puVar2,uVar4);
  auVar10._8_8_ = puVar5;
  auVar10._0_8_ = thunk_FUN_1005787c8;
  return auVar10;
}

