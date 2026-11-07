// rea decompile_all
// name: FUN_10013aa44
// address: 0x10013aa44
// body: available
// range: 0x10013aa44-0x10013accb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10013aa44(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_a0 [16];
  undefined4 local_90;
  undefined4 local_74;
  long local_70;
  long local_68 [3];
  
  FUN_100143494();
  lVar1 = 0;
  FUN_10016db44();
  _swift_allocObject();
  puVar2 = &DAT_100a79f50;
  FUN_100004bb4(&DAT_100a79f50,&DAT_10080ea60);
  _swift_allocObject();
  FUN_1003e43e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  uVar9 = *(undefined8 *)
           (unaff_x20 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTaskFile);
  uVar8 = (undefined4)param_1;
  local_70 = CONCAT44(local_70._4_4_,uVar8);
  local_68[0] = lVar1;
  _swift_retain(uVar9);
  _swift_retain(lVar1);
  FUN_1003e3634(local_68,&local_70);
  _swift_release(uVar9);
  lVar3 = 0;
  FUN_10016dc84();
  _swift_allocObject();
  FUN_10016d614();
  lVar4 = unaff_x20 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::delegate;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar4 == 0) {
    uVar10 = 0;
    uVar9 = 0;
  }
  else {
    lVar5 = lVar4 + _TtC14UURemoteServer18ClipboardPCManager::managerDelegate;
    _swift_unknownObjectWeakLoadStrong();
    lVar6 = _TtC14UURemoteServer16ClipboardHandler::ref;
    if (lVar5 == 0) {
      _swift_unknownObjectRelease(lVar4);
      uVar9 = 0;
      uVar10 = 0;
    }
    else {
      _swift_beginAccess(lVar5 + _TtC14UURemoteServer16ClipboardHandler::ref,local_68,0,0);
      lVar6 = lVar5 + lVar6;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar6 == 0) {
        _swift_unknownObjectRelease(lVar5);
        _swift_unknownObjectRelease(lVar4);
        uVar9 = 0;
        uVar10 = 0;
      }
      else {
        FUN_1000c7b64();
        _swift_unknownObjectRelease(lVar5);
        _swift_unknownObjectRelease(lVar4);
        uVar9 = *(undefined8 *)(lVar6 + 0x30);
        uVar10 = *(undefined8 *)(lVar6 + 0x38);
        _swift_bridgeObjectRetain(uVar10);
        _swift_release(lVar6);
      }
    }
  }
  uVar7 = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(lVar3 + 0x18) = uVar9;
  *(undefined8 *)(lVar3 + 0x20) = uVar10;
  _swift_bridgeObjectRelease(uVar7);
  *(undefined4 *)(lVar3 + 0x28) = uVar8;
  uVar9 = *(undefined8 *)
           (unaff_x20 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTakProcessData);
  local_74 = uVar8;
  local_70 = lVar3;
  _swift_retain(uVar9);
  _swift_retain(lVar3);
  FUN_1003e3634(&local_70,&local_74);
  _swift_release(uVar9);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_90 = uVar8;
  FUN_1003fb45c(FUN_100145794,auStack_a0,0xd0000000000000ad,0x8000000100890750,0xd000000000000021,
                0x8000000100891530,0x5a,7);
  _swift_release(lVar3);
  _swift_release(lVar1);
  return param_1;
}

