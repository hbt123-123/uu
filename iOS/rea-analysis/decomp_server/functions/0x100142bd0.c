// rea decompile_all
// name: FUN_100142bd0
// address: 0x100142bd0
// body: available
// range: 0x100142bd0-0x100142f7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100142bd0(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lVar9;
  code *pcVar10;
  undefined1 auStack_f0 [16];
  long alStack_e0 [2];
  undefined1 auStack_d0 [8];
  long local_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar1 = &DAT_100a766c8;
  FUN_100004bb4(&DAT_100a766c8,&DAT_10080b1d0);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  puVar8 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar6 = (long)puVar8 - extraout_x12;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  lVar5 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_c8 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar3 = _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::emptyFileUrl;
  lVar5 = lVar5 - extraout_x12_00;
  _swift_beginAccess(param_1 + _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::emptyFileUrl,
                     auStack_78,0,0);
  FUN_1000e3888(param_1 + lVar3,lVar6);
  pcVar10 = *(code **)(lVar9 + 0x30);
  lVar3 = lVar6;
  (*pcVar10)(lVar6,1,lVar2);
  if ((int)lVar3 == 1) {
    FUN_100040bb4(lVar6,&DAT_100a766c8,&DAT_10080b1d0);
  }
  else {
    (**(code **)(lVar9 + 0x20))(lVar5,lVar6,lVar2);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(long *)(lVar5 + -0x10) = lVar5;
    FUN_1003fb45c(FUN_10014464c,lVar5 + -0x20,0xd0000000000000ad,
                  extraout_x12_01 - 0x20U | 0x8000000000000000,0xd000000000000017,0x8000000100890830
                  ,0x241,7);
    _swift_beginAccess(param_2 + 0x10,auStack_c0,0,0);
    lVar3 = param_2 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar3 != 0) {
      uVar7 = *(undefined8 *)
               (lVar3 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::fileHelper);
      _swift_retain(uVar7);
      FUN_10018d6f4(lVar5);
      _swift_release(uVar7);
    }
    (**(code **)(lVar9 + 8))(lVar5,lVar2);
  }
  lVar3 = _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::userPasteEmptyFileUrl;
  _swift_beginAccess(param_1 + _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::
                               userPasteEmptyFileUrl,auStack_90,0,0);
  FUN_1000e3888(param_1 + lVar3,puVar8);
  puVar4 = puVar8;
  (*pcVar10)(puVar8,1,lVar2);
  lVar3 = local_c8;
  if ((int)puVar4 == 1) {
    FUN_100040bb4(puVar8,&DAT_100a766c8,&DAT_10080b1d0);
  }
  else {
    (**(code **)(lVar9 + 0x20))(local_c8,puVar8,lVar2);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(long *)(lVar5 + -0x10) = lVar3;
    FUN_1003fb45c(FUN_100144644,lVar5 + -0x20,0xd0000000000000ad,0x8000000100890750,
                  0xd000000000000017,0x8000000100890830,0x245,7);
    _swift_beginAccess(param_2 + 0x10,auStack_a8,0,0);
    param_2 = param_2 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (param_2 != 0) {
      uVar7 = *(undefined8 *)
               (param_2 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::fileHelper);
      _swift_retain(uVar7);
      FUN_10018d6f4(lVar3);
      _swift_release(uVar7);
    }
    (**(code **)(lVar9 + 8))(lVar3,lVar2);
  }
  return;
}

