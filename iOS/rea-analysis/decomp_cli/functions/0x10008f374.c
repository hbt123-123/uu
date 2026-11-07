// rea decompile_all
// name: FUN_10008f374
// address: 0x10008f374
// body: available
// range: 0x10008f374-0x10008f507 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10008f478 to 0x1000c2b4c _swift_errorRetain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10008f4b8 to 0x1000c2abc _swift_bridgeObjectRetain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10008f4ec to 0x100065610 FUN_100065610 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10008f374(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  switch(param_11) {
  case 1:
  case 2:
  case 3:
  case 5:
  case 6:
  case 0x10:
    param_1 = param_2;
    break;
  case 4:
    param_2 = param_4;
    goto LAB_10008f4d8;
  case 7:
    _swift_bridgeObjectRetain();
    param_5 = param_3;
    param_6 = param_4;
    goto LAB_10008f4d8;
  case 8:
    _swift_bridgeObjectRetain();
    FUN_100065610(param_2,param_3,param_4);
    param_2 = param_5;
    param_5 = param_6;
    param_6 = param_7;
LAB_10008f4d8:
    FUN_100065610(param_2,param_5,param_6);
    return;
  case 9:
    FUN_100065610(param_4,param_5,param_6);
    param_1 = param_8;
    break;
  case 10:
    break;
  case 0xb:
    _swift_bridgeObjectRetain();
    goto LAB_10008f3d8;
  case 0xc:
LAB_10008f3d8:
    _swift_bridgeObjectRetain(param_2);
    param_1 = param_3;
    break;
  case 0xd:
    _swift_bridgeObjectRetain();
    FUN_100086764(param_2,param_3,param_4);
    _swift_bridgeObjectRetain(param_6);
    _swift_bridgeObjectRetain(param_8);
    _swift_bridgeObjectRetain(param_9);
    param_1 = param_10;
  case 0xe:
  case 0xf:
    _swift_errorRetain(param_1);
    return;
  default:
    return;
  }
  _swift_bridgeObjectRetain(param_1);
  return;
}

