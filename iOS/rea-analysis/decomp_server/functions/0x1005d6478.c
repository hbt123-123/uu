// rea decompile_all
// name: FUN_1005d6478
// address: 0x1005d6478
// body: available
// range: 0x1005d6478-0x1005d66f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005d64fc to 0x100102d48 FUN_100102d48 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1005d6550 to 0x100102d14 FUN_100102d14 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1005d667c to 0x100102ca8 FUN_100102ca8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1005d66d4 to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005d6478(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 uVar1;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000068;
  undefined1 in_stack_000000b0;
  
  uVar1 = param_2;
  switch(in_stack_000000b0) {
  case 3:
  case 4:
  case 8:
  case 9:
  case 10:
  case 0xd:
  case 0x15:
  case 0x16:
  case 0x17:
    goto LAB_1005d66b8;
  case 5:
    param_2 = param_6;
    break;
  case 6:
    _swift_bridgeObjectRelease(param_2);
    FUN_100006cc8(param_4,param_5);
    _swift_bridgeObjectRelease(param_9);
    param_2 = in_stack_00000068;
    goto LAB_1005d6528;
  case 7:
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_4);
    _swift_bridgeObjectRelease(param_6);
    FUN_100102ca8(param_9,param_10,param_11,param_12,param_13,param_14,param_15,param_16);
    return;
  default:
    return;
  case 0xe:
    FUN_100102d14();
    return;
  case 0xf:
    FUN_100102d48();
    return;
  case 0x10:
    param_2 = param_8;
    break;
  case 0x13:
    uVar1 = param_4;
    param_4 = param_6;
    param_2 = param_8;
    break;
  case 0x14:
  case 0x18:
    in_stack_00000058 = param_2;
    param_2 = param_4;
LAB_1005d6528:
    _swift_bridgeObjectRelease(in_stack_00000058);
    goto LAB_1005d66b8;
  }
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(param_4);
LAB_1005d66b8:
  _swift_bridgeObjectRelease(param_2);
  return;
}

