// rea decompile_all
// name: SAEventLibObject::init
// address: 0x100727418
// body: available
// range: 0x100727418-0x1007274fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SAEventLibObject::init(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID local_30;
  class_t *pcStack_28;
  
  pcStack_28 = &objc::class_t::SAEventLibObject;
  local_30 = param_1;
  IVar1 = NSObject::init((ID)&local_30,"init");
  if (IVar1 != 0) {
    *(cfstringStruct **)(IVar1 + 8) = &cf_macOS;
    *(cfstringStruct **)(IVar1 + 0x10) = &cf_code;
    IVar2 = objc_stub::libVersion((ID)&objc::class_t::SensorsAnalyticsSDK);
    *(ID *)(IVar1 + 0x18) = IVar2;
    IVar2 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
    IVar2 = NSBundle::objectForInfoDictionaryKey_(IVar2,&cf_CFBundleShortVersionString);
    *(ID *)(IVar1 + 0x20) = IVar2;
    *(undefined8 *)(IVar1 + 0x28) = 0;
  }
  return IVar1;
}

