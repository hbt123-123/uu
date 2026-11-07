// rea decompile_all
// name: FUN_1004812d8
// address: 0x1004812d8
// body: available
// range: 0x1004812d8-0x100481687 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100481578 to 0x100481840 FUN_100481840 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10048162c to 0x100040b80 FUN_100040b80 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100481664 to 0x100008184 FUN_100008184 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004812d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined1 param_25)

{
  switch(param_25) {
  case 0:
    _swift_bridgeObjectRetain(param_4);
    FUN_100481688(param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12);
  case 0x16:
    param_1 = param_13;
    param_2 = param_14;
    break;
  case 1:
  case 0x15:
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(param_4);
    _swift_bridgeObjectRetain(param_6);
    _swift_bridgeObjectRetain(param_8);
    param_8 = param_10;
    goto LAB_10048147c;
  case 2:
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(param_4);
    _swift_bridgeObjectRetain(param_6);
    param_12 = param_10;
    param_11 = param_9;
LAB_10048147c:
    _swift_bridgeObjectRetain(param_8);
    param_1 = param_11;
    param_2 = param_12;
    break;
  case 3:
    FUN_1004816c0();
    param_1 = param_11;
    param_2 = param_12;
    break;
  case 5:
    goto LAB_1004815b8;
  case 6:
    param_1 = param_9;
    param_2 = param_10;
    break;
  case 7:
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(param_4);
    goto LAB_1004815a4;
  case 8:
  case 9:
    param_5 = param_4;
    goto LAB_10048163c;
  case 10:
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(param_3);
    FUN_100008184(param_4,param_5);
    FUN_10045ebb8(param_6,param_7,param_8,param_9,param_10);
    FUN_100481840(param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18);
    return;
  case 0xb:
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(param_4);
    param_1 = param_12;
    param_2 = param_13;
    break;
  case 0xc:
    FUN_100481874();
    param_1 = param_11;
    param_2 = param_12;
    break;
  case 0xd:
    param_1 = param_3;
    param_2 = param_4;
    break;
  case 0xe:
    param_4 = param_3;
LAB_1004815b8:
    _swift_bridgeObjectRetain(param_4);
    param_1 = param_5;
    param_2 = param_6;
    break;
  case 0xf:
    param_5 = param_1;
    param_7 = param_3;
    param_6 = param_2;
    goto LAB_10048163c;
  case 0x10:
LAB_10048163c:
    _swift_bridgeObjectRetain(param_5);
    param_1 = param_6;
    param_2 = param_7;
    break;
  case 0x11:
    FUN_100139c68();
    param_1 = param_6;
    param_2 = param_7;
    break;
  case 0x12:
    FUN_1004818c4();
    FUN_100008184(param_20,param_21);
    param_18 = param_22;
    param_19 = param_23;
    param_20 = param_24;
    goto LAB_10048160c;
  case 0x13:
    switchD_100481b9c::caseD_c4();
    FUN_100008184(param_16,param_17);
LAB_10048160c:
    FUN_100040b80(param_18,param_19,param_20);
    return;
  case 0x14:
  case 0x17:
    param_1 = param_2;
  case 4:
    param_5 = param_1;
    param_7 = param_4;
    param_6 = param_3;
    goto LAB_10048163c;
  case 0x18:
LAB_1004815a4:
    FUN_100008184(param_6,param_7);
    param_1 = param_8;
    param_2 = param_9;
    break;
  case 0x19:
    break;
  default:
    return;
  }
  FUN_100008184(param_1,param_2);
  return;
}

