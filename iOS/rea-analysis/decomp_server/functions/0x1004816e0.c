// rea decompile_all
// name: FUN_1004816e0
// address: 0x1004816e0
// body: available
// range: 0x1004816e0-0x100481813 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100481768 to 0x100481814 FUN_100481814 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1004817d0 to 0x1007df454 _swift_retain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100481810 to 0x100008184 FUN_100008184 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004816e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,ulong param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  uint uVar1;
  
  uVar1 = (uint)(param_7 >> 0x3b) & 6 | (uint)(param_5 >> 0x3d) & 1;
  if (uVar1 < 3) {
    if (uVar1 == 0) {
      _swift_bridgeObjectRetain(param_2);
      _swift_bridgeObjectRetain(param_3);
      param_6 = param_4;
      goto LAB_100481800;
    }
    if (uVar1 != 1) {
      if (uVar1 != 2) {
        return;
      }
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(param_4);
      FUN_100008184(param_6,param_7 & 0xcfffffffffffffff);
      FUN_100481814(param_8,param_9,param_10);
      return;
    }
    _swift_bridgeObjectRetain();
  }
  else {
    if (uVar1 == 3) {
      FUN_100008184();
      _swift_retain(param_3);
      return;
    }
    if (uVar1 != 4) {
      if (uVar1 != 5) {
        return;
      }
      param_5 = param_7 & 0xcfffffffffffffff;
      goto LAB_100481800;
    }
  }
  param_5 = param_5 & 0xdfffffffffffffff;
  param_6 = param_4;
LAB_100481800:
  FUN_100008184(param_6,param_5);
  return;
}

