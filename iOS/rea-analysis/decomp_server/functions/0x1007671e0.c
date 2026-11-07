// rea decompile_all
// name: SentryHub::captureCrashEvent:withScope:
// address: 0x1007671e0
// body: available
// range: 0x1007671e0-0x1007672cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007672cc to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_unsafeClaimAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryHub::captureCrashEvent_withScope_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID self;
  ID self_00;
  ID IVar1;
  
  objc_stub::FUN_1007f3660(param_3,1);
  self = *(ID *)(param_1 + 0x28);
  if (self != 0) {
    self_00 = objc_stub::fileManager(self);
    IVar1 = objc_stub::FUN_1007efc80(self_00);
    if (IVar1 == 0) {
      objc_stub::FUN_1007e64c0(self,param_3,param_4);
    }
    else {
      objc_stub::FUN_1007e64e0(self,param_3,IVar1,param_4);
      objc_stub::FUN_1007e8280(self_00);
    }
  }
  return;
}

