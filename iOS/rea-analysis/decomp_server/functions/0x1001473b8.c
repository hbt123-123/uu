// rea decompile_all
// name: FUN_1001473b8
// address: 0x1001473b8
// body: available
// range: 0x1001473b8-0x100147823 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001473b8(long param_1,ID param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ID self;
  undefined *puVar10;
  undefined *puVar11;
  void *aBlock;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined *local_80;
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 == 0) {
    return;
  }
  bVar3 = *(byte *)(param_1 + 0x10);
  if (bVar3 < 2) {
    if (bVar3 == 0) {
      lVar6 = param_1 + 0x28;
      _swift_unknownObjectWeakLoadStrong(lVar6);
      lVar7 = param_1 + 0x38;
      _swift_unknownObjectWeakLoadStrong(lVar7);
      lVar5 = 0;
      FUN_100139194();
      _objc_allocWithZone();
      *(undefined8 *)
       (lVar5 + _TtC14UURemoteServer29ClipboardReceiveCopyOperation::
                ___lazy_storage___receiveCopyQueue) = 0;
      *(undefined8 *)
       (lVar5 + _TtC14UURemoteServer29ClipboardReceiveCopyOperation::___lazy_storage___commonQueue)
           = 0;
      puVar1 = (undefined8 *)(lVar5 + _TtC14UURemoteServer29ClipboardReceiveCopyOperation::blockKey)
      ;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar2 = (undefined4 *)
               (lVar5 + _TtC14UURemoteServer29ClipboardReceiveCopyOperation::blockCount);
      *puVar2 = 0;
      *(undefined1 *)(puVar2 + 1) = 1;
      *(undefined **)(lVar5 + _TtC14UURemoteServer29ClipboardReceiveCopyOperation::blockList) =
           PTR___swiftEmptyArrayStorage_100995ea0;
      *(undefined1 *)(lVar5 + _TtC14UURemoteServer29ClipboardReceiveCopyOperation::isSendResult) = 0
      ;
    }
    else {
      if (bVar3 != 1) {
LAB_100147548:
        _swift_release(param_1);
        return;
      }
      lVar6 = param_1 + 0x28;
      _swift_unknownObjectWeakLoadStrong(lVar6);
      lVar7 = param_1 + 0x38;
      _swift_unknownObjectWeakLoadStrong(lVar7);
      lVar5 = 0;
      FUN_1001989d8();
      _objc_allocWithZone();
      *(undefined8 *)
       (lVar5 + _TtC14UURemoteServer28ClipboardUploadCopyOperation::
                ___lazy_storage___uploadCopyQueue) = 0;
      *(undefined8 *)
       (lVar5 + _TtC14UURemoteServer28ClipboardUploadCopyOperation::
                ___lazy_storage___uploadMultipleCopyQueue) = 0;
      *(undefined8 *)
       (lVar5 + _TtC14UURemoteServer28ClipboardUploadCopyOperation::___lazy_storage___commonQueue) =
           0;
      *(undefined8 *)(lVar5 + _TtC14UURemoteServer28ClipboardUploadCopyOperation::currentIndex) = 0;
      puVar1 = (undefined8 *)
               (lVar5 + _TtC14UURemoteServer28ClipboardUploadCopyOperation::
                        ___lazy_storage___blockKey);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)
               (lVar5 + _TtC14UURemoteServer28ClipboardUploadCopyOperation::
                        ___lazy_storage___blockCount);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)
               (lVar5 + _TtC14UURemoteServer28ClipboardUploadCopyOperation::
                        ___lazy_storage___blockData);
      puVar1[1] = 0xf000000000000000;
      *puVar1 = 0;
    }
  }
  else if (bVar3 == 2) {
    lVar6 = param_1 + 0x28;
    _swift_unknownObjectWeakLoadStrong(lVar6);
    lVar7 = param_1 + 0x38;
    _swift_unknownObjectWeakLoadStrong(lVar7);
    lVar8 = 0;
    FUN_100177d4c();
    _objc_allocWithZone();
    lVar5 = _TtC14UURemoteServer32ClipboardFileUploadCopyOperation::fileHelper;
    lVar9 = 0;
    FUN_1001883e4();
    _swift_allocObject();
    *(undefined8 *)(lVar9 + 0x10) = 0;
    *(long *)(lVar8 + lVar5) = lVar9;
    *(undefined8 *)
     (lVar8 + _TtC14UURemoteServer32ClipboardFileUploadCopyOperation::
              ___lazy_storage___uploadMultipleCopyQueue) = 0;
    *(undefined8 *)
     (lVar8 + _TtC14UURemoteServer32ClipboardFileUploadCopyOperation::
              ___lazy_storage___uploadCopyQueue) = 0;
    *(undefined8 *)
     (lVar8 + _TtC14UURemoteServer32ClipboardFileUploadCopyOperation::___lazy_storage___commonQueue)
         = 0;
  }
  else {
    if (bVar3 != 3) goto LAB_100147548;
    lVar6 = param_1 + 0x28;
    _swift_unknownObjectWeakLoadStrong(lVar6);
    lVar7 = param_1 + 0x38;
    _swift_unknownObjectWeakLoadStrong(lVar7);
    lVar5 = 0;
    FUN_10015240c();
    _objc_allocWithZone();
    *(undefined8 *)
     (lVar5 + _TtC14UURemoteServer33ClipboardFileReceiveCopyOperation::
              ___lazy_storage___receiveCopyQueue) = 0;
    *(undefined8 *)
     (lVar5 + _TtC14UURemoteServer33ClipboardFileReceiveCopyOperation::
              ___lazy_storage___receiveMultipleCopyQueue) = 0;
    *(undefined8 *)
     (lVar5 + _TtC14UURemoteServer33ClipboardFileReceiveCopyOperation::___lazy_storage___commonQueue
     ) = 0;
    puVar1 = (undefined8 *)
             (lVar5 + _TtC14UURemoteServer33ClipboardFileReceiveCopyOperation::
                      ___lazy_storage___currentOffset);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    *(undefined8 *)
     (lVar5 + _TtC14UURemoteServer33ClipboardFileReceiveCopyOperation::
              ___lazy_storage___receiveOffset) = 0;
  }
  self = param_2;
  _swift_retain();
  FUN_100145be8();
  _swift_release(param_2);
  _swift_unknownObjectRelease(lVar6);
  _swift_unknownObjectRelease(lVar7);
  puVar10 = &DAT_10099ea38;
  _swift_allocObject(&DAT_10099ea38,0x18,7);
  _swift_weakInit(puVar10 + 0x10,param_1);
  puVar11 = &DAT_10099eb00;
  _swift_allocObject(&DAT_10099eb00,0x20,7);
  *(undefined **)(puVar11 + 0x10) = puVar10;
  *(ID *)(puVar11 + 0x18) = param_2;
  local_88 = FUN_10014966c;
  local_a8 = PTR___NSConcreteStackBlock_100995490;
  local_a0 = 0x42000000;
  local_98 = FUN_1000acdb4;
  puStack_90 = &DAT_10099eb18;
  local_80 = puVar11;
  aBlock = __Block_copy(&local_a8);
  puVar4 = local_80;
  _swift_retain(param_2);
  _swift_retain(puVar10);
  FUN_10004090c(FUN_10014966c,puVar11);
  _swift_release(puVar4);
  _objc_msgSend(self,"setCompletionBlock:",aBlock);
  __Block_release(aBlock);
  _swift_release(puVar10);
  _swift_release(puVar11);
  FUN_100401b14(0);
  FUN_1003fb45c(FUN_100149674,param_2,0xd0000000000000ab,0x8000000100891c00,0xd00000000000001e,
                0x80000001008920b0,0x78,7);
  _objc_msgSend(*(ID *)(param_1 + 0x18),"addOperation:",self);
  _swift_release(param_1);
  return;
}

