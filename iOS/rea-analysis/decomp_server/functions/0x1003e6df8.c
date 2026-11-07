// rea decompile_all
// name: FUN_1003e6df8
// address: 0x1003e6df8
// body: available
// range: 0x1003e6df8-0x1003e6e0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003e6e00 to 0x1007dd990 _IOPMAssertionRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1003e6e0c to 0x1007db140 _$s5IOKit14kIOReturnErrors5Int32Vvg (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1003e6df8(ulong param_1)

{
  if ((param_1 >> 0x20 & 1) != 0) {
    return 0;
  }
  if ((int)param_1 != 0) {
    _IOPMAssertionRelease();
    return param_1;
  }
  __s5IOKit14kIOReturnErrors5Int32Vvg();
  return param_1;
}

