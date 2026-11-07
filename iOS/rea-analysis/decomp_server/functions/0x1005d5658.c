// rea decompile_all
// name: FUN_1005d5658
// address: 0x1005d5658
// body: available
// range: 0x1005d5658-0x1005d56ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005d56fc to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1005d5658(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4,
                  code *param_5)

{
  void *aBlock;
  
  aBlock = __Block_copy(param_4);
  _swift_retain(param_1);
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(param_3);
  __Block_copy(aBlock);
  (*param_5)(param_3,param_2,param_1,aBlock);
  __Block_release(aBlock);
  __Block_release(aBlock);
  FUN_100006cdc(param_3,param_2);
  _swift_release(param_1);
  return;
}

