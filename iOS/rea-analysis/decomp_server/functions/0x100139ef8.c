// rea decompile_all
// name: FUN_100139ef8
// address: 0x100139ef8
// body: available
// range: 0x100139ef8-0x10013a0cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ID FUN_100139ef8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  long lVar6;
  long unaff_x20;
  
  _swift_weakInit(unaff_x20 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::managerModel,0);
  *(undefined **)
   (unaff_x20 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::clipboardIndexSet) =
       PTR___swiftEmptySetSingleton_100995eb0;
  lVar6 = _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::fileHelper;
  lVar1 = 0;
  FUN_100191234();
  _swift_allocObject();
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyDictionarySingleton_100995ea8;
  puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_1000cd68c();
  puVar3 = &DAT_100a7a060;
  FUN_100004bb4(&DAT_100a7a060,&DAT_10080eb30);
  _swift_allocObject();
  FUN_1003e29fc(puVar2,puVar3);
  *(undefined **)(lVar1 + 0x18) = puVar2;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined1 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  _swift_unknownObjectWeakInit(lVar1 + 0x40,0);
  *(undefined8 *)(lVar1 + 0x50) = 0;
  *(long *)(unaff_x20 + lVar6) = lVar1;
  lVar6 = _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTaskFile;
  puVar2 = puVar4;
  FUN_1000cceb4();
  puVar3 = &DAT_100a7a068;
  FUN_100004bb4(&DAT_100a7a068,&DAT_10080edd0);
  _swift_allocObject();
  FUN_1003e29fc(puVar2,puVar3);
  *(undefined **)(unaff_x20 + lVar6) = puVar2;
  lVar6 = _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTakProcessData;
  FUN_1000cd6a0();
  puVar3 = &DAT_100a7a070;
  FUN_100004bb4(&DAT_100a7a070,&DAT_10080eb40);
  _swift_allocObject();
  FUN_1003e29fc(puVar4,puVar3);
  *(undefined **)(unaff_x20 + lVar6) = puVar4;
  lVar6 = unaff_x20 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::delegate;
  *(undefined8 *)(lVar6 + 8) = 0;
  _swift_unknownObjectWeakInit(lVar6,0);
  FUN_100143e78();
  IVar5 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"init");
  lVar6 = *(long *)(IVar5 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::fileHelper);
  *(undefined ***)(lVar6 + 0x48) = &PTR_PTR_10099e8d0;
  _swift_unknownObjectWeakAssign(lVar6 + 0x40,IVar5);
  return IVar5;
}

