// rea decompile_all
// name: thunk_FUN_1005a54ac
// address: 0x100587434
// body: available
// range: 0x100587434-0x100587437 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint thunk_FUN_1005a54ac(ulong *param_1,undefined8 *param_2)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_110 [32];
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  uVar5 = param_2[0xb];
  if (param_1[0xb] == 0) {
    if (uVar5 == 0) goto LAB_1005a550c;
  }
  else if ((uVar5 != 0) &&
          ((uVar3 = param_1[10], uVar3 == param_2[10] && param_1[0xb] == uVar5 ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar3 & 1) != 0)))) {
LAB_1005a550c:
    uVar5 = param_2[0xd];
    if (param_1[0xd] == 0) {
      if (uVar5 == 0) goto LAB_1005a5548;
    }
    else if ((uVar5 != 0) &&
            (((uVar3 = param_1[0xc], uVar3 == param_2[0xc] && (param_1[0xd] == uVar5)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar3 & 1) != 0)))) {
LAB_1005a5548:
      uVar5 = *param_1;
      FUN_1000e408c(uVar5,*param_2);
      if ((uVar5 & 1) != 0) {
        uVar5 = param_1[1];
        FUN_1000e3c6c(uVar5,param_2[1]);
        if ((uVar5 & 1) != 0) {
          uVar5 = param_1[2];
          FUN_1000e3c6c(uVar5,param_2[2]);
          if ((uVar5 & 1) != 0) {
            uVar5 = param_1[3];
            FUN_1000e408c(uVar5,param_2[3]);
            if ((uVar5 & 1) != 0) {
              uVar5 = param_1[4];
              FUN_1005701e8(uVar5,param_2[4],FUN_10058918c);
              if ((uVar5 & 1) != 0) {
                uVar5 = param_1[5];
                FUN_1005701e8(uVar5,param_2[5],FUN_10058e704);
                if ((uVar5 & 1) != 0) {
                  uVar5 = param_1[6];
                  FUN_10056e678(uVar5,param_2[6]);
                  if ((uVar5 & 1) != 0) {
                    uVar5 = param_1[7];
                    FUN_100570074(uVar5,param_2[7]);
                    if ((uVar5 & 1) != 0) {
                      uVar7 = param_1[0xf];
                      uVar6 = param_1[0xe];
                      uVar10 = param_1[0x11];
                      uVar8 = param_1[0x10];
                      uVar3 = param_2[0xf];
                      uVar5 = param_2[0xe];
                      uVar11 = param_2[0x11];
                      uVar9 = param_2[0x10];
                      uStack_b0 = uVar5;
                      uStack_a8 = uVar3;
                      uStack_a0 = uVar9;
                      uStack_98 = uVar11;
                      uStack_90 = uVar6;
                      uStack_88 = uVar7;
                      uStack_80 = uVar8;
                      uStack_78 = uVar10;
                      if (uVar8 == 0) {
                        if (uVar9 != 0) goto LAB_1005a5648;
                        FUN_10007f314(&uStack_90,&uStack_d0,&DAT_100aad110,&DAT_10083cc68);
                        FUN_10007f314(&uStack_b0,&uStack_d0,&DAT_100aad110,&DAT_10083cc68);
                        FUN_1005419ec(uVar6,uVar7,0,uVar10);
LAB_1005a57fc:
                        uVar7 = param_1[0x13];
                        uVar6 = param_1[0x12];
                        uVar10 = param_1[0x15];
                        uVar8 = param_1[0x14];
                        uVar3 = param_2[0x13];
                        uVar5 = param_2[0x12];
                        uVar11 = param_2[0x15];
                        uVar9 = param_2[0x14];
                        uStack_f0 = uVar5;
                        uStack_e8 = uVar3;
                        uStack_e0 = uVar9;
                        uStack_d8 = uVar11;
                        uStack_d0 = uVar6;
                        uStack_c8 = uVar7;
                        uStack_c0 = uVar8;
                        uStack_b8 = uVar10;
                        if (uVar6 == 0) {
                          if (uVar5 != 0) goto LAB_1005a58d0;
                          FUN_10007f314(&uStack_d0,auStack_110,&DAT_100aad118,&DAT_10083cc70);
                          FUN_10007f314(&uStack_f0,auStack_110,&DAT_100aad118,&DAT_10083cc70);
                          FUN_100541a94(0,uVar7,uVar8,uVar10);
LAB_1005a59ac:
                          uVar5 = param_2[0x17];
                          if (param_1[0x17] == 0) {
                            if (uVar5 == 0) goto LAB_1005a59e8;
                          }
                          else if ((uVar5 != 0) &&
                                  (((uVar3 = param_1[0x16], uVar3 == param_2[0x16] &&
                                    (param_1[0x17] == uVar5)) ||
                                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                              (), (uVar3 & 1) != 0)))) {
LAB_1005a59e8:
                            cVar1 = *(char *)(param_2 + 0x18);
                            if ((long)(char)param_1[0x18] == 0xc) {
                              if (cVar1 == '\f') {
LAB_1005a5a24:
                                uVar5 = param_1[8];
                                FUN_1000094a4(uVar5,param_1[9],param_2[8],param_2[9]);
                                uVar2 = (uint)uVar5;
                                goto LAB_1005a5788;
                              }
                            }
                            else if ((cVar1 != '\f') &&
                                    (*(long *)(&DAT_10083cc80 + (long)(char)param_1[0x18] * 8) ==
                                     *(long *)(&DAT_10083cc80 + (long)cVar1 * 8)))
                            goto LAB_1005a5a24;
                          }
                        }
                        else {
                          if (uVar5 == 0) {
LAB_1005a58d0:
                            FUN_10007f314(&uStack_d0,auStack_110,&DAT_100aad118,&DAT_10083cc70);
                            FUN_10007f314(&uStack_f0,auStack_110,&DAT_100aad118,&DAT_10083cc70);
                            FUN_100541a94(uVar6,uVar7,uVar8,uVar10);
                          }
                          else {
                            FUN_10007f314(&uStack_d0,auStack_110,&DAT_100aad118,&DAT_10083cc70);
                            FUN_10007f314(&uStack_f0,auStack_110,&DAT_100aad118,&DAT_10083cc70);
                            uVar4 = uVar6;
                            FUN_100570e5c(uVar6,uVar5);
                            if (((uVar4 & 1) != 0) &&
                               (uVar4 = uVar7, FUN_1000094a4(uVar7,uVar8,uVar3,uVar9),
                               (uVar4 & 1) != 0)) {
                              uVar4 = uVar10;
                              thunk_FUN_100511c8c(uVar10,uVar11);
                              FUN_100541a94(uVar5,uVar3,uVar9,uVar11);
                              FUN_100541a94(uVar6,uVar7,uVar8,uVar10);
                              if ((uVar4 & 1) != 0) goto LAB_1005a59ac;
                              goto LAB_1005a5784;
                            }
                            FUN_100541a94(uVar5,uVar3,uVar9,uVar11);
                            uVar5 = uVar6;
                            uVar3 = uVar7;
                            uVar9 = uVar8;
                            uVar11 = uVar10;
                          }
                          FUN_100541a94(uVar5,uVar3,uVar9,uVar11);
                        }
                      }
                      else {
                        if (uVar9 == 0) {
LAB_1005a5648:
                          FUN_10007f314(&uStack_90,&uStack_d0,&DAT_100aad110,&DAT_10083cc68);
                          FUN_10007f314(&uStack_b0,&uStack_d0,&DAT_100aad110,&DAT_10083cc68);
                          FUN_1005419ec(uVar6,uVar7,uVar8,uVar10);
                        }
                        else {
                          if (uVar10 == uVar11) {
                            FUN_10007f314(&uStack_90,&uStack_d0,&DAT_100aad110,&DAT_10083cc68);
                            FUN_10007f314(&uStack_b0,&uStack_d0,&DAT_100aad110,&DAT_10083cc68);
LAB_1005a5700:
                            uVar4 = uVar6;
                            FUN_1000094a4(uVar6,uVar7,uVar5,uVar3);
                            if ((uVar4 & 1) != 0) {
                              uVar4 = uVar8;
                              thunk_FUN_100511c8c(uVar8,uVar9);
                              FUN_1005419ec(uVar5,uVar3,uVar9,uVar11);
                              FUN_1005419ec(uVar6,uVar7,uVar8,uVar10);
                              if ((uVar4 & 1) == 0) goto LAB_1005a5784;
                              goto LAB_1005a57fc;
                            }
                          }
                          else {
                            FUN_10007f314(&uStack_90,&uStack_d0,&DAT_100aad110,&DAT_10083cc68);
                            FUN_10007f314(&uStack_b0,&uStack_d0,&DAT_100aad110,&DAT_10083cc68);
                            _swift_retain(uVar10);
                            _swift_retain(uVar11);
                            uVar4 = uVar10;
                            FUN_1005946f8(uVar10,uVar11);
                            _swift_release(uVar11);
                            _swift_release(uVar10);
                            if ((uVar4 & 1) != 0) goto LAB_1005a5700;
                          }
                          FUN_1005419ec(uVar5,uVar3,uVar9,uVar11);
                          uVar5 = uVar6;
                          uVar3 = uVar7;
                          uVar9 = uVar8;
                          uVar11 = uVar10;
                        }
                        FUN_1005419ec(uVar5,uVar3,uVar9,uVar11);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_1005a5784:
  uVar2 = 0;
LAB_1005a5788:
  return uVar2 & 1;
}

