// rea decompile_all
// name: SAPropertyPluginManager::registerCustomPropertyPlugin:
// address: 0x100730d2c
// body: available
// range: 0x100730d2c-0x100730e5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100730e5c to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SAPropertyPluginManager::registerCustomPropertyPlugin_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID self;
  ID IVar2;
  
  IVar2 = param_3;
  _objc_opt_class();
  _NSStringFromClass();
  IVar1 = customPlugins(param_1);
  IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,IVar2);
  if (IVar1 == 0) {
    IVar1 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray);
    self = customPlugins(param_1);
    objc_stub::setObject_forKeyedSubscript_(self,IVar1,IVar2);
  }
  IVar1 = customPlugins(param_1);
  IVar2 = objc_stub::objectForKeyedSubscript_(IVar1,IVar2);
  objc_stub::addObject_(IVar2,param_3);
  IVar2 = param_3;
  _objc_opt_respondsToSelector(param_3,"prepare");
  if ((IVar2 & 1) != 0) {
    objc_stub::prepare(param_3);
  }
  return;
}

