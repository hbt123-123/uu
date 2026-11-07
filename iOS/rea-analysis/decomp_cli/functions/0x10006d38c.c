// rea decompile_all
// name: FUN_10006d38c
// address: 0x10006d38c
// body: available
// range: 0x10006d38c-0x10006d467 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10006d38c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
                  undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined1 auStack_1f8 [152];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 local_100;
  undefined7 uStack_ff;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined *local_d0;
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
  undefined1 local_68;
  undefined8 local_60;
  undefined *puStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined *puStack_38;
  
  local_150 = 0;
  uStack_148 = 0;
  local_110 = param_10;
  uStack_108 = param_11;
  local_100 = param_12;
  uStack_f8 = param_14;
  puStack_f0 = PTR___swiftEmptyArrayStorage_1000f0740;
  local_e8 = param_15;
  local_e0 = param_16;
  uStack_d8 = param_17;
  local_d0 = PTR___swiftEmptyArrayStorage_1000f0740;
  local_b8 = 0;
  uStack_b0 = 0;
  local_78 = param_10;
  uStack_70 = param_11;
  local_68 = param_12;
  local_60 = param_14;
  puStack_58 = PTR___swiftEmptyArrayStorage_1000f0740;
  local_50 = param_15;
  uStack_48 = param_16;
  local_40 = param_17;
  puStack_38 = PTR___swiftEmptyArrayStorage_1000f0740;
  local_160 = param_2;
  uStack_158 = param_3;
  local_140 = param_4;
  uStack_138 = param_5;
  local_130 = param_6;
  uStack_128 = param_7;
  local_120 = param_8;
  uStack_118 = param_9;
  local_c8 = param_2;
  uStack_c0 = param_3;
  local_a8 = param_4;
  uStack_a0 = param_5;
  local_98 = param_6;
  uStack_90 = param_7;
  local_88 = param_8;
  uStack_80 = param_9;
  FUN_10006e920(&local_160,auStack_1f8);
  FUN_10006e954(&local_c8);
  param_1[0xd] = uStack_f8;
  param_1[0xc] = CONCAT71(uStack_ff,local_100);
  param_1[0xf] = local_e8;
  param_1[0xe] = puStack_f0;
  param_1[0x11] = uStack_d8;
  param_1[0x10] = local_e0;
  param_1[0x12] = local_d0;
  param_1[5] = uStack_138;
  param_1[4] = local_140;
  param_1[7] = uStack_128;
  param_1[6] = local_130;
  param_1[9] = uStack_118;
  param_1[8] = local_120;
  param_1[0xb] = uStack_108;
  param_1[10] = local_110;
  param_1[1] = uStack_158;
  *param_1 = local_160;
  param_1[3] = uStack_148;
  param_1[2] = local_150;
  return;
}

