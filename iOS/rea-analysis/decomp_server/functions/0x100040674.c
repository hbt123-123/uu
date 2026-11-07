// rea decompile_all
// name: switchD_10004048c::caseD_6a
// address: 0x100040674
// body: available
// range: 0x100040674-0x1000407a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000407a4 to 0x100006cdc FUN_100006cdc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void switchD_10004048c::caseD_6a
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,byte param_10)

{
  uint uVar1;
  
  uVar1 = 4;
  if ((param_10 & 1) == 0) {
    uVar1 = 0;
  }
  uVar1 = (uint)((ulong)param_9 >> 0x3c) & 3 | uVar1;
  if (uVar1 < 4) {
    if (uVar1 < 2) {
      if (uVar1 == 0) {
        _swift_bridgeObjectRelease();
        FUN_1000407a8(param_3,param_4,param_5,param_6,param_7);
      }
      else {
        _swift_bridgeObjectRelease(param_3);
        _swift_bridgeObjectRelease(param_5);
        param_8 = param_6;
        param_9 = param_7;
      }
      goto LAB_100040790;
    }
    if (uVar1 == 2) {
      _swift_bridgeObjectRelease(param_2);
      FUN_100006cdc(param_4,param_5);
      param_8 = param_6;
      param_9 = param_7;
      goto LAB_100040790;
    }
  }
  else {
    if (5 < uVar1) {
      if (uVar1 == 6) {
        _swift_bridgeObjectRelease(param_2);
        param_8 = param_3;
        param_9 = param_4;
      }
      else {
        _swift_bridgeObjectRelease(param_3);
        param_8 = param_4;
        param_9 = param_5;
      }
      goto LAB_100040790;
    }
    param_8 = param_5;
    param_9 = param_6;
    if (uVar1 == 4) goto LAB_100040790;
  }
  param_8 = param_2;
  param_9 = param_3;
LAB_100040790:
  FUN_100006cdc(param_8,param_9);
  return;
}

