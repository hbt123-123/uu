// rea decompile_all
// name: FUN_1006364e0
// address: 0x1006364e0
// body: available
// range: 0x1006364e0-0x10063658b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006364e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_118 [72];
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
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined8 local_58;
  
  _swift_bridgeObjectRelease(0);
  local_d0 = 10;
  uStack_a8 = 0;
  local_a0 = 1;
  local_90 = 10;
  uStack_68 = 0;
  local_60 = 1;
  uStack_c8 = param_2;
  local_c0 = param_6;
  uStack_b8 = param_3;
  local_b0 = param_4;
  local_98 = param_5;
  uStack_88 = param_2;
  local_80 = param_6;
  uStack_78 = param_3;
  local_70 = param_4;
  local_58 = param_5;
  FUN_10063658c(&local_d0,auStack_118);
  FUN_1006365c0(&local_90);
  param_1[1] = uStack_c8;
  *param_1 = local_d0;
  param_1[3] = uStack_b8;
  param_1[2] = local_c0;
  param_1[5] = uStack_a8;
  param_1[4] = local_b0;
  param_1[7] = local_98;
  param_1[6] = CONCAT71(uStack_9f,local_a0);
  return;
}

