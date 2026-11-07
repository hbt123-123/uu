// rea decompile_all
// name: FUN_1004b5cd8
// address: 0x1004b5cd8
// body: available
// range: 0x1004b5cd8-0x1004b5fef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1004b5cd8(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_b8 [24];
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  
  uVar4 = param_1[0xe];
  uVar2 = param_1[0xd];
  uVar5 = param_1[0xf];
  uVar8 = param_2[0xe];
  uVar7 = param_2[0xd];
  uVar6 = param_2[0xf];
  local_a0 = uVar7;
  uStack_98 = uVar8;
  local_90 = uVar6;
  local_80 = uVar2;
  uStack_78 = uVar4;
  local_70 = uVar5;
  if (uVar5 >> 0x3c < 0xf) {
    if (0xe < uVar6 >> 0x3c) goto LAB_1004b5dfc;
    if (((int)uVar2 == (int)uVar7) && ((uVar7 ^ uVar2) >> 0x20 == 0)) {
      FUN_10007f314(&local_80,auStack_b8,&DAT_100aa1978,&DAT_100831fd8);
      FUN_10007f314(&local_a0,auStack_b8,&DAT_100aa1978,&DAT_100831fd8);
      uVar3 = uVar4;
      FUN_1000094a4(uVar4,uVar5,uVar8,uVar6);
      switchD_10004048c::caseD_6d(uVar7,uVar8,uVar6);
      if ((uVar3 & 1) != 0) goto LAB_1004b5d78;
    }
    else {
      FUN_10007f314(&local_80,auStack_b8,&DAT_100aa1978,&DAT_100831fd8);
      FUN_10007f314(&local_a0,auStack_b8,&DAT_100aa1978,&DAT_100831fd8);
      switchD_10004048c::caseD_6d(uVar7,uVar8,uVar6);
    }
LAB_1004b5f24:
    switchD_10004048c::caseD_6d(uVar2,uVar4,uVar5);
  }
  else {
    if (uVar6 >> 0x3c < 0xf) {
LAB_1004b5dfc:
      FUN_10007f314(&local_80,auStack_b8,&DAT_100aa1978,&DAT_100831fd8);
      FUN_10007f314(&local_a0,auStack_b8,&DAT_100aa1978,&DAT_100831fd8);
      switchD_10004048c::caseD_6d(uVar2,uVar4,uVar5);
      uVar2 = uVar7;
      uVar4 = uVar8;
      uVar5 = uVar6;
      goto LAB_1004b5f24;
    }
    FUN_10007f314(&local_80,auStack_b8,&DAT_100aa1978,&DAT_100831fd8);
    FUN_10007f314(&local_a0,auStack_b8,&DAT_100aa1978,&DAT_100831fd8);
LAB_1004b5d78:
    switchD_10004048c::caseD_6d(uVar2,uVar4,uVar5);
    uVar2 = *param_1;
    if (((uVar2 == *param_2) && (param_1[1] == param_2[1])) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar2 & 1) != 0)) {
      uVar2 = param_1[2];
      FUN_1004296cc(uVar2,param_2[2]);
      if ((uVar2 & 1) != 0) {
        uVar2 = param_1[3];
        uVar4 = param_2[3];
        if ((param_2[4] & 1) == 0) {
          if (uVar2 == uVar4) goto LAB_1004b5f58;
        }
        else if ((long)uVar4 < 2) {
          if (uVar4 == 0) {
            if (uVar2 == 0) {
LAB_1004b5f58:
              uVar2 = param_1[5];
              if (((uVar2 == param_2[5]) && (param_1[6] == param_2[6])) ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (), (uVar2 & 1) != 0)) {
                uVar2 = param_1[7];
                FUN_1000094a4(uVar2,param_1[8],param_2[7],param_2[8]);
                if ((uVar2 & 1) != 0) {
                  uVar2 = param_1[9];
                  if (((uVar2 == param_2[9]) && (param_1[10] == param_2[10])) ||
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (), (uVar2 & 1) != 0)) {
                    uVar2 = param_1[0xb];
                    FUN_1000094a4(uVar2,param_1[0xc],param_2[0xb],param_2[0xc]);
                    uVar1 = (uint)uVar2;
                    goto LAB_1004b5f2c;
                  }
                }
              }
            }
          }
          else if (uVar2 == 1) goto LAB_1004b5f58;
        }
        else if (uVar4 == 2) {
          if (uVar2 == 2) goto LAB_1004b5f58;
        }
        else if (uVar4 == 3) {
          if (uVar2 == 3) goto LAB_1004b5f58;
        }
        else if (uVar2 == 4) goto LAB_1004b5f58;
      }
    }
  }
  uVar1 = 0;
LAB_1004b5f2c:
  return uVar1 & 1;
}

