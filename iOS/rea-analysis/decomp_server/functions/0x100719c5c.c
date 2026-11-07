// rea decompile_all
// name: FUN_100719c5c
// address: 0x100719c5c
// body: available
// range: 0x100719c5c-0x100719d53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100719d50 to 0x1007f2400 objc_stub::setDateFormat: (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100719c5c(long param_1)

{
  undefined8 uVar1;
  undefined *self;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc_init();
  DAT_100b2c790 = uVar1;
  DAT_100b2c7a0 =
       _dispatch_queue_create
                 ("cn.sensorsdata.SALogConcurrentQueue",
                  (dispatch_queue_attr_t)PTR___dispatch_queue_attr_concurrent_1009954b8);
  DAT_100b2c7a8 =
       _dispatch_queue_create("cn.sensorsdata.SALogSerialQueue",(dispatch_queue_attr_t)0x0);
  DAT_100b2c7b0 = _dispatch_group_create();
  _dispatch_queue_set_specific
            (DAT_100b2c7a8,&PTR_LOOP_1009e7d10,&PTR_LOOP_1009e7d10,(dispatch_function_t)0x0);
  DAT_100b2c7b8 = _dispatch_semaphore_create(10);
  self = &_OBJC_CLASS___NSDateFormatter;
  _objc_alloc_init();
  uVar1 = DAT_100b2c7c0;
  DAT_100b2c7c0 = self;
  objc_stub::setDateFormat_((ID)self,uVar1,&cf_yyyy_MM_ddHH_mm_ss_SSSSSSZ);
  return;
}

