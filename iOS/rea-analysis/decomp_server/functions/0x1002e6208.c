// rea decompile_all
// name: FUN_1002e6208
// address: 0x1002e6208
// body: available
// range: 0x1002e6208-0x1002e6313 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_1002e6208(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  long *unaff_x20;
  code *pcVar2;
  undefined *local_d8 [3];
  undefined *local_c0;
  undefined **ppuStack_b8;
  undefined1 auStack_b0 [40];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  FUN_1000b142c(param_2,auStack_b0);
  uStack_70 = param_9;
  local_68 = param_10;
  local_c0 = &DAT_1009aea00;
  ppuStack_b8 = &PTR_PTR_1009aebc8;
  puVar1 = &DAT_1009ae728;
  local_88 = param_3;
  uStack_80 = param_4;
  local_78 = param_5;
  _swift_allocObject(&DAT_1009ae728,0x60,7);
  local_d8[0] = puVar1;
  FUN_1002eed94(auStack_b0,puVar1 + 0x10);
  pcVar2 = *(code **)(*unaff_x20 + 0x158);
  _swift_bridgeObjectRetain(param_5);
  _swift_bridgeObjectRetain(param_4);
  FUN_10004090c(param_9,param_10);
  (*pcVar2)(param_1,local_d8,param_6,param_7,param_8);
  FUN_1002eedc8(auStack_b0);
  FUN_10003f094(local_d8);
  return param_1;
}

