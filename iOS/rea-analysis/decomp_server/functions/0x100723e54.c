// rea decompile_all
// name: FUN_100723e54
// address: 0x100723e54
// body: available
// range: 0x100723e54-0x100723ebf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100723ebc to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100723e54(void)

{
  ID IVar1;
  class_t *pcVar2;
  
  IVar1 = SAPropertyPluginManager::sharedInstance((ID)&objc::class_t::SAPropertyPluginManager);
  pcVar2 = &objc::class_t::SASuperPropertyPlugin;
  _objc_opt_class();
  IVar1 = SAPropertyPluginManager::pluginsWithPluginClass_(IVar1,(CLASS)pcVar2);
  if (IVar1 != 0) {
    objc_stub::clearSuperProperties(IVar1);
  }
  return 0;
}

