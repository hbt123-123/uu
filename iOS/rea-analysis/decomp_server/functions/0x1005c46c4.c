// rea decompile_all
// name: FUN_1005c46c4
// address: 0x1005c46c4
// body: available
// range: 0x1005c46c4-0x1005c49bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1005c46c4(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_c0 [32];
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  ulong uStack_68;
  
  uVar2 = *param_1;
  if ((uVar2 == *param_2 && param_1[1] == param_2[1]) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar2 & 1) != 0)) {
    uVar2 = param_1[2];
    FUN_10056d5f4(uVar2,param_2[2]);
    if ((uVar2 & 1) != 0) {
      uVar2 = param_1[3];
      FUN_10056acec(uVar2,param_2[3]);
      if ((uVar2 & 1) != 0) {
        uVar4 = param_1[0xb];
        uVar2 = param_1[10];
        uVar9 = param_1[0xd];
        uVar7 = param_1[0xc];
        uVar6 = param_2[0xb];
        uVar5 = param_2[10];
        uVar10 = param_2[0xd];
        uVar8 = param_2[0xc];
        local_a0 = uVar5;
        uStack_98 = uVar6;
        local_90 = uVar8;
        uStack_88 = uVar10;
        local_80 = uVar2;
        uStack_78 = uVar4;
        local_70 = uVar7;
        uStack_68 = uVar9;
        if (uVar4 == 0) {
          if (uVar6 != 0) goto LAB_1005c480c;
          FUN_10007f314(&local_80,auStack_c0,&DAT_100aabbc8,&DAT_100838ea0);
          FUN_10007f314(&local_a0,auStack_c0,&DAT_100aabbc8,&DAT_100838ea0);
LAB_1005c48d0:
          FUN_1004338a4(uVar2,uVar4,uVar7,uVar9);
          uVar2 = param_1[4];
          uVar4 = param_2[4];
          if ((param_2[5] & 1) == 0) {
            if (uVar2 == uVar4) goto LAB_1005c4988;
          }
          else if (uVar4 == 0) {
            if (uVar2 == 0) goto LAB_1005c4988;
          }
          else if (uVar4 == 1) {
            if (uVar2 == 1) {
LAB_1005c4988:
              uVar2 = param_1[6];
              if (((uVar2 == param_2[6]) && (param_1[7] == param_2[7])) ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (), (uVar2 & 1) != 0)) {
                uVar2 = param_1[8];
                FUN_1000094a4(uVar2,param_1[9],param_2[8],param_2[9]);
                uVar1 = (uint)uVar2;
                goto LAB_1005c4870;
              }
            }
          }
          else if (uVar2 == 2) goto LAB_1005c4988;
        }
        else {
          if (uVar6 == 0) {
LAB_1005c480c:
            FUN_10007f314(&local_80,auStack_c0,&DAT_100aabbc8,&DAT_100838ea0);
            FUN_10007f314(&local_a0,auStack_c0,&DAT_100aabbc8,&DAT_100838ea0);
            FUN_1004338a4(uVar2,uVar4,uVar7,uVar9);
            uVar2 = uVar5;
            uVar4 = uVar6;
            uVar7 = uVar8;
            uVar9 = uVar10;
          }
          else if (((uVar2 == uVar5) && (uVar4 == uVar6)) ||
                  (uVar3 = uVar2,
                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (uVar2,uVar4,uVar5,uVar6,0), (uVar3 & 1) != 0)) {
            FUN_10007f314(&local_80,auStack_c0,&DAT_100aabbc8,&DAT_100838ea0);
            FUN_10007f314(&local_a0,auStack_c0,&DAT_100aabbc8,&DAT_100838ea0);
            uVar3 = uVar7;
            FUN_1000094a4(uVar7,uVar9,uVar8,uVar10);
            FUN_1004338a4(uVar5,uVar6,uVar8,uVar10);
            if ((uVar3 & 1) != 0) goto LAB_1005c48d0;
          }
          else {
            FUN_10007f314(&local_80,auStack_c0,&DAT_100aabbc8,&DAT_100838ea0);
            FUN_10007f314(&local_a0,auStack_c0,&DAT_100aabbc8,&DAT_100838ea0);
            FUN_1004338a4(uVar5,uVar6,uVar8,uVar10);
          }
          FUN_1004338a4(uVar2,uVar4,uVar7,uVar9);
        }
      }
    }
  }
  uVar1 = 0;
LAB_1005c4870:
  return uVar1 & 1;
}

