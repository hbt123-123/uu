// rea decompile_all
// name: SAModuleManager::moduleWithName:
// address: 0x100707938
// body: available
// range: 0x100707938-0x1007079cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007079cc to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SAModuleManager::moduleWithName_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  cfstringStruct *pcVar1;
  ID IVar2;
  code *pcVar3;
  
  self = classNameForModule_(param_1,param_3);
  _NSClassFromString();
  if (self != 0) {
    pcVar1 = &cf_defaultManager;
    _NSSelectorFromString(&cf_defaultManager);
    IVar2 = self;
    _objc_opt_respondsToSelector(self,pcVar1);
    if ((IVar2 & 1) == 0) {
      self = 0;
    }
    else {
      pcVar3 = (code *)objc_stub::methodForSelector_(self,pcVar1);
      (*pcVar3)(self,pcVar1);
    }
  }
  return self;
}

