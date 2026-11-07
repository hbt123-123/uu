// rea decompile_all
// name: FUN_100363628
// address: 0x100363628
// body: available
// range: 0x100363628-0x10036394b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Type propagation algorithm not settling */

void FUN_100363628(ID param_1)

{
  long lVar1;
  ulong uVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  long unaff_x20;
  ID *pIVar8;
  long lVar9;
  long lVar10;
  ID IStack_a0;
  ID aIStack_98 [3];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar1 = 0;
  FUN_100365888();
  lVar9 = -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pIVar8 = (ID *)((long)&IStack_a0 + lVar9);
  __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
  pcVar6 = "domain";
  uVar2 = _objc_msgSend(param_1,"domain");
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  IVar3 = *(ID *)PTR__NSURLErrorDomain_100995318;
  pcVar7 = pcVar6;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (uVar2 == IVar3 && pcVar6 == pcVar7) {
    _swift_bridgeObjectRelease(pcVar6);
    _swift_bridgeObjectRelease(pcVar7);
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar2,pcVar6,IVar3,pcVar7,0);
    _swift_bridgeObjectRelease(pcVar6);
    _swift_bridgeObjectRelease(pcVar7);
    if ((uVar2 & 1) == 0) goto LAB_100363808;
  }
  IVar3 = _objc_msgSend(param_1,"code");
  lVar10 = _TtC10Filepicker14FilePickerTask::status;
  if (IVar3 == 0xfffffffffffffc19) {
    _swift_beginAccess(unaff_x20 + _TtC10Filepicker14FilePickerTask::status,auStack_68,1,0);
    *(undefined8 *)(unaff_x20 + lVar10) = 4;
    lVar9 = unaff_x20 + _TtC10Filepicker14FilePickerTask::delegate;
    _swift_beginAccess(lVar9,auStack_80,0,0);
    lVar1 = lVar9;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar1 != 0) {
      lVar9 = *(long *)(lVar9 + 8);
      _swift_getObjectType();
      (**(code **)(lVar9 + 0x38))();
      _swift_unknownObjectRelease(lVar1);
    }
    lVar9 = _TtC10Filepicker14FilePickerTask::objCDelegate;
    _swift_beginAccess(unaff_x20 + _TtC10Filepicker14FilePickerTask::objCDelegate,aIStack_98,0,0);
    IVar3 = unaff_x20 + lVar9;
    _swift_unknownObjectWeakLoadStrong();
    if (IVar3 == 0) {
      return;
    }
    IVar4 = _objc_msgSend(IVar3,"respondsToSelector:","filePickerTaskDidCancel:");
    if ((IVar4 & 1) != 0) {
      _objc_msgSend(IVar3,"filePickerTaskDidCancel:");
    }
    _swift_unknownObjectRelease(IVar3);
    return;
  }
LAB_100363808:
  lVar10 = _TtC10Filepicker14FilePickerTask::status;
  _swift_beginAccess(unaff_x20 + _TtC10Filepicker14FilePickerTask::status,auStack_68,1,0);
  *(undefined8 *)(unaff_x20 + lVar10) = 5;
  lVar10 = unaff_x20 + _TtC10Filepicker14FilePickerTask::delegate;
  _swift_beginAccess(lVar10,auStack_80,0,0);
  lVar5 = lVar10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar5 != 0) {
    lVar10 = *(long *)(lVar10 + 8);
    _swift_getObjectType();
    IVar3 = _objc_msgSend(param_1,"code");
    *pIVar8 = param_1;
    *(ID *)((long)aIStack_98 + lVar9) = IVar3;
    _swift_storeEnumTagMultiPayload(pIVar8,lVar1,5);
    (**(code **)(lVar10 + 0x20))();
    _swift_unknownObjectRelease(lVar5);
    FUN_100363d88(pIVar8);
  }
  lVar9 = _TtC10Filepicker14FilePickerTask::objCDelegate;
  _swift_beginAccess(unaff_x20 + _TtC10Filepicker14FilePickerTask::objCDelegate,aIStack_98,0,0);
  IVar3 = unaff_x20 + lVar9;
  _swift_unknownObjectWeakLoadStrong();
  if (IVar3 != 0) {
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_1);
    _objc_msgSend(IVar3,"filePickerTask:didFailedWithError:");
    _swift_unknownObjectRelease(IVar3);
  }
  return;
}

