// rea decompile_all
// name: SensorsAnalyticsSDK::flushAllEventRecordsWithCompletion:
// address: 0x1007252a0
// body: available
// range: 0x1007252a0-0x1007253cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SensorsAnalyticsSDK::flushAllEventRecordsWithCompletion_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  ID IVar1;
  class_t *self;
  ID IVar2;
  undefined4 in_w5;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  ID local_50;
  ID local_48;
  
  IVar1 = getCookieWithDecode_(param_1,0);
  self = &objc::class_t::SAFlowData;
  _objc_alloc_init();
  objc_stub::setCookie_((ID)self,IVar1);
  objc_stub::setIsInstantEvent_((ID)self,1);
  IVar2 = SAFlowManager::sharedInstance((ID)&objc::class_t::SAFlowManager);
  local_70 = PTR___NSConcreteStackBlock_100995490;
  local_68 = 0xc2000000;
  local_60 = FUN_1007253cc;
  puStack_58 = &DAT_1009e7fe8;
  local_50 = IVar1;
  local_48 = param_3;
  SAFlowManager::startWithFlowID_input_completion_
            (IVar2,(ID)&cf_sensorsdata_flush_flow,(ID)self,(ID)&local_70,in_w5);
  return;
}

