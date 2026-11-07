// rea decompile_all
// name: FUN_10034c634
// address: 0x10034c634
// body: available
// range: 0x10034c634-0x10034c6bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10034c634(ID *param_1,undefined8 *param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = *param_2;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1,param_2[1]);
  IVar2 = _objc_msgSend(param_3,"pathsForResourcesOfType:inDirectory:",uVar1,0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (IVar2,PTR___sSSN_1009957f8);
  *param_1 = IVar2;
  return 0;
}

