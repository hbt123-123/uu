// rea decompile_all
// name: FUN_10044f77c
// address: 0x10044f77c
// body: available
// range: 0x10044f77c-0x10044f82f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10044f77c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  long unaff_x20;
  long lVar8;
  undefined1 auVar9 [16];
  
  puVar6 = (undefined4 *)0x70;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar6 = _malloc(0x70);
  }
  else {
    _swift_coroFrameAlloc(0x70,0xed6d);
  }
  *param_1 = puVar6;
  *(long *)(puVar6 + 0x1a) = unaff_x20;
  lVar8 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar8 + 0x90,puVar6 + 8,0,0);
  bVar4 = *(undefined **)(lVar8 + 0x98) != (undefined *)0x0;
  uVar5 = 0;
  if (bVar4) {
    uVar5 = (undefined4)*(undefined8 *)(lVar8 + 0x90);
  }
  uVar7 = 0;
  puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (bVar4) {
    uVar7 = (undefined4)((ulong)*(undefined8 *)(lVar8 + 0x90) >> 0x20);
    puVar1 = *(undefined **)(lVar8 + 0x98);
  }
  uVar2 = 0;
  if (bVar4) {
    uVar2 = *(undefined8 *)(lVar8 + 0xa0);
  }
  uVar3 = 0xc000000000000000;
  if (bVar4) {
    uVar3 = *(undefined8 *)(lVar8 + 0xa8);
  }
  *puVar6 = uVar5;
  puVar6[1] = uVar7;
  *(undefined **)(puVar6 + 2) = puVar1;
  *(undefined8 *)(puVar6 + 4) = uVar2;
  *(undefined8 *)(puVar6 + 6) = uVar3;
  FUN_10045eb50();
  auVar9._8_8_ = puVar6;
  auVar9._0_8_ = FUN_10044f830;
  return auVar9;
}

