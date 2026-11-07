// rea decompile_all
// name: FUN_100514cc8
// address: 0x100514cc8
// body: available
// range: 0x100514cc8-0x100514d87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100514cc8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  long unaff_x21;
  undefined8 local_58;
  
  uVar1 = 0;
  __sSa22_allocateUninitializedySayxG_SpyxGtSiFZ(0,param_4);
  local_58 = uVar1;
  (**(code **)(param_8 + 0x1b0))(&local_58,param_4,param_7,param_5,param_8);
  uVar1 = local_58;
  if (unaff_x21 == 0) {
    thunk_FUN_1000a0074(param_2,param_1 + 1);
    *param_1 = uVar1;
  }
  else {
    FUN_10003f094(param_2);
    _swift_bridgeObjectRelease(local_58);
  }
  return;
}

