// rea decompile_all
// name: FUN_10071c710
// address: 0x10071c710
// body: available
// range: 0x10071c710-0x10071c847 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10071c710(void)

{
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  local_38 = 0;
  WKWebView::sa_swizzleMethod_withMethod_error_
            ((ID)&_OBJC_CLASS___WKWebView,"loadRequest:","sensorsdata_loadRequest:",&local_38);
  local_40 = local_38;
  WKWebView::sa_swizzleMethod_withMethod_error_
            ((ID)&_OBJC_CLASS___WKWebView,"loadHTMLString:baseURL:",
             "sensorsdata_loadHTMLString:baseURL:",&local_40);
  local_48 = local_40;
  WKWebView::sa_swizzleMethod_withMethod_error_
            ((ID)&_OBJC_CLASS___WKWebView,"loadFileURL:allowingReadAccessToURL:",
             "sensorsdata_loadFileURL:allowingReadAccessToURL:",&local_48);
  local_50 = local_48;
  WKWebView::sa_swizzleMethod_withMethod_error_
            ((ID)&_OBJC_CLASS___WKWebView,"loadData:MIMEType:characterEncodingName:baseURL:",
             "sensorsdata_loadData:MIMEType:characterEncodingName:baseURL:",&local_50);
  if (local_50 != 0) {
    objc_stub::log_level_file_function_line_context_format_
              ((ID)&objc::class_t::SALog,1,1,
               "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/JSBridge/SAJavaScriptBridgeManager.m"
               ,"-[SAJavaScriptBridgeManager swizzleWebViewMethod]_block_invoke",0x65,0,
               &cf_FailedtoswizzleonWKWebView_Details___,local_50);
  }
  return 0;
}

