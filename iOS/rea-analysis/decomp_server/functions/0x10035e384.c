// rea decompile_all
// name: _TtC10Filepicker17FilePickerRequest::responseData
// address: 0x10035e384
// body: available
// range: 0x10035e384-0x10035e3fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10035e3f8 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC10Filepicker17FilePickerRequest::responseData(ID param_1,SEL param_2)

{
  ID *pIVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined1 auStack_48 [24];
  
  pIVar1 = (ID *)(param_1 + responseData);
  _swift_beginAccess(pIVar1,auStack_48,0,0);
  IVar2 = *pIVar1;
  IVar3 = pIVar1[1];
  FUN_100008184(IVar2,IVar3);
  IVar4 = IVar2;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(IVar2,IVar3);
  FUN_100006cdc(IVar2,IVar3);
  return IVar4;
}

