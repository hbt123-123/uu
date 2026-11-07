// rea decompile_all
// name: FUN_10057368c
// address: 0x10057368c
// body: available
// range: 0x10057368c-0x100573883 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010057377c) */
/* WARNING: Removing unreachable block (ram,0x0001005737f4) */

void FUN_10057368c(undefined8 *param_1,long param_2,long param_3,ulong param_4,undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 auStack_2e8 [200];
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  uStack_158 = param_1[5];
  local_160 = param_1[4];
  uStack_148 = param_1[7];
  uStack_150 = param_1[6];
  local_140 = param_1[8];
  uStack_178 = param_1[1];
  local_180 = *param_1;
  uStack_168 = param_1[3];
  uStack_170 = param_1[2];
  lVar5 = *(long *)(param_2 + 0x10);
  if (lVar5 != 0) {
    __ss6HasherV8_combineyySuF(1);
    uStack_1a8 = uStack_158;
    local_1b0 = local_160;
    uStack_198 = uStack_148;
    uStack_1a0 = uStack_150;
    local_190 = local_140;
    uStack_1c8 = uStack_178;
    local_1d0 = local_180;
    uStack_1b8 = uStack_168;
    uStack_1c0 = uStack_170;
    puVar4 = (undefined8 *)(param_2 + 0x20);
    while( true ) {
      lVar5 = lVar5 + -1;
      uStack_88 = puVar4[0x15];
      local_90 = puVar4[0x14];
      uStack_78 = puVar4[0x17];
      uStack_80 = puVar4[0x16];
      local_70 = *(undefined1 *)(puVar4 + 0x18);
      uStack_c8 = puVar4[0xd];
      local_d0 = puVar4[0xc];
      uStack_b8 = puVar4[0xf];
      uStack_c0 = puVar4[0xe];
      uStack_a8 = puVar4[0x11];
      local_b0 = puVar4[0x10];
      uStack_98 = puVar4[0x13];
      uStack_a0 = puVar4[0x12];
      uStack_108 = puVar4[5];
      local_110 = puVar4[4];
      uStack_f8 = puVar4[7];
      uStack_100 = puVar4[6];
      uStack_e8 = puVar4[9];
      local_f0 = puVar4[8];
      uStack_d8 = puVar4[0xb];
      uStack_e0 = puVar4[10];
      uStack_128 = puVar4[1];
      local_130 = *puVar4;
      uStack_118 = puVar4[3];
      uStack_120 = puVar4[2];
      uStack_1f8 = uStack_1a8;
      local_200 = local_1b0;
      uStack_1e8 = uStack_198;
      uStack_1f0 = uStack_1a0;
      local_1e0 = local_190;
      uStack_218 = uStack_1c8;
      local_220 = local_1d0;
      uStack_208 = uStack_1b8;
      uStack_210 = uStack_1c0;
      FUN_1005b2528(&local_130,auStack_2e8);
      FUN_100586c14(&local_220);
      FUN_1005b255c(&local_130);
      if (lVar5 == 0) break;
      uStack_1a8 = uStack_1f8;
      local_1b0 = local_200;
      uStack_198 = uStack_1e8;
      uStack_1a0 = uStack_1f0;
      local_190 = local_1e0;
      uStack_1c8 = uStack_218;
      local_1d0 = local_220;
      uStack_1b8 = uStack_208;
      uStack_1c0 = uStack_210;
      puVar4 = puVar4 + 0x19;
    }
    uStack_158 = uStack_1f8;
    local_160 = local_200;
    uStack_148 = uStack_1e8;
    uStack_150 = uStack_1f0;
    local_140 = local_1e0;
    uStack_178 = uStack_218;
    local_180 = local_220;
    uStack_168 = uStack_208;
    uStack_170 = uStack_210;
  }
  FUN_100563e08(&local_180,536000000,0x1ff2b601,param_5);
  uVar1 = (uint)(param_4 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      lVar5 = (long)(int)param_3;
      lVar3 = param_3 >> 0x20;
      goto LAB_100573868;
    }
    if ((param_4 & 0xff000000000000) == 0) goto LAB_1005737fc;
  }
  else {
    if (uVar2 != 2) goto LAB_1005737fc;
    lVar5 = *(long *)(param_3 + 0x10);
    lVar3 = *(long *)(param_3 + 0x18);
LAB_100573868:
    if (lVar5 == lVar3) goto LAB_1005737fc;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_180,param_3,param_4);
LAB_1005737fc:
  param_1[5] = uStack_158;
  param_1[4] = local_160;
  param_1[7] = uStack_148;
  param_1[6] = uStack_150;
  param_1[8] = local_140;
  param_1[1] = uStack_178;
  *param_1 = local_180;
  param_1[3] = uStack_168;
  param_1[2] = uStack_170;
  return;
}

