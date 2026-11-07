// rea decompile_all
// name: FUN_1002f9930
// address: 0x1002f9930
// body: available
// range: 0x1002f9930-0x1002f99d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002f99d0 to 0x1007df19c _swift_deallocClassInstance (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002f9930(long *param_1)

{
  long lVar1;
  
  FUN_1002c7520();
  FUN_10003f094((long)param_1 + _TtC9Alamofire11DataRequest::convertible);
  _swift_release(*(undefined8 *)((long)param_1 + _TtC9Alamofire11DataRequest::dataMutableState));
  lVar1 = _TtC9Alamofire13UploadRequest::upload;
  _swift_retain(param_1);
  FUN_10003f094((long)param_1 + lVar1);
  FUN_100040bb4((long)param_1 + _TtC9Alamofire13UploadRequest::uploadable,&DAT_100a84710,
                &DAT_1008190f0);
  _swift_release(param_1);
  _swift_deallocClassInstance
            (param_1,*(undefined4 *)(*param_1 + 0x30),*(undefined2 *)(*param_1 + 0x34));
  return;
}

