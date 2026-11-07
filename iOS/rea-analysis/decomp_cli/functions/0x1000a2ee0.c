// rea decompile_all
// name: FUN_1000a2ee0
// address: 0x1000a2ee0
// body: available
// range: 0x1000a2ee0-0x1000a2ff7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


code * FUN_1000a2ee0(undefined1 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_120 [80];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined7 uStack_9f;
  undefined8 local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar1 = &DAT_1001041a0;
  FUN_10000eb08(&DAT_1001041a0,&DAT_1000d4300);
  _swift_initStaticObject();
  local_88 = PTR___swiftEmptySetSingleton_1000f0750;
  puVar2 = puVar1;
  FUN_100066b80();
  _swift_arrayDestroy(puVar1 + 0x20,3,&DAT_1000f8130);
  _swift_bridgeObjectRelease(local_88);
  local_d0 = 0;
  uStack_c8 = 0xe000000000000000;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  local_a0 = 2;
  local_98 = 0;
  local_90 = 0;
  local_88 = (undefined *)0x0;
  uStack_80 = 0xe000000000000000;
  uStack_70 = 0;
  local_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  local_58 = 2;
  local_50 = 0;
  uStack_48 = 0;
  FUN_10005fcbc(&local_d0,auStack_120);
  FUN_10005fcf0(&local_88);
  puVar1 = &DAT_1000faeb0;
  _swift_allocObject(&DAT_1000faeb0,0x68,7);
  *(undefined **)(puVar1 + 0x10) = puVar2;
  puVar1[0x18] = param_1;
  *(undefined8 *)(puVar1 + 0x48) = uStack_a8;
  *(undefined8 *)(puVar1 + 0x40) = local_b0;
  *(undefined8 *)(puVar1 + 0x58) = local_98;
  *(ulong *)(puVar1 + 0x50) = CONCAT71(uStack_9f,local_a0);
  *(undefined8 *)(puVar1 + 0x60) = local_90;
  *(undefined8 *)(puVar1 + 0x28) = uStack_c8;
  *(undefined8 *)(puVar1 + 0x20) = local_d0;
  *(undefined8 *)(puVar1 + 0x38) = uStack_b8;
  *(undefined8 *)(puVar1 + 0x30) = local_c0;
  return FUN_100096178;
}

