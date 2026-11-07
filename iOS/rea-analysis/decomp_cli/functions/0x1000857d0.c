// rea decompile_all
// name: FUN_1000857d0
// address: 0x1000857d0
// body: available
// range: 0x1000857d0-0x1000858ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000857d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [32];
  undefined8 local_80;
  undefined1 local_78;
  undefined1 auStack_70 [24];
  long local_58;
  
  local_58 = param_7;
  FUN_100060d88(auStack_70);
  (**(code **)(*(long *)(param_7 + -8) + 0x10))();
  FUN_1000866dc(auStack_70,auStack_a0);
  local_78 = 1;
  local_b8 = param_3;
  uStack_b0 = param_4;
  local_a8 = param_5;
  local_80 = param_6;
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_5);
  _swift_bridgeObjectRetain(param_6);
  FUN_100099afc(&local_b8);
  FUN_100065194(&local_b8);
  FUN_10001fc18(auStack_70,&DAT_100104198,&DAT_1000d5180);
  return;
}

