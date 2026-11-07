// rea decompile_all
// name: FUN_100143100
// address: 0x100143100
// body: available
// range: 0x100143100-0x10014333b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100143100(undefined4 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *plVar4;
  code *pcVar5;
  undefined1 auStack_90 [16];
  undefined4 local_80;
  undefined4 local_6c;
  long local_68;
  
  lVar1 = _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTaskFile;
  uVar3 = *(undefined8 *)
           (unaff_x20 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTaskFile);
  local_6c = param_1;
  _swift_retain(uVar3);
  FUN_1003e37e8(&local_68,&local_6c);
  _swift_release(uVar3);
  if (local_68 != 0) {
    _swift_release();
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_80 = param_1;
    FUN_1003fb45c(FUN_1001446b8,auStack_90,0xd0000000000000ad,0x8000000100890750,0xd000000000000015,
                  0x800000010088ffd0,0x24e,7);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    local_6c = param_1;
    _swift_retain(uVar3);
    FUN_1003e37e8(&local_68,&local_6c);
    _swift_release(uVar3);
    lVar2 = local_68;
    if (local_68 != 0) {
      plVar4 = *(long **)(local_68 + 0x10);
      pcVar5 = *(code **)(*plVar4 + 0xf0);
      _swift_retain(plVar4);
      (*pcVar5)();
      _swift_release(plVar4);
    }
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    local_68 = 0;
    local_6c = param_1;
    _swift_retain(uVar3);
    FUN_1003e3634(&local_68,&local_6c);
    _swift_release(uVar3);
    _swift_release(lVar2);
  }
  lVar1 = _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTakProcessData;
  uVar3 = *(undefined8 *)
           (unaff_x20 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTakProcessData);
  local_6c = param_1;
  _swift_retain(uVar3);
  FUN_1003e37e8(&local_68,&local_6c);
  _swift_release(uVar3);
  if (local_68 != 0) {
    _swift_release();
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_80 = param_1;
    FUN_1003fb45c(FUN_1001446b0,auStack_90,0xd0000000000000ad,0x8000000100890750,0xd000000000000015,
                  0x800000010088ffd0,0x255,7);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    local_68 = 0;
    local_6c = param_1;
    _swift_retain(uVar3);
    FUN_1003e3634(&local_68,&local_6c);
    _swift_release(uVar3);
  }
  return;
}

