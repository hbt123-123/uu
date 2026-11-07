// rea decompile_all
// name: FUN_1001537cc
// address: 0x1001537cc
// body: available
// range: 0x1001537cc-0x100153b3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1001537cc(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  ID IVar9;
  ID IVar10;
  long lVar11;
  long unaff_x20;
  
  lVar11 = unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::managerDelegate;
  *(undefined8 *)(lVar11 + 8) = 0;
  _swift_unknownObjectWeakInit(lVar11,0);
  lVar11 = _TtC14UURemoteServer18ClipboardPCManager::managerModel;
  uVar4 = 0;
  FUN_1001886f4();
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + lVar11) = uVar4;
  *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::timerInterval) =
       0x3fc999999999999a;
  *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::timer) = 0;
  lVar11 = unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::dragTransfer;
  lVar5 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar11,1,1,lVar5);
  lVar5 = 0;
  FUN_100127240();
  puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
  *(undefined **)(lVar11 + *(int *)(lVar5 + 0x14)) = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar1 = (undefined8 *)(lVar11 + *(int *)(lVar5 + 0x18));
  *puVar1 = 0;
  puVar1[1] = 0xe000000000000000;
  puVar2 = (undefined4 *)(lVar11 + *(int *)(lVar5 + 0x1c));
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  iVar3 = *(int *)(lVar5 + 0x20);
  puVar6 = puVar8;
  FUN_1000cced0();
  *(undefined **)(lVar11 + iVar3) = puVar6;
  iVar3 = *(int *)(lVar5 + 0x24);
  lVar7 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(lVar11 + iVar3,1,1,lVar7);
  puVar6 = PTR___swiftEmptySetSingleton_100995eb0;
  *(undefined **)(lVar11 + *(int *)(lVar5 + 0x28)) = PTR___swiftEmptySetSingleton_100995eb0;
  *(undefined1 *)(lVar11 + *(int *)(lVar5 + 0x2c)) = 0;
  *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::incomingDrop) = 0;
  lVar11 = _TtC14UURemoteServer18ClipboardPCManager::dropInput;
  lVar5 = 0;
  FUN_10012b634();
  _swift_allocObject();
  uVar4 = 0;
  FUN_10011b154();
  _swift_allocObject();
  FUN_10011b21c();
  *(undefined8 *)(lVar5 + 0x10) = uVar4;
  *(long *)(unaff_x20 + lVar11) = lVar5;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::dropTasks);
  FUN_1000cd514();
  *puVar1 = puVar6;
  puVar1[1] = puVar6;
  puVar1[2] = puVar6;
  puVar1[3] = puVar8;
  *(undefined1 *)
   (unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::remoteAssistFileTransferEnabled) = 1;
  *(undefined8 *)
   (unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::___lazy_storage___clipboardAbility) = 0;
  *(undefined8 *)
   (unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::___lazy_storage___fileUploadModel) = 0;
  *(undefined8 *)
   (unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::___lazy_storage___fileUploadProcess) = 0;
  *(undefined8 *)
   (unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::___lazy_storage___fileReceiveModel) = 0;
  *(undefined8 *)
   (unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::___lazy_storage___fileReceiveProcess) = 0;
  *(undefined8 *)
   (unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::___lazy_storage___receiveCopyModel) = 0;
  *(undefined8 *)
   (unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::___lazy_storage___uploadCopyModel) = 0;
  *(undefined8 *)
   (unaff_x20 +
   _TtC14UURemoteServer18ClipboardPCManager::___lazy_storage___receiveCopyOperationQueue) = 0;
  *(undefined8 *)
   (unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::___lazy_storage___uploadCopyOperationQueue
   ) = 0;
  *(undefined8 *)
   (unaff_x20 +
   _TtC14UURemoteServer18ClipboardPCManager::___lazy_storage___fileUploadCopyOperationQueue) = 0;
  *(undefined8 *)
   (unaff_x20 +
   _TtC14UURemoteServer18ClipboardPCManager::___lazy_storage___fileReceiveCopyOperationQueue) = 0;
  FUN_100153bbc();
  IVar9 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffa0,"init");
  IVar10 = IVar9;
  FUN_10015362c();
  lVar5 = _TtC14UURemoteServer18ClipboardPCManager::managerModel;
  _swift_weakAssign(IVar10 + 0x10,
                    *(undefined8 *)(IVar9 + _TtC14UURemoteServer18ClipboardPCManager::managerModel))
  ;
  _swift_release();
  FUN_100153164();
  *(undefined ***)(IVar10 + 0x18) = &PTR_PTR_10099f588;
  _swift_unknownObjectWeakAssign(IVar10 + 0x10,IVar9);
  _swift_release();
  FUN_1001533d4();
  lVar11 = IVar10 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::delegate;
  *(undefined ***)(lVar11 + 8) = &PTR_PTR_10099f5b0;
  _swift_unknownObjectWeakAssign(lVar11,IVar9);
  lVar11 = 0;
  FUN_100153530(0);
  _swift_weakAssign(lVar11 + 0x10,*(undefined8 *)(IVar9 + lVar5));
  _swift_release(lVar11);
  lVar11 = *(long *)(IVar9 + _TtC14UURemoteServer18ClipboardPCManager::
                             ___lazy_storage___fileReceiveModel);
  uVar4 = *(undefined8 *)(IVar9 + lVar5);
  _swift_retain(uVar4);
  _swift_weakAssign(lVar11 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::managerModel,uVar4
                   );
  _swift_release(uVar4);
  return IVar9;
}

