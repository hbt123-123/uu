// rea decompile_all
// name: thunk_FUN_1005a601c
// address: 0x10058c860
// body: available
// range: 0x10058c860-0x10058c863 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint thunk_FUN_1005a601c(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auStack_c0 [32];
  ulong uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  lVar6 = param_1[3];
  lVar5 = param_2[3];
  if (lVar6 == 0) {
    if (lVar5 == 0) {
LAB_1005a6090:
      bVar1 = *(byte *)((long)param_2 + 0x24);
      if ((*(byte *)((long)param_1 + 0x24) & 1) == 0) {
        if (*(int *)(param_1 + 4) != *(int *)(param_2 + 4)) {
          bVar1 = 1;
        }
        if ((bVar1 & 1) == 0) goto LAB_1005a60b8;
      }
      else if (bVar1 != 0) {
LAB_1005a60b8:
        cVar2 = *(char *)((long)param_2 + 0x25);
        if ((long)*(char *)((long)param_1 + 0x25) == 3) {
          if (cVar2 == '\x03') {
LAB_1005a60f4:
            if (*(char *)((long)param_1 + 0x26) == '\x12') {
              if (*(char *)((long)param_2 + 0x26) == '\x12') {
LAB_1005a6118:
                lVar6 = param_1[6];
                lVar5 = param_2[6];
                if (lVar6 == 0) {
                  if (lVar5 == 0) {
LAB_1005a6170:
                    lVar6 = param_1[8];
                    lVar5 = param_2[8];
                    if (lVar6 == 0) {
                      if (lVar5 == 0) {
LAB_1005a61c8:
                        lVar6 = param_1[10];
                        lVar5 = param_2[10];
                        if (lVar6 == 0) {
                          if (lVar5 == 0) {
LAB_1005a6220:
                            bVar1 = *(byte *)((long)param_2 + 0x5c);
                            if ((*(byte *)((long)param_1 + 0x5c) & 1) == 0) {
                              if (*(int *)(param_1 + 0xb) != *(int *)(param_2 + 0xb)) {
                                bVar1 = 1;
                              }
                              if ((bVar1 & 1) == 0) goto LAB_1005a6248;
                            }
                            else if (bVar1 != 0) {
LAB_1005a6248:
                              lVar6 = param_1[0xd];
                              lVar5 = param_2[0xd];
                              if (lVar6 == 0) {
                                if (lVar5 == 0) {
LAB_1005a62a0:
                                  uVar9 = param_1[0xf];
                                  uVar8 = param_1[0xe];
                                  uVar13 = param_1[0x11];
                                  uVar11 = param_1[0x10];
                                  uVar10 = param_2[0xf];
                                  uVar7 = param_2[0xe];
                                  uVar14 = param_2[0x11];
                                  uVar12 = param_2[0x10];
                                  uStack_a0 = uVar7;
                                  uStack_98 = uVar10;
                                  uStack_90 = uVar12;
                                  uStack_88 = uVar14;
                                  uStack_80 = uVar8;
                                  uStack_78 = uVar9;
                                  uStack_70 = uVar11;
                                  uStack_68 = uVar13;
                                  if (uVar11 == 0) {
                                    if (uVar12 != 0) goto LAB_1005a6314;
                                    FUN_10007f314(&uStack_80,auStack_c0,&DAT_100aad0e0,
                                                  &DAT_10083cc50);
                                    FUN_10007f314(&uStack_a0,auStack_c0,&DAT_100aad0e0,
                                                  &DAT_10083cc50);
                                    FUN_1005419ec(uVar8,uVar9,0,uVar13);
LAB_1005a64b8:
                                    bVar1 = *(byte *)(param_2 + 0x12);
                                    if (*(byte *)(param_1 + 0x12) == 2) {
                                      if (bVar1 == 2) {
LAB_1005a64e8:
                                        uVar10 = *param_1;
                                        FUN_1000094a4(uVar10,param_1[1],*param_2,param_2[1]);
                                        uVar3 = (uint)uVar10;
                                        goto LAB_1005a6444;
                                      }
                                    }
                                    else if ((bVar1 != 2) &&
                                            (((*(byte *)(param_1 + 0x12) ^ bVar1) & 1) == 0))
                                    goto LAB_1005a64e8;
                                  }
                                  else {
                                    if (uVar12 == 0) {
LAB_1005a6314:
                                      FUN_10007f314(&uStack_80,auStack_c0,&DAT_100aad0e0,
                                                    &DAT_10083cc50);
                                      FUN_10007f314(&uStack_a0,auStack_c0,&DAT_100aad0e0,
                                                    &DAT_10083cc50);
                                      FUN_1005419ec(uVar8,uVar9,uVar11,uVar13);
                                    }
                                    else {
                                      if (uVar13 == uVar14) {
                                        FUN_10007f314(&uStack_80,auStack_c0,&DAT_100aad0e0,
                                                      &DAT_10083cc50);
                                        FUN_10007f314(&uStack_a0,auStack_c0,&DAT_100aad0e0,
                                                      &DAT_10083cc50);
LAB_1005a63c0:
                                        uVar4 = uVar8;
                                        FUN_1000094a4(uVar8,uVar9,uVar7,uVar10);
                                        if ((uVar4 & 1) != 0) {
                                          uVar4 = uVar11;
                                          thunk_FUN_100511c8c(uVar11,uVar12);
                                          FUN_1005419ec(uVar7,uVar10,uVar12,uVar14);
                                          FUN_1005419ec(uVar8,uVar9,uVar11,uVar13);
                                          if ((uVar4 & 1) == 0) goto LAB_1005a6440;
                                          goto LAB_1005a64b8;
                                        }
                                      }
                                      else {
                                        FUN_10007f314(&uStack_80,auStack_c0,&DAT_100aad0e0,
                                                      &DAT_10083cc50);
                                        FUN_10007f314(&uStack_a0,auStack_c0,&DAT_100aad0e0,
                                                      &DAT_10083cc50);
                                        _swift_retain(uVar13);
                                        _swift_retain(uVar14);
                                        uVar4 = uVar13;
                                        FUN_100597de0(uVar13,uVar14);
                                        _swift_release(uVar14);
                                        _swift_release(uVar13);
                                        if ((uVar4 & 1) != 0) goto LAB_1005a63c0;
                                      }
                                      FUN_1005419ec(uVar7,uVar10,uVar12,uVar14);
                                      uVar7 = uVar8;
                                      uVar10 = uVar9;
                                      uVar12 = uVar11;
                                      uVar14 = uVar13;
                                    }
                                    FUN_1005419ec(uVar7,uVar10,uVar12,uVar14);
                                  }
                                }
                              }
                              else if (lVar5 != 0) {
                                uVar7 = param_1[0xc];
                                if (((uVar7 == param_2[0xc]) && (lVar6 == lVar5)) ||
                                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                              (uVar7,lVar6,param_2[0xc],lVar5,0), (uVar7 & 1) != 0))
                                goto LAB_1005a62a0;
                              }
                            }
                          }
                        }
                        else if (lVar5 != 0) {
                          uVar7 = param_1[9];
                          if (((uVar7 == param_2[9]) && (lVar6 == lVar5)) ||
                             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                        (uVar7,lVar6,param_2[9],lVar5,0), (uVar7 & 1) != 0))
                          goto LAB_1005a6220;
                        }
                      }
                    }
                    else if (lVar5 != 0) {
                      uVar7 = param_1[7];
                      if (((uVar7 == param_2[7]) && (lVar6 == lVar5)) ||
                         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                    (uVar7,lVar6,param_2[7],lVar5,0), (uVar7 & 1) != 0))
                      goto LAB_1005a61c8;
                    }
                  }
                }
                else if (lVar5 != 0) {
                  uVar7 = param_1[5];
                  if (((uVar7 == param_2[5]) && (lVar6 == lVar5)) ||
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (uVar7,lVar6,param_2[5],lVar5,0), (uVar7 & 1) != 0))
                  goto LAB_1005a6170;
                }
              }
            }
            else if (*(char *)((long)param_1 + 0x26) == *(char *)((long)param_2 + 0x26))
            goto LAB_1005a6118;
          }
        }
        else if ((cVar2 != '\x03') &&
                (*(long *)(&DAT_10083cce0 + (long)*(char *)((long)param_1 + 0x25) * 8) ==
                 *(long *)(&DAT_10083cce0 + (long)cVar2 * 8))) goto LAB_1005a60f4;
      }
    }
  }
  else if (lVar5 != 0) {
    uVar7 = param_1[2];
    if ((uVar7 == param_2[2] && lVar6 == lVar5) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar7,lVar6,param_2[2],lVar5,0), (uVar7 & 1) != 0)) goto LAB_1005a6090;
  }
LAB_1005a6440:
  uVar3 = 0;
LAB_1005a6444:
  return uVar3 & 1;
}

