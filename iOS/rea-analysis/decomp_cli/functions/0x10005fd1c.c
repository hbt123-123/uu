// rea decompile_all
// name: FUN_10005fd1c
// address: 0x10005fd1c
// body: available
// range: 0x10005fd1c-0x10005fd97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005fd1c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined1 auStack_f8 [72];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined7 uStack_7f;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_70 = param_10;
  uStack_28 = param_10;
  local_b0 = param_2;
  uStack_a8 = param_3;
  local_a0 = param_4;
  uStack_98 = param_5;
  local_90 = param_6;
  uStack_88 = param_7;
  local_80 = param_8;
  local_78 = param_9;
  local_68 = param_2;
  uStack_60 = param_3;
  local_58 = param_4;
  uStack_50 = param_5;
  local_48 = param_6;
  uStack_40 = param_7;
  local_38 = param_8;
  local_30 = param_9;
  FUN_10005fcbc(&local_b0,auStack_f8);
  FUN_10005fcf0(&local_68);
  param_1[5] = uStack_88;
  param_1[4] = local_90;
  param_1[7] = local_78;
  param_1[6] = CONCAT71(uStack_7f,local_80);
  param_1[8] = local_70;
  param_1[1] = uStack_a8;
  *param_1 = local_b0;
  param_1[3] = uStack_98;
  param_1[2] = local_a0;
  return;
}

