// rea decompile_all
// name: FUN_1007b76bc
// address: 0x1007b76bc
// body: available
// range: 0x1007b76bc-0x1007b7783 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_1007b76bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  _objc_allocWithZone();
  FUN_1007b864c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(param_9);
  _swift_bridgeObjectRelease(param_6);
  _swift_bridgeObjectRelease(param_4);
  return param_1;
}

