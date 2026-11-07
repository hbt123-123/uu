// rea decompile_all
// name: SANetwork::baseURLComponents
// address: 0x10072b0a0
// body: available
// range: 0x10072b0a0-0x10072b227 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10072b224 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SANetwork::baseURLComponents(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = serverURL(param_1);
  IVar1 = objc_stub::absoluteString(IVar1);
  IVar1 = objc_stub::length(IVar1);
  if (IVar1 == 0) {
    IVar1 = 0;
  }
  else {
    IVar1 = serverURL(param_1);
    IVar1 = objc_stub::lastPathComponent(IVar1);
    IVar1 = objc_stub::length(IVar1);
    IVar2 = serverURL(param_1);
    if (IVar1 != 0) {
      IVar2 = objc_stub::URLByDeletingLastPathComponent(IVar2);
    }
    if (IVar2 == 0) {
      IVar1 = 0;
    }
    else {
      IVar1 = NSURLComponents::componentsWithURL_resolvingAgainstBaseURL_
                        ((ID)&_OBJC_CLASS___NSURLComponents,IVar2,1);
    }
    IVar2 = objc_stub::host(IVar1);
    if (IVar2 == 0) {
      objc_stub::log_level_file_function_line_context_format_
                ((ID)&objc::class_t::SALog,1,1,
                 "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Network/SANetwork.m"
                 ,"-[SANetwork(ServerURL) baseURLComponents]",0x56,0,
                 &cf_URLStringismalformed_nilisreturned_);
      IVar1 = 0;
    }
  }
  return IVar1;
}

