// rea decompile_all
// name: FUN_10012eec8
// address: 0x10012eec8
// body: available
// range: 0x10012eec8-0x10012f08f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10012eec8(undefined8 *param_1,ID param_2)

{
  ID IVar1;
  char *pcVar2;
  
  IVar1 = _objc_msgSend(param_2,"protectionSpace");
  pcVar2 = "host";
  IVar1 = _objc_msgSend(IVar1,"host");
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar1);
  __sSS6appendyySSF(IVar1,pcVar2);
  _swift_bridgeObjectRelease(pcVar2);
  __sSS6appendyySSF(0x202c,0xe200000000000000);
  __sSS6appendyySSF(0x3d74736f68,0xe500000000000000);
  _swift_bridgeObjectRelease(0xe500000000000000);
  IVar1 = _objc_msgSend(param_2,"protectionSpace");
  pcVar2 = "authenticationMethod";
  IVar1 = _objc_msgSend(IVar1,"authenticationMethod");
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar1);
  __sSS6appendyySSF(IVar1,pcVar2);
  _swift_bridgeObjectRelease(pcVar2);
  _swift_bridgeObjectRetain(0x800000010088f590);
  __sSS6appendyySSF(0x3d646f6874656d,0xe700000000000000);
  _swift_bridgeObjectRelease(0x800000010088f590);
  _swift_bridgeObjectRelease(0xe700000000000000);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0x100000000000004b;
  param_1[1] = 0x800000010088f590;
  return;
}

