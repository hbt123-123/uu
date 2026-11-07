// rea decompile_all
// name: FUN_1001d3390
// address: 0x1001d3390
// body: available
// range: 0x1001d3390-0x1001d343f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001d3390(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_120 [72];
  undefined1 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  undefined7 uStack_af;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  local_d8 = 1;
  FUN_100006cdc(0,0xc000000000000000);
  local_d0 = 1;
  uStack_b8 = 1;
  local_b0 = local_d8;
  uStack_a0 = 0xc000000000000000;
  uStack_a8 = 0;
  uStack_90 = 0xc000000000000000;
  local_98 = 0;
  local_88 = 1;
  uStack_70 = 1;
  local_68 = local_d8;
  uStack_58 = 0xc000000000000000;
  local_60 = 0;
  uStack_48 = 0xc000000000000000;
  uStack_50 = 0;
  uStack_c8 = param_2;
  local_c0 = param_3;
  uStack_80 = param_2;
  local_78 = param_3;
  FUN_1001d2ad0(&local_d0,auStack_120);
  FUN_1001d2d44(&local_88);
  param_1[5] = uStack_a8;
  param_1[4] = CONCAT71(uStack_af,local_b0);
  param_1[7] = local_98;
  param_1[6] = uStack_a0;
  param_1[8] = uStack_90;
  param_1[1] = uStack_c8;
  *param_1 = local_d0;
  param_1[3] = uStack_b8;
  param_1[2] = local_c0;
  return;
}

