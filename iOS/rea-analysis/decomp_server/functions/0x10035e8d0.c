// rea decompile_all
// name: _TtC10Filepicker17FilePickerRequest::id
// address: 0x10035e8d0
// body: available
// range: 0x10035e8d0-0x10035e91b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10035e918 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC10Filepicker17FilePickerRequest::id(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar2 = *(ID *)(param_1 + id);
  IVar1 = ((ID *)(param_1 + id))[1];
  _swift_bridgeObjectRetain(IVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(IVar2,IVar1);
  _swift_bridgeObjectRelease(IVar1);
  return IVar2;
}

