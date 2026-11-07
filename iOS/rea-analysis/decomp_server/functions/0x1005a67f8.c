// rea decompile_all
// name: FUN_1005a67f8
// address: 0x1005a67f8
// body: available
// range: 0x1005a67f8-0x1005a6b27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1005a67f8(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined1 local_248;
  undefined7 uStack_247;
  undefined1 uStack_240;
  undefined7 uStack_23f;
  undefined1 local_238;
  long local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8;
  long local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  undefined7 local_1a7;
  undefined1 uStack_1a0;
  undefined7 uStack_19f;
  undefined1 uStack_198;
  long local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_148;
  long local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined7 local_107;
  undefined1 uStack_100;
  undefined8 uStack_ff;
  long local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined7 local_b7;
  undefined1 uStack_b0;
  undefined8 uStack_af;
  long local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  
  bVar1 = *(byte *)((long)param_2 + 0x14);
  if ((*(byte *)((long)param_1 + 0x14) & 1) == 0) {
    if (*(int *)(param_1 + 2) != *(int *)(param_2 + 2)) {
      bVar1 = 1;
    }
    if ((bVar1 & 1) != 0) {
      return 0;
    }
  }
  else if (bVar1 == 0) {
    return 0;
  }
  bVar1 = *(byte *)((long)param_2 + 0x1c);
  if ((*(byte *)((long)param_1 + 0x1c) & 1) == 0) {
    if (*(int *)(param_1 + 3) != *(int *)(param_2 + 3)) {
      bVar1 = 1;
    }
    if ((bVar1 & 1) != 0) {
      return 0;
    }
  }
  else if (bVar1 == 0) {
    return 0;
  }
  uStack_c8 = param_1[9];
  local_d0 = param_1[8];
  uStack_c0 = param_1[10];
  uStack_b8 = (undefined1)param_1[0xb];
  uStack_af = *(undefined8 *)((long)param_1 + 0x61);
  local_b7 = (undefined7)*(undefined8 *)((long)param_1 + 0x59);
  uStack_b0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x59) >> 0x38);
  uStack_e8 = param_1[5];
  lVar5 = param_1[4];
  uStack_d8 = param_1[7];
  uStack_e0 = param_1[6];
  uStack_118 = param_2[9];
  local_120 = param_2[8];
  uStack_110 = param_2[10];
  uStack_108 = (undefined1)param_2[0xb];
  uStack_ff = *(undefined8 *)((long)param_2 + 0x61);
  local_107 = (undefined7)*(undefined8 *)((long)param_2 + 0x59);
  uStack_100 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x59) >> 0x38);
  uStack_138 = param_2[5];
  local_190 = param_2[4];
  uStack_128 = param_2[7];
  uStack_130 = param_2[6];
  local_140 = local_190;
  local_f0 = lVar5;
  if (lVar5 == 0) {
    if (local_190 != 0) goto LAB_1005a69d0;
    local_1e0 = 0;
    local_1c0 = param_1[8];
    uStack_1c8 = param_1[7];
    uStack_1b0 = param_1[10];
    uStack_1b8 = param_1[9];
    uStack_1a0 = (undefined1)param_1[0xc];
    uStack_19f = (undefined7)((ulong)param_1[0xc] >> 8);
    uStack_1a8 = (undefined1)param_1[0xb];
    local_1a7 = (undefined7)((ulong)param_1[0xb] >> 8);
    uStack_198 = *(undefined1 *)(param_1 + 0xd);
    uStack_1d0 = param_1[6];
    uStack_1d8 = param_1[5];
    FUN_10007f314(&local_f0,&local_a0,&DAT_100aab4f8,&DAT_100838f20);
    FUN_10007f314(&local_140,&local_a0,&DAT_100aab4f8,&DAT_100838f20);
    FUN_100040bb4(&local_1e0,&DAT_100aab4f8,&DAT_100838f20);
  }
  else {
    if (local_190 == 0) {
LAB_1005a69d0:
      local_1c0 = param_1[8];
      uStack_1c8 = param_1[7];
      uStack_1b0 = param_1[10];
      uStack_1b8 = param_1[9];
      uStack_1a0 = (undefined1)param_1[0xc];
      uStack_19f = (undefined7)((ulong)param_1[0xc] >> 8);
      uStack_1a8 = (undefined1)param_1[0xb];
      local_1a7 = (undefined7)((ulong)param_1[0xb] >> 8);
      uStack_198 = *(undefined1 *)(param_1 + 0xd);
      uStack_1d0 = param_1[6];
      uStack_1d8 = param_1[5];
      uStack_170 = param_2[8];
      local_178 = param_2[7];
      uStack_160 = param_2[10];
      local_168 = param_2[9];
      uStack_150 = param_2[0xc];
      local_158 = param_2[0xb];
      local_148 = *(undefined1 *)(param_2 + 0xd);
      uStack_180 = param_2[6];
      local_188 = param_2[5];
      local_1e0 = lVar5;
      FUN_10007f314(&local_f0,&local_a0,&DAT_100aab4f8,&DAT_100838f20);
      FUN_10007f314(&local_140,&local_a0,&DAT_100aab4f8,&DAT_100838f20);
      FUN_100040bb4(&local_1e0,&DAT_100aad100,&DAT_10083cc58);
      uVar2 = 0;
      goto LAB_1005a6b08;
    }
    uStack_270 = param_2[6];
    uStack_278 = param_2[5];
    uStack_260 = param_2[8];
    local_268 = param_2[7];
    uStack_250 = param_2[10];
    local_258 = param_2[9];
    uStack_240 = (undefined1)param_2[0xc];
    uStack_23f = (undefined7)((ulong)param_2[0xc] >> 8);
    local_248 = (undefined1)param_2[0xb];
    uStack_247 = (undefined7)((ulong)param_2[0xb] >> 8);
    local_238 = *(undefined1 *)(param_2 + 0xd);
    uStack_19f = uStack_23f;
    uStack_1a0 = uStack_240;
    uStack_90 = param_1[6];
    local_98 = param_1[5];
    uStack_80 = param_1[8];
    local_88 = param_1[7];
    uStack_70 = param_1[10];
    local_78 = param_1[9];
    uStack_60 = param_1[0xc];
    local_68 = param_1[0xb];
    local_58 = *(undefined1 *)(param_1 + 0xd);
    local_280 = local_190;
    local_1e0 = local_190;
    uStack_1d8 = uStack_278;
    uStack_1d0 = uStack_270;
    uStack_1c8 = local_268;
    local_1c0 = uStack_260;
    uStack_1b8 = local_258;
    uStack_1b0 = uStack_250;
    uStack_1a8 = local_248;
    local_1a7 = uStack_247;
    uStack_198 = local_238;
    local_a0 = lVar5;
    FUN_10007f314(&local_f0,&local_230,&DAT_100aab4f8,&DAT_100838f20);
    FUN_10007f314(&local_140,&local_230,&DAT_100aab4f8,&DAT_100838f20);
    plVar3 = &local_a0;
    FUN_1005a64f8(plVar3,&local_1e0);
    FUN_100040bb4(&local_280,&DAT_100aab4f8,&DAT_100838f20);
    uStack_210 = param_1[8];
    local_218 = param_1[7];
    uStack_200 = param_1[10];
    local_208 = param_1[9];
    uStack_1f0 = param_1[0xc];
    local_1f8 = param_1[0xb];
    local_1e8 = *(undefined1 *)(param_1 + 0xd);
    uStack_220 = param_1[6];
    local_228 = param_1[5];
    local_230 = lVar5;
    FUN_100040bb4(&local_230,&DAT_100aab4f8,&DAT_100838f20);
    if (((ulong)plVar3 & 1) == 0) {
      uVar2 = 0;
      goto LAB_1005a6b08;
    }
  }
  uVar4 = *param_1;
  FUN_1000094a4(uVar4,param_1[1],*param_2,param_2[1]);
  uVar2 = (uint)uVar4;
LAB_1005a6b08:
  return uVar2 & 1;
}

