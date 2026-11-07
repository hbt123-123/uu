// rea decompile_all
// name: FUN_10001105c
// address: 0x10001105c
// body: available
// range: 0x10001105c-0x100011447 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000110f8 to 0x1000162bc FUN_1000162bc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100011128 to 0x10001717c FUN_10001717c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100011384 to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100011410 to 0x10001746c FUN_10001746c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100011444 to 0x100016f58 FUN_100016f58 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10001105c(long param_1,undefined8 param_2,byte param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  byte bVar8;
  long unaff_x20;
  undefined4 *puVar9;
  undefined1 auStack_b0 [16];
  undefined4 local_a0;
  undefined4 uStack_9c;
  
  if (2 < param_3) {
    if (param_3 == 3) {
      FUN_100045cc4();
      lVar5 = *(long *)(param_1 + 0x10);
      if (lVar5 != 0) {
        lVar6 = 0x20;
        do {
          FUN_10002bb14(*(undefined4 *)(param_1 + lVar6),0xd000000000000015,0x800000010087b7b0);
          lVar6 = lVar6 + 4;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      _swift_bridgeObjectRelease(param_1);
      return;
    }
    if (param_3 == 4) {
      FUN_10001717c();
      return;
    }
    FUN_10001746c();
    return;
  }
  if (param_3 == 0) {
    lVar5 = *(long *)(param_1 + 0x10);
    _swift_retain();
    if (lVar5 != 0) {
      puVar9 = (undefined4 *)(param_1 + 0x20);
      do {
        uVar1 = *puVar9;
        lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x18) + 0x10) +
                         _TtC14UURemoteServer15StreamerManager::dispatcher);
        if ((lVar6 == 0) ||
           (lVar6 = *(long *)(lVar6 + _TtC14UURemoteServer18StreamerDispatcher::
                                      currentConnectSession), lVar6 == 0)) {
          FUN_100401b14(0);
          (*(code *)PTR____chkstk_darwin_100995498)();
          pcVar3 = FUN_10004007c;
          uVar4 = 0x1e8;
          local_a0 = uVar1;
        }
        else {
          uVar2 = *(undefined4 *)(lVar6 + _TtC14UURemoteServer22StreamerConnectSession::handle);
          FUN_100401b14(0);
          (*(code *)PTR____chkstk_darwin_100995498)();
          local_a0 = uVar2;
          uStack_9c = uVar1;
          FUN_1003fb48c(FUN_100040088,auStack_b0,0xd0000000000000a9,0x8000000100877660,
                        &DAT_d000000000000030,0x800000010087b7d0,0x1ec,0);
          FUN_1000157e8(uVar2,uVar1,0,0x100);
          (*(code *)PTR____chkstk_darwin_100995498)();
          pcVar3 = FUN_100040094;
          uVar4 = 0x1ee;
          local_a0 = uVar2;
          uStack_9c = uVar1;
        }
        FUN_1003fb48c(pcVar3,auStack_b0,0xd0000000000000a9,0x8000000100877660,&DAT_d000000000000030,
                      0x800000010087b7d0,uVar4,0);
        lVar5 = lVar5 + -1;
        puVar9 = puVar9 + 1;
      } while (lVar5 != 0);
    }
    _swift_release();
  }
  else {
    if (param_3 != 1) {
      lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x18) + 0x10) +
                       _TtC14UURemoteServer15StreamerManager::dispatcher);
      if ((lVar5 == 0) ||
         (lVar5 = *(long *)(lVar5 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession)
         , lVar5 == 0)) {
        uVar7 = 0;
        bVar8 = 1;
      }
      else {
        bVar8 = 0;
        uVar7 = (ulong)*(uint *)(lVar5 + _TtC14UURemoteServer22StreamerConnectSession::handle);
      }
      FUN_100016f58(param_1,uVar7 | (ulong)bVar8 << 0x20,*(undefined8 *)(unaff_x20 + 0x108));
      return;
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x18) + 0x10) +
                     _TtC14UURemoteServer15StreamerManager::dispatcher);
    if ((lVar5 != 0) &&
       (lVar5 = *(long *)(lVar5 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession),
       lVar5 != 0)) {
      FUN_1000162bc(*(undefined4 *)(lVar5 + _TtC14UURemoteServer22StreamerConnectSession::handle),0)
      ;
      return;
    }
  }
  return;
}

