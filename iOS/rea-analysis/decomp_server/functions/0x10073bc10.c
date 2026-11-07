// rea decompile_all
// name: FUN_10073bc10
// address: 0x10073bc10
// body: available
// range: 0x10073bc10-0x10073bc7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10073bc10(long param_1,undefined8 param_2,undefined8 param_3)

{
  ID self;
  code *UNRECOVERED_JUMPTABLE;
  
  self = objc_stub::sharedInstance((ID)&objc::class_t::SentryNetworkTracker);
  objc_stub::FUN_1007f7d60(self,param_2,param_3);
  UNRECOVERED_JUMPTABLE = (code *)objc_stub::getOriginalImplementation(*(ID *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010073bc7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2,*(undefined8 *)(param_1 + 0x28),param_3);
  return;
}

