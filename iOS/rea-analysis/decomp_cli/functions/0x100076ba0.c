// rea decompile_all
// name: FUN_100076ba0
// address: 0x100076ba0
// body: available
// range: 0x100076ba0-0x100076c93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100076ba0(uint param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  
  puVar2 = &DAT_100103f10;
  FUN_10000eb08(&DAT_100103f10,&DAT_1000d4b90);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  FUN_10007625c();
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  FUN_1000a9b8c(&local_98,puVar2,param_1 & 1);
  auVar1._8_8_ = uStack_78;
  auVar1._0_8_ = local_80;
  local_48 = local_98;
  _swift_bridgeObjectRetain(uStack_78);
  FUN_10001fc18(&local_48,&DAT_100104430,&DAT_1000d4888);
  uStack_58 = uStack_88;
  local_60 = local_90;
  FUN_100077ccc(&local_60);
  _swift_bridgeObjectRelease(uStack_78);
  local_68 = local_70;
  FUN_10001fc18(&local_68,&DAT_100104530,&DAT_1000d4ba0);
  return auVar1;
}

