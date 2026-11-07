// rea decompile_all
// name: FUN_10070b1ac
// address: 0x10070b1ac
// body: available
// range: 0x10070b1ac-0x10070b2af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10070b2ac to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10070b1ac(long param_1)

{
  ID IVar1;
  
  IVar1 = objc_stub::isEqualToString_(*(ID *)(param_1 + 0x20),&cf__identity_login_id);
  if ((int)IVar1 == 0) {
    IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_______);
    objc_stub::setLoginId_(*(ID *)(param_1 + 0x28),IVar1);
  }
  else {
    objc_stub::setLoginId_(*(ID *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  }
  objc_stub::setOriginalLoginId_(*(ID *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  objc_stub::setLoginIDKey_(*(ID *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  IVar1 = SAStoreManager::sharedInstance((ID)&objc::class_t::SAStoreManager);
  SABaseStoreManager::setObject_forKey_(IVar1,*(ID *)(param_1 + 0x30),(ID)&cf_login_id);
  IVar1 = SAStoreManager::sharedInstance((ID)&objc::class_t::SAStoreManager);
  SABaseStoreManager::setObject_forKey_(IVar1,*(ID *)(param_1 + 0x20),0x1009ef230);
  return 0;
}

