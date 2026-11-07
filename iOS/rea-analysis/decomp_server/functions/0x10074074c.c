// rea decompile_all
// name: SentryClient::recordLost:reason:
// address: 0x10074074c
// body: available
// range: 0x10074074c-0x10074075f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10074075c to 0x1007efec0 objc_stub::recordLostEvent:reason: (external=false, thunk=false, hasNoReturn=false), 0x10073e8b4 SentryClient::recordLostEvent:reason: (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x1c bytes */

void SentryClient::recordLost_reason_
               (ID param_1,SEL param_2,bool param_3,unsigned_long_long param_4)

{
  unsigned_long_long uVar1;
  
  uVar1 = 2;
  if (param_3 == 0) {
    uVar1 = 4;
  }
  recordLostEvent_reason_(param_1,uVar1,param_4);
  return;
}

