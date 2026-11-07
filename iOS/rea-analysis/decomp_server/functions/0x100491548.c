// rea decompile_all
// name: FUN_100491548
// address: 0x100491548
// body: available
// range: 0x100491548-0x100491b73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100491548(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong auStack_148 [3];
  ulong local_130;
  ulong uStack_128;
  ulong local_120;
  ulong local_110;
  ulong uStack_108;
  ulong local_100;
  ulong local_f0;
  ulong uStack_e8;
  ulong local_e0;
  ulong local_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  
  uVar2 = *param_1;
  if (((uVar2 == *param_2 && param_1[1] == param_2[1]) ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar2 & 1) != 0)) &&
     ((uVar2 = param_1[2], uVar2 == param_2[2] && param_1[3] == param_2[3] ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar2 & 1) != 0)))) {
    uVar2 = param_1[4];
    if (((uVar2 == param_2[4]) && (param_1[5] == param_2[5])) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar2 & 1) != 0)) {
      uVar2 = param_1[6];
      if (((uVar2 == param_2[6]) && (param_1[7] == param_2[7])) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar2 & 1) != 0)) {
        uVar2 = param_1[8];
        if (((uVar2 == param_2[8]) && (param_1[9] == param_2[9])) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar2 & 1) != 0)) {
          uVar2 = param_1[10];
          if (((uVar2 == param_2[10]) && (param_1[0xb] == param_2[0xb])) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar2 & 1) != 0)) {
            uVar2 = param_1[0xc];
            if (((uVar2 == param_2[0xc]) && (param_1[0xd] == param_2[0xd])) ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (), (uVar2 & 1) != 0)) {
              uVar2 = param_1[0xe];
              if (((uVar2 == param_2[0xe]) && (param_1[0xf] == param_2[0xf])) ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (), (uVar2 & 1) != 0)) {
                uVar11 = param_1[0x14];
                uVar9 = param_1[0x13];
                uVar2 = param_1[0x15];
                uVar12 = param_2[0x14];
                uVar10 = param_2[0x13];
                uVar8 = param_2[0x15];
                local_b0 = uVar10;
                uStack_a8 = uVar12;
                local_a0 = uVar8;
                local_90 = uVar9;
                uStack_88 = uVar11;
                local_80 = uVar2;
                if (uVar2 >> 0x3c < 0xf) {
                  if (0xe < uVar8 >> 0x3c) goto LAB_100491850;
                  if (((int)uVar9 == (int)uVar10) && ((uVar10 ^ uVar9) >> 0x20 == 0)) {
                    FUN_10007f314(&local_90,&local_d0,&DAT_100aa1140,&DAT_10082f530);
                    FUN_10007f314(&local_b0,&local_d0,&DAT_100aa1140,&DAT_10082f530);
                    uVar3 = uVar11;
                    FUN_1000094a4(uVar11,uVar2,uVar12,uVar8);
                    switchD_10004048c::caseD_6d(uVar10,uVar12,uVar8);
                    if ((uVar3 & 1) != 0) goto LAB_100491708;
                  }
                  else {
                    FUN_10007f314(&local_90,&local_d0,&DAT_100aa1140,&DAT_10082f530);
                    puVar4 = &local_b0;
                    puVar5 = &local_d0;
LAB_100491b20:
                    FUN_10007f314(puVar4,puVar5,&DAT_100aa1140,&DAT_10082f530);
                    switchD_10004048c::caseD_6d(uVar10,uVar12,uVar8);
                  }
                }
                else {
                  if (0xe < uVar8 >> 0x3c) {
                    FUN_10007f314(&local_90,&local_d0,&DAT_100aa1140,&DAT_10082f530);
                    FUN_10007f314(&local_b0,&local_d0,&DAT_100aa1140,&DAT_10082f530);
LAB_100491708:
                    switchD_10004048c::caseD_6d(uVar9,uVar11,uVar2);
                    uVar11 = param_1[0x17];
                    uVar9 = param_1[0x16];
                    uVar2 = param_1[0x18];
                    uVar12 = param_2[0x17];
                    uVar10 = param_2[0x16];
                    uVar8 = param_2[0x18];
                    local_f0 = uVar10;
                    uStack_e8 = uVar12;
                    local_e0 = uVar8;
                    local_d0 = uVar9;
                    uStack_c8 = uVar11;
                    local_c0 = uVar2;
                    if (uVar2 >> 0x3c < 0xf) {
                      if (0xe < uVar8 >> 0x3c) goto LAB_100491938;
                      if (((int)uVar9 != (int)uVar10) || ((uVar10 ^ uVar9) >> 0x20 != 0)) {
                        FUN_10007f314(&local_d0,&local_110,&DAT_100aa1140,&DAT_10082f530);
                        puVar4 = &local_f0;
                        puVar5 = &local_110;
                        goto LAB_100491b20;
                      }
                      FUN_10007f314(&local_d0,&local_110,&DAT_100aa1140,&DAT_10082f530);
                      FUN_10007f314(&local_f0,&local_110,&DAT_100aa1140,&DAT_10082f530);
                      uVar3 = uVar11;
                      FUN_1000094a4(uVar11,uVar2,uVar12,uVar8);
                      switchD_10004048c::caseD_6d(uVar10,uVar12,uVar8);
                      if ((uVar3 & 1) == 0) goto LAB_100491b48;
                    }
                    else {
                      if (uVar8 >> 0x3c < 0xf) {
LAB_100491938:
                        FUN_10007f314(&local_d0,&local_110,&DAT_100aa1140,&DAT_10082f530);
                        puVar4 = &local_f0;
                        puVar5 = &local_110;
                        uVar3 = uVar2;
                        uVar6 = uVar11;
                        uVar7 = uVar9;
                        uVar2 = uVar8;
                        uVar11 = uVar12;
                        uVar9 = uVar10;
                        goto LAB_100491a4c;
                      }
                      FUN_10007f314(&local_d0,&local_110,&DAT_100aa1140,&DAT_10082f530);
                      FUN_10007f314(&local_f0,&local_110,&DAT_100aa1140,&DAT_10082f530);
                    }
                    switchD_10004048c::caseD_6d(uVar9,uVar11,uVar2);
                    uVar11 = param_1[0x1a];
                    uVar9 = param_1[0x19];
                    uVar2 = param_1[0x1b];
                    uVar12 = param_2[0x1a];
                    uVar10 = param_2[0x19];
                    uVar8 = param_2[0x1b];
                    local_130 = uVar10;
                    uStack_128 = uVar12;
                    local_120 = uVar8;
                    local_110 = uVar9;
                    uStack_108 = uVar11;
                    local_100 = uVar2;
                    if (uVar2 >> 0x3c < 0xf) {
                      if (0xe < uVar8 >> 0x3c) goto LAB_100491a20;
                      if (((int)uVar9 != (int)uVar10) || ((uVar10 ^ uVar9) >> 0x20 != 0)) {
                        FUN_10007f314(&local_110,auStack_148,&DAT_100aa1140,&DAT_10082f530);
                        puVar4 = &local_130;
                        puVar5 = auStack_148;
                        goto LAB_100491b20;
                      }
                      FUN_10007f314(&local_110,auStack_148,&DAT_100aa1140,&DAT_10082f530);
                      FUN_10007f314(&local_130,auStack_148,&DAT_100aa1140,&DAT_10082f530);
                      uVar3 = uVar11;
                      FUN_1000094a4(uVar11,uVar2,uVar12,uVar8);
                      switchD_10004048c::caseD_6d(uVar10,uVar12,uVar8);
                      if ((uVar3 & 1) == 0) goto LAB_100491b48;
                    }
                    else {
                      if (uVar8 >> 0x3c < 0xf) {
LAB_100491a20:
                        FUN_10007f314(&local_110,auStack_148,&DAT_100aa1140,&DAT_10082f530);
                        puVar4 = &local_130;
                        puVar5 = auStack_148;
                        uVar3 = uVar2;
                        uVar6 = uVar11;
                        uVar7 = uVar9;
                        uVar2 = uVar8;
                        uVar11 = uVar12;
                        uVar9 = uVar10;
                        goto LAB_100491a4c;
                      }
                      FUN_10007f314(&local_110,auStack_148,&DAT_100aa1140,&DAT_10082f530);
                      FUN_10007f314(&local_130,auStack_148,&DAT_100aa1140,&DAT_10082f530);
                    }
                    switchD_10004048c::caseD_6d(uVar9,uVar11,uVar2);
                    uVar2 = param_1[0x10];
                    FUN_100427170(uVar2,param_2[0x10]);
                    if ((uVar2 & 1) != 0) {
                      uVar2 = param_1[0x11];
                      FUN_1000094a4(uVar2,param_1[0x12],param_2[0x11],param_2[0x12]);
                      uVar1 = (uint)uVar2;
                      goto LAB_100491b50;
                    }
                    goto LAB_100491b4c;
                  }
LAB_100491850:
                  FUN_10007f314(&local_90,&local_d0,&DAT_100aa1140,&DAT_10082f530);
                  puVar4 = &local_b0;
                  puVar5 = &local_d0;
                  uVar3 = uVar2;
                  uVar6 = uVar11;
                  uVar7 = uVar9;
                  uVar2 = uVar8;
                  uVar11 = uVar12;
                  uVar9 = uVar10;
LAB_100491a4c:
                  FUN_10007f314(puVar4,puVar5,&DAT_100aa1140,&DAT_10082f530);
                  switchD_10004048c::caseD_6d(uVar7,uVar6,uVar3);
                }
LAB_100491b48:
                switchD_10004048c::caseD_6d(uVar9,uVar11,uVar2);
              }
            }
          }
        }
      }
    }
  }
LAB_100491b4c:
  uVar1 = 0;
LAB_100491b50:
  return uVar1 & 1;
}

