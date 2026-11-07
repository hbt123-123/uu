// rea decompile_all
// name: _TtC6Sentry19HTTPHeaderSanitizer::sanitizeHeaders:
// address: 0x1007cc258
// body: available
// range: 0x1007cc258-0x1007cc2d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007cc2d0 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry19HTTPHeaderSanitizer::sanitizeHeaders_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  
  puVar2 = PTR___sSSSHsWP_100995808;
  puVar1 = PTR___sSSN_1009957f8;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_3,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,PTR___sSSSHsWP_100995808);
  IVar3 = param_3;
  FUN_1007cc7c4();
  _swift_bridgeObjectRelease(param_3);
  IVar4 = IVar3;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF(IVar3,puVar1,puVar1,puVar2);
  _swift_bridgeObjectRelease(IVar3);
  return IVar4;
}

