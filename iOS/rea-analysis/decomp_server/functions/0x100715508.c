// rea decompile_all
// name: SALoggerConsoleFormatter::formattedLogMessage:
// address: 0x100715508
// body: available
// range: 0x100715508-0x100715753 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100715750 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SALoggerConsoleFormatter::formattedLogMessage_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  
  objc_stub::level(param_3);
  IVar1 = SALog::sharedLog((ID)&objc::class_t::SALog);
  IVar1 = SALog::dateFormatter(IVar1);
  IVar2 = objc_stub::timestamp(param_3);
  objc_stub::stringFromDate_(IVar1,IVar2);
  objc_stub::line(param_3);
  NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf__lu);
  prefix(param_1);
  objc_stub::fileName(param_3);
  objc_stub::function(param_3);
  objc_stub::message(param_3);
  IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_____________line_____);
  return IVar1;
}

