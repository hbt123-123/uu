// rea decompile_all
// name: FUN_1000c8388
// address: 0x1000c8388
// body: available
// range: 0x1000c8388-0x1000c860f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

class_t * FUN_1000c8388(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  class_t *pcVar4;
  class_t *pcVar5;
  long lVar6;
  undefined *puVar7;
  long *plVar8;
  undefined *puVar9;
  long lVar10;
  long extraout_x8;
  long unaff_x20;
  long *plVar11;
  long lVar12;
  undefined1 auStack_c0 [8];
  long local_b8;
  long *local_b0;
  undefined1 local_a8;
  undefined1 auStack_a0 [24];
  objc_super local_88;
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  __s10Foundation4UUIDVMa();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  pcVar4 = *(class_t **)
            (unaff_x20 +
            _TtC14UURemoteServer22StreamerConnectSession::___lazy_storage___clipboardHandler);
  if (pcVar4 == (class_t *)0x0) {
    local_b8 = _TtC14UURemoteServer22StreamerConnectSession::___lazy_storage___clipboardHandler;
    FUN_1001bc5d8();
    pcVar5 = pcVar4;
    _objc_allocWithZone();
    lVar2 = _TtC14UURemoteServer16ClipboardHandler::ref;
    lVar6 = (long)&pcVar5->isa + _TtC14UURemoteServer16ClipboardHandler::ref;
    lVar10 = 0;
    _swift_unknownObjectWeakInit();
    *(undefined1 *)((long)&pcVar5->isa + _TtC14UURemoteServer16ClipboardHandler::isSuspend) = 0;
    plVar8 = (long *)((long)&pcVar5->isa + _TtC14UURemoteServer16ClipboardHandler::dragDropSessionID
                     );
    __s10Foundation4UUIDVACycfC(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    __s10Foundation4UUIDV10uuidStringSSvg();
    (**(code **)(lVar12 + 8))(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
    *plVar8 = lVar6;
    plVar8[1] = lVar10;
    puVar1 = (undefined8 *)
             ((long)&pcVar5->isa + _TtC14UURemoteServer16ClipboardHandler::remoteDownloadPath);
    *puVar1 = 0;
    puVar1[1] = 0xe000000000000000;
    puVar1 = (undefined8 *)
             ((long)&pcVar5->isa +
             _TtC14UURemoteServer16ClipboardHandler::___lazy_storage___clipboardManager);
    *puVar1 = 0;
    puVar1[1] = 0;
    _swift_beginAccess((long)&pcVar5->isa + lVar2,auStack_78,1,0);
    _swift_unknownObjectWeakAssign((long)&pcVar5->isa + lVar2);
    local_88.receiver = (ID)pcVar5;
    local_88.super_class = pcVar4;
    pcVar4 = (class_t *)_objc_msgSendSuper2(&local_88,"init");
    if (DAT_100a73b60 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    lVar3 = *(long *)(DAT_100b360a8 + 0x10);
    _swift_beginAccess(lVar3 + 0x10,auStack_a0,0,0);
    plVar11 = *(long **)(lVar3 + 0x10);
    local_a8 = *(undefined1 *)(lVar3 + 0x18);
    puVar7 = &DAT_10099b700;
    local_b0 = plVar11;
    _swift_allocObject(&DAT_10099b700,0x18,7);
    _swift_unknownObjectWeakInit(puVar7 + 0x10,pcVar4);
    FUN_100004b70(0);
    plVar8 = plVar11;
    _swift_retain();
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar9 = &DAT_100a77428;
    FUN_100004bb4(&DAT_100a77428,&DAT_10080d8b0);
    FUN_10039f61c(plVar8,FUN_1000cdbd4,puVar7,puVar9);
    _swift_release(plVar11);
    _swift_release(puVar7);
    (**(code **)(*plVar8 + 0x78))(pcVar4,&PTR_PTR_1009b83c8);
    _swift_release(plVar8);
    *(class_t **)(unaff_x20 + local_b8) = pcVar4;
  }
  return pcVar4;
}

