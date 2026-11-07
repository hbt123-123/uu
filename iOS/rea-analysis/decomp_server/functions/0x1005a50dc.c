// rea decompile_all
// name: FUN_1005a50dc
// address: 0x1005a50dc
// body: available
// range: 0x1005a50dc-0x1005a5397 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1005a50dc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  long local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  long local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 local_158;
  long lStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  long local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  lVar5 = param_2[3];
  if (param_1[3] == 0) {
    if (lVar5 == 0) goto LAB_1005a5138;
  }
  else if ((lVar5 != 0) &&
          ((uVar2 = param_1[2], uVar2 == param_2[2] && param_1[3] == lVar5 ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar2 & 1) != 0)))) {
LAB_1005a5138:
    uStack_c8 = param_1[5];
    lVar5 = param_1[4];
    uStack_b8 = param_1[7];
    uStack_c0 = param_1[6];
    uStack_a8 = param_1[9];
    local_b0 = param_1[8];
    uStack_98 = param_1[0xb];
    uStack_a0 = param_1[10];
    uStack_108 = param_2[5];
    lStack_150 = param_2[4];
    uStack_f8 = param_2[7];
    uStack_100 = param_2[6];
    uStack_e8 = param_2[9];
    local_f0 = param_2[8];
    uStack_d8 = param_2[0xb];
    uStack_e0 = param_2[10];
    local_110 = lStack_150;
    local_d0 = lVar5;
    if (lVar5 == 0) {
      if (lStack_150 == 0) {
        uStack_180 = param_1[6];
        uStack_188 = param_1[5];
        local_170 = param_1[8];
        uStack_178 = param_1[7];
        uStack_160 = param_1[10];
        uStack_168 = param_1[9];
        local_158 = param_1[0xb];
        local_190 = 0;
        FUN_10007f314(&local_d0,&local_90,&DAT_100aab4c0,&DAT_100837c30);
        FUN_10007f314(&local_110,&local_90,&DAT_100aab4c0,&DAT_100837c30);
        FUN_100040bb4(&local_190,&DAT_100aab4c0,&DAT_100837c30);
LAB_1005a536c:
        uVar4 = *param_1;
        FUN_1000094a4(uVar4,param_1[1],*param_2,param_2[1]);
        uVar1 = (uint)uVar4;
        goto LAB_1005a5378;
      }
    }
    else if (lStack_150 != 0) {
      uStack_200 = param_2[6];
      uStack_208 = param_2[5];
      uStack_1f0 = param_2[8];
      local_1f8 = param_2[7];
      uStack_1e0 = param_2[10];
      local_1e8 = param_2[9];
      local_1d8 = param_2[0xb];
      uStack_80 = param_1[6];
      local_88 = param_1[5];
      uStack_70 = param_1[8];
      local_78 = param_1[7];
      uStack_60 = param_1[10];
      local_68 = param_1[9];
      local_58 = param_1[0xb];
      local_210 = lStack_150;
      local_190 = lStack_150;
      uStack_188 = uStack_208;
      uStack_180 = uStack_200;
      uStack_178 = local_1f8;
      local_170 = uStack_1f0;
      uStack_168 = local_1e8;
      uStack_160 = uStack_1e0;
      local_158 = local_1d8;
      local_90 = lVar5;
      FUN_10007f314(&local_d0,&local_1d0,&DAT_100aab4c0,&DAT_100837c30);
      FUN_10007f314(&local_110,&local_1d0,&DAT_100aab4c0,&DAT_100837c30);
      plVar3 = &local_90;
      FUN_1005a7294(plVar3,&local_190);
      FUN_100040bb4(&local_210,&DAT_100aab4c0,&DAT_100837c30);
      uStack_1c0 = param_1[6];
      local_1c8 = param_1[5];
      uStack_1b0 = param_1[8];
      local_1b8 = param_1[7];
      uStack_1a0 = param_1[10];
      local_1a8 = param_1[9];
      local_198 = param_1[0xb];
      local_1d0 = lVar5;
      FUN_100040bb4(&local_1d0,&DAT_100aab4c0,&DAT_100837c30);
      if (((ulong)plVar3 & 1) != 0) goto LAB_1005a536c;
      goto LAB_1005a5258;
    }
    uStack_180 = param_1[6];
    uStack_188 = param_1[5];
    local_170 = param_1[8];
    uStack_178 = param_1[7];
    uStack_160 = param_1[10];
    uStack_168 = param_1[9];
    local_158 = param_1[0xb];
    uStack_140 = param_2[6];
    local_148 = param_2[5];
    uStack_130 = param_2[8];
    local_138 = param_2[7];
    uStack_120 = param_2[10];
    local_128 = param_2[9];
    local_118 = param_2[0xb];
    local_190 = lVar5;
    FUN_10007f314(&local_d0,&local_90,&DAT_100aab4c0,&DAT_100837c30);
    FUN_10007f314(&local_110,&local_90,&DAT_100aab4c0,&DAT_100837c30);
    FUN_100040bb4(&local_190,&DAT_100aad0d8,&DAT_10083cc48);
    uVar1 = 0;
    goto LAB_1005a5378;
  }
LAB_1005a5258:
  uVar1 = 0;
LAB_1005a5378:
  return uVar1 & 1;
}

