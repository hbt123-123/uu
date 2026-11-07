// rea decompile_all
// name: SentryANRTrackerV1::addListener:
// address: 0x10074f4dc
// body: available
// range: 0x10074f4dc-0x10074f5ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10074f5ec to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryANRTrackerV1::addListener_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
  
  IVar1 = objc_stub::FUN_1007edb20(param_1);
  _objc_sync_enter();
  IVar2 = objc_stub::FUN_1007edb20(param_1);
  objc_stub::addObject_(IVar2,param_3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_sync_enter();
  IVar2 = objc_stub::FUN_1007edb20(param_1);
  IVar2 = objc_stub::count(IVar2);
  if (((IVar2 != 0) && (*(long *)(param_1 + 0x10) == 1)) && (*(long *)(param_1 + 0x10) == 1)) {
    *(undefined8 *)(param_1 + 0x10) = 3;
    objc_stub::FUN_1007e8500((ID)&_OBJC_CLASS___NSThread,"detectANRs",param_1,0);
  }
  _objc_sync_exit(uVar3);
  _objc_sync_exit(IVar1);
  return;
}

