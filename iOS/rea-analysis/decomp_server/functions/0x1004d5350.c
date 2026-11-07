// rea decompile_all
// name: FUN_1004d5350
// address: 0x1004d5350
// body: available
// range: 0x1004d5350-0x1004d546b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004d5350(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
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
  undefined8 local_b0;
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
  
  uStack_178 = param_1[0xd];
  local_180 = param_1[0xc];
  uStack_168 = param_1[0xf];
  uStack_170 = param_1[0xe];
  uStack_158 = param_1[0x11];
  local_160 = param_1[0x10];
  local_150 = param_1[0x12];
  uStack_1b8 = param_1[5];
  local_1c0 = param_1[4];
  uStack_1a8 = param_1[7];
  uStack_1b0 = param_1[6];
  uStack_198 = param_1[9];
  local_1a0 = param_1[8];
  uStack_188 = param_1[0xb];
  uStack_190 = param_1[10];
  uStack_1d8 = param_1[1];
  local_1e0 = *param_1;
  uStack_1c8 = param_1[3];
  uStack_1d0 = param_1[2];
  iVar1 = (int)&local_1e0;
  FUN_100040934();
  if (iVar1 != 1) {
    uStack_d8 = uStack_178;
    local_e0 = local_180;
    uStack_c8 = uStack_168;
    uStack_d0 = uStack_170;
    uStack_b8 = uStack_158;
    local_c0 = local_160;
    local_b0 = local_150;
    uStack_118 = uStack_1b8;
    local_120 = local_1c0;
    uStack_108 = uStack_1a8;
    uStack_110 = uStack_1b0;
    uStack_f8 = uStack_198;
    local_100 = local_1a0;
    uStack_e8 = uStack_188;
    uStack_f0 = uStack_190;
    uStack_138 = uStack_1d8;
    local_140 = local_1e0;
    uStack_128 = uStack_1c8;
    uStack_130 = uStack_1d0;
    iVar1 = (int)&local_140;
    FUN_100040948();
    if (iVar1 == 7) {
      puVar2 = &local_140;
      FUN_100040964();
      uStack_238 = puVar2[1];
      local_240 = *puVar2;
      uStack_228 = puVar2[3];
      uStack_230 = puVar2[2];
      uStack_1f8 = puVar2[9];
      local_200 = puVar2[8];
      uStack_1e8 = puVar2[0xb];
      uStack_1f0 = puVar2[10];
      uStack_218 = puVar2[5];
      local_220 = puVar2[4];
      uStack_208 = puVar2[7];
      uStack_210 = puVar2[6];
      pcVar3 = *(code **)(param_4 + 0x88);
      local_a0 = local_240;
      uStack_98 = uStack_238;
      uStack_90 = uStack_230;
      uStack_88 = uStack_228;
      local_80 = local_220;
      uStack_78 = uStack_218;
      uStack_70 = uStack_210;
      uStack_68 = uStack_208;
      local_60 = local_200;
      uStack_58 = uStack_1f8;
      uStack_50 = uStack_1f0;
      uStack_48 = uStack_1e8;
      FUN_10042fd6c();
      (*pcVar3)(&local_240,9,&DAT_1009bf038,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1004d546c);
  (*pcVar3)();
}

