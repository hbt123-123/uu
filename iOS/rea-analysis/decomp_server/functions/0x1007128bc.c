// rea decompile_all
// name: SATaskObject::initWithTaskID:name:nodes:
// address: 0x1007128bc
// body: available
// range: 0x1007128bc-0x10071298f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

ID SATaskObject::initWithTaskID_name_nodes_(ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  ID IVar2;
  ID local_50;
  class_t *pcStack_48;
  
  pcStack_48 = &objc::class_t::SATaskObject;
  local_50 = param_1;
  IVar1 = NSObject::init((ID)&local_50,"init");
  if (IVar1 != 0) {
    *(ID *)(IVar1 + 8) = param_3;
    *(ID *)(IVar1 + 0x10) = param_4;
    IVar2 = objc_stub::mutableCopy(param_5);
    *(ID *)(IVar1 + 0x28) = IVar2;
  }
  return IVar1;
}

