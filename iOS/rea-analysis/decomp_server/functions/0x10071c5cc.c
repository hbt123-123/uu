// rea decompile_all
// name: SAJavaScriptBridgeManager::javaScriptSource
// address: 0x10071c5cc
// body: available
// range: 0x10071c5cc-0x10071c6e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10071c6e4 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SAJavaScriptBridgeManager::javaScriptSource(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::configOptions(param_1);
  IVar1 = objc_stub::enableJavaScriptBridge(IVar1);
  if ((int)IVar1 != 0) {
    IVar1 = objc_stub::configOptions(param_1);
    IVar1 = objc_stub::serverURL(IVar1);
    if (IVar1 != 0) {
      IVar1 = objc_stub::configOptions(param_1);
      IVar1 = objc_stub::serverURL(IVar1);
      IVar1 = SAJavaScriptBridgeBuilder::buildJSBridgeWithServerURL_
                        ((ID)&objc::class_t::SAJavaScriptBridgeBuilder,IVar1);
      return IVar1;
    }
    objc_stub::log_level_file_function_line_context_format_
              ((ID)&objc::class_t::SALog,1,1,
               "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/JSBridge/SAJavaScriptBridgeManager.m"
               ,"-[SAJavaScriptBridgeManager javaScriptSource]",0x47,0,
               &cf___getnetworkserverURLisfailed_,param_1);
  }
  return 0;
}

