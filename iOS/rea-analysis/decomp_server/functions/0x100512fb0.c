// rea decompile_all
// name: FUN_100512fb0
// address: 0x100512fb0
// body: available
// range: 0x100512fb0-0x100512fbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100512fbc to 0x1007db7d0 _$sSH4hash4intoys6HasherVz_tFTj (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100512fb0(undefined8 param_1,long param_2)

{
  __sSH4hash4intoys6HasherVz_tFTj
            (param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(*(long *)(param_2 + 0x18) + 8))
  ;
  return;
}

