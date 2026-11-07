// rea decompile_all
// name: FUN_100575464
// address: 0x100575464
// body: available
// range: 0x100575464-0x1005754fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100575464(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  bool bVar5;
  long *plVar6;
  long unaff_x20;
  undefined1 auVar7 [16];
  
  plVar6 = (long *)0x28;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    plVar6 = _malloc(0x28);
  }
  else {
    _swift_coroFrameAlloc(0x28,0x2504);
  }
  *param_1 = plVar6;
  plVar6[4] = unaff_x20;
  bVar5 = *(undefined **)(unaff_x20 + 0x90) != (undefined *)0x0;
  puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (bVar5) {
    puVar1 = *(undefined **)(unaff_x20 + 0x90);
  }
  lVar2 = 0;
  if (bVar5) {
    lVar2 = *(long *)(unaff_x20 + 0x98);
  }
  puVar3 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  lVar4 = -0x4000000000000000;
  if (bVar5) {
    puVar3 = *(undefined **)(unaff_x20 + 0xa8);
    lVar4 = *(long *)(unaff_x20 + 0xa0);
  }
  *plVar6 = (long)puVar1;
  plVar6[1] = lVar2;
  plVar6[2] = lVar4;
  plVar6[3] = (long)puVar3;
  FUN_1005a7a28();
  auVar7._8_8_ = plVar6;
  auVar7._0_8_ = FUN_1005754fc;
  return auVar7;
}

