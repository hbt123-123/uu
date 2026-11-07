// rea decompile_all
// name: FUN_1000f0f58
// address: 0x1000f0f58
// body: available
// range: 0x1000f0f58-0x1000f17ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000f0f58(void)

{
  undefined8 uVar1;
  undefined8 *self;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  undefined **ppuVar6;
  long *plVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long *plVar12;
  long *local_108;
  undefined1 local_100;
  long *local_f8;
  undefined1 local_f0;
  long *local_e0;
  undefined1 local_d8;
  long *local_c8;
  undefined1 local_c0;
  long *local_b0;
  undefined1 local_a8;
  long *local_98;
  undefined1 local_90;
  undefined1 auStack_80 [32];
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  _swift_retain(uVar8);
  FUN_10012d26c();
  _swift_release(uVar8);
  FUN_1000f2568();
  FUN_1000f2dd0();
  uVar1 = DAT_100b3a710;
  uVar8 = DAT_100b3a708;
  DAT_100b3a708 = FUN_1000f34fc;
  DAT_100b3a710 = 0;
  FUN_10007ed2c(uVar8,uVar1);
  FUN_1000f3678();
  lVar9 = *(long *)(unaff_x20 + 0x10);
  _swift_retain(lVar9);
  FUN_1001b696c();
  _objc_msgSend(*(ID *)(lVar9 + 0x40),"lock");
  FUN_1001b6b60();
  _objc_msgSend(*(ID *)(lVar9 + 0x40),"unlock");
  _swift_release(lVar9);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  self = (undefined8 *)
         NSNotificationCenter::defaultCenter
                   ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  puVar2 = self;
  FUN_1003a9cb8();
  _objc_msgSend((ID)self,"addObserver:selector:name:object:",uVar8,"pubSharedUserDataDidChange:",
                *puVar2,0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  lVar9 = DAT_100b360a8;
  lVar10 = *(long *)(DAT_100b360a8 + 0x10);
  _swift_beginAccess(lVar10 + 0x10,auStack_80,0,0);
  plVar12 = *(long **)(lVar10 + 0x10);
  local_90 = *(undefined1 *)(lVar10 + 0x18);
  puVar3 = &DAT_10099c6c0;
  local_98 = plVar12;
  _swift_allocObject(&DAT_10099c6c0,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10,uVar8);
  FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
  plVar7 = plVar12;
  _swift_retain();
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
  puVar4 = &DAT_100a77428;
  FUN_100004bb4(&DAT_100a77428,&DAT_10080d8b0);
  FUN_10039f61c(plVar7,FUN_1000f44ec,puVar3,puVar4);
  _swift_release(plVar12);
  _swift_release(puVar3);
  ppuVar6 = &PTR_PTR_1009b83c8;
  (**(code **)(*plVar7 + 0x78))(uVar8);
  _swift_release(plVar7);
  FUN_1001ae8f4();
  IVar5 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace,"sharedWorkspace");
  IVar5 = NSWorkspace::notificationCenter(IVar5,"notificationCenter");
  NSWorkspace::addObserver_selector_name_object_
            (IVar5,"addObserver:selector:name:object:",uVar8,"systemWillSleep:",
             *(undefined8 *)PTR__NSWorkspaceWillSleepNotification_100995470,0);
  NSWorkspace::addObserver_selector_name_object_
            (IVar5,"addObserver:selector:name:object:",uVar8,"systemDidWake:",
             *(undefined8 *)PTR__NSWorkspaceDidWakeNotification_100995448,0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar10 = *(long *)(lVar9 + 0x10);
  _swift_beginAccess(lVar10 + 0x10,&local_98,0,0);
  plVar12 = *(long **)(lVar10 + 0x10);
  local_a8 = *(undefined1 *)(lVar10 + 0x18);
  puVar3 = &DAT_10099c6e8;
  local_b0 = plVar12;
  _swift_allocObject(&DAT_10099c6e8,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10,uVar8);
  plVar7 = plVar12;
  _swift_retain();
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
  FUN_10039f61c();
  _swift_release(plVar12);
  _swift_release(puVar3);
  (**(code **)(*plVar7 + 0x78))(uVar8,&PTR_PTR_1009b83c8);
  _swift_release(plVar7);
  uVar8 = 0;
  FUN_100401b14();
  FUN_1003fb48c(FUN_100107298,0,0xd000000000000097,0x8000000100889170,0x29287075746573,
                0xe700000000000000,0x19d,0,uVar8);
  FUN_1001072c4();
  uVar8 = *(undefined8 *)(unaff_x20 + 0x60);
  lVar10 = *(long *)(lVar9 + 0x10);
  _swift_beginAccess(lVar10 + 0x10,&local_b0,0,0);
  plVar12 = *(long **)(lVar10 + 0x10);
  local_c0 = *(undefined1 *)(lVar10 + 0x18);
  puVar3 = &DAT_10099c710;
  local_c8 = plVar12;
  _swift_allocObject(&DAT_10099c710,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10,uVar8);
  plVar7 = plVar12;
  _swift_retain();
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
  FUN_10039f61c();
  _swift_release(plVar12);
  _swift_release(puVar3);
  (**(code **)(*plVar7 + 0x78))(uVar8,&PTR_PTR_1009b83c8);
  _swift_release(plVar7);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x68);
  lVar10 = *(long *)(lVar9 + 0x10);
  _swift_beginAccess(lVar10 + 0x10,&local_c8,0,0);
  plVar12 = *(long **)(lVar10 + 0x10);
  local_d8 = *(undefined1 *)(lVar10 + 0x18);
  puVar3 = &DAT_10099c738;
  local_e0 = plVar12;
  _swift_allocObject(&DAT_10099c738,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10,uVar8);
  plVar7 = plVar12;
  _swift_retain();
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
  FUN_10039f61c();
  _swift_release(plVar12);
  _swift_release(puVar3);
  (**(code **)(*plVar7 + 0x78))(uVar8,&PTR_PTR_1009b83c8);
  _swift_release(plVar7);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x70);
  lVar10 = *(long *)(lVar9 + 0x10);
  _swift_beginAccess(lVar10 + 0x10,&local_e0,0,0);
  plVar12 = *(long **)(lVar10 + 0x10);
  local_f0 = *(undefined1 *)(lVar10 + 0x18);
  puVar3 = &DAT_10099c760;
  local_f8 = plVar12;
  _swift_allocObject(&DAT_10099c760,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10,uVar8);
  plVar7 = plVar12;
  _swift_retain();
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
  FUN_10039f61c();
  _swift_release(plVar12);
  _swift_release(puVar3);
  (**(code **)(*plVar7 + 0x78))(uVar8,&PTR_PTR_1009b83c8);
  _swift_release(plVar7);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x90);
  FUN_1003fb48c(FUN_1001d843c,0,0xd000000000000095,0x8000000100889250,0x29287075746573,
                0xe700000000000000,0x11d,0);
  lVar9 = *(long *)(lVar9 + 0x10);
  _swift_beginAccess(lVar9 + 0x10,&local_f8,0,0);
  plVar12 = *(long **)(lVar9 + 0x10);
  local_100 = *(undefined1 *)(lVar9 + 0x18);
  puVar3 = &DAT_10099c788;
  local_108 = plVar12;
  _swift_allocObject(&DAT_10099c788,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10,uVar8);
  plVar7 = plVar12;
  _swift_retain();
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
  FUN_10039f61c();
  _swift_release(plVar12);
  _swift_release(puVar3);
  (**(code **)(*plVar7 + 0x78))(uVar8);
  _swift_release(plVar7);
  FUN_1001d8468();
  plVar12 = (long *)0x0;
  FUN_1003dab3c();
  (**(code **)(*plVar12 + 0x108))(&local_108);
  _swift_release(plVar12);
  plVar7 = local_108;
  if (local_108 != (long *)0x0) {
    (**(code **)(*local_108 + 0x98))();
    _swift_release(plVar7);
    if (ppuVar6 != (undefined **)0x0) {
      plVar7 = *(long **)(unaff_x20 + 0xc0);
      pcVar11 = *(code **)(*plVar7 + 0x1c8);
      _swift_retain(plVar7);
      (*pcVar11)(plVar12,ppuVar6);
      _swift_bridgeObjectRelease(ppuVar6);
      _swift_release(plVar7);
    }
  }
  return;
}

