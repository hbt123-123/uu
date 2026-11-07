// rea decompile_all
// name: FUN_10035ef70
// address: 0x10035ef70
// body: available
// range: 0x10035ef70-0x10035efeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10035ef70(undefined8 *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  ID self;
  undefined1 auVar3 [16];
  
  self = *(ID *)(unaff_x20 + _TtC10Filepicker17FilePickerRequest::taskLock);
  param_1[1] = unaff_x20;
  param_1[2] = self;
  _objc_msgSend(self,"lock");
  lVar1 = _TtC10Filepicker17FilePickerRequest::_task;
  param_1[3] = _TtC10Filepicker17FilePickerRequest::_task;
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  _objc_msgSend(self,"unlock");
  *param_1 = uVar2;
  auVar3._8_8_ = param_1;
  auVar3._0_8_ = FUN_10035efec;
  return auVar3;
}

