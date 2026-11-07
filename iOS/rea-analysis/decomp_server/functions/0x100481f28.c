// rea decompile_all
// name: FUN_100481f28
// address: 0x100481f28
// body: available
// range: 0x100481f28-0x1004820c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10048205c to 0x100008184 FUN_100008184 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1004820ac to 0x100040b80 FUN_100040b80 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100481f28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  byte param_13)

{
  if (param_13 < 4) {
    if (param_13 < 2) {
      if (param_13 != 0) {
        param_2 = param_3;
        param_3 = param_5;
        if (param_13 != 1) {
          return;
        }
        goto LAB_100482068;
      }
      _swift_bridgeObjectRetain();
    }
    else {
      if (param_13 == 2) goto LAB_100481ff0;
      if (param_13 != 3) {
        return;
      }
    }
    FUN_100008184(param_4,param_5);
    param_10 = param_6;
    param_11 = param_7;
    param_12 = param_8;
  }
  else {
    if (param_13 < 6) {
      if (param_13 == 4) {
        _swift_bridgeObjectRetain(param_4);
        _swift_bridgeObjectRetain(param_6);
        param_4 = param_7;
        param_5 = param_8;
        goto LAB_100482048;
      }
      if (param_13 != 5) {
        return;
      }
      _swift_bridgeObjectRetain(param_4);
LAB_100481ff0:
      FUN_100008184(param_5,param_6);
      param_10 = param_7;
      param_11 = param_8;
      param_12 = param_9;
      goto LAB_100482098;
    }
    if (param_13 != 6) {
      if (param_13 != 7) {
        return;
      }
      _swift_bridgeObjectRetain(param_2);
      _swift_bridgeObjectRetain(param_3);
LAB_100482048:
      FUN_100008184(param_4,param_5);
      return;
    }
LAB_100482068:
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(param_3);
    FUN_100008184(param_6,param_7);
    FUN_100008184(param_8,param_9);
  }
LAB_100482098:
  FUN_100040b80(param_10,param_11,param_12);
  return;
}

