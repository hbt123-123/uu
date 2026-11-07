// rea decompile_all
// name: FUN_100153530
// address: 0x100153530
// body: available
// range: 0x100153530-0x10015362b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100153530(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  lVar1 = _TtC14UURemoteServer18ClipboardPCManager::___lazy_storage___receiveCopyModel;
  lVar2 = *(long *)(unaff_x20 +
                   _TtC14UURemoteServer18ClipboardPCManager::___lazy_storage___receiveCopyModel);
  lVar5 = lVar2;
  if (lVar2 == 0) {
    FUN_10016f3e8();
    _swift_allocObject();
    _swift_weakInit(lVar2 + 0x10,0);
    *(undefined **)(lVar2 + 0x18) = PTR___swiftEmptySetSingleton_100995eb0;
    puVar3 = &DAT_100a7a438;
    FUN_100004bb4(&DAT_100a7a438,&DAT_10080edd8);
    _swift_allocObject();
    FUN_1003e43e4();
    *(undefined **)(lVar2 + 0x20) = puVar3;
    puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_1000cd438();
    puVar3 = &DAT_100a7a440;
    FUN_100004bb4(&DAT_100a7a440,&DAT_10080ede0);
    _swift_allocObject();
    FUN_1003e29fc(puVar4,puVar3);
    *(undefined **)(lVar2 + 0x28) = puVar4;
    uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    _swift_retain(lVar2);
    _swift_release(uVar6);
    lVar5 = 0;
  }
  _swift_retain(lVar5);
  return lVar2;
}

