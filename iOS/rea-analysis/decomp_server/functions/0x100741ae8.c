// rea decompile_all
// name: SentryFileIOTracker::measureNSDataFromFile:options:origin:error:method:
// address: 0x100741ae8
// body: available
// range: 0x100741ae8-0x100741bcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100741bc8 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x38 bytes */

ID SentryFileIOTracker::measureNSDataFromFile_options_origin_error_method_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,ID param_5,ID *param_6,
             ID param_7,undefined4 param_8)

{
  ID IVar1;
  
  IVar1 = startTrackingReadingFilePath_origin_operation_(param_1,param_3,param_5,(ID)&cf_file_read);
  (**(code **)(param_7 + 0x10))(param_7,param_3,param_4,param_6);
  if (IVar1 != 0) {
    finishTrackingNSData_span_(param_1,param_7,IVar1);
  }
  endTrackingFile(param_1);
  return param_7;
}

