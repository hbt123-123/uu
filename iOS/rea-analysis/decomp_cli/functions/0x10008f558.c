// rea decompile_all
// name: FUN_10008f558
// address: 0x10008f558
// body: available
// range: 0x10008f558-0x10008f6eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10008f65c to 0x1000c2b40 _swift_errorRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10008f69c to 0x1000c2aa4 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10008f6d0 to 0x100065628 FUN_100065628 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10008f558(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
    goto LAB_10008f6bc;
  case 7:
    _swift_bridgeObjectRelease();
    param_5 = param_3;
    param_6 = param_4;
    goto LAB_10008f6bc;
  case 8:
    _swift_bridgeObjectRelease();
    FUN_100065628(param_2,param_3,param_4);
    param_2 = param_5;
    param_5 = param_6;
    param_6 = param_7;
LAB_10008f6bc:
    FUN_100065628(param_2,param_5,param_6);
    return;
  case 9:
    FUN_100065628(param_4,param_5,param_6);
    param_1 = param_8;
    break;
  case 10:
    break;
  case 0xb:
    _swift_bridgeObjectRelease();
    goto LAB_10008f5bc;
  case 0xc:
LAB_10008f5bc:
    _swift_bridgeObjectRelease(param_2);
    param_1 = param_3;
    break;
  case 0xd:
    _swift_bridgeObjectRelease();
    FUN_10008f6ec(param_2,param_3,param_4);
    _swift_bridgeObjectRelease(param_9);
    _swift_bridgeObjectRelease(param_8);
    _swift_bridgeObjectRelease(param_6);
    param_1 = param_10;
  case 0xe:
  case 0xf:
    _swift_errorRelease(param_1);
    return;
  default:
    return;
  }
  _swift_bridgeObjectRelease(param_1);
  return;
}

