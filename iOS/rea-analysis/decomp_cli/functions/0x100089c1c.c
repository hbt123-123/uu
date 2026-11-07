// rea decompile_all
// name: FUN_100089c1c
// address: 0x100089c1c
// body: available
// range: 0x100089c1c-0x100089e2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100089c1c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_410 [16];
  undefined8 *local_400;
  undefined8 local_3e8;
  undefined8 *local_3e0;
  undefined8 local_3d8;
  undefined1 auStack_3c8 [208];
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
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
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar5 = *(long *)(param_5 + 0x10);
  local_3e0 = param_1;
  local_3d8 = param_4;
  _swift_bridgeObjectRetain(param_5);
  local_3e8 = param_6;
  _swift_bridgeObjectRetain(param_6);
  if (lVar5 != 0) {
    lVar4 = 0x20;
    do {
      puVar1 = (undefined8 *)(param_5 + lVar4);
      uStack_178 = puVar1[0x13];
      uStack_180 = puVar1[0x12];
      uStack_238 = puVar1[0x15];
      local_240 = puVar1[0x14];
      uStack_168 = puVar1[0x15];
      local_170 = puVar1[0x14];
      uStack_228 = puVar1[0x17];
      uStack_230 = puVar1[0x16];
      uStack_158 = puVar1[0x17];
      uStack_160 = puVar1[0x16];
      uStack_218 = puVar1[0x19];
      local_220 = puVar1[0x18];
      uStack_1b8 = puVar1[0xb];
      uStack_1c0 = puVar1[10];
      uStack_278 = puVar1[0xd];
      local_280 = puVar1[0xc];
      uStack_1a8 = puVar1[0xd];
      local_1b0 = puVar1[0xc];
      uStack_268 = puVar1[0xf];
      uStack_270 = puVar1[0xe];
      uStack_198 = puVar1[0xf];
      uStack_1a0 = puVar1[0xe];
      uStack_258 = puVar1[0x11];
      local_260 = puVar1[0x10];
      uStack_188 = puVar1[0x11];
      local_190 = puVar1[0x10];
      uStack_248 = puVar1[0x13];
      uStack_250 = puVar1[0x12];
      uStack_1f8 = puVar1[3];
      uStack_200 = puVar1[2];
      uStack_2b8 = puVar1[5];
      local_2c0 = puVar1[4];
      uStack_1e8 = puVar1[5];
      local_1f0 = puVar1[4];
      uStack_2a8 = puVar1[7];
      uStack_2b0 = puVar1[6];
      uStack_1d8 = puVar1[7];
      uStack_1e0 = puVar1[6];
      uStack_298 = puVar1[9];
      local_2a0 = puVar1[8];
      uStack_1c8 = puVar1[9];
      local_1d0 = puVar1[8];
      uStack_288 = puVar1[0xb];
      uStack_290 = puVar1[10];
      uStack_2d8 = puVar1[1];
      local_2e0 = *puVar1;
      uStack_2c8 = puVar1[3];
      uStack_2d0 = puVar1[2];
      uStack_208 = puVar1[1];
      local_210 = *puVar1;
      uStack_148 = puVar1[0x19];
      local_150 = puVar1[0x18];
      FUN_1000045b0(&local_210);
      uVar2 = local_2c0;
      local_2e8 = local_3d8;
      local_400 = &local_2f8;
      local_2f8 = param_2;
      uStack_2f0 = param_3;
      FUN_10006ff98(&local_2e0,auStack_3c8);
      _swift_bridgeObjectRetain(uVar2);
      uVar3 = 0;
      FUN_1000b3814(FUN_10008f108,auStack_410,uVar2);
      _swift_bridgeObjectRelease(uVar2);
      if ((uVar3 & 1) != 0) {
        _swift_bridgeObjectRelease(local_3e8);
        _swift_bridgeObjectRelease(param_5);
        uStack_98 = uStack_168;
        local_a0 = local_170;
        uStack_88 = uStack_158;
        uStack_90 = uStack_160;
        uStack_78 = uStack_148;
        local_80 = local_150;
        uStack_d8 = uStack_1a8;
        local_e0 = local_1b0;
        uStack_c8 = uStack_198;
        uStack_d0 = uStack_1a0;
        uStack_b8 = uStack_188;
        local_c0 = local_190;
        uStack_a8 = uStack_178;
        uStack_b0 = uStack_180;
        uStack_118 = uStack_1e8;
        local_120 = local_1f0;
        uStack_108 = uStack_1d8;
        uStack_110 = uStack_1e0;
        uStack_f8 = uStack_1c8;
        local_100 = local_1d0;
        uStack_e8 = uStack_1b8;
        uStack_f0 = uStack_1c0;
        uStack_138 = uStack_208;
        local_140 = local_210;
        uStack_128 = uStack_1f8;
        uStack_130 = uStack_200;
        goto LAB_100089dd0;
      }
      FUN_10008efb4(&local_2e0);
      lVar4 = lVar4 + 0xd0;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  _swift_bridgeObjectRelease(local_3e8);
  _swift_bridgeObjectRelease(param_5);
  FUN_10006ffec(&local_140);
LAB_100089dd0:
  local_3e0[0x15] = uStack_98;
  local_3e0[0x14] = local_a0;
  local_3e0[0x17] = uStack_88;
  local_3e0[0x16] = uStack_90;
  local_3e0[0x19] = uStack_78;
  local_3e0[0x18] = local_80;
  local_3e0[0xd] = uStack_d8;
  local_3e0[0xc] = local_e0;
  local_3e0[0xf] = uStack_c8;
  local_3e0[0xe] = uStack_d0;
  local_3e0[0x11] = uStack_b8;
  local_3e0[0x10] = local_c0;
  local_3e0[0x13] = uStack_a8;
  local_3e0[0x12] = uStack_b0;
  local_3e0[5] = uStack_118;
  local_3e0[4] = local_120;
  local_3e0[7] = uStack_108;
  local_3e0[6] = uStack_110;
  local_3e0[9] = uStack_f8;
  local_3e0[8] = local_100;
  local_3e0[0xb] = uStack_e8;
  local_3e0[10] = uStack_f0;
  local_3e0[1] = uStack_138;
  *local_3e0 = local_140;
  local_3e0[3] = uStack_128;
  local_3e0[2] = uStack_130;
  return;
}

