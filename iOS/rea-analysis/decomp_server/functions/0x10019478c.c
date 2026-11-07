// rea decompile_all
// name: FUN_10019478c
// address: 0x10019478c
// body: available
// range: 0x10019478c-0x100194863 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10019478c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  puVar1 = (undefined8 *)
           (unaff_x20 +
           _TtC14UURemoteServer28ClipboardUploadCopyOperation::___lazy_storage___blockData);
  uVar2 = *puVar1;
  uVar4 = puVar1[1];
  uVar8 = uVar4;
  uVar9 = uVar2;
  if (0xe < uVar4 >> 0x3c) {
    lVar7 = unaff_x20 + _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
    _swift_weakLoadStrong();
    if (lVar7 == 0) {
      uVar9 = 0;
      uVar8 = 0xc000000000000000;
    }
    else {
      uVar3 = *(undefined8 *)(lVar7 + 0x60);
      uVar5 = *(ulong *)(lVar7 + 0x68);
      FUN_10010bd10(uVar3,uVar5);
      _swift_release(lVar7);
      uVar9 = 0;
      if (uVar5 >> 0x3c < 0xf) {
        uVar9 = uVar3;
      }
      uVar8 = 0xc000000000000000;
      if (uVar5 >> 0x3c < 0xf) {
        uVar8 = uVar5;
      }
    }
    uVar3 = *puVar1;
    uVar6 = puVar1[1];
    *puVar1 = uVar9;
    puVar1[1] = uVar8;
    FUN_100008184(uVar9,uVar8);
    FUN_100006cc8(uVar3,uVar6);
  }
  FUN_10010bd10(uVar2,uVar4);
  auVar10._8_8_ = uVar8;
  auVar10._0_8_ = uVar9;
  return auVar10;
}

