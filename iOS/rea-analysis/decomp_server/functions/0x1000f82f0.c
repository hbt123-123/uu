// rea decompile_all
// name: FUN_1000f82f0
// address: 0x1000f82f0
// body: available
// range: 0x1000f82f0-0x1000f844b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000f82f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ID param_5)

{
  ID IVar1;
  undefined *puVar2;
  char *pcVar3;
  
  __ss11_StringGutsV4growyySiF(0x30);
  _swift_bridgeObjectRelease(0xe000000000000000);
  __sSS6appendyySSF(param_2,param_3);
  __sSS6appendyySSF(0x203aa5b4e8b1a4e5,0xad00003d65646f63);
  puVar2 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  __sSS6appendyySSF(0x3d726f727265202c,0xe800000000000000);
  pcVar3 = "description";
  IVar1 = _objc_msgSend(param_5,"description");
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar1);
  __sSS6appendyySSF(IVar1,pcVar3);
  _swift_bridgeObjectRelease(pcVar3);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0x1000000000000015;
  param_1[1] = 0x8000000100889e70;
  return;
}

