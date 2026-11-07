// rea decompile_all
// name: FUN_10052b670
// address: 0x10052b670
// body: available
// range: 0x10052b670-0x10052b6df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10052b6a0 to 0x1004f9e80 FUN_1004f9e80 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10052b6ac to 0x1004fa030 FUN_1004fa030 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10052b6c8 to 0x1004f9e80 FUN_1004f9e80 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10052b6dc to 0x1004f9e80 FUN_1004f9e80 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10052b670(double param_1)

{
  if ((((ulong)param_1 ^ 0xffffffffffffffff) & 0x7ff0000000000000) != 0) {
    __sSd16debugDescriptionSSvg();
    FUN_1004fa030();
    return;
  }
  if (((ulong)param_1 & 0xfffffffffffff) != 0) {
    FUN_1004f9e80("\"NaN\"",5);
    return;
  }
  if (param_1 < 0.0) {
    FUN_1004f9e80("\"-Infinity\"",0xb);
    return;
  }
  FUN_1004f9e80("\"Infinity\"",10);
  return;
}

