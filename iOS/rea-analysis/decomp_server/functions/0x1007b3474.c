// rea decompile_all
// name: FUN_1007b3474
// address: 0x1007b3474
// body: available
// range: 0x1007b3474-0x1007b35ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007b35ec to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1007b3474(long param_1,undefined8 param_2,undefined8 param_3)

{
  ID IVar1;
  ID IVar2;
  ID self;
  
  IVar1 = objc_stub::objectForKeyedSubscript_(*(ID *)(param_1 + 0x20),param_3);
  if ((IVar1 != 0) && (IVar2 = objc_stub::count(IVar1), IVar2 != 0)) {
    IVar2 = objc_stub::count(IVar1);
    self = *(ID *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    if (IVar2 == 1) {
      IVar2 = objc_stub::allValues(IVar1);
      objc_stub::objectAtIndexedSubscript_(IVar2,0);
      IVar1 = objc_stub::allKeys(IVar1);
      objc_stub::objectAtIndexedSubscript_(IVar1,0);
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_________);
      objc_stub::addObject_(self,IVar1);
    }
    else {
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf____luitems);
      objc_stub::addObject_(self,IVar1);
    }
  }
  return 0;
}

