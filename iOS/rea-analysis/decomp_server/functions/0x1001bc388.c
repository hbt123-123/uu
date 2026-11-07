// rea decompile_all
// name: FUN_1001bc388
// address: 0x1001bc388
// body: available
// range: 0x1001bc388-0x1001bc5d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1001bc388(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ID IVar4;
  undefined *puVar5;
  long *plVar6;
  undefined *puVar7;
  long lVar8;
  long extraout_x8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *local_b0;
  undefined1 local_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  __s10Foundation4UUIDVMa();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  lVar2 = _TtC14UURemoteServer16ClipboardHandler::ref;
  lVar9 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar10 = unaff_x20 + _TtC14UURemoteServer16ClipboardHandler::ref;
  lVar8 = 0;
  _swift_unknownObjectWeakInit();
  *(undefined1 *)(unaff_x20 + _TtC14UURemoteServer16ClipboardHandler::isSuspend) = 0;
  plVar6 = (long *)(unaff_x20 + _TtC14UURemoteServer16ClipboardHandler::dragDropSessionID);
  __s10Foundation4UUIDVACycfC(lVar9);
  __s10Foundation4UUIDV10uuidStringSSvg();
  (**(code **)(lVar12 + 8))(lVar9,lVar3);
  *plVar6 = lVar10;
  plVar6[1] = lVar8;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC14UURemoteServer16ClipboardHandler::remoteDownloadPath);
  *puVar1 = 0;
  puVar1[1] = 0xe000000000000000;
  puVar1 = (undefined8 *)
           (unaff_x20 + _TtC14UURemoteServer16ClipboardHandler::___lazy_storage___clipboardManager);
  *puVar1 = 0;
  puVar1[1] = 0;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_1);
  FUN_1001bc5d8();
  IVar4 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff78,"init");
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  lVar10 = *(long *)(DAT_100b360a8 + 0x10);
  _swift_beginAccess(lVar10 + 0x10,auStack_a0,0,0);
  plVar11 = *(long **)(lVar10 + 0x10);
  local_a8 = *(undefined1 *)(lVar10 + 0x18);
  puVar5 = &DAT_1009a2a28;
  local_b0 = plVar11;
  _swift_allocObject(&DAT_1009a2a28,0x18,7);
  _swift_unknownObjectWeakInit(puVar5 + 0x10,IVar4);
  FUN_100004b70(0);
  plVar6 = plVar11;
  _swift_retain();
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
  puVar7 = &DAT_100a77428;
  FUN_100004bb4(&DAT_100a77428,&DAT_10080d8b0);
  FUN_10039f61c(plVar6,FUN_1000cdbd4,puVar5,puVar7);
  _swift_release(plVar11);
  _swift_release(puVar5);
  (**(code **)(*plVar6 + 0x78))(IVar4,&PTR_PTR_1009b83c8);
  _swift_release(plVar6);
  return IVar4;
}

