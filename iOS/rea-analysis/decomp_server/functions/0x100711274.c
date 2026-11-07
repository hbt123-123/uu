// rea decompile_all
// name: SAPresetPropertyPlugin::properties
// address: 0x100711274
// body: available
// range: 0x100711274-0x10071137f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100711378 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10071137c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SAPresetPropertyPlugin::properties(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID self;
  cfstringStruct *local_48;
  cfstringStruct *pcStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar1 = SAPropertyPlugin::filter(param_1);
  IVar2 = objc_stub::hybridH5(IVar1);
  self = presetProperties(param_1);
  IVar1 = self;
  if ((int)IVar2 != 0) {
    IVar1 = objc_stub::mutableCopy(self);
    local_48 = &cf__lib;
    pcStack_40 = &cf__lib_version;
    IVar2 = NSArray::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_48,2);
    objc_stub::removeObjectsForKeys_(IVar1,IVar2);
    IVar1 = objc_stub::copy(IVar1);
    self = 0;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(self);
}

