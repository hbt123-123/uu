// rea decompile_all
// name: _TtC10Filepicker17FilePickerRequest::setResponseData:
// address: 0x10035e3fc
// body: available
// range: 0x10035e3fc-0x10035e48f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC10Filepicker17FilePickerRequest::setResponseData_(ID param_1,SEL param_2,ID param_3)

{
  ID *pIVar1;
  ID IVar2;
  ID IVar3;
  undefined1 auStack_48 [24];
  
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
  pIVar1 = (ID *)(param_1 + responseData);
  _swift_beginAccess(pIVar1,auStack_48,1,0);
  IVar2 = *pIVar1;
  IVar3 = pIVar1[1];
  *pIVar1 = param_3;
  pIVar1[1] = (ID)param_2;
  FUN_100006cdc(IVar2,IVar3);
  return;
}

