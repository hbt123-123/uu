// rea decompile_all
// name: FUN_10019467c
// address: 0x10019467c
// body: available
// range: 0x10019467c-0x100194727 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10019467c(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  puVar1 = (undefined8 *)
           (unaff_x20 +
           _TtC14UURemoteServer28ClipboardUploadCopyOperation::___lazy_storage___blockKey);
  lVar2 = puVar1[1];
  if (lVar2 != 0) {
    uVar3 = *puVar1;
    lVar4 = lVar2;
    goto LAB_10019470c;
  }
  lVar2 = unaff_x20 + _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
  _swift_weakLoadStrong();
  if (lVar2 == 0) {
LAB_1001946e0:
    _swift_bridgeObjectRelease(0);
    uVar3 = 0;
    lVar4 = -0x2000000000000000;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 0x20);
    lVar4 = *(long *)(lVar2 + 0x28);
    _swift_bridgeObjectRetain(lVar4);
    _swift_release(lVar2);
    if (lVar4 == 0) goto LAB_1001946e0;
  }
  uVar5 = puVar1[1];
  *puVar1 = uVar3;
  puVar1[1] = lVar4;
  _swift_bridgeObjectRetain(lVar4);
  _swift_bridgeObjectRelease(uVar5);
  lVar2 = 0;
LAB_10019470c:
  _swift_bridgeObjectRetain(lVar2);
  auVar6._8_8_ = lVar4;
  auVar6._0_8_ = uVar3;
  return auVar6;
}

