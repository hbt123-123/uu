// rea decompile_all
// name: FUN_100371d80
// address: 0x100371d80
// body: available
// range: 0x100371d80-0x10037201f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_100371d80(undefined8 param_1,ID param_2)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 *puVar6;
  ID self;
  ulong uVar7;
  long unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  ID self_00;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar4 = &DAT_100a889c0;
  FUN_100004bb4(&DAT_100a889c0,&DAT_10081cc68);
  puVar8 = auStack_90 + -(*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  FUN_10035c064();
  lVar2 = _TtC10Filepicker17FilePickerRequest::uploadable;
  lVar10 = *(long *)(lVar5 + -8);
  lVar9 = (long)puVar8 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_2 + _TtC10Filepicker17FilePickerRequest::uploadable,auStack_78,0,0);
  FUN_100364180(param_2 + lVar2,puVar8);
  puVar6 = puVar8;
  (**(code **)(lVar10 + 0x30))(puVar8,1,lVar5);
  if ((int)puVar6 == 1) {
    FUN_100372da8(puVar8);
  }
  else {
    FUN_100372df0(puVar8,lVar9);
    self = *(ID *)(unaff_x20 + _TtC10Filepicker17FilepickerManager::session);
    FUN_10035b994(self,*(undefined8 *)(unaff_x20 + _TtC10Filepicker17FilepickerManager::queue));
    self_00 = *(ID *)(param_2 + _TtC10Filepicker17FilePickerRequest::taskLock);
    _objc_msgSend(self_00,"lock");
    lVar2 = _TtC10Filepicker17FilePickerRequest::_task;
    lVar5 = *(long *)(param_2 + _TtC10Filepicker17FilePickerRequest::_task);
    _objc_msgSend(self_00,"unlock");
    if (lVar5 != 0) {
      (**(code **)((*(ulong *)PTR__swift_isaMask_100995ee0 &
                   **(ulong **)(unaff_x20 + _TtC10Filepicker17FilepickerManager::sessionDelegate)) +
                  0xe0))(0,lVar5);
    }
    _objc_msgSend(self_00,"lock");
    *(ID *)(param_2 + lVar2) = self;
    _objc_msgSend(param_2,"reset");
    _objc_msgSend(self_00,"unlock");
    lVar2 = _TtC10Filepicker17FilePickerRequest::retryCount;
    _swift_beginAccess(param_2 + _TtC10Filepicker17FilePickerRequest::retryCount,auStack_90,1,0);
    uVar7 = *(ulong *)(param_2 + lVar2);
    if (0xfffffffffffffffe < uVar7) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100372020);
      (*pcVar3)();
    }
    *(ulong *)(param_2 + lVar2) = uVar7 + 1;
    _CFAbsoluteTimeGetCurrent();
    puVar1 = (undefined8 *)(param_2 + _TtC10Filepicker17FilePickerRequest::startTime);
    *puVar1 = param_1;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1 = (undefined8 *)(param_2 + _TtC10Filepicker17FilePickerRequest::endTime);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    _objc_msgSend(self,"resume");
    FUN_10035c694(lVar9);
  }
  return (int)puVar6 != 1;
}

