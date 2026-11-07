// rea decompile_all
// name: SentryDispatchSourceWrapper::initTimerWithInterval:leeway:queue:eventHandler:
// address: 0x100795584
// body: available
// range: 0x100795584-0x10079569f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

ID SentryDispatchSourceWrapper::initTimerWithInterval_leeway_queue_eventHandler_
             (ID param_1,SEL param_2,unsigned_long_long param_3,unsigned_long_long param_4,
             ID param_5,ID param_6,undefined4 param_7)

{
  ID IVar1;
  dispatch_queue_t queue;
  dispatch_source_t pdVar2;
  dispatch_time_t start;
  undefined8 uVar3;
  objc_super local_50;
  
  local_50.super_class = &objc::class_t::SentryDispatchSourceWrapper;
  local_50.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_50,"init");
  if (IVar1 != 0) {
    *(ID *)(IVar1 + 8) = param_5;
    queue = (dispatch_queue_t)objc_stub::queue(param_5);
    pdVar2 = _dispatch_source_create
                       ((dispatch_source_type_t)PTR___dispatch_source_type_timer_1009954c0,0,0,queue
                       );
    uVar3 = *(undefined8 *)(IVar1 + 0x10);
    *(dispatch_source_t *)(IVar1 + 0x10) = pdVar2;
    _dispatch_source_set_event_handler(uVar3,*(undefined8 *)(IVar1 + 0x10),param_6);
    pdVar2 = *(dispatch_source_t *)(IVar1 + 0x10);
    start = _dispatch_time(0,0);
    _dispatch_source_set_timer(pdVar2,start,param_3,param_4);
    _dispatch_resume(*(dispatch_object_t *)(IVar1 + 0x10));
  }
  return IVar1;
}

