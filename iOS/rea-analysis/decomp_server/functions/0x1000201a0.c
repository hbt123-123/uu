// rea decompile_all
// name: FUN_1000201a0
// address: 0x1000201a0
// body: available
// range: 0x1000201a0-0x1000205d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000201a0(long param_1,code *param_2,undefined8 param_3,ID param_4,undefined *param_5,
                  ID param_6,long param_7,int param_8,undefined8 param_9,byte param_10,
                  undefined4 param_11)

{
  ID IVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  int iVar6;
  undefined1 auStack_d0 [16];
  int local_c0 [2];
  ID local_b8;
  long local_b0;
  ID local_a8;
  long local_a0;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 == 0) {
    param_5 = &DAT_100a75b88;
    FUN_100004bb4(&DAT_100a75b88,&DAT_100812c00);
    _swift_allocObject();
    *(undefined8 *)(param_5 + 0x18) = 2;
    *(undefined8 *)(param_5 + 0x10) = 1;
    *(undefined4 *)(param_5 + 0x20) = 0xffffffff;
    *(undefined8 *)(param_5 + 0x28) = 0;
    *(undefined8 *)(param_5 + 0x30) = 0xe000000000000000;
    *(undefined8 *)(param_5 + 0x38) = 0;
    *(undefined8 *)(param_5 + 0x40) = 0xe000000000000000;
    *(undefined8 *)(param_5 + 0x50) = 0xc000000000000000;
    *(undefined8 *)(param_5 + 0x48) = 0;
    (*param_2)();
    goto LAB_1000204c4;
  }
  iVar6 = (int)param_5;
  if ((((*(ID *)(param_1 + 0x108) == param_4) &&
       (lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x10) +
                         _TtC14UURemoteServer15StreamerManager::dispatcher), lVar5 != 0)) &&
      (lVar5 = *(long *)(lVar5 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession),
      lVar5 != 0)) &&
     (*(int *)(lVar5 + _TtC14UURemoteServer22StreamerConnectSession::handle) == iVar6)) {
    IVar1 = _objc_msgSend(param_6,"videoTrackIndex");
    puVar4 = auStack_90;
    _swift_beginAccess(param_1 + 0x110,puVar4,0x20,0);
    lVar5 = *(long *)(param_1 + 0x110);
    local_a8 = param_6;
    if ((*(long *)(lVar5 + 0x10) == 0) || (thunk_FUN_1001a2c34(), ((ulong)puVar4 & 1) == 0)) {
      _swift_endAccess(auStack_90);
LAB_1000204f4:
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_b0 = CONCAT44(local_b0._4_4_,iVar6);
      local_a0 = param_7;
      FUN_1003fb48c(FUN_100040b5c,local_c0,0xd0000000000000a9,0x8000000100877660,0xd0000000000000a9,
                    0x800000010087bed0,0x346,0);
LAB_100020570:
      param_5 = &DAT_100a75b88;
      FUN_100004bb4(&DAT_100a75b88,&DAT_100812c00);
      _swift_allocObject();
      *(undefined8 *)(param_5 + 0x18) = 2;
      *(undefined8 *)(param_5 + 0x10) = 1;
      *(int *)(param_5 + 0x20) = param_8;
      goto LAB_100020440;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + IVar1 * 8);
    _swift_endAccess(auStack_90);
    if (lVar5 != param_7) goto LAB_1000204f4;
    puVar2 = param_5;
    FUN_10001adc4(param_5,param_6,1);
    param_8 = (int)puVar2;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_b0 = CONCAT44(local_b0._4_4_,iVar6);
    local_a0 = CONCAT44(local_a0._4_4_,param_8);
    FUN_1003fb48c(FUN_100040b68,local_c0,0xd0000000000000a9,0x8000000100877660,0xd0000000000000a9,
                  0x800000010087bed0,0x34c,0);
    if (param_8 != 0) {
      if ((param_10 & 1) != 0) {
        IVar1 = _objc_msgSend(param_6,"videoTrackIndex");
        FUN_100020c04(param_11,IVar1);
        FUN_1000162bc(param_5,0);
      }
      goto LAB_100020570;
    }
    IVar1 = _objc_msgSend(param_6,"screenId");
    FUN_10001f838(param_5,param_9,IVar1);
  }
  else {
    uVar3 = 0;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)(uVar3);
    local_c0[0] = iVar6;
    local_b8 = param_6;
    local_b0 = param_7;
    local_a8 = param_4;
    local_a0 = param_1;
    FUN_1003fb48c(FUN_100040b4c,auStack_d0,0xd0000000000000a9,0x8000000100877660,0xd0000000000000a9,
                  0x800000010087bed0,0x341,0);
    param_5 = &DAT_100a75b88;
    FUN_100004bb4(&DAT_100a75b88,&DAT_100812c00);
    _swift_allocObject();
    *(undefined8 *)(param_5 + 0x18) = 2;
    *(undefined8 *)(param_5 + 0x10) = 1;
    *(undefined4 *)(param_5 + 0x20) = 0xffffffff;
LAB_100020440:
    *(undefined8 *)(param_5 + 0x28) = 0;
    *(undefined8 *)(param_5 + 0x30) = 0xe000000000000000;
    *(undefined8 *)(param_5 + 0x38) = 0;
    *(undefined8 *)(param_5 + 0x40) = 0xe000000000000000;
    *(undefined8 *)(param_5 + 0x50) = 0xc000000000000000;
    *(undefined8 *)(param_5 + 0x48) = 0;
  }
  (*param_2)();
  _swift_release(param_1);
LAB_1000204c4:
  _swift_bridgeObjectRelease(param_5);
  return;
}

