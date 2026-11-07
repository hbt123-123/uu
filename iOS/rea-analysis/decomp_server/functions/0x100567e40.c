// rea decompile_all
// name: thunk_FUN_100569208
// address: 0x100567e40
// body: available
// range: 0x100567e40-0x100567e43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint thunk_FUN_100569208(ulong *param_1,ulong *param_2)

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
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar2 = *param_1;
  if ((uVar2 == *param_2 && param_1[1] == param_2[1]) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar2 & 1) != 0)) {
    uVar2 = param_1[2];
    FUN_10056dbe0(uVar2,param_2[2]);
    if ((uVar2 & 1) != 0) {
      uVar2 = param_1[3];
      FUN_10056acec(uVar2,param_2[3]);
      if ((uVar2 & 1) != 0) {
        uVar2 = param_1[4];
        if (((uVar2 == param_2[4]) && (param_1[5] == param_2[5])) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar2 & 1) != 0)) {
          uVar4 = param_1[0xc];
          uVar2 = param_1[0xb];
          uVar9 = param_1[0xe];
          uVar7 = param_1[0xd];
          uVar6 = param_2[0xc];
          uVar5 = param_2[0xb];
          uVar10 = param_2[0xe];
          uVar8 = param_2[0xd];
          uStack_a0 = uVar5;
          uStack_98 = uVar6;
          uStack_90 = uVar8;
          uStack_88 = uVar10;
          uStack_80 = uVar2;
          uStack_78 = uVar4;
          uStack_70 = uVar7;
          uStack_68 = uVar9;
          if (uVar4 == 0) {
            if (uVar6 != 0) goto LAB_10056934c;
            FUN_100569f0c(&uStack_80,auStack_c0);
            FUN_100569f0c(&uStack_a0,auStack_c0);
LAB_1005693a8:
            FUN_1004338a4(uVar2,uVar4,uVar7,uVar9);
            uVar2 = param_1[6];
            FUN_1004276a0(uVar2,param_2[6]);
            if ((uVar2 & 1) != 0) {
              uVar2 = param_1[7];
              uVar4 = param_2[7];
              if ((param_2[8] & 1) == 0) {
                if (uVar2 == uVar4) goto LAB_100569478;
              }
              else if (uVar4 == 0) {
                if (uVar2 == 0) goto LAB_100569478;
              }
              else if (uVar4 == 1) {
                if (uVar2 == 1) {
LAB_100569478:
                  uVar2 = param_1[9];
                  FUN_1000094a4(uVar2,param_1[10],param_2[9],param_2[10]);
                  uVar1 = (uint)uVar2;
                  goto LAB_100569438;
                }
              }
              else if (uVar2 == 2) goto LAB_100569478;
            }
          }
          else {
            if (uVar6 == 0) {
LAB_10056934c:
              FUN_100569f0c(&uStack_80,auStack_c0);
              FUN_100569f0c(&uStack_a0,auStack_c0);
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
              FUN_100569f0c(&uStack_80,auStack_c0);
              FUN_100569f0c(&uStack_a0,auStack_c0);
              uVar3 = uVar7;
              FUN_1000094a4(uVar7,uVar9,uVar8,uVar10);
              FUN_1004338a4(uVar5,uVar6,uVar8,uVar10);
              if ((uVar3 & 1) != 0) goto LAB_1005693a8;
            }
            else {
              FUN_100569f0c(&uStack_80,auStack_c0);
              FUN_100569f0c(&uStack_a0,auStack_c0);
              FUN_1004338a4(uVar5,uVar6,uVar8,uVar10);
            }
            FUN_1004338a4(uVar2,uVar4,uVar7,uVar9);
          }
        }
      }
    }
  }
  uVar1 = 0;
LAB_100569438:
  return uVar1 & 1;
}

