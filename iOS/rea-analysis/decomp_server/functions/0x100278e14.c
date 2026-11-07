// rea decompile_all
// name: FUN_100278e14
// address: 0x100278e14
// body: available
// range: 0x100278e14-0x100278f17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100278e84 to 0x1007df22c _swift_errorRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100278ec8 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100278f04 to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_100278e14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,byte param_6)

{
  if (param_6 < 5) {
    if (param_6 < 2) {
      if (param_6 != 0) {
        if (param_6 == 1) {
          return 0;
        }
        return param_1;
      }
    }
    else if (param_6 != 2) {
      if (param_6 == 3) goto LAB_100278e78;
      if (param_6 != 4) {
        return param_1;
      }
      goto LAB_100278eb0;
    }
  }
  else {
    if (param_6 < 7) {
      if ((param_6 != 5) && (param_6 != 6)) {
        return param_1;
      }
LAB_100278eb0:
      _swift_bridgeObjectRelease(param_2);
      return 0;
    }
    if ((param_6 != 7) && (param_6 != 8)) {
      if (param_6 != 9) {
        return param_1;
      }
LAB_100278e78:
      _swift_errorRelease();
      return param_1;
    }
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_4);
    param_2 = param_5;
  }
  _swift_bridgeObjectRelease(param_2);
  return param_2;
}

