// rea decompile_all
// name: FUN_100362380
// address: 0x100362380
// body: available
// range: 0x100362380-0x10036255b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100362380(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ID IVar5;
  long lVar6;
  ID unaff_x20;
  ID IVar7;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  IVar5 = *(ID *)(unaff_x20 + _TtC10Filepicker17FilePickerRequest::taskLock);
  _objc_msgSend(IVar5,"lock");
  lVar6 = _TtC10Filepicker17FilePickerRequest::_task;
  IVar7 = *(ID *)(unaff_x20 + _TtC10Filepicker17FilePickerRequest::_task);
  _objc_msgSend(IVar5,"unlock");
  if ((IVar7 == 0) ||
     (IVar7 = _objc_msgSend(IVar7,"state"), lVar3 = _TtC10Filepicker14FilePickerTask::status,
     IVar7 != 0)) {
    _objc_msgSend(IVar5,"lock");
    IVar7 = *(ID *)(unaff_x20 + lVar6);
    _objc_msgSend(IVar5,"unlock");
    if ((IVar7 == 0) ||
       (IVar5 = _objc_msgSend(IVar7,"state"), lVar6 = _TtC10Filepicker14FilePickerTask::status,
       IVar5 != 3)) {
      puVar1 = (undefined8 *)(unaff_x20 + _TtC10Filepicker17FilePickerRequest::responseData);
      _swift_beginAccess(puVar1,auStack_68,1,0);
      uVar4 = *puVar1;
      uVar2 = puVar1[1];
      puVar1[1] = 0xc000000000000000;
      *puVar1 = 0;
      FUN_100006cdc(uVar4,uVar2);
      lVar6 = _TtC10Filepicker14FilePickerTask::responseBody;
      _swift_beginAccess(unaff_x20 + _TtC10Filepicker14FilePickerTask::responseBody,auStack_80,1,0);
      *(undefined8 *)(unaff_x20 + lVar6) = 0;
      _objc_msgSend(unaff_x20,"reset");
      lVar6 = _TtC10Filepicker14FilePickerTask::status;
      _swift_beginAccess(unaff_x20 + _TtC10Filepicker14FilePickerTask::status,auStack_98,1,0);
      if (*(long *)(unaff_x20 + lVar6) == 2) {
        return;
      }
      FUN_10035f0ec();
      uVar4 = 1;
    }
    else {
      _swift_beginAccess(unaff_x20 + _TtC10Filepicker14FilePickerTask::status,auStack_68,1,0);
      uVar4 = 2;
    }
    *(undefined8 *)(unaff_x20 + lVar6) = uVar4;
  }
  else {
    _swift_beginAccess(unaff_x20 + _TtC10Filepicker14FilePickerTask::status,auStack_68,1,0);
    *(undefined8 *)(unaff_x20 + lVar3) = 1;
  }
  return;
}

