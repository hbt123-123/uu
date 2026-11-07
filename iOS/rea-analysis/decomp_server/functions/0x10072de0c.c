// rea decompile_all
// name: SAReadWriteLock::initWithQueueLabel:
// address: 0x10072de0c
// body: available
// range: 0x10072de0c-0x10072deeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SAReadWriteLock::initWithQueueLabel_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID self;
  char *label;
  dispatch_queue_t pdVar2;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::SAReadWriteLock;
  local_40 = param_1;
  self = NSObject::init((ID)&local_40,"init");
  if (self != 0) {
    bVar1 = SAValidator::isValidString_((ID)&objc::class_t::SAValidator,param_3);
    if (bVar1 == 0) {
      param_3 = NSString::stringWithFormat_
                          ((ID)&_OBJC_CLASS___NSString,&cf_com_sensorsdata_readWriteLock__p);
    }
    _objc_retainAutorelease();
    label = (char *)objc_stub::UTF8String(param_3);
    pdVar2 = _dispatch_queue_create
                       (label,(dispatch_queue_attr_t)PTR___dispatch_queue_attr_concurrent_1009954b8)
    ;
    NSObject::setConcurentQueue_(self,pdVar2);
  }
  return self;
}

