// rea decompile_all
// name: FUN_10035ebb0
// address: 0x10035ebb0
// body: available
// range: 0x10035ebb0-0x10035ec07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_10035ebb0(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _TtC10Filepicker17FilePickerRequest::_metrics);
  if (lVar2 != 0) {
    _swift_unknownObjectRetain(lVar2);
    lVar1 = lVar2;
    _swift_dynamicCastObjCClass(lVar2,&_OBJC_CLASS___NSURLSessionTaskMetrics);
    if (lVar1 == 0) {
      _swift_unknownObjectRelease(lVar2);
    }
  }
  return;
}

