// rea decompile_all
// name: thunk_FUN_1005a4cf4
// address: 0x100591e20
// body: available
// range: 0x100591e20-0x100591e23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint thunk_FUN_1005a4cf4(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar6 = param_1[3];
  lVar5 = param_2[3];
  if (lVar6 == 0) {
    if (lVar5 == 0) {
LAB_1005a4d64:
      lVar6 = param_1[5];
      lVar5 = param_2[5];
      if (lVar6 == 0) {
        if (lVar5 == 0) {
LAB_1005a4dbc:
          lVar6 = param_1[7];
          lVar5 = param_2[7];
          if (lVar6 == 0) {
            if (lVar5 == 0) {
LAB_1005a4e14:
              uStack_b8 = param_1[0xd];
              uStack_c0 = param_1[0xc];
              uStack_a8 = param_1[0xf];
              uStack_b0 = param_1[0xe];
              uStack_a0 = param_1[0x10];
              uStack_d8 = param_1[9];
              lVar5 = param_1[8];
              uStack_c8 = param_1[0xb];
              uStack_d0 = param_1[10];
              uStack_108 = param_2[0xd];
              uStack_110 = param_2[0xc];
              uStack_f8 = param_2[0xf];
              uStack_100 = param_2[0xe];
              uStack_f0 = param_2[0x10];
              uStack_128 = param_2[9];
              lStack_178 = param_2[8];
              uStack_118 = param_2[0xb];
              uStack_120 = param_2[10];
              lStack_130 = lStack_178;
              lStack_e0 = lVar5;
              if (lVar5 == 0) {
                if (lStack_178 != 0) goto LAB_1005a4f5c;
                lStack_1c0 = 0;
                uStack_1b0 = param_1[10];
                uStack_1b8 = param_1[9];
                uStack_1a0 = param_1[0xc];
                uStack_1a8 = param_1[0xb];
                uStack_190 = param_1[0xe];
                uStack_198 = param_1[0xd];
                uStack_180 = param_1[0x10];
                uStack_188 = param_1[0xf];
                FUN_10007f314(&lStack_e0,&lStack_98,&DAT_100aab4a0,&DAT_100837c10);
                FUN_10007f314(&lStack_130,&lStack_98,&DAT_100aab4a0,&DAT_100837c10);
                FUN_100040bb4(&lStack_1c0,&DAT_100aab4a0,&DAT_100837c10);
LAB_1005a5074:
                bVar1 = *(byte *)(param_2 + 0x11);
                if (*(byte *)(param_1 + 0x11) == 2) {
                  if (bVar1 == 2) {
LAB_1005a50a0:
                    bVar1 = *(byte *)((long)param_2 + 0x89);
                    if (*(byte *)((long)param_1 + 0x89) == 2) {
                      if (bVar1 == 2) {
LAB_1005a50cc:
                        uVar4 = *param_1;
                        FUN_1000094a4(uVar4,param_1[1],*param_2,param_2[1]);
                        uVar2 = (uint)uVar4;
                        goto LAB_1005a4fe8;
                      }
                    }
                    else if ((bVar1 != 2) && (((*(byte *)((long)param_1 + 0x89) ^ bVar1) & 1) == 0))
                    goto LAB_1005a50cc;
                  }
                }
                else if ((bVar1 != 2) && (((*(byte *)(param_1 + 0x11) ^ bVar1) & 1) == 0))
                goto LAB_1005a50a0;
              }
              else if (lStack_178 == 0) {
LAB_1005a4f5c:
                uStack_1b0 = param_1[10];
                uStack_1b8 = param_1[9];
                uStack_1a0 = param_1[0xc];
                uStack_1a8 = param_1[0xb];
                uStack_190 = param_1[0xe];
                uStack_198 = param_1[0xd];
                uStack_180 = param_1[0x10];
                uStack_188 = param_1[0xf];
                uStack_168 = param_2[10];
                uStack_170 = param_2[9];
                uStack_158 = param_2[0xc];
                uStack_160 = param_2[0xb];
                uStack_148 = param_2[0xe];
                uStack_150 = param_2[0xd];
                uStack_138 = param_2[0x10];
                uStack_140 = param_2[0xf];
                lStack_1c0 = lVar5;
                FUN_10007f314(&lStack_e0,&lStack_98,&DAT_100aab4a0,&DAT_100837c10);
                FUN_10007f314(&lStack_130,&lStack_98,&DAT_100aab4a0,&DAT_100837c10);
                FUN_100040bb4(&lStack_1c0,&DAT_100aad0b0,&DAT_10083cc28);
              }
              else {
                uStack_240 = param_2[10];
                uStack_248 = param_2[9];
                uStack_230 = param_2[0xc];
                uStack_238 = param_2[0xb];
                uStack_220 = param_2[0xe];
                uStack_228 = param_2[0xd];
                uStack_210 = param_2[0x10];
                uStack_218 = param_2[0xf];
                uStack_88 = param_1[10];
                uStack_90 = param_1[9];
                uStack_78 = param_1[0xc];
                uStack_80 = param_1[0xb];
                uStack_68 = param_1[0xe];
                uStack_70 = param_1[0xd];
                uStack_58 = param_1[0x10];
                uStack_60 = param_1[0xf];
                lStack_250 = lStack_178;
                lStack_1c0 = lStack_178;
                uStack_1b8 = uStack_248;
                uStack_1b0 = uStack_240;
                uStack_1a8 = uStack_238;
                uStack_1a0 = uStack_230;
                uStack_198 = uStack_228;
                uStack_190 = uStack_220;
                uStack_188 = uStack_218;
                uStack_180 = uStack_210;
                lStack_98 = lVar5;
                FUN_10007f314(&lStack_e0,&lStack_208,&DAT_100aab4a0,&DAT_100837c10);
                FUN_10007f314(&lStack_130,&lStack_208,&DAT_100aab4a0,&DAT_100837c10);
                plVar3 = &lStack_98;
                FUN_1005a7038(plVar3,&lStack_1c0);
                FUN_100040bb4(&lStack_250,&DAT_100aab4a0,&DAT_100837c10);
                uStack_1f8 = param_1[10];
                uStack_200 = param_1[9];
                uStack_1e8 = param_1[0xc];
                uStack_1f0 = param_1[0xb];
                uStack_1d8 = param_1[0xe];
                uStack_1e0 = param_1[0xd];
                uStack_1c8 = param_1[0x10];
                uStack_1d0 = param_1[0xf];
                lStack_208 = lVar5;
                FUN_100040bb4(&lStack_208,&DAT_100aab4a0,&DAT_100837c10);
                if (((ulong)plVar3 & 1) != 0) goto LAB_1005a5074;
              }
            }
          }
          else if (lVar5 != 0) {
            uVar7 = param_1[6];
            if (((uVar7 == param_2[6]) && (lVar6 == lVar5)) ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (uVar7,lVar6,param_2[6],lVar5,0), (uVar7 & 1) != 0)) goto LAB_1005a4e14;
          }
        }
      }
      else if (lVar5 != 0) {
        uVar7 = param_1[4];
        if (((uVar7 == param_2[4]) && (lVar6 == lVar5)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar7,lVar6,param_2[4],lVar5,0), (uVar7 & 1) != 0)) goto LAB_1005a4dbc;
      }
    }
  }
  else if (lVar5 != 0) {
    uVar7 = param_1[2];
    if ((uVar7 == param_2[2] && lVar6 == lVar5) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar7,lVar6,param_2[2],lVar5,0), (uVar7 & 1) != 0)) goto LAB_1005a4d64;
  }
  uVar2 = 0;
LAB_1005a4fe8:
  return uVar2 & 1;
}

