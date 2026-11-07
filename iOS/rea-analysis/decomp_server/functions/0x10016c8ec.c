// rea decompile_all
// name: FUN_10016c8ec
// address: 0x10016c8ec
// body: available
// range: 0x10016c8ec-0x10016cd57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10016c8ec(long param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_200 [8];
  undefined1 auStack_1f8 [24];
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar5 = &DAT_100a766c8;
  FUN_100004bb4(&DAT_100a766c8,&DAT_10080b1d0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_200 + -extraout_x8;
  (**(code **)(unaff_x20 + 0x270))();
  cVar2 = *(char *)(param_1 + 0x10);
  _swift_beginAccess(puVar5 + 0x10,auStack_78,1,0);
  puVar5[0x10] = cVar2 == '\x01';
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  _swift_beginAccess(puVar5 + 0x18,auStack_90,1,0);
  uVar8 = *(undefined8 *)(puVar5 + 0x20);
  *(undefined8 *)(puVar5 + 0x18) = uVar7;
  *(undefined8 *)(puVar5 + 0x20) = uVar9;
  _swift_retain(puVar5);
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRelease(uVar8);
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  _swift_beginAccess(puVar5 + 0x28,auStack_a8,1,0);
  *(undefined4 *)(puVar5 + 0x28) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  _swift_beginAccess(puVar5 + 0x2c,auStack_c0,1,0);
  *(undefined4 *)(puVar5 + 0x2c) = uVar1;
  uVar3 = *(undefined1 *)(param_1 + 0x30);
  _swift_beginAccess(puVar5 + 0x30,auStack_d8,1,0);
  puVar5[0x30] = uVar3;
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  _swift_beginAccess(puVar5 + 0x38,auStack_f0,1,0);
  uVar8 = *(undefined8 *)(puVar5 + 0x40);
  *(undefined8 *)(puVar5 + 0x38) = uVar7;
  *(undefined8 *)(puVar5 + 0x40) = uVar9;
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRelease(uVar8);
  lVar4 = _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::emptyFileUrl;
  _swift_beginAccess(param_1 + _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::emptyFileUrl,
                     auStack_108,0,0);
  FUN_1000e3888(param_1 + lVar4,puVar6);
  lVar4 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::emptyFileUrl;
  _swift_beginAccess(puVar5 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::emptyFileUrl,
                     auStack_120,0x21,0);
  FUN_100135ab0(puVar6,puVar5 + lVar4);
  _swift_endAccess(auStack_120);
  lVar4 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::receiveDataCount;
  uVar7 = *(undefined8 *)
           (param_1 + _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::receiveDataCount);
  _swift_beginAccess(puVar5 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::receiveDataCount,
                     auStack_120,1,0);
  *(undefined8 *)(puVar5 + lVar4) = uVar7;
  lVar4 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::totalDataCount;
  uVar7 = *(undefined8 *)
           (param_1 + _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::totalDataCount);
  _swift_beginAccess(puVar5 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::totalDataCount,
                     auStack_138,1,0);
  *(undefined8 *)(puVar5 + lVar4) = uVar7;
  lVar4 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userSelectFilesUrl;
  uVar7 = *(undefined8 *)
           (param_1 + _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::userSelectFilesUrl);
  _swift_beginAccess(puVar5 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userSelectFilesUrl,
                     auStack_150,1,0);
  uVar9 = *(undefined8 *)(puVar5 + lVar4);
  *(undefined8 *)(puVar5 + lVar4) = uVar7;
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRelease(uVar9);
  lVar4 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userSelectFilesName;
  uVar7 = *(undefined8 *)
           (param_1 + _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::userSelectFilesName);
  _swift_beginAccess(puVar5 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userSelectFilesName,
                     auStack_168,1,0);
  uVar9 = *(undefined8 *)(puVar5 + lVar4);
  *(undefined8 *)(puVar5 + lVar4) = uVar7;
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRelease(uVar9);
  lVar4 = _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::userPasteEmptyFileUrl;
  _swift_beginAccess(param_1 + _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::
                               userPasteEmptyFileUrl,auStack_180,0,0);
  FUN_1000e3888(param_1 + lVar4,puVar6);
  lVar4 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userPasteEmptyFileUrl;
  _swift_beginAccess(puVar5 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userPasteEmptyFileUrl
                     ,auStack_198,0x21,0);
  FUN_100135ab0(puVar6,puVar5 + lVar4);
  _swift_endAccess(auStack_198);
  lVar4 = _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::userPasteUrl;
  _swift_beginAccess(param_1 + _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::userPasteUrl,
                     auStack_198,0,0);
  FUN_1000e3888(param_1 + lVar4,puVar6);
  lVar4 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userPasteUrl;
  _swift_beginAccess(puVar5 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userPasteUrl,
                     auStack_1b0,0x21,0);
  FUN_100135ab0(puVar6,puVar5 + lVar4);
  _swift_endAccess(auStack_1b0);
  lVar4 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::taskStartTime;
  uVar7 = *(undefined8 *)
           (param_1 + _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::taskStartTime);
  _swift_beginAccess(puVar5 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::taskStartTime,
                     auStack_1b0,1,0);
  *(undefined8 *)(puVar5 + lVar4) = uVar7;
  lVar4 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userHasPaste;
  uVar3 = *(undefined1 *)
           (param_1 + _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::userHasPaste);
  _swift_beginAccess(puVar5 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::userHasPaste,
                     auStack_1c8,1,0);
  puVar5[lVar4] = uVar3;
  lVar4 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::taskIsStart;
  uVar3 = *(undefined1 *)
           (param_1 + _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::taskIsStart);
  _swift_beginAccess(puVar5 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::taskIsStart,
                     auStack_1e0,1,0);
  puVar5[lVar4] = uVar3;
  _swift_release(puVar5);
  uVar3 = *(undefined1 *)(param_1 + _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::result);
  _swift_release(param_1);
  lVar4 = _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::result;
  _swift_beginAccess(puVar5 + _TtC5UUXPC35XPCClipboardFileReceiveCopyTaskData::result,auStack_1f8,1,
                     0);
  puVar5[lVar4] = uVar3;
  return puVar5;
}

