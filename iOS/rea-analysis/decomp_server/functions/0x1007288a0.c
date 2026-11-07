// rea decompile_all
// name: SAEventStore::initWithFilePath:
// address: 0x1007288a0
// body: available
// range: 0x1007288a0-0x100728983 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SAEventStore::initWithFilePath_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID IVar1;
  char *label;
  dispatch_queue_t pdVar2;
  undefined8 uVar3;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::SAEventStore;
  local_40 = param_1;
  self = NSObject::init((ID)&local_40,"init");
  if (self != 0) {
    IVar1 = NSString::stringWithFormat_
                      ((ID)&_OBJC_CLASS___NSString,&cf_cn_sensorsdata_SAEventStore__p);
    _objc_retainAutorelease();
    label = (char *)objc_stub::UTF8String(IVar1);
    pdVar2 = _dispatch_queue_create(label,(dispatch_queue_attr_t)0x0);
    *(dispatch_queue_t *)(self + 8) = pdVar2;
    IVar1 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray);
    uVar3 = *(undefined8 *)(self + 0x18);
    *(ID *)(self + 0x18) = IVar1;
    NSObject::setupDatabase_(self,uVar3,param_3);
  }
  return self;
}

