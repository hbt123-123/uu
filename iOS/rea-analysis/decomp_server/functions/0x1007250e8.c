// rea decompile_all
// name: SensorsAnalyticsSDK::trackEventObject:properties:
// address: 0x1007250e8
// body: available
// range: 0x1007250e8-0x100725297 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100725294 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SensorsAnalyticsSDK::trackEventObject_properties_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  class_t *self;
  undefined4 in_w5;
  
  IVar1 = objc_stub::event(param_3);
  IVar2 = objc_stub::hybridH5(param_3);
  if (((IVar2 & 1) == 0) && (IVar1 != 0)) {
    IVar2 = configOptions(param_1);
    IVar2 = objc_stub::instantEvents(IVar2);
    IVar1 = objc_stub::containsObject_(IVar2,IVar1);
    objc_stub::setIsInstantEvent_(param_3,IVar1);
  }
  self = &objc::class_t::SAFlowData;
  _objc_alloc_init();
  objc_stub::setEventObject_((ID)self,param_3);
  IVar1 = identifier(param_1);
  objc_stub::setIdentifier_((ID)self,IVar1);
  IVar1 = objc_stub::sensorsdata_deepCopy(param_4);
  objc_stub::setProperties_((ID)self,IVar1);
  IVar1 = SAFlowManager::sharedInstance((ID)&objc::class_t::SAFlowManager);
  SAFlowManager::startWithFlowID_input_completion_
            (IVar1,(ID)&cf_sensorsdata_track_flow,(ID)self,0,in_w5);
  IVar1 = objc_stub::isSignUp(param_3);
  if ((int)IVar1 != 0) {
    IVar1 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
    NSNotificationCenter::postNotificationName_object_
              (IVar1,&cf_SensorsAnalyticsTrackLoginNotification,0);
  }
  return;
}

