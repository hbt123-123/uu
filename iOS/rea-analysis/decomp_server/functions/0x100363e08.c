// rea decompile_all
// name: FUN_100363e08
// address: 0x100363e08
// body: available
// range: 0x100363e08-0x10036417f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_100363e08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  ID IVar7;
  char *pcVar8;
  long unaff_x20;
  undefined1 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_b0 [8];
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 auStack_78 [24];
  
  lVar5 = 0;
  local_a0 = param_2;
  local_98 = param_3;
  local_90 = param_4;
  __s10Foundation4UUIDVMa();
  lVar11 = *(long *)(lVar5 + -8);
  puVar9 = auStack_b0 + -(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100a889c0;
  local_a8 = lVar5;
  FUN_100004bb4(&DAT_100a889c0,&DAT_10081cc68);
  lVar12 = (long)puVar9 - (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = unaff_x20 + _TtC10Filepicker14FilePickerTask::delegate;
  *(undefined8 *)(lVar5 + 8) = 0;
  _swift_unknownObjectWeakInit(lVar5,0);
  _swift_unknownObjectWeakInit(unaff_x20 + _TtC10Filepicker14FilePickerTask::objCDelegate,0);
  *(undefined8 *)(unaff_x20 + _TtC10Filepicker14FilePickerTask::status) = 0;
  *(undefined8 *)(unaff_x20 + _TtC10Filepicker14FilePickerTask::responseBody) = 0;
  *(undefined8 *)(unaff_x20 + _TtC10Filepicker14FilePickerTask::userData) = 0;
  FUN_100364180(param_3,lVar12);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC10Filepicker17FilePickerRequest::taskDidCompleteWithError)
  ;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC10Filepicker17FilePickerRequest::uploadProgressHandler);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  lVar2 = _TtC10Filepicker17FilePickerRequest::_task;
  *(undefined8 *)(unaff_x20 + _TtC10Filepicker17FilePickerRequest::_task) = 0;
  *(undefined8 *)(unaff_x20 + _TtC10Filepicker17FilePickerRequest::retryCount) = 0;
  *(undefined8 *)(unaff_x20 + _TtC10Filepicker17FilePickerRequest::maxRetryCount) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC10Filepicker17FilePickerRequest::startTime);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC10Filepicker17FilePickerRequest::endTime);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lVar4 = _TtC10Filepicker17FilePickerRequest::uploadable;
  lVar5 = 0;
  FUN_10035c064();
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(unaff_x20 + lVar4,1,1,lVar5);
  lVar3 = _TtC10Filepicker17FilePickerRequest::error;
  *(undefined8 *)(unaff_x20 + _TtC10Filepicker17FilePickerRequest::error) = 0;
  lVar5 = _TtC10Filepicker17FilePickerRequest::taskLock;
  puVar6 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  pcVar8 = "init";
  IVar7 = _objc_msgSend((ID)puVar6,"init");
  *(ID *)(unaff_x20 + lVar5) = IVar7;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC10Filepicker17FilePickerRequest::initialResponseTime);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(unaff_x20 + _TtC10Filepicker17FilePickerRequest::_metrics) = 0;
  *(undefined8 *)(unaff_x20 + _TtC10Filepicker17FilePickerRequest::session) = param_1;
  __s10Foundation4UUIDVACycfC(puVar9);
  __s10Foundation4UUIDV10uuidStringSSvg();
  (**(code **)(lVar11 + 8))(puVar9,local_a8);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC10Filepicker17FilePickerRequest::id);
  *puVar1 = param_1;
  puVar1[1] = pcVar8;
  _swift_beginAccess(unaff_x20 + lVar4,auStack_78,0x21,0);
  FUN_1003641d0(lVar12,unaff_x20 + lVar4);
  _swift_endAccess(auStack_78);
  *(undefined8 *)(unaff_x20 + lVar2) = local_a0;
  _swift_beginAccess(unaff_x20 + lVar3,auStack_78,1,0);
  uVar10 = *(undefined8 *)(unaff_x20 + lVar3);
  *(undefined8 *)(unaff_x20 + lVar3) = local_90;
  _swift_errorRetain();
  _swift_errorRelease(uVar10);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC10Filepicker17FilePickerRequest::responseData);
  puVar1[1] = 0xc000000000000000;
  *puVar1 = 0;
  IVar7 = NSProgress::progressWithTotalUnitCount_
                    ((ID)&_OBJC_CLASS___NSProgress,"progressWithTotalUnitCount:",0);
  *(ID *)(unaff_x20 + _TtC10Filepicker17FilePickerRequest::uploadProgress) = IVar7;
  FUN_10035fd84();
  IVar7 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff78,"init");
  FUN_100040bb4(local_98,&DAT_100a889c0,&DAT_10081cc68);
  FUN_100040bb4(lVar12,&DAT_100a889c0,&DAT_10081cc68);
  return IVar7;
}

