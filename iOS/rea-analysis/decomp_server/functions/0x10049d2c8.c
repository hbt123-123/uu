// rea decompile_all
// name: FUN_10049d2c8
// address: 0x10049d2c8
// body: available
// range: 0x10049d2c8-0x10049d52b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10049d2c8(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  ulong local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  ulong local_258;
  undefined8 uStack_250;
  ulong local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  ulong local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  ulong local_208;
  undefined8 uStack_200;
  ulong local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  ulong local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  ulong local_1b8;
  undefined8 uStack_1b0;
  ulong local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  ulong local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  ulong local_168;
  undefined8 uStack_160;
  ulong local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong local_118;
  undefined8 local_110;
  ulong uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong local_c8;
  undefined8 local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulong local_78;
  undefined8 uStack_70;
  ulong local_68;
  
  uStack_d8 = param_1[5];
  uVar5 = param_1[4];
  uVar8 = param_1[7];
  uStack_d0 = param_1[6];
  uVar7 = param_1[9];
  uVar6 = param_1[8];
  uStack_f8 = param_1[1];
  local_100 = *param_1;
  uStack_e8 = param_1[3];
  uStack_f0 = param_1[2];
  uStack_128 = param_2[5];
  local_1d0 = param_2[4];
  local_1b8 = param_2[7];
  uStack_120 = param_2[6];
  local_1a8 = param_2[9];
  uStack_1b0 = param_2[8];
  uStack_148 = param_2[1];
  local_150 = *param_2;
  uStack_138 = param_2[3];
  uStack_140 = param_2[2];
  bVar1 = (local_1a8 & 0x3000000000000000) == 0;
  bVar2 = local_1b8 >> 0x20 == 0;
  local_130 = local_1d0;
  local_118 = local_1b8;
  local_110 = uStack_1b0;
  uStack_108 = local_1a8;
  local_e0 = uVar5;
  local_c8 = uVar8;
  local_c0 = uVar6;
  uStack_b8 = uVar7;
  if (((uVar5 < 0xffffffff00000000) || (uVar8 >> 0x20 != 0)) || ((uVar7 & 0x3000000000000000) != 0))
  {
    if ((bVar1 && bVar2) && 0xfffffffeffffffff < local_1d0) goto LAB_10049d3c8;
    uStack_288 = param_2[1];
    local_290 = *param_2;
    uStack_278 = param_2[3];
    uStack_280 = param_2[2];
    uStack_260 = param_2[6];
    uStack_268 = param_2[5];
    uStack_a8 = param_1[1];
    local_b0 = *param_1;
    uStack_98 = param_1[3];
    uStack_a0 = param_1[2];
    uStack_80 = param_1[6];
    local_88 = param_1[5];
    local_270 = local_1d0;
    local_258 = local_1b8;
    uStack_250 = uStack_1b0;
    local_248 = local_1a8;
    local_1f0 = local_290;
    uStack_1e8 = uStack_288;
    local_1e0 = uStack_280;
    uStack_1d8 = uStack_278;
    local_1c8 = uStack_268;
    uStack_1c0 = uStack_260;
    local_90 = uVar5;
    local_78 = uVar8;
    uStack_70 = uVar6;
    local_68 = uVar7;
    FUN_10049d52c(&local_100,&local_240);
    FUN_10049d52c(&local_150,&local_240);
    puVar4 = &local_b0;
    FUN_10049ce7c(puVar4,&local_1f0);
    FUN_100040bb4(&local_290,&DAT_100aa0b88,&DAT_10082dd70);
    uStack_238 = param_1[1];
    local_240 = *param_1;
    uStack_228 = param_1[3];
    uStack_230 = param_1[2];
    uStack_210 = param_1[6];
    local_218 = param_1[5];
    local_220 = uVar5;
    local_208 = uVar8;
    uStack_200 = uVar6;
    local_1f8 = uVar7;
    FUN_100040bb4(&local_240,&DAT_100aa0b88,&DAT_10082dd70);
    if (((ulong)puVar4 & 1) != 0) goto LAB_10049d4fc;
  }
  else {
    if ((bVar1 && bVar2) && 0xfffffffeffffffff < local_1d0) {
      uStack_1e8 = param_1[1];
      local_1f0 = *param_1;
      uStack_1d8 = param_1[3];
      local_1e0 = param_1[2];
      uStack_1c0 = param_1[6];
      local_1c8 = param_1[5];
      local_1d0 = uVar5;
      local_1b8 = uVar8;
      uStack_1b0 = uVar6;
      local_1a8 = uVar7;
      FUN_10049d52c(&local_100,&local_b0);
      FUN_10049d52c(&local_150,&local_b0);
      FUN_100040bb4(&local_1f0,&DAT_100aa0b88,&DAT_10082dd70);
LAB_10049d4fc:
      uVar6 = param_1[10];
      FUN_1000094a4(uVar6,param_1[0xb],param_2[10],param_2[0xb]);
      uVar3 = (uint)uVar6;
      goto LAB_10049d508;
    }
LAB_10049d3c8:
    uStack_1e8 = param_1[1];
    local_1f0 = *param_1;
    uStack_1d8 = param_1[3];
    local_1e0 = param_1[2];
    uStack_1c0 = param_1[6];
    local_1c8 = param_1[5];
    uStack_198 = param_2[1];
    local_1a0 = *param_2;
    uStack_188 = param_2[3];
    uStack_190 = param_2[2];
    uStack_170 = param_2[6];
    local_178 = param_2[5];
    local_180 = local_1d0;
    local_1d0 = uVar5;
    local_168 = local_1b8;
    local_1b8 = uVar8;
    uStack_160 = uStack_1b0;
    uStack_1b0 = uVar6;
    local_158 = local_1a8;
    local_1a8 = uVar7;
    local_130 = local_180;
    local_118 = local_168;
    local_110 = uStack_160;
    uStack_108 = local_158;
    FUN_10049d52c(&local_100,&local_b0);
    FUN_10049d52c(&local_150,&local_b0);
    FUN_100040bb4(&local_1f0,&DAT_100aa0b90,&DAT_10082fef0);
  }
  uVar3 = 0;
LAB_10049d508:
  return uVar3 & 1;
}

