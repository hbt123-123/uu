// rea decompile_all
// name: FUN_10005e218
// address: 0x10005e218
// body: available
// range: 0x10005e218-0x10005e267 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10005e23c to 0x1000c2aa4 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10005e25c to 0x1000c2cb4 _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10005e260 to 0x1000c2aa4 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005e218(undefined8 param_1,undefined8 param_2,byte param_3)

{
  if (param_3 < 3) {
    if ((param_3 == 0) || (param_3 == 1)) {
      _swift_bridgeObjectRelease();
      return;
    }
    if (param_3 == 2) {
      _swift_bridgeObjectRelease(param_2);
      return;
    }
  }
  else if (((param_3 == 3) || (param_3 == 4)) || (param_3 == 5)) {
    _swift_release(param_2);
    return;
  }
  return;
}

