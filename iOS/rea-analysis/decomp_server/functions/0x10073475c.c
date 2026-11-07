// rea decompile_all
// name: SAIDMappingInterceptor::processWithInput:completion:
// address: 0x10073475c
// body: available
// range: 0x10073475c-0x100734853 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100734850 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SAIDMappingInterceptor::processWithInput_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,uint param_5)

{
  ID self;
  ID IVar1;
  
  self = objc_stub::eventObject(param_3,param_3,param_4,(ulong)param_5);
  IVar1 = objc_stub::type(self);
  if ((IVar1 != 0x400) && (IVar1 = objc_stub::type(self), IVar1 != 0x800)) {
    IVar1 = objc_stub::identifier(param_3);
    setIdentifier_(param_1,IVar1);
    IVar1 = objc_stub::hybridH5(self);
    if (((int)IVar1 == 0) || (IVar1 = objc_stub::type(self), ((uint)IVar1 >> 1 & 1) == 0)) {
      identifyTrackWithEventObject_(param_1,self);
    }
    else {
      identifyTrackFromH5WithEventObject_(param_1,self);
    }
  }
  (**(code **)(param_4 + 0x10))(param_4,param_3);
  return;
}

