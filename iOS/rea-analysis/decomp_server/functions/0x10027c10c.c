// rea decompile_all
// name: FUN_10027c10c
// address: 0x10027c10c
// body: available
// range: 0x10027c10c-0x10027c20f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10027c17c to 0x1007df238 _swift_errorRetain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10027c1c0 to 0x1007dea34 _objc_retain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10027c1fc to 0x1007df130 _swift_bridgeObjectRetain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8
FUN_10027c10c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,byte param_6)

{
  if (param_6 < 5) {
    if (param_6 < 2) {
      if (param_6 != 0) {
        if (param_6 == 1) {
          return param_2;
        }
        return param_1;
      }
    }
    else if (param_6 != 2) {
      if (param_6 == 3) goto LAB_10027c170;
      if (param_6 != 4) {
        return param_1;
      }
      goto LAB_10027c1a8;
    }
  }
  else {
    if (param_6 < 7) {
      if ((param_6 != 5) && (param_6 != 6)) {
        return param_1;
      }
LAB_10027c1a8:
      _swift_bridgeObjectRetain(param_2);
      return param_3;
    }
    if ((param_6 != 7) && (param_6 != 8)) {
      if (param_6 != 9) {
        return param_1;
      }
LAB_10027c170:
      _swift_errorRetain();
      return param_1;
    }
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(param_4);
    param_2 = param_5;
  }
  _swift_bridgeObjectRetain(param_2);
  return param_2;
}

