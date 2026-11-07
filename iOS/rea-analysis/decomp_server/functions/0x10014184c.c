// rea decompile_all
// name: FUN_10014184c
// address: 0x10014184c
// body: available
// range: 0x10014184c-0x100141c4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10014184c(long *param_1,long param_2,undefined4 param_3,ulong param_4,undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_e0 [16];
  undefined4 auStack_d0 [2];
  ulong uStack_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long lStack_a8;
  undefined8 local_a0;
  ulong local_90 [3];
  ulong local_78 [3];
  undefined4 local_54;
  
  lVar1 = 0;
  local_a0 = param_5;
  __s10Foundation3URLVMa();
  local_b0 = *(long *)(lVar1 + -8);
  lStack_a8 = lVar1;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_b0 + 0x40));
  lVar8 = (long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100a766c8;
  FUN_100004bb4(&DAT_100a766c8,&DAT_10080b1d0);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  lVar3 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_c0 = lVar3 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar1 = _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTakProcessData;
  lVar6 = (lVar3 - extraout_x12) - extraout_x12_00;
  lVar7 = *param_1;
  uVar4 = *(undefined8 *)
           (param_2 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTakProcessData);
  local_90[0] = CONCAT44(local_90[0]._4_4_,param_3);
  local_b8 = param_2;
  _swift_retain(uVar4);
  FUN_1003e37e8(local_78,local_90);
  _swift_release(uVar4);
  if ((local_78[0] == 0) || (_swift_release(local_78[0]), local_78[0] != param_4)) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined4 *)(lVar6 + -0x10) = param_3;
    FUN_1003fb48c(FUN_10014585c,lVar6 + -0x20,0xd0000000000000ad,0x8000000100890750,
                  &DAT_d000000000000018,0x80000001008915a0,0x1bd,0);
    lVar1 = _TtC14UURemoteServer24ClipboardFileReceiveInfo::fileUrl;
    _swift_beginAccess(lVar7 + _TtC14UURemoteServer24ClipboardFileReceiveInfo::fileUrl,local_78,0,0)
    ;
    FUN_1000e3888(lVar7 + lVar1,lVar3);
    lVar6 = lStack_a8;
    lVar1 = local_b0;
    lVar7 = lVar3;
    (**(code **)(local_b0 + 0x30))(lVar3,1,lStack_a8);
    if ((int)lVar7 == 1) {
      FUN_100040bb4(lVar3,&DAT_100a766c8,&DAT_10080b1d0);
    }
    else {
      (**(code **)(lVar1 + 0x20))(lVar8,lVar3,lVar6);
      FUN_10018d6f4(lVar8);
      (**(code **)(lVar1 + 8))(lVar8,lVar6);
    }
    local_90[0] = local_90[0] & 0xffffffffffffff00;
  }
  else {
    uVar4 = *(undefined8 *)(lVar7 + 0x18);
    uVar5 = *(undefined8 *)(param_4 + 0x40);
    *(undefined8 *)(param_4 + 0x38) = *(undefined8 *)(lVar7 + 0x10);
    *(undefined8 *)(param_4 + 0x40) = uVar4;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar5);
    lVar8 = _TtC14UURemoteServer24ClipboardFileReceiveInfo::fileUrl;
    _swift_beginAccess(lVar7 + _TtC14UURemoteServer24ClipboardFileReceiveInfo::fileUrl,local_78,0,0)
    ;
    FUN_1000e3888(lVar7 + lVar8,lVar6);
    lVar3 = _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::emptyFileUrl;
    _swift_beginAccess(param_4 + _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::
                                 emptyFileUrl,local_90,0x21,0);
    FUN_100135ab0(lVar6,param_4 + lVar3);
    _swift_endAccess(local_90);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined4 *)(lVar6 + -0x10) = param_3;
    *(ulong *)(lVar6 + -8) = param_4;
    FUN_1003fb45c(FUN_100145864,lVar6 + -0x20,0xd0000000000000ad,0x8000000100890750,
                  &DAT_d000000000000018,0x80000001008915a0,0x1c4,7);
    uVar4 = *(undefined8 *)(local_b8 + lVar1);
    local_90[0] = param_4;
    local_54 = param_3;
    _swift_retain(uVar4);
    _swift_retain(param_4);
    FUN_1003e3634(local_90,&local_54);
    _swift_release(uVar4);
    lVar1 = local_c0;
    FUN_1000e3888(lVar7 + lVar8,local_c0);
    lVar3 = lVar1;
    (**(code **)(local_b0 + 0x30))(lVar1,1,lStack_a8);
    FUN_100040bb4(lVar1,&DAT_100a766c8,&DAT_10080b1d0);
    local_90[0] = CONCAT71(local_90[0]._1_7_,(int)lVar3 != 1);
  }
  FUN_10061630c(local_90);
  return;
}

