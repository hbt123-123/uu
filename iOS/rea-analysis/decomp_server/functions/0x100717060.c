// rea decompile_all
// name: SAFileLogger::currentlogFile
// address: 0x100717060
// body: available
// range: 0x100717060-0x1007171c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007171c0 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SAFileLogger::currentlogFile(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  undefined8 local_48;
  
  IVar1 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  IVar2 = 9;
  _NSSearchPathForDirectoriesInDomains(9,1,1);
  IVar2 = objc_stub::firstObject(IVar2);
  IVar2 = objc_stub::stringByAppendingPathComponent_(IVar2,&cf_SALog_SALog_log);
  IVar3 = NSFileManager::fileExistsAtPath_(IVar1,IVar2);
  if ((int)IVar3 == 0) {
    IVar3 = objc_stub::stringByDeletingLastPathComponent(IVar2);
    local_48 = 0;
    IVar1 = NSFileManager::createDirectoryAtPath_withIntermediateDirectories_attributes_error_
                      (IVar1,IVar3,1,0,&local_48);
    if ((IVar1 & 1) == 0) {
      pcVar4 = &cf_SAFileLoggerfiledirectorycreatedfailed;
    }
    else {
      IVar1 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
      IVar1 = NSFileManager::createFileAtPath_contents_attributes_(IVar1,IVar2,0,0);
      if ((IVar1 & 1) != 0) {
        return IVar2;
      }
      pcVar4 = &cf_SAFileLoggerfilecreatedfailed;
    }
    _NSLog(pcVar4);
    IVar2 = 0;
  }
  return IVar2;
}

