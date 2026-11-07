// rea decompile_all
// name: FUN_100086ee4
// address: 0x100086ee4
// body: available
// range: 0x100086ee4-0x100087023 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100086ee4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  puVar1 = &DAT_1000f9738;
  _swift_allocObject(&DAT_1000f9738,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = in_stack_00000028;
  *(undefined8 *)(puVar1 + 0x18) = in_stack_00000030;
  *(undefined8 *)(puVar1 + 0x20) = param_9;
  *(undefined8 *)(puVar1 + 0x28) = param_10;
  FUN_100086778(&local_138,in_stack_00000028,param_3,param_4,param_5,param_6,
                PTR___swiftEmptyArrayStorage_1000f0740,param_7,0,0,param_8);
  param_1[0x15] = uStack_90;
  param_1[0x14] = local_98;
  param_1[0x17] = uStack_80;
  param_1[0x16] = local_88;
  param_1[0x19] = uStack_70;
  param_1[0x18] = local_78;
  param_1[0xd] = uStack_d0;
  param_1[0xc] = local_d8;
  param_1[0xf] = uStack_c0;
  param_1[0xe] = local_c8;
  param_1[0x11] = uStack_b0;
  param_1[0x10] = local_b8;
  param_1[0x13] = uStack_a0;
  param_1[0x12] = local_a8;
  param_1[5] = uStack_110;
  param_1[4] = local_118;
  param_1[7] = uStack_100;
  param_1[6] = local_108;
  param_1[9] = uStack_f0;
  param_1[8] = local_f8;
  param_1[0xb] = uStack_e0;
  param_1[10] = local_e8;
  param_1[1] = uStack_130;
  *param_1 = local_138;
  param_1[3] = uStack_120;
  param_1[2] = local_128;
  return;
}

