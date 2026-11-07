// rea decompile_all
// name: FUN_100762bbc
// address: 0x100762bbc
// body: available
// range: 0x100762bbc-0x100762e03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100762e00 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100762bbc(ID param_1)

{
  ID self;
  ID IVar1;
  
  self = objc_stub::stringWithString_((ID)&_OBJC_CLASS___NSMutableString,&cf_Sentry);
  objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______);
  objc_stub::appendFormat_(self,&cf____);
  objc_stub::FUN_1007f0f40((ID)&objc::class_t::SentryMeta);
  objc_stub::FUN_1007f8120((ID)&objc::class_t::SentryMeta);
  objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______);
  objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______);
  objc_stub::appendFormat_(self,&cf____);
  objc_stub::user(param_1);
  objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______);
  objc_stub::appendFormat_(self,&cf___);
  IVar1 = objc_stub::password(param_1);
  if (IVar1 != 0) {
    objc_stub::password(param_1);
    objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______);
    objc_stub::appendFormat_(self,&cf____);
  }
  return self;
}

