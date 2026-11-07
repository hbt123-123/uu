// rea decompile_all
// name: FUN_1004b79e4
// address: 0x1004b79e4
// body: available
// range: 0x1004b79e4-0x1004b7abb inclusive
// range: 0x1004b7ac4-0x1004b7c7b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1004b79e4(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_b8 [24];
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  long lVar4;
  
  uVar8 = param_1[10];
  uVar3 = param_1[9];
  uVar5 = param_1[0xb];
  uVar9 = param_2[10];
  uVar7 = param_2[9];
  uVar6 = param_2[0xb];
  local_a0 = uVar7;
  uStack_98 = uVar9;
  local_90 = uVar6;
  local_80 = uVar3;
  uStack_78 = uVar8;
  local_70 = uVar5;
  if (uVar5 >> 0x3c < 0xf) {
    if (0xe < uVar6 >> 0x3c) goto LAB_1004b7acc;
    if (((int)uVar3 == (int)uVar7) && ((uVar7 ^ uVar3) >> 0x20 == 0)) {
      FUN_10007f314(&local_80,auStack_b8,&DAT_100aa1978,&DAT_100831fd8);
      FUN_10007f314(&local_a0,auStack_b8,&DAT_100aa1978,&DAT_100831fd8);
      uVar2 = uVar8;
      FUN_1000094a4(uVar8,uVar5,uVar9,uVar6);
      switchD_10004048c::caseD_6d(uVar7,uVar9,uVar6);
      if ((uVar2 & 1) != 0) goto LAB_1004b7a84;
    }
    else {
      FUN_10007f314(&local_80,auStack_b8,&DAT_100aa1978,&DAT_100831fd8);
      FUN_10007f314(&local_a0,auStack_b8,&DAT_100aa1978,&DAT_100831fd8);
      switchD_10004048c::caseD_6d(uVar7,uVar9,uVar6);
    }
LAB_1004b7bf4:
    switchD_10004048c::caseD_6d(uVar3,uVar8,uVar5);
  }
  else {
    if (uVar6 >> 0x3c < 0xf) {
LAB_1004b7acc:
      FUN_10007f314(&local_80,auStack_b8,&DAT_100aa1978,&DAT_100831fd8);
      FUN_10007f314(&local_a0,auStack_b8,&DAT_100aa1978,&DAT_100831fd8);
      switchD_10004048c::caseD_6d(uVar3,uVar8,uVar5);
      uVar3 = uVar7;
      uVar8 = uVar9;
      uVar5 = uVar6;
      goto LAB_1004b7bf4;
    }
    FUN_10007f314(&local_80,auStack_b8,&DAT_100aa1978,&DAT_100831fd8);
    FUN_10007f314(&local_a0,auStack_b8,&DAT_100aa1978,&DAT_100831fd8);
LAB_1004b7a84:
    switchD_10004048c::caseD_6d(uVar3,uVar8,uVar5);
    if ((*(byte *)(param_2 + 1) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001004b7ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1004b7abc + (ulong)(byte)(&DAT_100830192)[*param_2] * 4))();
      return uVar3;
    }
    if (*param_1 == *param_2) {
      uVar3 = param_1[2];
      FUN_1004296cc(uVar3,param_2[2]);
      if ((uVar3 & 1) != 0) {
        uVar3 = param_1[3];
        if (((uVar3 == param_2[3]) && (param_1[4] == param_2[4])) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar3 & 1) != 0)) {
          uVar3 = param_1[5];
          FUN_1000094a4(uVar3,param_1[6],param_2[5],param_2[6]);
          if ((uVar3 & 1) != 0) {
            lVar4 = param_1[7];
            FUN_1000094a4(lVar4,param_1[8],param_2[7],param_2[8]);
            uVar1 = (uint)lVar4;
            goto LAB_1004b7bfc;
          }
        }
      }
    }
  }
  uVar1 = 0;
LAB_1004b7bfc:
  return (ulong)(uVar1 & 1);
}

