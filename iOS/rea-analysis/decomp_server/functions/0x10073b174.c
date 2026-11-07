// rea decompile_all
// name: SentryDsn::convertDsnString:didFailWithError:
// address: 0x10073b174
// body: available
// range: 0x10073b174-0x10073b3cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10073b3cc to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autorelease replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryDsn::convertDsnString_didFailWithError_(ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  
  IVar1 = NSCharacterSet::whitespaceAndNewlineCharacterSet((ID)&_OBJC_CLASS___NSCharacterSet);
  IVar1 = objc_stub::stringByTrimmingCharactersInSet_(param_3,IVar1);
  IVar2 = NSSet::setWithObjects_((ID)&_OBJC_CLASS___NSSet,&cf_http);
  IVar1 = NSURL::URLWithString_((ID)&_OBJC_CLASS___NSURL,IVar1);
  IVar3 = NSURL::scheme(IVar1);
  if (IVar3 == 0) {
    IVar1 = 0;
    pcVar4 = &cf_URLschemeofDSNismissing;
  }
  else {
    pcVar4 = (cfstringStruct *)0x0;
  }
  IVar3 = objc_stub::scheme(IVar1);
  IVar2 = NSSet::containsObject_(IVar2,IVar3);
  if ((IVar2 & 1) == 0) {
    IVar1 = 0;
    pcVar4 = &cf_UnrecognizedURLschemeinDSN;
  }
  IVar2 = objc_stub::host(IVar1);
  if (IVar2 != 0) {
    IVar2 = objc_stub::host(IVar1);
    IVar2 = objc_stub::length(IVar2);
    if (IVar2 != 0) goto LAB_10073b300;
  }
  IVar1 = 0;
  pcVar4 = &cf_HostcomponentofDSNismissing;
LAB_10073b300:
  IVar2 = objc_stub::user(IVar1);
  if (IVar2 == 0) {
    IVar1 = 0;
    pcVar4 = &cf_UsercomponentofDSNismissing;
  }
  IVar2 = objc_stub::pathComponents(IVar1);
  IVar2 = objc_stub::count(IVar2);
  if (IVar2 < 2) {
    pcVar4 = &cf_ProjectIDpathcomponentofDSNismissing;
  }
  else if (IVar1 != 0) {
    return IVar1;
  }
  if (param_4 != (ID *)0x0) {
    IVar1 = 100;
    FUN_100756bd8(100,pcVar4);
    *param_4 = IVar1;
  }
  return 0;
}

