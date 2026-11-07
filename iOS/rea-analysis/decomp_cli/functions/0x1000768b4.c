// rea decompile_all
// name: FUN_1000768b4
// address: 0x1000768b4
// body: available
// range: 0x1000768b4-0x1000769cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_1000768b4(uint param_1,undefined8 param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  
  puVar1 = &DAT_100103f10;
  FUN_10000eb08(&DAT_100103f10,&DAT_1000d4b90);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  FUN_10007625c();
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  FUN_1000a9b8c(&local_b8,puVar1,param_1 & 1);
  uVar2 = (ulong)(param_3 & 1);
  FUN_1000a4ab4(param_2,uVar2);
  local_58 = local_b8;
  FUN_10001fc18(&local_58,&DAT_100104430,&DAT_1000d4888);
  uStack_68 = uStack_a8;
  local_70 = local_b0;
  FUN_100077ccc(&local_70);
  uStack_78 = uStack_98;
  local_80 = local_a0;
  FUN_100077ccc(&local_80);
  local_88 = local_90;
  FUN_10001fc18(&local_88,&DAT_100104530,&DAT_1000d4ba0);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = param_2;
  return auVar3;
}

