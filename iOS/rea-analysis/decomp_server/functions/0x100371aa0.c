// rea decompile_all
// name: FUN_100371aa0
// address: 0x100371aa0
// body: available
// range: 0x100371aa0-0x100371d7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ulong FUN_100371aa0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong *unaff_x20;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [24];
  protocol_t *local_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  puVar1 = &DAT_100a889c0;
  FUN_100004bb4(&DAT_100a889c0,&DAT_10081cc68);
  puVar9 = auStack_c0 + -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar8 = *(ulong *)((long)unaff_x20 + _TtC10Filepicker17FilepickerManager::session);
  uVar2 = uVar8;
  FUN_10035b994(uVar8,*(undefined8 *)((long)unaff_x20 + _TtC10Filepicker17FilepickerManager::queue))
  ;
  FUN_10035c9c8(param_1,puVar9);
  lVar3 = 0;
  FUN_10035c064();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar9,0,1,lVar3);
  FUN_100363c40(0);
  _objc_allocWithZone();
  FUN_100363e08(uVar8,uVar2,puVar9,0);
  if (param_2 == 0) goto LAB_100371c58;
  lVar3 = param_2;
  _swift_unknownObjectRetain();
  _swift_getObjectType();
  _swift_conformsToProtocol();
  lVar4 = param_2;
  if (lVar3 == 0) {
    _swift_unknownObjectRelease(param_2);
    local_a0 = &objc::protocol_t::_TtP10Filepicker26FilePickerTaskObjCDelegate_;
    _swift_unknownObjectRetain();
    _swift_dynamicCastObjCProtocolConditional();
    lVar6 = _TtC10Filepicker14FilePickerTask::objCDelegate;
    if (lVar4 != 0) {
      _swift_beginAccess(uVar8 + _TtC10Filepicker14FilePickerTask::objCDelegate,auStack_b8,1,0);
      lVar6 = uVar8 + lVar6;
      goto LAB_100371c4c;
    }
  }
  else {
    lVar6 = uVar8 + _TtC10Filepicker14FilePickerTask::delegate;
    _swift_beginAccess(lVar6,auStack_b8,1,0);
    *(long *)(lVar6 + 8) = lVar3;
LAB_100371c4c:
    _swift_unknownObjectWeakAssign(lVar6,lVar4);
  }
  _swift_unknownObjectRelease(param_2);
LAB_100371c58:
  lVar3 = _TtC10Filepicker16FilePickerConfig::maxRetryCount;
  lVar6 = *(long *)((long)unaff_x20 + _TtC10Filepicker17FilepickerManager::filePickerConfig);
  _swift_beginAccess(lVar6 + _TtC10Filepicker16FilePickerConfig::maxRetryCount,auStack_68,0,0);
  lVar4 = _TtC10Filepicker17FilePickerRequest::maxRetryCount;
  uVar7 = *(undefined8 *)(lVar6 + lVar3);
  _swift_beginAccess(uVar8 + _TtC10Filepicker17FilePickerRequest::maxRetryCount,auStack_80,1,0);
  *(undefined8 *)(uVar8 + lVar4) = uVar7;
  puVar1 = PTR__swift_isaMask_100995ee0;
  uVar5 = uVar8;
  (**(code **)((*(ulong *)PTR__swift_isaMask_100995ee0 &
               **(ulong **)((long)unaff_x20 + _TtC10Filepicker17FilepickerManager::sessionDelegate))
              + 0xe0))(uVar8,uVar2);
  (**(code **)((*(ulong *)puVar1 & *unaff_x20) + 0x80))();
  lVar3 = _TtC10Filepicker14FilePickerTask::status;
  if (((uVar5 & 1) != 0) &&
     (_swift_beginAccess(uVar8 + _TtC10Filepicker14FilePickerTask::status,auStack_98,1,0),
     *(long *)(uVar8 + lVar3) != 2)) {
    FUN_10035f0ec();
    *(undefined8 *)(uVar8 + lVar3) = 1;
  }
  return uVar8;
}

