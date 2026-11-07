// rea decompile_all
// name: SentrySession::endSessionWithTimestamp:
// address: 0x1007845a4
// body: available
// range: 0x1007845a4-0x100784637 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100784634 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentrySession::endSessionWithTimestamp_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 uVar2;
  
  _objc_sync_enter();
  *(ID *)(param_1 + 0x40) = param_3;
  objc_stub::FUN_1007f6fc0(*(ID *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x18));
  IVar1 = objc_stub::numberWithDouble_((ID)&_OBJC_CLASS___NSNumber);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(ID *)(param_1 + 0x48) = IVar1;
  _objc_sync_exit(uVar2,param_1);
  return;
}

