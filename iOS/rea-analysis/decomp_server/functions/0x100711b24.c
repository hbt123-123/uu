// rea decompile_all
// name: SABaseEventObject::event
// address: 0x100711b24
// body: available
// range: 0x100711b24-0x100711c43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100711be8 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SABaseEventObject::event(ID param_1,SEL param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  
  uVar1 = eventId(param_1);
  puVar2 = &_OBJC_CLASS___NSString;
  _objc_opt_class(&_OBJC_CLASS___NSString);
  _objc_opt_isKindOfClass(uVar1,puVar2);
  if ((uVar1 & 1) != 0) {
    IVar3 = eventId(param_1);
    IVar3 = objc_stub::hasSuffix_(IVar3,&cf__SATimer);
    IVar4 = eventId(param_1);
    if ((int)IVar3 == 0) {
      return IVar4;
    }
    IVar3 = objc_stub::length(IVar4);
    if (0x2c < IVar3) {
      IVar3 = eventId(param_1);
      IVar4 = eventId(param_1);
      IVar4 = objc_stub::length(IVar4);
      IVar3 = objc_stub::substringToIndex_(IVar3,IVar4 - 0x2d);
      return IVar3;
    }
  }
  return 0;
}

