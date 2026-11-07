// rea decompile_all
// name: SARepeatFlushInterceptor::processWithInput:completion:
// address: 0x10072cbe8
// body: available
// range: 0x10072cbe8-0x10072cd57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

void __thiscall
SARepeatFlushInterceptor::processWithInput_completion_
          (SARepeatFlushInterceptor *this,ID param_1,SEL param_2,ID param_3,ID param_4,uint param_5)

{
  ID IVar1;
  class_t *self;
  undefined4 in_w5;
  undefined *local_58;
  undefined8 local_50;
  code *local_48;
  undefined *puStack_40;
  ID local_38;
  
  IVar1 = objc_stub::repeatCount(param_3,param_3,param_4,(ulong)param_5);
  if ((long)IVar1 < 0x28) {
    self = &objc::class_t::SAFlowData;
    _objc_alloc_init();
    IVar1 = objc_stub::cookie(param_3);
    objc_stub::setCookie_((ID)self,IVar1);
    IVar1 = objc_stub::repeatCount(param_3);
    objc_stub::setRepeatCount_((ID)self,IVar1 + 1);
    IVar1 = objc_stub::isInstantEvent(param_3);
    objc_stub::setIsInstantEvent_((ID)self,IVar1);
    IVar1 = SAFlowManager::sharedInstance((ID)&objc::class_t::SAFlowManager);
    local_58 = PTR___NSConcreteStackBlock_100995490;
    local_50 = 0xc2000000;
    local_48 = FUN_10072cd58;
    puStack_40 = &DAT_1009e7a68;
    local_38 = param_4;
    SAFlowManager::startWithFlowID_input_completion_
              (IVar1,(ID)&cf_sensorsdata_flush_flow,(ID)self,(ID)&local_58,in_w5);
  }
  else {
    objc_stub::setState_(param_3,1);
    (**(code **)(param_4 + 0x10))(param_4,param_3);
  }
  return;
}

