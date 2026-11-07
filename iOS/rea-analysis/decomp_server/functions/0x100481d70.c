// rea decompile_all
// name: switchD_100481b9c::caseD_c9
// address: 0x100481d70
// body: available
// range: 0x100481d70-0x100481eff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100481e00 to 0x100008184 FUN_100008184 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void switchD_100481b9c::caseD_c9
               (ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6,
               ulong param_7,ulong param_8,ulong param_9,ulong param_10,ulong param_11,
               undefined4 param_12,undefined4 param_13,undefined8 param_14,ulong param_15,
               ulong param_16)

{
  switch((uint)(param_16 >> 0x39) & 0x18 | (uint)((ulong)param_14 >> 0x3d)) {
  case 0:
    param_5 = param_3;
    goto switchD_100481b9c_caseD_2c;
  case 1:
    param_8 = param_6;
    param_5 = param_7;
    break;
  case 2:
    FUN_100481f00();
    param_8 = param_15;
    param_5 = param_16 & 0xcfffffffffffffff;
    break;
  case 3:
    FUN_1004820c8();
    param_8 = param_10;
    param_5 = param_11;
    break;
  case 4:
    param_8 = param_3;
    param_5 = param_4;
    break;
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 0xf:
  case 0x10:
  case 0x13:
  case 0x14:
    param_8 = param_2;
    param_5 = param_3;
    break;
  case 10:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x16:
  case 0x17:
    param_1 = param_3;
    param_2 = param_4;
switchD_100481b9c_caseD_2c:
    _swift_bridgeObjectRetain(param_1);
    param_8 = param_2;
    break;
  case 0xb:
    _swift_bridgeObjectRetain(param_4);
    param_8 = param_6;
    param_5 = param_7;
    break;
  case 0x11:
    _swift_bridgeObjectRetain(param_3);
    _swift_bridgeObjectRetain(param_4);
    param_8 = param_5;
    param_5 = param_6;
    break;
  case 0x12:
    _swift_bridgeObjectRetain(param_3);
    _swift_bridgeObjectRetain(param_5);
    FUN_100008184(param_6,param_7);
    param_5 = param_9;
    break;
  case 0x15:
    FUN_100447e1c();
    param_8 = param_4;
    break;
  default:
    return;
  }
  FUN_100008184(param_8,param_5);
  return;
}

