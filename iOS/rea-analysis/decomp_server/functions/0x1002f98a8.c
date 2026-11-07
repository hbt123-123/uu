// rea decompile_all
// name: FUN_1002f98a8
// address: 0x1002f98a8
// body: available
// range: 0x1002f98a8-0x1002f992f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_1002f98a8(long param_1)

{
  FUN_1002c7520();
  FUN_10003f094(param_1 + _TtC9Alamofire11DataRequest::convertible);
  _swift_release(*(undefined8 *)(param_1 + _TtC9Alamofire11DataRequest::dataMutableState));
  FUN_10003f094(param_1 + _TtC9Alamofire13UploadRequest::upload);
  FUN_100040bb4(param_1 + _TtC9Alamofire13UploadRequest::uploadable,&DAT_100a84710,&DAT_1008190f0);
  return param_1;
}

