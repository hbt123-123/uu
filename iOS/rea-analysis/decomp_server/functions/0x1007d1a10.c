// rea decompile_all
// name: _TtC6Sentry28SentryEnabledFeaturesBuilder::getEnabledFeaturesWithOptions:
// address: 0x1007d1a10
// body: available
// range: 0x1007d1a10-0x1007d1a6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007d1a68 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry28SentryEnabledFeaturesBuilder::getEnabledFeaturesWithOptions_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  FUN_1007d2280();
  IVar1 = param_3;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_3,PTR___sSSN_1009957f8);
  _swift_bridgeObjectRelease(param_3);
  return IVar1;
}

