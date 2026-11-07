// rea decompile_all
// name: FUN_10078a7b8
// address: 0x10078a7b8
// body: available
// range: 0x10078a7b8-0x10078a8f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10078a8f4 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10078a7b8(ID param_1,undefined8 param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::FUN_1007ef760(param_1);
  IVar1 = objc_stub::sentryIdString(IVar1);
  objc_stub::removeObjectForKey_(DAT_100b2e100,param_2);
  IVar2 = objc_stub::objectForKeyedSubscript_(DAT_100b2e0f8,IVar1);
  IVar2 = objc_stub::FUN_1007f7b40(IVar2);
  IVar2 = objc_stub::numberWithUnsignedInt_((ID)&_OBJC_CLASS___NSNumber,(ulong)((int)IVar2 - 1));
  objc_stub::setObject_forKeyedSubscript_(DAT_100b2e0f8,IVar2,IVar1);
  IVar2 = objc_stub::objectForKeyedSubscript_(DAT_100b2e0f8,IVar1);
  IVar2 = objc_stub::FUN_1007f7b40(IVar2);
  if ((int)IVar2 == 0) {
    objc_stub::removeObjectForKey_(DAT_100b2e0f8,IVar1);
    IVar1 = objc_stub::FUN_1007ed3c0(param_1);
    if ((int)IVar1 != 0) {
      objc_stub::FUN_1007f62a0(param_1,0);
    }
  }
  return 0;
}

