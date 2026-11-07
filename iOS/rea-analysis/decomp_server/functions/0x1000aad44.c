// rea decompile_all
// name: FUN_1000aad44
// address: 0x1000aad44
// body: available
// range: 0x1000aad44-0x1000aada3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000aad8c to 0x1007df130 _swift_bridgeObjectRetain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1000aad9c to 0x1007df130 _swift_bridgeObjectRetain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000aad44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6)

{
  param_6 = param_6 & 0xff;
  if (param_6 < 3) {
    if (param_6 != 0) {
      if (param_6 == 1) goto LAB_1000aad9c;
      param_4 = param_5;
      if (param_6 != 2) {
        return;
      }
    }
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(param_4);
    return;
  }
  if (1 < param_6 - 3) {
    return;
  }
LAB_1000aad9c:
  _swift_bridgeObjectRetain(param_2);
  return;
}

