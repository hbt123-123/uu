// rea decompile_all
// name: SentryDsn::getBaseEndpoint
// address: 0x10073af80
// body: available
// range: 0x10073af80-0x10073b173 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10073b170 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryDsn::getBaseEndpoint(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  
  IVar1 = url(param_1);
  objc_stub::lastPathComponent(IVar1);
  IVar2 = objc_stub::pathComponents(IVar1);
  IVar2 = objc_stub::mutableCopy(IVar2);
  IVar3 = objc_stub::count(IVar2);
  if (2 < IVar3) {
    objc_stub::removeObjectAtIndex_(IVar2,0);
    objc_stub::removeLastObject(IVar2);
    objc_stub::componentsJoinedByString_(IVar2,&cf__);
    NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf____);
  }
  IVar2 = NSURLComponents::new((ID)&_OBJC_CLASS___NSURLComponents);
  IVar3 = objc_stub::scheme(IVar1);
  NSURLComponents::setScheme_(IVar2,IVar3);
  IVar3 = objc_stub::host(IVar1);
  NSURLComponents::setHost_(IVar2,IVar3);
  IVar1 = objc_stub::port(IVar1);
  NSURLComponents::setPort_(IVar2,IVar1);
  IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf____api____);
  NSURLComponents::setPath_(IVar2,IVar1);
  IVar1 = NSURLComponents::URL(IVar2);
  return IVar1;
}

