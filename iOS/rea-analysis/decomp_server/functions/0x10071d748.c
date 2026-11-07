// rea decompile_all
// name: FUN_10071d748
// address: 0x10071d748
// body: available
// range: 0x10071d748-0x10071da4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10071d880 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10071d748(long param_1,undefined8 param_2,ID param_3,long param_4)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  ID self;
  ID IVar6;
  cfstringStruct *pcVar7;
  
  if (param_4 == 0) {
    puVar3 = &_OBJC_CLASS___NSHTTPURLResponse;
    _objc_opt_class(&_OBJC_CLASS___NSHTTPURLResponse);
    IVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    if ((IVar4 & 1) != 0) {
      IVar4 = objc_stub::statusCode(param_3);
      puVar3 = &_OBJC_CLASS___NSString;
      _objc_alloc();
      IVar5 = objc_stub::initWithData_encoding_((ID)puVar3,param_2,4);
      if (IVar4 - 200 < 100) {
        pcVar7 = &cf_newline_s_;
      }
      else {
        if (299 < (long)IVar4) {
          IVar6 = objc_stub::configOptions(*(ID *)(param_1 + 0x20));
          IVar6 = objc_stub::debugMode(IVar6);
          if (IVar6 != 0) {
            IVar6 = NSString::stringWithFormat_
                              ((ID)&_OBJC_CLASS___NSString,&cf___flushfailurewithresponse_____);
            self = SAModuleManager::sharedInstance((ID)&objc::class_t::SAModuleManager);
            objc_stub::showDebugModeWarning_(self,IVar6);
          }
        }
        pcVar7 = &cf_newline_s_;
      }
      IVar6 = objc_stub::eventLogsWithInput_
                        (*(ID *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
      objc_stub::log_level_file_function_line_context_format_
                ((ID)&objc::class_t::SALog,1,8,
                 "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Interceptor/Flush/SAFlushInterceptor.m"
                 ,"-[SAFlushInterceptor requestWithInput:completion:]_block_invoke",0x6d,0,
                 &cf________,*(undefined8 *)(param_1 + 0x28),pcVar7,IVar6);
      if (IVar4 != 200) {
        objc_stub::log_level_file_function_line_context_format_
                  ((ID)&objc::class_t::SALog,1,1,
                   "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Interceptor/Flush/SAFlushInterceptor.m"
                   ,"-[SAFlushInterceptor requestWithInput:completion:]_block_invoke",0x70,0,
                   &cf___ret_code__ld_ret_content___,*(undefined8 *)(param_1 + 0x28),IVar4,IVar5);
      }
      objc_stub::setStatusCode_(*(ID *)(param_1 + 0x20),IVar4);
      IVar5 = objc_stub::configOptions(*(ID *)(param_1 + 0x20));
      IVar5 = objc_stub::debugMode(IVar5);
      bVar1 = IVar4 - 600 < 0xffffffffffffff9c;
      bVar2 = IVar4 - 0x195 < 0xfffffffffffffffe;
      if ((!bVar1 || !bVar2) && IVar5 == 0) {
        IVar4 = NSString::stringWithFormat_
                          ((ID)&_OBJC_CLASS___NSString,&cf_flushfailed_statusCode__ld);
        objc_stub::setMessage_(*(ID *)(param_1 + 0x20),IVar4);
      }
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
                (*(long *)(param_1 + 0x30),bVar1 && bVar2 || IVar5 != 0);
      return 0;
    }
  }
  IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf___networkfailure___);
  objc_stub::setMessage_(*(ID *)(param_1 + 0x20),IVar4);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
  return 0;
}

