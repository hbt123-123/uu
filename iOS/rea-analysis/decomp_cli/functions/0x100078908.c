// rea decompile_all
// name: FUN_100078908
// address: 0x100078908
// body: available
// range: 0x100078908-0x1000789d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100078908(undefined8 *param_1)

{
  undefined1 auStack_208 [152];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_110;
  undefined7 uStack_10f;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined *local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined *local_68;
  undefined *puStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined *puStack_40;
  
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  local_150 = 0;
  uStack_148 = 0xe000000000000000;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  uStack_128 = 0xe000000000000000;
  local_120 = 0;
  uStack_118 = 0xe000000000000000;
  local_110 = 1;
  puStack_108 = PTR___swiftEmptyArrayStorage_1000f0740;
  puStack_100 = PTR___swiftEmptyArrayStorage_1000f0740;
  local_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = PTR___swiftEmptyArrayStorage_1000f0740;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  local_b0 = 0;
  uStack_a8 = 0xe000000000000000;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0xe000000000000000;
  local_80 = 0;
  uStack_78 = 0xe000000000000000;
  local_70 = 1;
  local_68 = PTR___swiftEmptyArrayStorage_1000f0740;
  puStack_60 = PTR___swiftEmptyArrayStorage_1000f0740;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  puStack_40 = PTR___swiftEmptyArrayStorage_1000f0740;
  FUN_10006e920(&local_170,auStack_208);
  FUN_10006e954(&local_d0);
  param_1[0xd] = puStack_108;
  param_1[0xc] = CONCAT71(uStack_10f,local_110);
  param_1[0xf] = local_f8;
  param_1[0xe] = puStack_100;
  param_1[0x11] = uStack_e8;
  param_1[0x10] = local_f0;
  param_1[0x12] = local_e0;
  param_1[5] = uStack_148;
  param_1[4] = local_150;
  param_1[7] = uStack_138;
  param_1[6] = local_140;
  param_1[9] = uStack_128;
  param_1[8] = local_130;
  param_1[0xb] = uStack_118;
  param_1[10] = local_120;
  param_1[1] = uStack_168;
  *param_1 = local_170;
  param_1[3] = uStack_158;
  param_1[2] = uStack_160;
  return;
}

