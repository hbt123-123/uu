// rea decompile_all
// name: SAHTTPSession::dataTaskWithRequest:completionHandler:
// address: 0x10072a10c
// body: available
// range: 0x10072a10c-0x10072a1e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10072a1e0 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SAHTTPSession::dataTaskWithRequest_completionHandler_
             (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  ID IVar1;
  undefined *local_58;
  undefined8 local_50;
  code *local_48;
  undefined *puStack_40;
  ID local_38;
  
  IVar1 = session(param_1);
  local_58 = PTR___NSConcreteStackBlock_100995490;
  local_50 = 0xc2000000;
  local_48 = FUN_10072a1e4;
  puStack_40 = &DAT_1009e81a8;
  local_38 = param_4;
  IVar1 = dataTaskWithRequest_completionHandler_(IVar1,param_3,(ID)&local_58,param_5);
  return IVar1;
}

