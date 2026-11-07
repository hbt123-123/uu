// rea decompile_all
// name: FUN_100260260
// address: 0x100260260
// body: available
// range: 0x100260260-0x10026031b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002602f0 to 0x1007df454 _swift_retain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1002602fc to 0x1007df238 _swift_errorRetain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10026030c to 0x1007df130 _swift_bridgeObjectRetain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100260260(undefined8 param_1,undefined8 param_2,byte param_3)

{
  if (param_3 < 4) {
    if (param_3 < 2) {
      if ((param_3 != 0) && (param_3 != 1)) {
        return;
      }
      goto LAB_1002602e8;
    }
    if (param_3 == 2) goto LAB_1002602e8;
    if (param_3 != 3) {
      return;
    }
  }
  else {
    if (param_3 < 6) {
      if (param_3 != 4) {
        if (param_3 != 5) {
          return;
        }
        goto LAB_1002602e8;
      }
LAB_1002602f4:
      _swift_errorRetain();
      return;
    }
    if (param_3 != 6) {
      if (param_3 == 7) {
        _swift_bridgeObjectRetain(param_2);
        return;
      }
      if (param_3 != 8) {
        return;
      }
      goto LAB_1002602f4;
    }
  }
  _swift_errorRetain();
  param_1 = param_2;
LAB_1002602e8:
  _swift_retain(param_1);
  return;
}

