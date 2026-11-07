// rea decompile_all
// name: SAEventRecord::removePayload
// address: 0x100710ab0
// body: available
// range: 0x100710ab0-0x100710b77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100710b64 to 0x1007f0500 objc_stub::removeObjectForKey: (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SAEventRecord::removePayload(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::objectForKeyedSubscript_(*(ID *)(param_1 + 0x20),&cf_payload);
  if (IVar1 != 0) {
    IVar1 = objc_stub::objectForKeyedSubscript_(*(ID *)(param_1 + 0x20),&cf_payload);
    IVar1 = NSMutableArray::arrayWithObject_((ID)&_OBJC_CLASS___NSMutableArray,IVar1);
    objc_stub::setObject_forKeyedSubscript_(*(ID *)(param_1 + 0x20),IVar1,&cf_payloads);
    objc_stub::removeObjectForKey_(*(ID *)(param_1 + 0x20),&cf_payload);
    return;
  }
  return;
}

