// rea decompile_all
// name: _TtC6Sentry21SentryReplayRecording::SentryReplayEncoding
// address: 0x1007c0f80
// body: available
// range: 0x1007c0f80-0x1007c0f9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007c0f9c to 0x1007c1020 FUN_1007c1020 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry21SentryReplayRecording::SentryReplayEncoding(ID param_1,SEL param_2)

{
  FUN_1007c1020(param_1,param_2,&DAT_100abba38,&DAT_100b3a8f0,&DAT_100b3a8f8,FUN_1007c0f64);
  return param_1;
}

