// rea decompile_all
// name: FUN_100492594
// address: 0x100492594
// body: available
// range: 0x100492594-0x10049283b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100492594(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  ulong local_270;
  undefined8 uStack_268;
  ulong local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  ulong local_220;
  undefined8 uStack_218;
  ulong local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  ulong local_1d0;
  undefined8 uStack_1c8;
  ulong local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  ulong local_180;
  undefined8 uStack_178;
  ulong local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong local_130;
  undefined8 uStack_128;
  ulong local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong local_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong local_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  uVar5 = param_1[5];
  uVar4 = param_1[4];
  uStack_c8 = param_1[7];
  uVar6 = param_1[6];
  uStack_b8 = param_1[9];
  local_c0 = param_1[8];
  uStack_f8 = param_1[1];
  local_100 = *param_1;
  uStack_e8 = param_1[3];
  uStack_f0 = param_1[2];
  uStack_1c8 = param_2[5];
  local_1d0 = param_2[4];
  uStack_118 = param_2[7];
  local_1c0 = param_2[6];
  uStack_108 = param_2[9];
  local_110 = param_2[8];
  uStack_148 = param_2[1];
  local_150 = *param_2;
  uStack_138 = param_2[3];
  uStack_140 = param_2[2];
  uVar3 = local_1d0 & local_1c0 & 0x3000000000000000;
  local_130 = local_1d0;
  uStack_128 = uStack_1c8;
  local_120 = local_1c0;
  local_e0 = uVar4;
  uStack_d8 = uVar5;
  local_d0 = uVar6;
  if (((uVar4 & uVar6 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    if (uVar3 == 0x3000000000000000) {
      uStack_1e8 = param_1[1];
      local_1f0 = *param_1;
      uStack_1d8 = param_1[3];
      local_1e0 = param_1[2];
      uStack_1b0 = param_1[8];
      uStack_1b8 = param_1[7];
      local_1a8 = param_1[9];
      local_1d0 = uVar4;
      uStack_1c8 = uVar5;
      local_1c0 = uVar6;
      FUN_10007f314(&local_100,&local_b0,&DAT_100aa0b98,&DAT_10082dd80);
      FUN_10007f314(&local_150,&local_b0,&DAT_100aa0b98,&DAT_10082dd80);
      FUN_100040bb4(&local_1f0,&DAT_100aa0b98,&DAT_10082dd80);
LAB_10049280c:
      uVar5 = param_1[10];
      FUN_1000094a4(uVar5,param_1[0xb],param_2[10],param_2[0xb]);
      uVar1 = (uint)uVar5;
      goto LAB_100492818;
    }
LAB_100492694:
    uStack_1e8 = param_1[1];
    local_1f0 = *param_1;
    uStack_1d8 = param_1[3];
    local_1e0 = param_1[2];
    uStack_1b0 = param_1[8];
    uStack_1b8 = param_1[7];
    local_1a8 = param_1[9];
    uStack_198 = param_2[1];
    local_1a0 = *param_2;
    uStack_188 = param_2[3];
    uStack_190 = param_2[2];
    local_158 = param_2[9];
    uStack_160 = param_2[8];
    local_168 = param_2[7];
    local_180 = local_1d0;
    local_1d0 = uVar4;
    uStack_178 = uStack_1c8;
    uStack_1c8 = uVar5;
    local_170 = local_1c0;
    local_1c0 = uVar6;
    local_130 = local_180;
    uStack_128 = uStack_178;
    local_120 = local_170;
    FUN_10007f314(&local_100,&local_b0,&DAT_100aa0b98,&DAT_10082dd80);
    FUN_10007f314(&local_150,&local_b0,&DAT_100aa0b98,&DAT_10082dd80);
    FUN_100040bb4(&local_1f0,&DAT_100aa0ba0,&DAT_10082dd88);
  }
  else {
    if (uVar3 == 0x3000000000000000) goto LAB_100492694;
    uStack_288 = param_2[1];
    local_290 = *param_2;
    uStack_278 = param_2[3];
    uStack_280 = param_2[2];
    uStack_250 = param_2[8];
    uStack_258 = param_2[7];
    local_248 = param_2[9];
    uStack_a8 = param_1[1];
    local_b0 = *param_1;
    uStack_98 = param_1[3];
    uStack_a0 = param_1[2];
    uStack_70 = param_1[8];
    local_78 = param_1[7];
    local_68 = param_1[9];
    local_270 = local_1d0;
    uStack_268 = uStack_1c8;
    local_260 = local_1c0;
    local_1f0 = local_290;
    uStack_1e8 = uStack_288;
    local_1e0 = uStack_280;
    uStack_1d8 = uStack_278;
    uStack_1b8 = uStack_258;
    uStack_1b0 = uStack_250;
    local_1a8 = local_248;
    local_90 = uVar4;
    uStack_88 = uVar5;
    local_80 = uVar6;
    FUN_10007f314(&local_100,&local_240,&DAT_100aa0b98,&DAT_10082dd80);
    FUN_10007f314(&local_150,&local_240,&DAT_100aa0b98,&DAT_10082dd80);
    puVar2 = &local_b0;
    FUN_100491f74(puVar2,&local_1f0);
    FUN_100040bb4(&local_290,&DAT_100aa0b98,&DAT_10082dd80);
    uStack_238 = param_1[1];
    local_240 = *param_1;
    uStack_228 = param_1[3];
    uStack_230 = param_1[2];
    uStack_200 = param_1[8];
    local_208 = param_1[7];
    local_1f8 = param_1[9];
    local_220 = uVar4;
    uStack_218 = uVar5;
    local_210 = uVar6;
    FUN_100040bb4(&local_240,&DAT_100aa0b98,&DAT_10082dd80);
    if (((ulong)puVar2 & 1) != 0) goto LAB_10049280c;
  }
  uVar1 = 0;
LAB_100492818:
  return uVar1 & 1;
}

