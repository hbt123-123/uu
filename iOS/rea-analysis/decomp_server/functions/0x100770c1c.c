// rea decompile_all
// name: SentryTracer::.cxx_destruct
// address: 0x100770c1c
// body: available
// range: 0x100770c1c-0x100770d5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100770d58 to 0x1007deaa0 _objc_storeStrong (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryTracer::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_internalID) = 0;
  *(undefined8 *)(param_1 + (long)_hub) = 0;
  *(undefined8 *)(param_1 + (long)_debugImageProvider) = 0;
  *(undefined8 *)(param_1 + (long)_dispatchQueue) = 0;
  *(undefined8 *)(param_1 + (long)_configuration) = 0;
  _objc_destroyWeak(param_1 + (long)_delegate);
  *(undefined8 *)(param_1 + (long)_shouldIgnoreWaitForChildrenCallback) = 0;
  *(undefined8 *)(param_1 + (long)_finishCallback) = 0;
  *(undefined8 *)(param_1 + (long)_transactionContext) = 0;
  *(undefined8 *)(param_1 + (long)_children) = 0;
  *(undefined8 *)(param_1 + (long)_deadlineTimeoutBlock) = 0;
  *(undefined8 *)(param_1 + (long)_idleTimeoutBlock) = 0;
  *(undefined8 *)(param_1 + (long)_dispatchTimeoutLock) = 0;
  *(undefined8 *)(param_1 + (long)_measurements) = 0;
  *(undefined8 *)(param_1 + (long)_traceContext) = 0;
  return;
}

