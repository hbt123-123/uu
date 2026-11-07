// rea decompile_all
// name: FUN_100467d10
// address: 0x100467d10
// body: available
// range: 0x100467d10-0x100467dcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100467d10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_1c8 [200];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 local_40;
  
  uStack_58 = *(undefined8 *)(param_4 + 200);
  local_60 = *(undefined8 *)(param_4 + 0xc0);
  uStack_48 = *(undefined8 *)(param_4 + 0xd8);
  uStack_50 = *(undefined8 *)(param_4 + 0xd0);
  local_40 = *(undefined1 *)(param_4 + 0xe0);
  uStack_98 = *(undefined8 *)(param_4 + 0x88);
  local_a0 = *(undefined8 *)(param_4 + 0x80);
  uStack_88 = *(undefined8 *)(param_4 + 0x98);
  uStack_90 = *(undefined8 *)(param_4 + 0x90);
  uStack_78 = *(undefined8 *)(param_4 + 0xa8);
  local_80 = *(undefined8 *)(param_4 + 0xa0);
  uStack_68 = *(undefined8 *)(param_4 + 0xb8);
  uStack_70 = *(undefined8 *)(param_4 + 0xb0);
  uStack_d8 = *(undefined8 *)(param_4 + 0x48);
  local_e0 = *(undefined8 *)(param_4 + 0x40);
  uStack_c8 = *(undefined8 *)(param_4 + 0x58);
  uStack_d0 = *(undefined8 *)(param_4 + 0x50);
  uStack_b8 = *(undefined8 *)(param_4 + 0x68);
  local_c0 = *(undefined8 *)(param_4 + 0x60);
  uStack_a8 = *(undefined8 *)(param_4 + 0x78);
  uStack_b0 = *(undefined8 *)(param_4 + 0x70);
  uStack_f8 = *(undefined8 *)(param_4 + 0x28);
  local_100 = *(undefined8 *)(param_4 + 0x20);
  uStack_e8 = *(undefined8 *)(param_4 + 0x38);
  uStack_f0 = *(undefined8 *)(param_4 + 0x30);
  FUN_10007f314(&local_100,auStack_1c8,&DAT_100aa09a8,&BYTE_10082db80);
  param_1[0x15] = uStack_58;
  param_1[0x14] = local_60;
  param_1[0x17] = uStack_48;
  param_1[0x16] = uStack_50;
  *(undefined1 *)(param_1 + 0x18) = local_40;
  param_1[0xd] = uStack_98;
  param_1[0xc] = local_a0;
  param_1[0xf] = uStack_88;
  param_1[0xe] = uStack_90;
  param_1[0x11] = uStack_78;
  param_1[0x10] = local_80;
  param_1[0x13] = uStack_68;
  param_1[0x12] = uStack_70;
  param_1[5] = uStack_d8;
  param_1[4] = local_e0;
  param_1[7] = uStack_c8;
  param_1[6] = uStack_d0;
  param_1[9] = uStack_b8;
  param_1[8] = local_c0;
  param_1[0xb] = uStack_a8;
  param_1[10] = uStack_b0;
  param_1[1] = uStack_f8;
  *param_1 = local_100;
  param_1[3] = uStack_e8;
  param_1[2] = uStack_f0;
  return;
}

