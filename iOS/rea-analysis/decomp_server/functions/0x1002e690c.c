// rea decompile_all
// name: FUN_1002e690c
// address: 0x1002e690c
// body: available
// range: 0x1002e690c-0x1002e6a27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_1002e690c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  undefined1 auStack_108 [80];
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  FUN_1000b142c(param_2,auStack_b8);
  uStack_78 = param_10;
  local_70 = param_11;
  uVar1 = 0;
  local_90 = param_4;
  uStack_88 = param_5;
  local_80 = param_6;
  FUN_10033ba9c(0);
  _swift_allocObject();
  FUN_1002eed94(auStack_b8,auStack_108);
  _swift_bridgeObjectRetain(param_6);
  _swift_bridgeObjectRetain(param_5);
  FUN_10004090c(param_10,param_11);
  _swift_retain(param_1);
  FUN_1002eee20(param_3,auStack_108,param_1,uVar1);
  _swift_release(param_1);
  uVar1 = param_3;
  FUN_1002ee324(param_3,param_7,param_8,param_9,unaff_x20);
  _swift_release(param_3);
  FUN_1002eedc8(auStack_b8);
  return uVar1;
}

