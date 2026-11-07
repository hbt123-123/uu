// rea decompile_all
// name: FUN_10064cf98
// address: 0x10064cf98
// body: available
// range: 0x10064cf98-0x10064d023 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10064cf98(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9)

{
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  undefined8 local_28;
  
  local_60 = param_2;
  uStack_58 = param_3;
  local_50 = param_4;
  local_48 = param_5;
  local_40 = param_6;
  uStack_38 = param_7;
  local_30 = param_8;
  local_28 = param_9;
  _swift_bridgeObjectRetain(param_9);
  _swift_bridgeObjectRetain(param_5);
  FUN_10064dab4(&local_40,&local_60);
  param_1[1] = uStack_38;
  *param_1 = local_40;
  *(undefined1 *)(param_1 + 2) = local_30;
  param_1[3] = local_28;
  param_1[5] = uStack_58;
  param_1[4] = local_60;
  *(undefined1 *)(param_1 + 6) = local_50;
  param_1[7] = local_48;
  return;
}

