// rea decompile_all
// name: FUN_1003f6698
// address: 0x1003f6698
// body: available
// range: 0x1003f6698-0x1003f66e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003f66e4 to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003f6698(undefined8 param_1)

{
  char *pcVar1;
  char *unaff_x20;
  
  pcVar1 = "controlled_ability_map";
  if (*unaff_x20 == '\0') {
    pcVar1 = "ectory";
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,0xd000000000000016,(ulong)pcVar1 | 0x8000000000000000);
  _swift_bridgeObjectRelease((ulong)pcVar1 | 0x8000000000000000);
  return;
}

