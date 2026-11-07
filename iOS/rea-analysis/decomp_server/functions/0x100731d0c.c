// rea decompile_all
// name: SAFileStorePlugin::filePath:
// address: 0x100731d0c
// body: available
// range: 0x100731d0c-0x100731e27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100731e24 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SAFileStorePlugin::filePath_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  
  objc_stub::stringByReplacingOccurrencesOfString_withString_
            (param_3,&cf_cn_sensorsdata_File_,&cf___);
  IVar1 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  NSBundle::objectForInfoDictionaryKey_(IVar1,&cf_CFBundleIdentifier);
  IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_sensorsanalytics_______plist);
  IVar2 = 5;
  _NSSearchPathForDirectoriesInDomains(5,1,1);
  IVar2 = objc_stub::lastObject(IVar2);
  IVar1 = objc_stub::stringByAppendingPathComponent_(IVar2,IVar1);
  return IVar1;
}

