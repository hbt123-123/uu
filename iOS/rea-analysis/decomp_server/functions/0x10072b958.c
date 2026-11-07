// rea decompile_all
// name: SAConsoleLogger::init
// address: 0x10072b958
// body: available
// range: 0x10072b958-0x10072b9d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

ID SAConsoleLogger::init(ID param_1,SEL param_2)

{
  ID IVar1;
  dispatch_queue_t pdVar2;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::SAConsoleLogger;
  local_30.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_30,"init");
  if (IVar1 != 0) {
    *(undefined8 *)(IVar1 + (long)_maxStackSize) = 0x1000;
    pdVar2 = _dispatch_queue_create
                       ("cn.sensorsdata.SAConsoleLoggerSerialQueue",(dispatch_queue_attr_t)0x0);
    SAAbstractLogger::setLoggerQueue_(IVar1,(ID)pdVar2);
  }
  return IVar1;
}

