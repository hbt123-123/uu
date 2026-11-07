// rea decompile_all
// name: FUN_10077644c
// address: 0x10077644c
// body: available
// range: 0x10077644c-0x1007764d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007764d0 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_10077644c(void)

{
  ID IVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  IVar1 = objc_stub::processInfo((ID)&_OBJC_CLASS___NSProcessInfo);
  if (IVar1 == 0) {
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
  }
  else {
    objc_stub::operatingSystemVersion(IVar1,&local_38);
  }
  IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf__ld__ld__ld);
  return IVar1;
}

