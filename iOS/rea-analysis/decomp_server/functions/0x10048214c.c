// rea decompile_all
// name: FUN_10048214c
// address: 0x10048214c
// body: available
// range: 0x10048214c-0x1004824fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004823ec to 0x100482688 FUN_100482688 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1004824a0 to 0x100040620 switchD_10004048c::caseD_6d (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1004824d8 to 0x100006cdc FUN_100006cdc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10048214c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined1 param_25)

{
  switch(param_25) {
  case 0:
    _swift_bridgeObjectRelease(param_4);
    FUN_1004824fc(param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12);
  case 0x16:
    param_1 = param_13;
    param_2 = param_14;
    break;
  case 1:
  case 0x15:
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_4);
    _swift_bridgeObjectRelease(param_6);
    _swift_bridgeObjectRelease(param_8);
    param_8 = param_10;
    goto LAB_1004822f0;
  case 2:
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_4);
    _swift_bridgeObjectRelease(param_6);
    param_12 = param_10;
    param_11 = param_9;
LAB_1004822f0:
    _swift_bridgeObjectRelease(param_8);
    param_1 = param_11;
    param_2 = param_12;
    break;
  case 3:
    FUN_100482534();
    param_1 = param_11;
    param_2 = param_12;
    break;
  case 5:
    goto LAB_10048242c;
  case 6:
    param_1 = param_9;
    param_2 = param_10;
    break;
  case 7:
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_4);
    goto LAB_100482418;
  case 8:
  case 9:
    param_5 = param_4;
    goto LAB_1004824b0;
  case 10:
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(param_3);
    FUN_100006cdc(param_4,param_5);
    FUN_10000f4e0(param_6,param_7,param_8,param_9,param_10);
    FUN_100482688(param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18);
    return;
  case 0xb:
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_4);
    param_1 = param_12;
    param_2 = param_13;
    break;
  case 0xc:
    FUN_1004826bc();
    param_1 = param_11;
    param_2 = param_12;
    break;
  case 0xd:
    param_1 = param_3;
    param_2 = param_4;
    break;
  case 0xe:
    param_4 = param_3;
LAB_10048242c:
    _swift_bridgeObjectRelease(param_4);
    param_1 = param_5;
    param_2 = param_6;
    break;
  case 0xf:
    param_5 = param_1;
    param_7 = param_3;
    param_6 = param_2;
    goto LAB_1004824b0;
  case 0x10:
LAB_1004824b0:
    _swift_bridgeObjectRelease(param_5);
    param_1 = param_6;
    param_2 = param_7;
    break;
  case 0x11:
    FUN_100139ca0();
    param_1 = param_6;
    param_2 = param_7;
    break;
  case 0x12:
    FUN_1004827dc();
    FUN_100006cdc(param_20,param_21);
    param_18 = param_22;
    param_19 = param_23;
    param_20 = param_24;
    goto LAB_100482480;
  case 0x13:
    switchD_100482ab4::caseD_69();
    FUN_100006cdc(param_16,param_17);
LAB_100482480:
    switchD_10004048c::caseD_6d(param_18,param_19,param_20);
    return;
  case 0x14:
  case 0x17:
    param_1 = param_2;
  case 4:
    param_5 = param_1;
    param_7 = param_4;
    param_6 = param_3;
    goto LAB_1004824b0;
  case 0x18:
LAB_100482418:
    FUN_100006cdc(param_6,param_7);
    param_1 = param_8;
    param_2 = param_9;
    break;
  case 0x19:
    break;
  default:
    return;
  }
  FUN_100006cdc(param_1,param_2);
  return;
}

