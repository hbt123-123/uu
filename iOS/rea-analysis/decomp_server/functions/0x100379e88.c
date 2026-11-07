// rea decompile_all
// name: MMKV::enableAutoCleanUp:
// address: 0x100379e88
// body: available
// range: 0x100379e88-0x100379f87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x14 bytes */

void MMKV::enableAutoCleanUp_(ID param_1,SEL param_2,unsigned_int param_3)

{
  dispatch_object_t source;
  dispatch_queue_t queue;
  dispatch_time_t start;
  long local_38;
  
  FUN_100386734(1,"libMMKV.mm","+[MMKV enableAutoCleanUp:]",0x2f7,
                "enable auto clean up with maxIdleMinutes:%zu");
  local_38 = DAT_100ad1390;
  if (DAT_100ad1390 != 0) {
    FUN_100392994();
  }
  DAT_100ad13d0 = param_3 * 60000;
  if (DAT_100ad13d8._os_obj == (_os_object_s *)0x0) {
    queue = _dispatch_get_global_queue(0,0);
    DAT_100ad13d8._os_obj =
         (_os_object_s *)
         _dispatch_source_create
                   ((dispatch_source_type_t)PTR___dispatch_source_type_timer_1009954c0,0,0,queue);
    _dispatch_source_set_event_handler(DAT_100ad13d8._os_obj,&PTR___NSConcreteGlobalBlock_1009b59f8)
    ;
  }
  else {
    _dispatch_suspend(DAT_100ad13d8);
  }
  source = DAT_100ad13d8;
  start = _dispatch_time(0,(ulong)DAT_100ad13d0 * 1000000);
  _dispatch_source_set_timer
            ((dispatch_source_t)source._os_obj,start,(ulong)DAT_100ad13d0 * 1000000,0);
  _dispatch_resume(DAT_100ad13d8);
  FUN_10037b92c(&local_38);
  return;
}

