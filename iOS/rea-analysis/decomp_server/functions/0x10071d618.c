// rea decompile_all
// name: SAFlushInterceptor::requestWithInput:completion:
// address: 0x10071d618
// body: available
// range: 0x10071d618-0x10071d747 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SAFlushInterceptor::requestWithInput_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  ID IVar1;
  ID IVar2;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  ID local_58;
  ID IStack_50;
  ID local_48;
  
  local_78 = PTR___NSConcreteStackBlock_100995490;
  local_70 = 0xc2000000;
  local_68 = FUN_10071d748;
  puStack_60 = &DAT_1009e7e50;
  local_58 = param_3;
  IStack_50 = param_1;
  local_48 = param_4;
  IVar1 = buildFlushRequestWithInput_(param_1,param_3);
  IVar2 = SAHTTPSession::sharedInstance((ID)&objc::class_t::SAHTTPSession);
  IVar1 = SAHTTPSession::dataTaskWithRequest_completionHandler_(IVar2,IVar1,(ID)&local_78,param_5);
  objc_stub::resume(IVar1);
  return;
}

