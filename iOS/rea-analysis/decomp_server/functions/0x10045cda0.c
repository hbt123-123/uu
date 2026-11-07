// rea decompile_all
// name: FUN_10045cda0
// address: 0x10045cda0
// body: available
// range: 0x10045cda0-0x10045cdef inclusive
// range: 0x10045cdf8-0x10045d03b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_10045cda0(long *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long local_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long local_200;
  ulong uStack_1f8;
  long local_1f0;
  ulong uStack_1e8;
  long local_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long local_1c0;
  ulong uStack_1b8;
  long local_1b0;
  ulong uStack_1a8;
  long local_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long local_180;
  ulong uStack_178;
  long local_170;
  ulong uStack_168;
  long local_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long local_140;
  ulong uStack_138;
  long local_130;
  ulong uStack_128;
  long local_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long local_100;
  ulong uStack_f8;
  long lStack_f0;
  ulong local_e8;
  long local_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long local_c0;
  ulong uStack_b8;
  long lStack_b0;
  ulong local_a8;
  long local_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long local_80;
  ulong uStack_78;
  long local_70;
  ulong uStack_68;
  
  if ((*(byte *)(param_2 + 1) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010045cdec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_10045cdf0 + (ulong)(byte)(&DAT_10082b03d)[*param_2] * 4))();
    return param_1;
  }
  if ((*param_1 == *param_2) &&
     ((uVar3 = param_1[2], uVar3 == param_2[2] && param_1[3] == param_2[3] ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar3 & 1) != 0)))) {
    uVar4 = param_1[9];
    local_c0 = param_1[8];
    uVar6 = param_1[0xb];
    lVar5 = param_1[10];
    lStack_d8 = param_1[5];
    local_e0 = param_1[4];
    lStack_c8 = param_1[7];
    lStack_d0 = param_1[6];
    uStack_178 = param_2[9];
    local_100 = param_2[8];
    uStack_168 = param_2[0xb];
    local_170 = param_2[10];
    lStack_118 = param_2[5];
    local_120 = param_2[4];
    lStack_108 = param_2[7];
    lStack_110 = param_2[6];
    uVar3 = uStack_178 & uStack_168 & 0x3000000000000000;
    uStack_f8 = uStack_178;
    lStack_f0 = local_170;
    local_e8 = uStack_168;
    uStack_b8 = uVar4;
    lStack_b0 = lVar5;
    local_a8 = uVar6;
    if (((uVar4 & uVar6 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
      if (uVar3 == 0x3000000000000000) {
        lStack_198 = param_1[5];
        local_1a0 = param_1[4];
        lStack_188 = param_1[7];
        lStack_190 = param_1[6];
        local_180 = param_1[8];
        uStack_178 = uVar4;
        local_170 = lVar5;
        uStack_168 = uVar6;
        FUN_10007f314(&local_e0,&local_a0,&DAT_100a9ff68,&DAT_10082b0d0);
        FUN_10007f314(&local_120,&local_a0,&DAT_100a9ff68,&DAT_10082b0d0);
        FUN_100040bb4(&local_1a0,&DAT_100a9ff68,&DAT_10082b0d0);
LAB_10045d02c:
        lVar5 = param_1[0xc];
        FUN_1000094a4(lVar5,param_1[0xd],param_2[0xc],param_2[0xd]);
        uVar1 = (uint)lVar5;
        goto LAB_10045cf54;
      }
    }
    else if (uVar3 != 0x3000000000000000) {
      local_200 = param_2[8];
      lStack_218 = param_2[5];
      local_220 = param_2[4];
      lStack_208 = param_2[7];
      lStack_210 = param_2[6];
      lStack_98 = param_1[5];
      local_a0 = param_1[4];
      lStack_88 = param_1[7];
      lStack_90 = param_1[6];
      local_80 = param_1[8];
      uStack_1f8 = uStack_178;
      local_1f0 = local_170;
      uStack_1e8 = uStack_168;
      local_1a0 = local_220;
      lStack_198 = lStack_218;
      lStack_190 = lStack_210;
      lStack_188 = lStack_208;
      local_180 = local_200;
      uStack_78 = uVar4;
      local_70 = lVar5;
      uStack_68 = uVar6;
      FUN_10007f314(&local_e0,&local_1e0,&DAT_100a9ff68,&DAT_10082b0d0);
      FUN_10007f314(&local_120,&local_1e0,&DAT_100a9ff68,&DAT_10082b0d0);
      plVar2 = &local_a0;
      FUN_10045cc10(plVar2,&local_1a0);
      FUN_100040bb4(&local_220,&DAT_100a9ff68,&DAT_10082b0d0);
      lStack_1d8 = param_1[5];
      local_1e0 = param_1[4];
      lStack_1c8 = param_1[7];
      lStack_1d0 = param_1[6];
      local_1c0 = param_1[8];
      uStack_1b8 = uVar4;
      local_1b0 = lVar5;
      uStack_1a8 = uVar6;
      FUN_100040bb4(&local_1e0,&DAT_100a9ff68,&DAT_10082b0d0);
      if (((ulong)plVar2 & 1) != 0) goto LAB_10045d02c;
      goto LAB_10045cf50;
    }
    lStack_198 = param_1[5];
    local_1a0 = param_1[4];
    lStack_188 = param_1[7];
    lStack_190 = param_1[6];
    local_180 = param_1[8];
    lStack_158 = param_2[5];
    local_160 = param_2[4];
    lStack_148 = param_2[7];
    lStack_150 = param_2[6];
    local_140 = param_2[8];
    uStack_138 = uStack_178;
    uStack_178 = uVar4;
    local_130 = local_170;
    local_170 = lVar5;
    uStack_128 = uStack_168;
    uStack_168 = uVar6;
    uStack_f8 = uStack_138;
    lStack_f0 = local_130;
    local_e8 = uStack_128;
    FUN_10007f314(&local_e0,&local_a0,&DAT_100a9ff68,&DAT_10082b0d0);
    FUN_10007f314(&local_120,&local_a0,&DAT_100a9ff68,&DAT_10082b0d0);
    FUN_100040bb4(&local_1a0,&DAT_100aa08d0,&DAT_10082d598);
  }
LAB_10045cf50:
  uVar1 = 0;
LAB_10045cf54:
  return (long *)(ulong)(uVar1 & 1);
}

