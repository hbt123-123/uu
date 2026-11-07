// rea decompile_all
// name: SAEventDurationPropertyPlugin::properties
// address: 0x100732710
// body: available
// range: 0x100732710-0x100732867 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100732860 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100732864 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SAEventDurationPropertyPlugin::properties(ID param_1,SEL param_2)

{
  ulong uVar1;
  class_t *pcVar2;
  ID IVar3;
  ID self;
  ID IVar4;
  cfstringStruct *local_48;
  ID IStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar1 = SAPropertyPlugin::filter(param_1);
  pcVar2 = &objc::class_t::SABaseEventObject;
  _objc_opt_class(&objc::class_t::SABaseEventObject);
  _objc_opt_isKindOfClass(uVar1,pcVar2);
  if ((uVar1 & 1) == 0) {
    IVar3 = 0;
  }
  else {
    IVar3 = SAPropertyPlugin::filter(param_1);
    self = trackTimer(param_1);
    IVar4 = objc_stub::eventId(IVar3);
    IVar3 = objc_stub::currentSystemUpTime(IVar3);
    IVar3 = objc_stub::eventDurationFromEventId_currentSysUpTime_(self,IVar4,IVar3);
    if (IVar3 == 0) {
      IVar3 = 0;
    }
    else {
      local_48 = &cf_event_duration;
      IStack_40 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,&IStack_40,&local_48,1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar3;
}

