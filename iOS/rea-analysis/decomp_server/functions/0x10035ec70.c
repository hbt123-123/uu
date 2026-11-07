// rea decompile_all
// name: FUN_10035ec70
// address: 0x10035ec70
// body: available
// range: 0x10035ec70-0x10035ecdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10035ec70(long *param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar2 = _TtC10Filepicker17FilePickerRequest::_metrics;
  param_1[1] = unaff_x20;
  param_1[2] = lVar2;
  lVar2 = *(long *)(unaff_x20 + lVar2);
  if (lVar2 != 0) {
    _swift_unknownObjectRetain(lVar2);
    lVar1 = lVar2;
    _swift_dynamicCastObjCClass(lVar2,&_OBJC_CLASS___NSURLSessionTaskMetrics);
    if (lVar1 != 0) goto LAB_10035ecc4;
    _swift_unknownObjectRelease(lVar2);
  }
  lVar1 = 0;
LAB_10035ecc4:
  *param_1 = lVar1;
  auVar3._8_8_ = param_1;
  auVar3._0_8_ = FUN_10035ece0;
  return auVar3;
}

