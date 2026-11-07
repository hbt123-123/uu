// rea decompile_all
// name: SAEventTrackerPluginManager::registerPlugin:
// address: 0x10072f090
// body: available
// range: 0x10072f090-0x10072f1eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10072f1e8 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SAEventTrackerPluginManager::registerPlugin_(ID param_1,SEL param_2,ID param_3)

{
  class_t *pcVar1;
  ID IVar2;
  undefined *local_60;
  undefined8 local_58;
  code *local_50;
  undefined *puStack_48;
  ID local_40;
  ID IStack_38;
  
  pcVar1 = &objc::class_t::SAEventTrackerPlugin;
  _objc_opt_class(&objc::class_t::SAEventTrackerPlugin);
  IVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,pcVar1);
  if (((((IVar2 & 1) != 0) &&
       (IVar2 = objc_stub::conformsToProtocol_
                          (param_3,&objc::protocol_t::SAEventTrackerPluginProtocol), (int)IVar2 != 0
       )) && (IVar2 = param_3, _objc_opt_respondsToSelector(param_3,"install"), (IVar2 & 1) != 0))
     && (IVar2 = param_3, _objc_opt_respondsToSelector(param_3,"uninstall"), (IVar2 & 1) != 0)) {
    IVar2 = plugins(param_1);
    IVar2 = objc_stub::containsObject_(IVar2,param_3);
    if ((IVar2 & 1) == 0) {
      IVar2 = plugins(param_1);
      local_60 = PTR___NSConcreteStackBlock_100995490;
      local_58 = 0xc2000000;
      local_50 = FUN_10072f1ec;
      puStack_48 = &DAT_1009e8288;
      local_40 = param_3;
      IStack_38 = param_1;
      objc_stub::enumerateObjectsWithOptions_usingBlock_(IVar2,2,&local_60);
      IVar2 = plugins(param_1);
      objc_stub::addObject_(IVar2,param_3);
      objc_stub::install(param_3);
    }
  }
  return;
}

