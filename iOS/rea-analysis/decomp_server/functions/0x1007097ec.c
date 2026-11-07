// rea decompile_all
// name: FUN_1007097ec
// address: 0x1007097ec
// body: available
// range: 0x1007097ec-0x10070984f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100709834 to 0x1007de4c4 _dispatch_sync (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007097ec(dispatch_queue_t param_1,long param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = _dispatch_queue_get_label((dispatch_queue_t)0x0);
  pcVar2 = _dispatch_queue_get_label(param_1);
  if (pcVar1 != pcVar2) {
    _dispatch_sync(param_1,param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010070984c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x10))(param_2);
  return;
}

