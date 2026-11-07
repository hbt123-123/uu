// rea decompile_all
// name: _TtC10Filepicker17FilePickerRequest::.cxx_destruct
// address: 0x10035f680
// body: available
// range: 0x10035f680-0x10035f76b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10035f768 to 0x1007df514 _swift_unknownObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC10Filepicker17FilePickerRequest::_cxx_destruct(ID param_1,SEL param_2)

{
  undefined8 *puVar1;
  
  FUN_10007ed2c(*(undefined8 *)(param_1 + taskDidCompleteWithError),
                ((undefined8 *)(param_1 + taskDidCompleteWithError))[1]);
  puVar1 = (undefined8 *)(param_1 + uploadProgressHandler);
  FUN_10028abac(*puVar1,puVar1[1],puVar1[2]);
  FUN_100006cdc(*(undefined8 *)(param_1 + responseData),((undefined8 *)(param_1 + responseData))[1])
  ;
  FUN_100040bb4(param_1 + uploadable,&DAT_100a889c0,&DAT_10081cc68);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + id + 8));
  _swift_errorRelease(*(undefined8 *)(param_1 + error));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _metrics));
  return;
}

