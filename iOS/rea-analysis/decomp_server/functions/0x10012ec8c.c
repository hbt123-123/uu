// rea decompile_all
// name: FUN_10012ec8c
// address: 0x10012ec8c
// body: available
// range: 0x10012ec8c-0x10012edf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10012ec8c(undefined8 *param_1,long *param_2)

{
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  long lStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  long lStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  FUN_1003dc660();
  (**(code **)(*param_2 + 0x108))(&local_1a8);
  _swift_release(param_2);
  uStack_68 = uStack_180;
  local_70 = local_188;
  uStack_58 = uStack_170;
  uStack_60 = local_178;
  uStack_48 = uStack_160;
  local_50 = local_168;
  local_40 = local_158;
  uStack_88 = uStack_1a0;
  local_90 = local_1a8;
  local_78 = lStack_190;
  uStack_80 = local_198;
  if (lStack_190 == 0) {
    FUN_100401b14(0);
    FUN_1003fb4ec(FUN_10012e8ac,0,0xd00000000000009a,0x800000010088ef70,0x666e6f4364616572,
                  0xec00000029286769,0x59,0xb);
    uStack_c8 = uStack_68;
    local_d0 = local_70;
    uStack_b8 = uStack_58;
    uStack_c0 = uStack_60;
    uStack_a8 = uStack_48;
    local_b0 = local_50;
    local_a0 = local_40;
    uStack_e8 = uStack_88;
    local_f0 = local_90;
    lStack_d8 = local_78;
    uStack_e0 = uStack_80;
  }
  else {
    uStack_148 = uStack_1a0;
    local_150 = local_1a8;
    local_140 = local_198;
    lStack_138 = lStack_190;
    uStack_128 = uStack_180;
    local_130 = local_188;
    uStack_118 = uStack_170;
    local_120 = local_178;
    uStack_108 = uStack_160;
    uStack_110 = local_168;
    local_100 = local_158;
    FUN_100130884(&local_f0);
    FUN_100040bb4(&local_90,&DAT_100a79da8,&DAT_10080e978);
  }
  param_1[5] = uStack_c8;
  param_1[4] = local_d0;
  param_1[7] = uStack_b8;
  param_1[6] = uStack_c0;
  param_1[9] = uStack_a8;
  param_1[8] = local_b0;
  param_1[10] = local_a0;
  param_1[1] = uStack_e8;
  *param_1 = local_f0;
  param_1[3] = lStack_d8;
  param_1[2] = uStack_e0;
  return;
}

