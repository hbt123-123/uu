// rea decompile_all
// name: FUN_1000c9fe0
// address: 0x1000c9fe0
// body: available
// range: 0x1000c9fe0-0x1000ca43f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000c9fe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  undefined1 auStack_f0 [16];
  byte local_e0;
  long local_d8;
  long local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [16];
  undefined4 local_a0;
  undefined8 local_90 [3];
  undefined1 auStack_78 [24];
  
  uVar5 = 0;
  local_c0 = param_7;
  FUN_100401b14();
  local_a0 = (undefined4)param_1;
  local_b8 = uVar5;
  FUN_1003fb48c(FUN_1000cdff4,auStack_b0,0xd00000000000009c,0x8000000100885110,0xd00000000000002b,
                0x80000001008859a0,100,0);
  FUN_1003a8798(0);
  plVar6 = (long *)0x0;
  FUN_1003a7e18(0,0);
  FUN_1003dbe30();
  (**(code **)(*plVar6 + 0x108))(local_90);
  _swift_release(plVar6);
  lVar8 = _TtC14UURemoteServer22StreamerConnectSession::controllerAbility;
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer22StreamerConnectSession::controllerAbility,
                     auStack_78,1,0);
  lVar7 = *(long *)(unaff_x20 + lVar8);
  *(undefined8 *)(unaff_x20 + lVar8) = local_90[0];
  _swift_release();
  FUN_1000c7b64();
  local_c8 = *(long *)(lVar7 + 0x78);
  bVar3 = *(byte *)(lVar7 + 0x81);
  _swift_release();
  lVar7 = _TtC14UURemoteServer22StreamerConnectSession::___lazy_storage___appDataHandler;
  uVar5 = *(undefined8 *)
           (unaff_x20 +
           _TtC14UURemoteServer22StreamerConnectSession::___lazy_storage___appDataHandler);
  _swift_retain(uVar5);
  FUN_10010c284(param_1,param_2,param_3,param_4,param_5,param_6,local_c0);
  _swift_release(uVar5);
  lVar8 = unaff_x20 + _TtC14UURemoteServer22StreamerConnectSession::_peerState;
  _swift_beginAccess(lVar8,local_90,0,0);
  if (*(long *)(lVar8 + 8) == 5) {
    lVar8 = *(long *)(unaff_x20 + lVar7);
    if ((bVar3 & 1) == 0) {
      if ((*(byte *)(lVar8 + 0x81) & 1) == 0) {
        lVar9 = *(long *)(lVar8 + 0x78);
        if ((*(byte *)(lVar8 + 0x80) & 1) == 0) {
          if (local_c8 == lVar9) goto LAB_1000ca22c;
        }
        else if (lVar9 < 5) {
          if (lVar9 < 2) {
            if (lVar9 == 0) {
              if (local_c8 == 0) goto LAB_1000ca22c;
            }
            else if (local_c8 == 1) goto LAB_1000ca22c;
          }
          else if (lVar9 == 2) {
            if (local_c8 == 2) goto LAB_1000ca22c;
          }
          else if (lVar9 == 3) {
            if (local_c8 == 3) goto LAB_1000ca22c;
          }
          else if (local_c8 == 4) goto LAB_1000ca22c;
        }
        else if (lVar9 < 7) {
          if (lVar9 == 5) {
            if (local_c8 == 5) goto LAB_1000ca22c;
          }
          else if (local_c8 == 6) goto LAB_1000ca22c;
        }
        else if (lVar9 == 7) {
          if (local_c8 == 7) goto LAB_1000ca22c;
        }
        else if (lVar9 == 8) {
          if (local_c8 == 8) goto LAB_1000ca22c;
        }
        else if (local_c8 == 9) goto LAB_1000ca22c;
      }
    }
    else if ((*(byte *)(lVar8 + 0x81) & 1) != 0) goto LAB_1000ca22c;
    if (DAT_100a73b60 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    lVar8 = *(long *)(*(long *)(DAT_100b360a8 + 0x28) +
                     _TtC14UURemoteServer15StreamerManager::dispatcher);
    if ((lVar8 != 0) &&
       (lVar8 = *(long *)(lVar8 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession),
       lVar8 != 0 && lVar8 == unaff_x20)) {
      uVar5 = *(undefined8 *)(DAT_100b360a8 + 0x98);
      _swift_retain(uVar5);
      FUN_1000babdc();
      _swift_release(uVar5);
    }
  }
LAB_1000ca22c:
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  lVar9 = *(long *)(DAT_100b360a8 + 0x80);
  lVar8 = *(long *)(unaff_x20 + lVar7);
  bVar3 = *(byte *)(lVar8 + 0x49);
  if ((bVar3 & 1) == 0) {
    if ((*(byte *)(lVar8 + 0x48) & 1) == 0) {
      uVar5 = 1;
    }
    else {
      uVar5 = *(undefined8 *)(&DAT_10080c2a0 + *(long *)(lVar8 + 0x40) * 8);
    }
  }
  else {
    uVar5 = 0;
  }
  uVar1 = *(undefined8 *)(lVar8 + 0x50);
  uVar2 = *(undefined8 *)(lVar8 + 0x58);
  _swift_retain(lVar9);
  _swift_bridgeObjectRetain(uVar2);
  bVar4 = 1;
  FUN_10000b50c(1,uVar5,bVar3,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  *(byte *)(lVar9 + 0x99) = bVar4 & 1;
  FUN_100019690(PTR___swiftEmptySetSingleton_100995eb0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_e0 = bVar4 & 1;
  local_d8 = lVar9;
  FUN_1003fb48c(thunk_FUN_1000cdfe8,auStack_f0,0xd0000000000000a9,0x8000000100877660,
                0xd000000000000027,0x8000000100885840,0x2a0,0);
  _swift_release(lVar9);
  return;
}

