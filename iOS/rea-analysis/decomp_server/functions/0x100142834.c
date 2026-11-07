// rea decompile_all
// name: FUN_100142834
// address: 0x100142834
// body: available
// range: 0x100142834-0x1001429db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100142834(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_80 [4];
  undefined4 local_7c;
  long local_78;
  
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar6 + 0x40));
  lVar1 = _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTakProcessData;
  uVar4 = *(undefined8 *)
           (unaff_x20 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTakProcessData);
  local_7c = param_2;
  _swift_retain(uVar4);
  FUN_1003e37e8(&local_78,&local_7c);
  _swift_release(uVar4);
  lVar2 = _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::taskIsStart;
  if (local_78 != 0) {
    if ((*(byte *)(local_78 + _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::taskIsStart) &
        1) == 0) {
      __s10Foundation4DateVACycfC(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      __s10Foundation4DateV21timeIntervalSince1970Sdvg();
      (**(code **)(lVar6 + 8))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
      *(undefined8 *)
       (local_78 + _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::taskStartTime) = param_1;
      *(undefined1 *)(local_78 + lVar2) = 1;
      *(undefined1 *)(local_78 + 0x10) = 1;
      uVar4 = *(undefined8 *)
               (local_78 +
               _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::userSelectFilesUrl);
      uVar5 = *(undefined8 *)
               (local_78 +
               _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::userSelectFilesName);
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar4);
      FUN_100144ad0();
      _swift_bridgeObjectRelease(uVar4);
      _swift_bridgeObjectRelease(uVar5);
      uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
      local_7c = param_2;
      _swift_retain_n(local_78,2);
      _swift_retain(uVar4);
      FUN_1003e3634(&local_78,&local_7c);
      _swift_release(uVar4);
      _swift_release(local_78);
    }
    else {
      _swift_release(local_78);
      local_78 = 0;
    }
  }
  return local_78;
}

