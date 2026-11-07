// rea decompile_all
// name: FUN_10036394c
// address: 0x10036394c
// body: available
// range: 0x10036394c-0x100363b0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10036394c(undefined8 param_1)

{
  undefined8 uVar1;
  ID IVar2;
  long lVar3;
  ulong uVar4;
  ID self;
  ID IVar5;
  ulong unaff_x20;
  long lVar6;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar1 = param_1;
  __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
  FUN_100363c40();
  IVar2 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffa0,"shouldRetryWithError:",uVar1);
  lVar6 = unaff_x20 + _TtC10Filepicker14FilePickerTask::delegate;
  _swift_beginAccess(lVar6,auStack_78,0,0);
  lVar3 = lVar6;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar3 != 0) {
    lVar6 = *(long *)(lVar6 + 8);
    _swift_getObjectType();
    _swift_beginAccess(unaff_x20 + _TtC10Filepicker17FilePickerRequest::retryCount,auStack_90,0,0);
    uVar4 = unaff_x20;
    (**(code **)(lVar6 + 0x30))();
    _swift_unknownObjectRelease(lVar3);
    if ((uVar4 & 1) != 0) {
      if ((IVar2 & 1) == 0) {
        return 0;
      }
      return 1;
    }
  }
  lVar6 = _TtC10Filepicker14FilePickerTask::objCDelegate;
  _swift_beginAccess(unaff_x20 + _TtC10Filepicker14FilePickerTask::objCDelegate,auStack_a8,0,0);
  self = unaff_x20 + lVar6;
  _swift_unknownObjectWeakLoadStrong();
  if (self != 0) {
    IVar5 = _objc_msgSend(self,"respondsToSelector:","filePickerTask:shouldRetry:retryCount:");
    if ((IVar5 & 1) == 0) {
      _swift_unknownObjectRelease(self);
    }
    else {
      _swift_beginAccess(unaff_x20 + _TtC10Filepicker17FilePickerRequest::retryCount,auStack_c0,0,0)
      ;
      __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_1);
      IVar5 = _objc_msgSend(self,"filePickerTask:shouldRetry:retryCount:");
      _swift_unknownObjectRelease(self);
      if (((uint)IVar2 & (uint)IVar5 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}

