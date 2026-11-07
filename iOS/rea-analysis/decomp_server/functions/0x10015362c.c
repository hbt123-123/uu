// rea decompile_all
// name: FUN_10015362c
// address: 0x10015362c
// body: available
// range: 0x10015362c-0x1001536b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10015362c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _TtC14UURemoteServer18ClipboardPCManager::___lazy_storage___uploadCopyModel;
  lVar2 = *(long *)(unaff_x20 +
                   _TtC14UURemoteServer18ClipboardPCManager::___lazy_storage___uploadCopyModel);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_10019349c();
    _swift_allocObject();
    _swift_weakInit(lVar2 + 0x10,0);
    *(undefined **)(lVar2 + 0x18) = PTR___swiftEmptySetSingleton_100995eb0;
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    _swift_retain(lVar2);
    _swift_release(uVar4);
    lVar3 = 0;
  }
  _swift_retain(lVar3);
  return lVar2;
}

