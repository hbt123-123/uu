// rea decompile_all
// name: FUN_100365554
// address: 0x100365554
// body: available
// range: 0x100365554-0x10036558b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100365588 to 0x1007dd0f0 _$ss5ErrorP10FoundationAC13CustomNSErrorRzrlE5_codeSivg (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100365554(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100a88e88;
  FUN_10036ca30(&DAT_100a88e88,&TargetProtocolConformanceDescriptor_10081ce48);
  __ss5ErrorP10FoundationAC13CustomNSErrorRzrlE5_codeSivg(param_1,puVar1);
  return;
}

