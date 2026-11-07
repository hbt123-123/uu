// rea decompile_all
// name: FUN_10064cda0
// address: 0x10064cda0
// body: available
// range: 0x10064cda0-0x10064ce23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_10064cda0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined8 local_38;
  
  local_70 = param_5;
  uStack_68 = param_6;
  local_60 = param_7;
  local_58 = param_8;
  local_50 = param_1;
  uStack_48 = param_2;
  local_40 = param_3;
  local_38 = param_4;
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_8);
  FUN_10064dab4(&local_50,&local_70);
  uVar1 = local_50;
  _swift_bridgeObjectRelease(local_58);
  return uVar1;
}

