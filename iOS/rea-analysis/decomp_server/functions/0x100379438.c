// rea decompile_all
// name: MMKV::dealloc
// address: 0x100379438
// body: available
// range: 0x100379438-0x1003794d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void MMKV::dealloc(ID param_1,SEL param_2)

{
  ID self;
  ID local_30;
  class_t *pcStack_28;
  
  clearMemoryCache(param_1);
  self = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  NSNotificationCenter::removeObserver_(self,param_1);
  FUN_100386734(1,"libMMKV.mm","-[MMKV dealloc]",0x11a,"dealloc %@");
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1003801c8();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  pcStack_28 = &objc::class_t::MMKV;
  local_30 = param_1;
  NSObject::dealloc((ID)&local_30,"dealloc");
  return;
}

