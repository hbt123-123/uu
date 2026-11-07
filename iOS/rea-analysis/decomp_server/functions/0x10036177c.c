// rea decompile_all
// name: _TtC10Filepicker25FilePickerSessionDelegate::URLSession:dataTask:didReceiveResponse:completionHandler:
// address: 0x10036177c
// body: available
// range: 0x10036177c-0x1003617d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003617d0 to 0x1007ddca8 __Block_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x30 bytes */

void _TtC10Filepicker25FilePickerSessionDelegate::
     URLSession_dataTask_didReceiveResponse_completionHandler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,
               undefined4 param_7)

{
  void *aBlock;
  
  aBlock = __Block_copy((void *)param_6);
  _swift_dynamicCastObjCClass(param_5,&_OBJC_CLASS___NSHTTPURLResponse);
  (**(code **)((long)aBlock + 0x10))(aBlock,param_5 != 0);
  __Block_release(aBlock);
  return;
}

