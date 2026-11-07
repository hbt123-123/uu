// rea decompile_all
// name: FUN_10017ad28
// address: 0x10017ad28
// body: available
// range: 0x10017ad28-0x10017ae97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10017add8 to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10017ae28 to 0x100040620 switchD_10004048c::caseD_6d (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10017ae50 to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10017ad28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 in_stack_00000058;
  ulong in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  byte in_stack_00000080;
  
  uVar1 = (uint)(in_stack_00000060 >> 0x3c) & 3 | (in_stack_00000080 & 0x3f) << 2;
  if (uVar1 < 8) {
    if (uVar1 == 0) {
      FUN_100006cdc();
      _swift_release(param_3);
      return;
    }
    if ((uVar1 != 6) && (uVar1 != 7)) {
      return;
    }
  }
  else if (uVar1 < 10) {
    if (uVar1 == 8) {
      FUN_10017ae98();
      goto LAB_10017ae00;
    }
    if (uVar1 != 9) {
      return;
    }
  }
  else if (uVar1 != 10) {
    if (uVar1 != 0xb) {
      return;
    }
    _swift_bridgeObjectRelease();
    return;
  }
  FUN_10017ae98();
  in_stack_00000060 = in_stack_00000060 & 0xcfffffffffffffff;
LAB_10017ae00:
  FUN_100006cdc(in_stack_00000058,in_stack_00000060);
  switchD_10004048c::caseD_6d(in_stack_00000068,in_stack_00000070,in_stack_00000078);
  return;
}

