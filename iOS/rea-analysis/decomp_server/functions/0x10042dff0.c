// rea decompile_all
// name: FUN_10042dff0
// address: 0x10042dff0
// body: available
// range: 0x10042dff0-0x10042e25f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10042dff0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  ulong local_270;
  undefined8 uStack_268;
  ulong local_260;
  undefined8 uStack_258;
  ulong local_250;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  ulong local_220;
  undefined8 uStack_218;
  ulong local_210;
  undefined8 uStack_208;
  ulong local_200;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  ulong local_1d0;
  undefined8 uStack_1c8;
  ulong local_1c0;
  undefined8 uStack_1b8;
  ulong local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  ulong local_188;
  undefined8 uStack_180;
  ulong local_178;
  undefined8 uStack_170;
  ulong local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong local_140;
  undefined8 uStack_138;
  ulong local_130;
  undefined8 uStack_128;
  ulong local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong local_f0;
  undefined8 uStack_e8;
  ulong local_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined8 uStack_98;
  ulong local_90;
  undefined8 uStack_88;
  ulong local_80;
  
  uVar6 = param_1[5];
  uVar5 = param_1[4];
  uVar8 = param_1[7];
  uVar7 = param_1[6];
  uVar3 = param_1[8];
  uStack_108 = param_1[1];
  local_110 = *param_1;
  uStack_f8 = param_1[3];
  uStack_100 = param_1[2];
  uStack_1c8 = param_2[5];
  local_1d0 = param_2[4];
  uStack_1b8 = param_2[7];
  local_1c0 = param_2[6];
  local_1b0 = param_2[8];
  uStack_158 = param_2[1];
  local_160 = *param_2;
  uStack_148 = param_2[3];
  uStack_150 = param_2[2];
  uVar4 = local_1d0 & local_1c0 & local_1b0 & 0x3000000000000000;
  local_140 = local_1d0;
  uStack_138 = uStack_1c8;
  local_130 = local_1c0;
  uStack_128 = uStack_1b8;
  local_120 = local_1b0;
  local_f0 = uVar5;
  uStack_e8 = uVar6;
  local_e0 = uVar7;
  uStack_d8 = uVar8;
  local_d0 = uVar3;
  if (((uVar5 & uVar7 & uVar3 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    if (uVar4 == 0x3000000000000000) {
      uStack_1e8 = param_1[1];
      local_1f0 = *param_1;
      uStack_1d8 = param_1[3];
      uStack_1e0 = param_1[2];
      local_1d0 = uVar5;
      uStack_1c8 = uVar6;
      local_1c0 = uVar7;
      uStack_1b8 = uVar8;
      local_1b0 = uVar3;
      FUN_10007f314(&local_110,&local_c0,&DAT_100a9eea8,&DAT_100825d80);
      FUN_10007f314(&local_160,&local_c0,&DAT_100a9eea8,&DAT_100825d80);
      FUN_100040bb4(&local_1f0,&DAT_100a9eea8,&DAT_100825d80);
LAB_10042e230:
      uVar6 = param_1[9];
      FUN_1000094a4(uVar6,param_1[10],param_2[9],param_2[10]);
      uVar1 = (uint)uVar6;
      goto LAB_10042e23c;
    }
LAB_10042e0f0:
    uStack_1e8 = param_1[1];
    local_1f0 = *param_1;
    uStack_1d8 = param_1[3];
    uStack_1e0 = param_1[2];
    uStack_1a0 = param_2[1];
    local_1a8 = *param_2;
    uStack_190 = param_2[3];
    local_198 = param_2[2];
    local_188 = local_1d0;
    local_1d0 = uVar5;
    uStack_180 = uStack_1c8;
    uStack_1c8 = uVar6;
    local_178 = local_1c0;
    local_1c0 = uVar7;
    uStack_170 = uStack_1b8;
    uStack_1b8 = uVar8;
    local_168 = local_1b0;
    local_1b0 = uVar3;
    local_140 = local_188;
    uStack_138 = uStack_180;
    local_130 = local_178;
    uStack_128 = uStack_170;
    local_120 = local_168;
    FUN_10007f314(&local_110,&local_c0,&DAT_100a9eea8,&DAT_100825d80);
    FUN_10007f314(&local_160,&local_c0,&DAT_100a9eea8,&DAT_100825d80);
    FUN_100040bb4(&local_1f0,&DAT_100a9f340,&DAT_100827700);
  }
  else {
    if (uVar4 == 0x3000000000000000) goto LAB_10042e0f0;
    uStack_288 = param_2[1];
    local_290 = *param_2;
    uStack_278 = param_2[3];
    uStack_280 = param_2[2];
    uStack_b8 = param_1[1];
    local_c0 = *param_1;
    uStack_a8 = param_1[3];
    uStack_b0 = param_1[2];
    local_270 = local_1d0;
    uStack_268 = uStack_1c8;
    local_260 = local_1c0;
    uStack_258 = uStack_1b8;
    local_250 = local_1b0;
    local_1f0 = local_290;
    uStack_1e8 = uStack_288;
    uStack_1e0 = uStack_280;
    uStack_1d8 = uStack_278;
    local_a0 = uVar5;
    uStack_98 = uVar6;
    local_90 = uVar7;
    uStack_88 = uVar8;
    local_80 = uVar3;
    FUN_10007f314(&local_110,&local_240,&DAT_100a9eea8,&DAT_100825d80);
    FUN_10007f314(&local_160,&local_240,&DAT_100a9eea8,&DAT_100825d80);
    puVar2 = &local_c0;
    FUN_10042d2a8(puVar2,&local_1f0);
    FUN_100040bb4(&local_290,&DAT_100a9eea8,&DAT_100825d80);
    uStack_238 = param_1[1];
    local_240 = *param_1;
    uStack_228 = param_1[3];
    uStack_230 = param_1[2];
    local_220 = uVar5;
    uStack_218 = uVar6;
    local_210 = uVar7;
    uStack_208 = uVar8;
    local_200 = uVar3;
    FUN_100040bb4(&local_240,&DAT_100a9eea8,&DAT_100825d80);
    if (((ulong)puVar2 & 1) != 0) goto LAB_10042e230;
  }
  uVar1 = 0;
LAB_10042e23c:
  return uVar1 & 1;
}

