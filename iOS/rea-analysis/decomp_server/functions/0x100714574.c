// rea decompile_all
// name: SAIDFAHelper::idfaManager
// address: 0x100714574
// body: available
// range: 0x100714574-0x1007145e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007145e4 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SAIDFAHelper::idfaManager(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  code *pcVar3;
  cfstringStruct *self;
  
  self = &cf_ASIdentifierManager;
  _NSClassFromString();
  pcVar1 = &cf_sharedManager;
  _NSSelectorFromString(&cf_sharedManager);
  pcVar2 = self;
  _objc_opt_respondsToSelector(self,pcVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    self = (cfstringStruct *)0x0;
  }
  else {
    pcVar3 = (code *)objc_stub::methodForSelector_((ID)self,pcVar1);
    (*pcVar3)(self,pcVar1);
  }
  return (ID)self;
}

