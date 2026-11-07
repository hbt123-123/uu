// rea decompile_all
// name: FUN_1000f81e4
// address: 0x1000f81e4
// body: available
// range: 0x1000f81e4-0x1000f82ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000f81e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ID param_4)

{
  ID IVar1;
  char *pcVar2;
  
  __ss11_StringGutsV4growyySiF(0x72);
  __sSS6appendyySSF(0x1000000000000015,0x8000000100889e70);
  __sSS6appendyySSF(param_2,param_3);
  __sSS6appendyySSF(0x1000000000000059,0x8000000100889f60);
  pcVar2 = "description";
  IVar1 = _objc_msgSend(param_4,"description");
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar1);
  __sSS6appendyySSF(IVar1,pcVar2);
  _swift_bridgeObjectRelease(pcVar2);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

