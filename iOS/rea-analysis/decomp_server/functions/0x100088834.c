// rea decompile_all
// name: FUN_100088834
// address: 0x100088834
// body: available
// range: 0x100088834-0x100088d6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100088834(undefined8 param_1,long param_2,undefined8 param_3,long param_4,int *param_5,
                  undefined8 param_6,undefined8 param_7,undefined4 param_8,undefined8 param_9,
                  undefined8 param_10,undefined4 param_11)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  long lVar6;
  int *piVar7;
  code *pcVar8;
  long lVar9;
  undefined1 *puVar10;
  long extraout_x8;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  int iVar14;
  undefined1 *puVar15;
  undefined1 auStack_f0 [16];
  undefined8 auStack_e0 [2];
  undefined4 auStack_d0 [2];
  undefined8 uStack_c8;
  undefined8 auStack_c0 [2];
  int aiStack_b0 [4];
  undefined1 auStack_a0 [4];
  undefined4 local_9c;
  int *local_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar9 = 0;
  local_9c = param_8;
  local_98 = param_5;
  __s10Foundation4UUIDVMa();
  lVar13 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar13 + 0x40));
  lVar6 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar15 = auStack_a0 + lVar6;
  _swift_beginAccess(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  lVar11 = _TtC14UURemoteServer19SecondScreenManager::secondScreenGeneration;
  if (param_2 == 0) {
    FUN_100401b14();
    FUN_1003fb48c(thunk_FUN_1000890e0,0,0xd00000000000009f,0x800000010087e740,0xd000000000000049,
                  0x800000010087e8d0,0xdc,0);
    return;
  }
  _swift_beginAccess(param_2 + _TtC14UURemoteServer19SecondScreenManager::secondScreenGeneration,
                     auStack_90,0,0);
  (**(code **)(lVar13 + 0x10))(puVar15,param_2 + lVar11,lVar9);
  puVar10 = puVar15;
  __s10Foundation4UUIDV2eeoiySbAC_ACtFZ(puVar15,param_3);
  (**(code **)(lVar13 + 8))(puVar15,lVar9);
  if (((ulong)puVar10 & 1) == 0) {
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_100088d6c,0,0xd00000000000009f,0x800000010087e740,0xd000000000000049,
                  0x800000010087e8d0,0xe0,0);
LAB_100088ad4:
    _swift_release(param_2);
  }
  else {
    puVar1 = (undefined4 *)(param_2 + _TtC14UURemoteServer19SecondScreenManager::rotatingScreenID);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    if (DAT_100a73b60 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    lVar11 = *(long *)(*(long *)(DAT_100b360a8 + 0x28) +
                      _TtC14UURemoteServer15StreamerManager::dispatcher);
    if ((lVar11 == 0) ||
       (lVar11 = *(long *)(lVar11 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession)
       , lVar11 == 0 || lVar11 != param_4)) {
      FUN_100401b14(0);
      FUN_1003fb48c(FUN_100088d98,0,0xd00000000000009f,0x800000010087e740,0xd000000000000049,
                    0x800000010087e8d0,0xe5,0);
      puVar2 = (undefined8 *)
               (param_2 + _TtC14UURemoteServer19SecondScreenManager::settingsCompletion);
      pcVar8 = (code *)*puVar2;
      uVar12 = puVar2[1];
      *puVar2 = 0;
      puVar2[1] = 0;
      if (pcVar8 == (code *)0x0) goto LAB_100088ad4;
      _swift_retain(uVar12);
      (*pcVar8)(0xffffffff);
      _swift_release(param_2);
      FUN_10007ed2c(pcVar8,uVar12);
    }
    else {
      iVar14 = (int)param_1;
      if ((iVar14 == 0) && ((-1 < local_98[1] || (-1 < local_98[2])))) {
        puVar2 = (undefined8 *)
                 (param_2 + _TtC14UURemoteServer19SecondScreenManager::reportedAutoFrameQuality);
        *puVar2 = 0;
        *(undefined2 *)(puVar2 + 1) = 0x100;
      }
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(undefined8 *)((long)auStack_e0 + lVar6) = param_6;
      *(undefined8 *)((long)auStack_e0 + lVar6 + 8) = param_7;
      *(undefined4 *)((long)auStack_d0 + lVar6) = local_9c;
      piVar7 = local_98;
      *(int **)((long)&uStack_c8 + lVar6) = local_98;
      *(undefined8 *)((long)auStack_c0 + lVar6) = param_9;
      *(undefined8 *)((long)auStack_c0 + lVar6 + 8) = param_10;
      *(undefined4 *)((long)aiStack_b0 + lVar6) = param_11;
      *(int *)((long)aiStack_b0 + lVar6 + 4) = iVar14;
      FUN_1003fb45c(thunk_FUN_1000916ac,auStack_f0 + lVar6,0xd00000000000009f,0x800000010087e740,
                    0xd000000000000049,0x800000010087e8d0,0xed,0);
      uVar4 = local_9c;
      iVar3 = *piVar7;
      if (iVar3 < 1) {
        iVar3 = local_98[0xf];
      }
      if ((iVar14 == 0) && (0 < iVar3)) {
        FUN_100083500(iVar3,local_9c);
      }
      lVar11 = _TtC14UURemoteServer19SecondScreenManager::settingsSyncCoalescingDepth;
      if (SCARRY8(*(long *)(param_2 +
                           _TtC14UURemoteServer19SecondScreenManager::settingsSyncCoalescingDepth),1
                 )) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100088d68);
        (*pcVar8)();
      }
      *(long *)(param_2 + _TtC14UURemoteServer19SecondScreenManager::settingsSyncCoalescingDepth) =
           *(long *)(param_2 +
                    _TtC14UURemoteServer19SecondScreenManager::settingsSyncCoalescingDepth) + 1;
      FUN_1000837f8(uVar4,1);
      if ((0 < local_98[4]) || ((char)local_98[0x10] != '\x02')) {
        FUN_1000162bc(uVar4,0);
      }
      lVar13 = *(long *)(param_2 + lVar11);
      lVar9 = lVar13 + -1;
      if (SBORROW8(lVar13,1)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100088d6c);
        (*pcVar8)();
      }
      *(long *)(param_2 + lVar11) = lVar9;
      if (lVar9 == 0) {
        puVar1 = (undefined4 *)
                 (param_2 + _TtC14UURemoteServer19SecondScreenManager::coalescedSyncRequest);
        bVar5 = *(byte *)(puVar1 + 1);
        if (bVar5 != 2) {
          uVar4 = *puVar1;
          *puVar1 = 0;
          *(undefined1 *)(puVar1 + 1) = 2;
          FUN_10008a544((ulong)CONCAT14(bVar5,uVar4),bVar5 & 1);
        }
      }
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(int *)((long)aiStack_b0 + lVar6) = iVar14;
      FUN_1003fb48c(thunk_FUN_100091434,(long)auStack_c0 + lVar6,0xd00000000000009f,
                    0x800000010087e740,0xd000000000000049,0x800000010087e8d0,0xfb,0);
      puVar2 = (undefined8 *)
               (param_2 + _TtC14UURemoteServer19SecondScreenManager::settingsCompletion);
      pcVar8 = (code *)*puVar2;
      uVar12 = puVar2[1];
      *puVar2 = 0;
      puVar2[1] = 0;
      if (pcVar8 == (code *)0x0) goto LAB_100088ad4;
      _swift_retain(uVar12);
      (*pcVar8)(param_1);
      _swift_release(param_2);
      FUN_10007ed2c(pcVar8,uVar12);
    }
    FUN_10007ed2c(pcVar8,uVar12);
  }
  return;
}

