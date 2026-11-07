// rea decompile_all
// name: FCountAppConfig::.cxx_destruct
// address: 0x10022a0f4
// body: available
// range: 0x10022a0f4-0x10022a17f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10022a17c to 0x10007ed2c FUN_10007ed2c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

void FCountAppConfig::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + appKey + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + apiHost + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + uid + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + globalExtraPrameters));
  FUN_10007ed2c(*(undefined8 *)(param_1 + globalExtraPrametersProvider),
                ((undefined8 *)(param_1 + globalExtraPrametersProvider))[1]);
  FUN_10007ed2c(*(undefined8 *)(param_1 + customLogger),((undefined8 *)(param_1 + customLogger))[1])
  ;
  return;
}

