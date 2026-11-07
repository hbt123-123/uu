// rea decompile_all
// name: MMKV::getDateForKey:
// address: 0x100379aa4
// body: available
// range: 0x100379aa4-0x100379aaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100379aac to 0x1007ea440 objc_stub::getDateForKey:defaultValue:hasValue: (external=false, thunk=false, hasNoReturn=false), 0x100379ab8 MMKV::getDateForKey:defaultValue:hasValue: (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

ID MMKV::getDateForKey_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = getDateForKey_defaultValue_hasValue_(param_1,param_3,0,(bool *)0x0);
  return IVar1;
}

