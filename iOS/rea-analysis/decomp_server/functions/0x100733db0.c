// rea decompile_all
// name: SAItemEventObject::initWithType:itemType:itemID:
// address: 0x100733db0
// body: available
// range: 0x100733db0-0x100733e93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

ID SAItemEventObject::initWithType_itemType_itemID_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  unsigned_long_long uVar2;
  ID local_50;
  class_t *pcStack_48;
  
  pcStack_48 = &objc::class_t::SAItemEventObject;
  local_50 = param_1;
  IVar1 = SABaseEventObject::init((ID)&local_50,"init");
  if (IVar1 != 0) {
    uVar2 = SABaseEventObject::eventTypeWithType_((ID)&objc::class_t::SAItemEventObject,param_3);
    SABaseEventObject::setType_(IVar1,uVar2);
    *(ID *)(IVar1 + (long)_itemType) = param_4;
    *(ID *)(IVar1 + (long)_itemID) = param_5;
  }
  return IVar1;
}

