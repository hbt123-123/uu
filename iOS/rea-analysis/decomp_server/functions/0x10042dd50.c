// rea decompile_all
// name: FUN_10042dd50
// address: 0x10042dd50
// body: available
// range: 0x10042dd50-0x10042dfef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10042dd50(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 uStack_288;
  undefined7 local_287;
  undefined1 uStack_280;
  undefined7 uStack_27f;
  char cStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  ulong local_230;
  char local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined7 local_1e7;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  char cStack_1d8;
  undefined8 local_1d7;
  undefined8 uStack_1cf;
  undefined8 local_1c7;
  undefined8 uStack_1bf;
  undefined8 local_1b7;
  undefined8 uStack_1af;
  undefined8 local_1a7;
  undefined7 uStack_19f;
  undefined1 uStack_198;
  undefined7 uStack_197;
  ulong uStack_190;
  char local_188;
  undefined7 uStack_187;
  undefined1 local_180;
  undefined7 uStack_17f;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 local_160;
  undefined7 uStack_15f;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  undefined1 local_148;
  undefined7 uStack_147;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined7 local_107;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  char cStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined7 local_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  char cStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong local_60;
  char local_58;
  undefined8 uVar6;
  
  uStack_c8 = param_1[5];
  local_d0 = param_1[4];
  uStack_c0 = param_1[6];
  uStack_b8 = (undefined1)param_1[7];
  uStack_af = (undefined7)*(undefined8 *)((long)param_1 + 0x41);
  cStack_a8 = (char)((ulong)*(undefined8 *)((long)param_1 + 0x41) >> 0x38);
  cVar2 = cStack_a8;
  local_b7 = (undefined7)*(undefined8 *)((long)param_1 + 0x39);
  uStack_b0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x39) >> 0x38);
  uStack_e8 = param_1[1];
  local_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_118 = param_2[5];
  local_120 = param_2[4];
  uStack_110 = param_2[6];
  uStack_108 = (undefined1)param_2[7];
  uStack_ff = (undefined7)*(undefined8 *)((long)param_2 + 0x41);
  cStack_f8 = (char)((ulong)*(undefined8 *)((long)param_2 + 0x41) >> 0x38);
  local_107 = (undefined7)*(undefined8 *)((long)param_2 + 0x39);
  uStack_100 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x39) >> 0x38);
  uStack_138 = param_2[1];
  local_140 = *param_2;
  uStack_128 = param_2[3];
  uStack_130 = param_2[2];
  uVar1 = CONCAT71(uStack_af,uStack_b0);
  uStack_178 = (undefined1)param_2[1];
  uStack_177 = (undefined7)((ulong)param_2[1] >> 8);
  local_180 = (undefined1)*param_2;
  uStack_17f = (undefined7)((ulong)*param_2 >> 8);
  uStack_168 = (undefined1)param_2[3];
  uStack_167 = (undefined7)((ulong)param_2[3] >> 8);
  uStack_170 = (undefined1)param_2[2];
  uStack_16f = (undefined7)((ulong)param_2[2] >> 8);
  uStack_190 = CONCAT71(uStack_ff,uStack_100);
  bVar3 = ((uStack_190 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uStack_158 = (undefined1)param_2[5];
  uStack_157 = (undefined7)((ulong)param_2[5] >> 8);
  local_160 = (undefined1)param_2[4];
  uStack_15f = (undefined7)((ulong)param_2[4] >> 8);
  local_148 = (undefined1)param_2[7];
  uStack_147 = (undefined7)((ulong)param_2[7] >> 8);
  uStack_150 = (undefined1)param_2[6];
  uStack_14f = (undefined7)((ulong)param_2[6] >> 8);
  if ((((uVar1 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (cStack_a8 == -1)) {
    if (bVar3 && cStack_f8 == -1) {
      uStack_218 = param_1[1];
      local_220 = *param_1;
      uStack_208 = param_1[3];
      uStack_210 = param_1[2];
      uStack_1f8 = param_1[5];
      local_200 = param_1[4];
      uStack_1f0 = param_1[6];
      uStack_1e8 = (undefined1)param_1[7];
      local_1e7 = (undefined7)((ulong)param_1[7] >> 8);
      uStack_1e0 = uStack_b0;
      uStack_1df = uStack_af;
      cStack_1d8 = -1;
      FUN_10007f314(&local_f0,&local_a0,&DAT_100a9eea0,&DAT_100825d78);
      FUN_10007f314(&local_140,&local_a0,&DAT_100a9eea0,&DAT_100825d78);
      FUN_100040bb4(&local_220,&DAT_100a9eea0,&DAT_100825d78);
LAB_10042dfc4:
      uVar6 = param_1[10];
      FUN_1000094a4(uVar6,param_1[0xb],param_2[10],param_2[0xb]);
      uVar4 = (uint)uVar6;
      goto LAB_10042dfd0;
    }
LAB_10042de64:
    uStack_218 = param_1[1];
    local_220 = *param_1;
    uStack_208 = param_1[3];
    uStack_210 = param_1[2];
    uStack_1f8 = param_1[5];
    local_200 = param_1[4];
    uStack_1f0 = param_1[6];
    uStack_1e8 = (undefined1)param_1[7];
    local_1e7 = (undefined7)((ulong)param_1[7] >> 8);
    uStack_1e0 = uStack_b0;
    uStack_1df = uStack_af;
    cStack_1d8 = cStack_a8;
    uStack_1bf = CONCAT17(uStack_168,uStack_16f);
    local_1c7 = CONCAT17(uStack_170,uStack_177);
    uStack_1af = CONCAT17(uStack_158,uStack_15f);
    local_1b7 = CONCAT17(local_160,uStack_167);
    local_1a7 = CONCAT17(uStack_150,uStack_157);
    uStack_19f = uStack_14f;
    uStack_1cf = CONCAT17(uStack_178,uStack_17f);
    local_1d7 = CONCAT17(local_180,uStack_187);
    local_188 = cStack_f8;
    uStack_198 = local_148;
    uStack_197 = uStack_147;
    FUN_10007f314(&local_f0,&local_a0,&DAT_100a9eea0,&DAT_100825d78);
    FUN_10007f314(&local_140,&local_a0,&DAT_100a9eea0,&DAT_100825d78);
    FUN_100040bb4(&local_220,&DAT_100a9f358,&DAT_100832600);
  }
  else {
    if (bVar3 && cStack_f8 == -1) goto LAB_10042de64;
    uStack_2b8 = param_2[1];
    local_2c0 = *param_2;
    uStack_2a8 = param_2[3];
    uStack_2b0 = param_2[2];
    uStack_298 = param_2[5];
    local_2a0 = param_2[4];
    uStack_290 = param_2[6];
    uStack_288 = (undefined1)param_2[7];
    local_287 = (undefined7)((ulong)param_2[7] >> 8);
    uStack_280 = uStack_100;
    uStack_27f = uStack_ff;
    cStack_278 = cStack_f8;
    uStack_1df = uStack_ff;
    cStack_1d8 = cStack_f8;
    local_1e7 = local_287;
    uStack_1e0 = uStack_100;
    uStack_98 = param_1[1];
    local_a0 = *param_1;
    uStack_88 = param_1[3];
    uStack_90 = param_1[2];
    uStack_78 = param_1[5];
    local_80 = param_1[4];
    uStack_68 = param_1[7];
    uStack_70 = param_1[6];
    local_58 = cStack_a8;
    local_220 = local_2c0;
    uStack_218 = uStack_2b8;
    uStack_210 = uStack_2b0;
    uStack_208 = uStack_2a8;
    local_200 = local_2a0;
    uStack_1f8 = uStack_298;
    uStack_1f0 = uStack_290;
    uStack_1e8 = uStack_288;
    local_60 = uVar1;
    FUN_10007f314(&local_f0,&local_270,&DAT_100a9eea0,&DAT_100825d78);
    FUN_10007f314(&local_140,&local_270,&DAT_100a9eea0,&DAT_100825d78);
    puVar5 = &local_a0;
    FUN_10042cc80(puVar5,&local_220);
    FUN_100040bb4(&local_2c0,&DAT_100a9eea0,&DAT_100825d78);
    uStack_268 = param_1[1];
    local_270 = *param_1;
    uStack_258 = param_1[3];
    uStack_260 = param_1[2];
    uStack_248 = param_1[5];
    local_250 = param_1[4];
    uStack_238 = param_1[7];
    uStack_240 = param_1[6];
    local_228 = cVar2;
    local_230 = uVar1;
    FUN_100040bb4(&local_270,&DAT_100a9eea0,&DAT_100825d78);
    if (((ulong)puVar5 & 1) != 0) goto LAB_10042dfc4;
  }
  uVar4 = 0;
LAB_10042dfd0:
  return uVar4 & 1;
}

