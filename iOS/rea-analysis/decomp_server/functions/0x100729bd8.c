// rea decompile_all
// name: SAEventCallbackInterceptor::processWithInput:completion:
// address: 0x100729bd8
// body: available
// range: 0x100729bd8-0x100729dd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100729dd4 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SAEventCallbackInterceptor::processWithInput_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,uint param_5)

{
  ID IVar1;
  SEL pcVar2;
  ID IVar3;
  
  IVar1 = objc_stub::eventObject(param_3,param_3,param_4,(ulong)param_5);
  pcVar2 = (SEL)objc_stub::event(IVar1);
  IVar1 = SensorsAnalyticsSDK::sharedInstance((ID)&objc::class_t::SensorsAnalyticsSDK);
  IVar1 = SensorsAnalyticsSDK::trackEventCallback(IVar1);
  if (IVar1 != 0 && pcVar2 != (SEL)0x0) {
    IVar3 = objc_stub::eventObject(param_3);
    objc_stub::properties(IVar3);
    IVar1 = SensorsAnalyticsSDK::trackEventCallback(IVar1,pcVar2);
    if ((IVar1 & 1) == 0) {
      objc_stub::log_level_file_function_line_context_format_
                ((ID)&objc::class_t::SALog,1,8,
                 "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Interceptor/EventBuild/SAEventCallbackInterceptor.m"
                 ,"-[SAEventCallbackInterceptor processWithInput:completion:]",0x3a,0,&cf_newline_s_
                 ,pcVar2);
      objc_stub::setState_(param_3,2);
    }
    else {
      IVar1 = objc_stub::eventObject(param_3);
      IVar1 = objc_stub::properties(IVar1);
      IVar1 = SAPropertyValidator::validProperties_((ID)&objc::class_t::SAPropertyValidator,IVar1);
      IVar3 = objc_stub::eventObject(param_3);
      objc_stub::setProperties_(IVar3,IVar1);
    }
  }
  (**(code **)(param_4 + 0x10))(param_4,param_3);
  return;
}

