// rea decompile_all
// name: SensorsAnalyticsSDK::trackFromH5WithEvent:enableVerify:
// address: 0x10072593c
// body: available
// range: 0x10072593c-0x100725ad7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x1c bytes */

void SensorsAnalyticsSDK::trackFromH5WithEvent_enableVerify_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  ID self;
  ID IVar1;
  ID IVar2;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  ID local_58;
  ID local_50;
  ID local_48;
  
  if ((param_3 != 0) &&
     (self = SAJSONUtil::JSONObjectWithString_options_((ID)&objc::class_t::SAJSONUtil,param_3,1),
     self != 0)) {
    if (param_4 != 0) {
      IVar1 = objc_stub::objectForKeyedSubscript_(self,&cf_server_url);
      IVar2 = network(param_1);
      IVar2 = objc_stub::isSameProjectWithURLString_(IVar2,IVar1);
      if ((IVar2 & 1) == 0) {
        objc_stub::log_level_file_function_line_context_format_
                  ((ID)&objc::class_t::SALog,1,1,
                   "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/SensorsAnalyticsSDK.m"
                   ,"-[SensorsAnalyticsSDK trackFromH5WithEvent:enableVerify:]",0x489,0,
                   &cf_Server_urlverifiedfaild_Webeventlost_Webserver_url_____,IVar1);
        return;
      }
    }
    IVar1 = SAEventObjectFactory::eventObjectWithH5Event_
                      ((ID)&objc::class_t::SAEventObjectFactory,self);
    IVar2 = serialQueue(param_1);
    local_78 = PTR___NSConcreteStackBlock_100995490;
    local_70 = 0xc2000000;
    local_68 = FUN_100725ad8;
    puStack_60 = &DAT_1009e79b0;
    local_58 = self;
    local_50 = IVar1;
    local_48 = param_1;
    _dispatch_async(IVar2,&local_78);
  }
  return;
}

