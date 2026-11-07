// rea decompile_all
// name: FUN_10042cc80
// address: 0x10042cc80
// body: available
// range: 0x10042cc80-0x10042d05f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10042cc80(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong local_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong local_a8;
  ulong uStack_a0;
  ulong local_98;
  ulong uStack_90;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  ulong uStack_70;
  ulong local_68;
  
  uVar5 = *param_1;
  uVar8 = param_1[1];
  uVar6 = param_1[2];
  uVar9 = param_1[3];
  uVar11 = param_1[4];
  uVar7 = param_1[5];
  uVar10 = 4;
  if ((param_1[9] & 1) == 0) {
    uVar10 = 0;
  }
  uVar10 = uVar10 | (uint)(param_1[8] >> 0x3c) & 3;
  if (uVar10 < 4) {
    uVar12 = param_1[6];
    if (uVar10 < 2) {
      if (uVar10 == 0) {
        uStack_70 = param_1[7];
        local_68 = param_1[8] & 0xcfffffffffffffff;
        if ((param_2[9] & 1) == 0 && ((uint)(param_2[8] >> 0x3c) & 3) == 0) {
          local_b0 = param_2[8] & 0xcfffffffffffffff;
          uStack_e8 = param_2[1];
          local_f0 = *param_2;
          uStack_d8 = param_2[3];
          uStack_e0 = param_2[2];
          uStack_c8 = param_2[5];
          local_d0 = param_2[4];
          uStack_b8 = param_2[7];
          uStack_c0 = param_2[6];
          puVar4 = &local_a8;
          local_a8 = uVar5;
          uStack_a0 = uVar8;
          local_98 = uVar6;
          uStack_90 = uVar9;
          local_88 = uVar11;
          uStack_80 = uVar7;
          local_78 = uVar12;
          FUN_10042c8fc(puVar4,&local_f0);
          uVar10 = (uint)puVar4;
          goto LAB_10042d03c;
        }
      }
      else {
        uVar10 = 4;
        if ((param_2[9] & 1) == 0) {
          uVar10 = 0;
        }
        if (((uVar10 | (uint)(param_2[8] >> 0x3c) & 3) == 1) && ((int)uVar5 == (int)*param_2)) {
          uVar5 = param_2[3];
          uVar3 = param_2[4];
          uVar13 = param_2[5];
          uVar14 = param_2[6];
          if (((uVar8 == param_2[1]) && (uVar6 == param_2[2])) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (uVar8,uVar6,param_2[1],param_2[2],0), (uVar8 & 1) != 0)) {
            if ((uVar9 != uVar5) || (uVar11 != uVar3)) {
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (uVar9,uVar11,uVar5,uVar3,0);
              goto joined_r0x00010042ce40;
            }
LAB_10042cf38:
            FUN_1000094a4(uVar7,uVar12,uVar13,uVar14);
            goto joined_r0x00010042cea8;
          }
        }
      }
    }
    else if (uVar10 == 2) {
      uVar10 = 4;
      if ((param_2[9] & 1) == 0) {
        uVar10 = 0;
      }
      if ((uVar10 | (uint)(param_2[8] >> 0x3c) & 3) == 2) {
        uVar3 = param_2[2];
        uVar2 = param_2[3];
        uVar1 = param_2[4];
        uVar13 = param_2[5];
        uVar14 = param_2[6];
        if ((((uVar5 == *param_2) && (uVar8 == param_2[1])) ||
            (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                       (uVar5,uVar8,*param_2,param_2[1],0), (uVar5 & 1) != 0)) &&
           ((int)uVar6 == (int)uVar3)) {
          FUN_1000094a4(uVar9,uVar11,uVar2,uVar1);
joined_r0x00010042ce40:
          if ((uVar9 & 1) != 0) goto LAB_10042cf38;
        }
      }
    }
    else {
      uVar10 = 4;
      if ((param_2[9] & 1) == 0) {
        uVar10 = 0;
      }
      if ((uVar10 | (uint)(param_2[8] >> 0x3c) & 3) == 3) {
LAB_10042cfa0:
        if ((int)uVar5 == (int)*param_2) {
          FUN_1000094a4(uVar8,uVar6,param_2[1],param_2[2]);
          uVar7 = uVar8;
          goto joined_r0x00010042cea8;
        }
      }
    }
  }
  else if (uVar10 < 6) {
    if (uVar10 == 4) {
      uVar10 = 4;
      if ((param_2[9] & 1) == 0) {
        uVar10 = 0;
      }
      if (((((uVar10 | (uint)(param_2[8] >> 0x3c) & 3) == 4) && (uVar5 == *param_2)) &&
          ((int)uVar8 == (int)param_2[1])) &&
         ((uVar6 == param_2[2] && ((int)uVar9 == (int)param_2[3])))) {
        FUN_1000094a4(uVar11,uVar7,param_2[4],param_2[5]);
        uVar7 = uVar11;
        goto joined_r0x00010042cea8;
      }
    }
    else {
      uVar10 = 4;
      if ((param_2[9] & 1) == 0) {
        uVar10 = 0;
      }
      if ((uVar10 | (uint)(param_2[8] >> 0x3c) & 3) == 5) goto LAB_10042cfa0;
    }
  }
  else if (uVar10 == 6) {
    uVar10 = 4;
    if ((param_2[9] & 1) == 0) {
      uVar10 = 0;
    }
    if (((uVar10 | (uint)(param_2[8] >> 0x3c) & 3) == 6) && (uVar5 == *param_2)) {
      uVar5 = param_2[2];
      uVar11 = param_2[3];
      FUN_100426b48(uVar8,param_2[1]);
      if ((uVar8 & 1) != 0) {
        FUN_1000094a4(uVar6,uVar9,uVar5,uVar11);
        uVar7 = uVar6;
joined_r0x00010042cea8:
        if ((uVar7 & 1) != 0) {
          uVar10 = 1;
          goto LAB_10042d03c;
        }
      }
    }
  }
  else {
    uVar10 = 4;
    if ((param_2[9] & 1) == 0) {
      uVar10 = 0;
    }
    if (((uVar10 | (uint)(param_2[8] >> 0x3c) & 3) == 7) && (uVar5 == *param_2)) {
      uVar5 = param_2[3];
      uVar7 = param_2[4];
      if (((uVar8 == param_2[1]) && (uVar6 == param_2[2])) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar8,uVar6,param_2[1],param_2[2],0), (uVar8 & 1) != 0)) {
        FUN_1000094a4(uVar9,uVar11,uVar5,uVar7);
        uVar7 = uVar9;
        goto joined_r0x00010042cea8;
      }
    }
  }
  uVar10 = 0;
LAB_10042d03c:
  return uVar10 & 1;
}

