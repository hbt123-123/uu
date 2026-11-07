// rea decompile_all
// name: FUN_100723fcc
// address: 0x100723fcc
// body: available
// range: 0x100723fcc-0x1007240a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007240a4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100723fcc(long param_1)

{
  ID IVar1;
  class_t *pcVar2;
  ID IVar3;
  class_t *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar1 = SAPropertyPluginManager::sharedInstance((ID)&objc::class_t::SAPropertyPluginManager);
  pcVar2 = &objc::class_t::SASuperPropertyPlugin;
  _objc_opt_class();
  local_40 = pcVar2;
  IVar3 = NSArray::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_40,1);
  IVar1 = SAPropertyPluginManager::currentPropertiesForPluginClasses_(IVar1,IVar3);
  objc_stub::addEntriesFromDictionary_(*(ID *)(param_1 + 0x20),IVar1);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

