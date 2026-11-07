// rea decompile_all
// name: SentryDispatchQueueWrapper::dispatchSyncOnMainQueue:timeout:
// address: 0x10073976c
// body: available
// range: 0x10073976c-0x10073987f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

bool SentryDispatchQueueWrapper::dispatchSyncOnMainQueue_timeout_
               (ID param_1,SEL param_2,ID param_3,uint param_4,double param_5)

{
  ID IVar1;
  dispatch_semaphore_t dsema;
  dispatch_time_t timeout;
  long lVar2;
  bool bVar3;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  dispatch_semaphore_t local_50;
  ID local_48;
  
  IVar1 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread,param_3,(ulong)param_4);
  if ((int)IVar1 == 0) {
    dsema = _dispatch_semaphore_create(0);
    local_70 = PTR___NSConcreteStackBlock_100995490;
    local_68 = 0xc2000000;
    local_60 = FUN_100739880;
    puStack_58 = &DAT_1009e86c8;
    local_50 = dsema;
    local_48 = param_3;
    _dispatch_async(PTR___dispatch_main_q_1009954b0,&local_70);
    timeout = _dispatch_time(0,(long)(param_5 * 1000000000.0));
    lVar2 = _dispatch_semaphore_wait(dsema,timeout);
    bVar3 = (bool)(lVar2 == 0);
  }
  else {
    (**(code **)(param_3 + 0x10))(param_3);
    bVar3 = 1;
  }
  return bVar3;
}

