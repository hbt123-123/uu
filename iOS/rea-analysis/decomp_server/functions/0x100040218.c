// rea decompile_all
// name: FUN_100040218
// address: 0x100040218
// body: available
// range: 0x100040218-0x1000403d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100040318 to 0x100006cdc FUN_100006cdc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10004033c to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1000403d0 to 0x100040620 switchD_10004048c::caseD_6d (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100040218(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
                  ulong param_6,ulong param_7,ulong param_8,ulong param_9,undefined8 param_10,
                  ulong param_11,ulong param_12)

{
  ulong uVar1;
  undefined8 in_stack_00000040;
  ulong in_stack_00000048;
  ulong in_stack_00000050;
  
  uVar1 = param_2;
  switch((uint)(in_stack_00000050 >> 0x39) & 0x18 | (uint)((ulong)in_stack_00000040 >> 0x3d)) {
  case 0:
    FUN_100006cdc();
    _swift_release(param_3);
    return;
  case 1:
  case 2:
  case 0x14:
    param_1 = param_3;
    uVar1 = param_4;
    break;
  case 3:
  case 4:
  case 9:
  case 0x13:
    param_1 = param_2;
    uVar1 = param_3;
    break;
  case 5:
    uVar1 = param_7;
    param_1 = param_6;
    goto LAB_1000402f8;
  case 6:
    FUN_1000403d4();
    uVar1 = in_stack_00000050 & 0xcfffffffffffffff;
    param_1 = in_stack_00000048;
    break;
  case 7:
    FUN_10004063c();
    param_1 = param_11;
    uVar1 = param_12;
    break;
  case 8:
  case 0x1b:
    param_2 = param_3;
    goto LAB_1000402b0;
  case 0xb:
  case 0xd:
    param_5 = param_1;
    uVar1 = param_3;
    param_1 = param_2;
LAB_1000402f8:
    _swift_bridgeObjectRelease(param_5);
    break;
  case 0xc:
  case 0x15:
  case 0x17:
  case 0x1a:
    break;
  case 0xe:
  case 0x10:
  case 0x11:
  case 0x16:
    param_1 = param_2;
  case 10:
    param_5 = param_1;
    uVar1 = param_4;
    param_1 = param_3;
    goto LAB_1000402f8;
  case 0xf:
  case 0x12:
LAB_1000402b0:
    _swift_bridgeObjectRelease(param_2);
    param_1 = param_4;
    uVar1 = param_5;
    break;
  case 0x18:
    switchD_10004048c::caseD_6d(param_3,param_4,param_5);
    FUN_100006cdc(param_6,param_7);
    switchD_10004048c::caseD_6d(param_8,param_9,param_10);
    return;
  case 0x19:
    FUN_1000407fc();
    param_1 = param_8;
    uVar1 = param_9;
    break;
  default:
    return;
  }
  FUN_100006cdc(param_1,uVar1);
  return;
}

