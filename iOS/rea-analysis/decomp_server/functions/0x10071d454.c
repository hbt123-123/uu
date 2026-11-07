// rea decompile_all
// name: SAFlushInterceptor::processWithInput:completion:
// address: 0x10071d454
// body: available
// range: 0x10071d454-0x10071d5af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SAFlushInterceptor::processWithInput_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  bool bVar1;
  ID IVar2;
  dispatch_semaphore_t dsema;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  ID local_60;
  ID IStack_58;
  ID local_50;
  undefined1 local_48;
  
  IVar2 = objc_stub::configOptions(param_3);
  IVar2 = objc_stub::flushBeforeEnterBackground(IVar2);
  if ((IVar2 & 1) == 0) {
    IVar2 = objc_stub::configOptions(param_3);
    IVar2 = objc_stub::debugMode(IVar2);
    bVar1 = IVar2 != 0;
  }
  else {
    bVar1 = true;
  }
  local_80 = PTR___NSConcreteStackBlock_100995490;
  local_78 = 0xc2000000;
  local_70 = FUN_10071d5b0;
  puStack_68 = &DAT_1009e7e20;
  local_60 = param_3;
  IStack_58 = param_1;
  local_50 = param_4;
  local_48 = bVar1;
  requestWithInput_completion_(param_1,param_3,(ID)&local_80,param_5);
  if (bVar1) {
    dsema = (dispatch_semaphore_t)flushSemaphore(param_1);
    _dispatch_semaphore_wait(dsema,0xffffffffffffffff);
    (**(code **)(param_4 + 0x10))(param_4,param_3);
  }
  return;
}

