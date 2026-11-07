// rea decompile_all
// name: FUN_100362794
// address: 0x100362794
// body: available
// range: 0x100362794-0x10036292f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100362794(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  ID self;
  ID IVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  FUN_100363c40();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,
                      "URLSession:task:didSendBodyData:totalBytesSent:totalBytesExpectedToSend:",
                      param_1,param_2,param_3,param_4,param_5);
  lVar3 = unaff_x20 + _TtC10Filepicker14FilePickerTask::delegate;
  _swift_beginAccess(lVar3,auStack_68,0,0);
  lVar1 = lVar3;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar3 + 8);
    _swift_getObjectType();
    _swift_beginAccess(unaff_x20 + _TtC10Filepicker17FilePickerRequest::uploadProgress,auStack_80,0,
                       0);
    (**(code **)(lVar3 + 0x10))();
    _swift_unknownObjectRelease(lVar1);
  }
  lVar3 = _TtC10Filepicker14FilePickerTask::objCDelegate;
  _swift_beginAccess(unaff_x20 + _TtC10Filepicker14FilePickerTask::objCDelegate,auStack_98,0,0);
  self = unaff_x20 + lVar3;
  _swift_unknownObjectWeakLoadStrong();
  if (self != 0) {
    IVar2 = _objc_msgSend(self,"respondsToSelector:","filePickerTask:didUpdateProgress:");
    if ((IVar2 & 1) != 0) {
      _swift_beginAccess(unaff_x20 + _TtC10Filepicker17FilePickerRequest::uploadProgress,auStack_b0,
                         0,0);
      _objc_msgSend(self,"filePickerTask:didUpdateProgress:");
    }
    _swift_unknownObjectRelease(self);
  }
  return;
}

