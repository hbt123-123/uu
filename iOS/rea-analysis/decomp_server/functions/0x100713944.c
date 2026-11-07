// rea decompile_all
// name: SAURLUtils::urlQueryStringWithParams:
// address: 0x100713944
// body: available
// range: 0x100713944-0x100713a0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100713a0c to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SAURLUtils::urlQueryStringWithParams_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *self;
  undefined *local_48;
  undefined8 local_40;
  code *local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  self = &_OBJC_CLASS___NSMutableArray;
  _objc_alloc_init();
  local_48 = PTR___NSConcreteStackBlock_100995490;
  local_40 = 0xc2000000;
  local_38 = FUN_100713a10;
  puStack_30 = &DAT_1009e7b78;
  local_28 = self;
  objc_stub::enumerateKeysAndObjectsUsingBlock_(param_3,&local_48);
  IVar1 = objc_stub::count((ID)self);
  if (IVar1 == 0) {
    IVar1 = 0;
  }
  else {
    IVar1 = objc_stub::componentsJoinedByString_((ID)self,&cf__);
  }
  return IVar1;
}

