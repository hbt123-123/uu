// rea decompile_all
// name: FUN_100153208
// address: 0x100153208
// body: available
// range: 0x100153208-0x1001532e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100153208(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  lVar1 = _TtC14UURemoteServer18ClipboardPCManager::___lazy_storage___fileUploadModel;
  lVar2 = *(long *)(unaff_x20 +
                   _TtC14UURemoteServer18ClipboardPCManager::___lazy_storage___fileUploadModel);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_100135a38();
    _swift_allocObject();
    *(undefined **)(lVar2 + 0x10) = PTR___swiftEmptySetSingleton_100995eb0;
    lVar3 = 0;
    FUN_1001883e4();
    _swift_allocObject();
    *(undefined8 *)(lVar3 + 0x10) = 0;
    *(long *)(lVar2 + 0x18) = lVar3;
    puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_1000cceb4();
    puVar5 = &DAT_100a7a068;
    FUN_100004bb4(&DAT_100a7a068,&DAT_10080edd0);
    _swift_allocObject();
    FUN_1003e29fc(puVar4,puVar5);
    *(undefined **)(lVar2 + 0x20) = puVar4;
    uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    _swift_retain(lVar2);
    _swift_release(uVar6);
    lVar3 = 0;
  }
  _swift_retain(lVar3);
  return lVar2;
}

