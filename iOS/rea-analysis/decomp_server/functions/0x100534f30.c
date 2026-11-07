// rea decompile_all
// name: FUN_100534f30
// address: 0x100534f30
// body: available
// range: 0x100534f30-0x10053565f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100534f30(undefined8 ****param_1,undefined8 ****param_2)

{
  uint uVar1;
  undefined8 ****ppppuVar2;
  uint uVar3;
  uint uVar4;
  undefined8 ****ppppuVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuVar13;
  undefined8 uVar14;
  undefined8 ****ppppuVar15;
  undefined8 ****ppppuVar16;
  long lVar17;
  ulong uVar18;
  undefined8 ****ppppuVar19;
  undefined1 auVar20 [16];
  undefined8 ***local_80;
  ulong uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  uVar14 = 0xe000000000000000;
  local_70 = 0;
  local_68 = 0xe000000000000000;
  ppppuVar16 = (undefined8 ****)((ulong)param_2 >> 0x38 & 0xf);
  ppppuVar19 = (undefined8 ****)((ulong)param_1 & 0xffffffffffff);
  ppppuVar5 = ppppuVar19;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    ppppuVar5 = ppppuVar16;
  }
  if (ppppuVar5 == (undefined8 ****)0x0) {
    local_70 = 0;
  }
  else {
    uVar18 = (ulong)param_2 & 0xffffffffffffff;
    ppppuVar2 = (undefined8 ****)(((ulong)param_2 & 0xfffffffffffffff) + 0x20);
    _swift_bridgeObjectRetain(param_2);
    lVar17 = 0;
    do {
      iVar8 = (int)ppppuVar2;
      if (((ulong)param_2 >> 0x3c & 1) == 0) {
        if (((ulong)param_2 >> 0x3d & 1) == 0) {
          ppppuVar10 = ppppuVar19;
          iVar7 = iVar8;
          if (((ulong)param_1 >> 0x3c & 1) == 0) {
            ppppuVar11 = param_1;
            ppppuVar10 = param_2;
            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
            iVar7 = (int)ppppuVar11;
          }
        }
        else {
          iVar7 = (int)&local_80;
          ppppuVar10 = ppppuVar16;
          local_80 = param_1;
          uStack_78 = uVar18;
        }
        __ss13_decodeScalar_10startingAts7UnicodeO0B0V_Si12scalarLengthtSRys5UInt8VG_SitF();
      }
      else {
        lVar9 = lVar17 << 0x10;
        ppppuVar10 = param_1;
        __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                  (lVar9,param_1,param_2);
        iVar7 = (int)lVar9;
      }
      lVar17 = (long)ppppuVar10 + lVar17;
      if (iVar7 != 0x5c) goto LAB_100534f9c;
      if ((long)ppppuVar5 <= lVar17) {
LAB_100535600:
        uVar14 = local_68;
        _swift_bridgeObjectRelease(param_2);
LAB_1005355d4:
        _swift_bridgeObjectRelease(uVar14);
        local_70 = 0;
        uVar14 = 0;
        goto LAB_1005355e0;
      }
      if (((ulong)param_2 >> 0x3c & 1) == 0) {
        if (((ulong)param_2 >> 0x3d & 1) == 0) {
          ppppuVar10 = ppppuVar19;
          iVar7 = iVar8;
          if (((ulong)param_1 >> 0x3c & 1) == 0) {
            ppppuVar11 = param_1;
            ppppuVar10 = param_2;
            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
            iVar7 = (int)ppppuVar11;
          }
        }
        else {
          iVar7 = (int)&local_80;
          ppppuVar10 = ppppuVar16;
          local_80 = param_1;
          uStack_78 = uVar18;
        }
        __ss13_decodeScalar_10startingAts7UnicodeO0B0V_Si12scalarLengthtSRys5UInt8VG_SitF();
      }
      else {
        lVar9 = lVar17 * 0x10000;
        ppppuVar10 = param_1;
        __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                  (lVar9,param_1,param_2);
        iVar7 = (int)lVar9;
      }
      lVar17 = (long)ppppuVar10 + lVar17;
      if (iVar7 < 0x66) {
        if (((0x3a < iVar7 - 0x22U) ||
            ((1L << ((ulong)(iVar7 - 0x22U) & 0x3f) & 0x400000000002001U) == 0)) && (iVar7 != 0x62))
        goto LAB_100535600;
      }
      else if (iVar7 < 0x72) {
        if ((iVar7 != 0x66) && (iVar7 != 0x6e)) goto LAB_100535600;
      }
      else if ((iVar7 != 0x72) && (iVar7 != 0x74)) {
        if (iVar7 != 0x75) goto LAB_100535600;
        if (lVar17 < (long)ppppuVar5) {
          if (((ulong)param_2 >> 0x3c & 1) == 0) {
            if (((ulong)param_2 >> 0x3d & 1) == 0) {
              ppppuVar10 = ppppuVar2;
              ppppuVar11 = ppppuVar19;
              if (((ulong)param_1 >> 0x3c & 1) == 0) {
                ppppuVar10 = param_1;
                ppppuVar11 = param_2;
                __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
              }
            }
            else {
              ppppuVar10 = &local_80;
              ppppuVar11 = ppppuVar16;
              local_80 = param_1;
              uStack_78 = uVar18;
            }
            __ss13_decodeScalar_10startingAts7UnicodeO0B0V_Si12scalarLengthtSRys5UInt8VG_SitF();
          }
          else {
            ppppuVar10 = (undefined8 ****)(lVar17 * 0x10000);
            ppppuVar11 = param_1;
            __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                      (ppppuVar10,param_1,param_2);
          }
          FUN_1005349e4();
          if ((((ulong)ppppuVar10 >> 0x20 & 1) == 0) &&
             (lVar17 = (long)ppppuVar11 + lVar17, lVar17 < (long)ppppuVar5)) {
            if (((ulong)param_2 >> 0x3c & 1) == 0) {
              if (((ulong)param_2 >> 0x3d & 1) == 0) {
                ppppuVar11 = ppppuVar2;
                ppppuVar12 = ppppuVar19;
                if (((ulong)param_1 >> 0x3c & 1) == 0) {
                  ppppuVar11 = param_1;
                  ppppuVar12 = param_2;
                  __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
                }
              }
              else {
                ppppuVar11 = &local_80;
                ppppuVar12 = ppppuVar16;
                local_80 = param_1;
                uStack_78 = uVar18;
              }
              __ss13_decodeScalar_10startingAts7UnicodeO0B0V_Si12scalarLengthtSRys5UInt8VG_SitF();
            }
            else {
              ppppuVar11 = (undefined8 ****)(lVar17 * 0x10000);
              ppppuVar12 = param_1;
              __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                        (ppppuVar11,param_1,param_2);
            }
            FUN_1005349e4();
            if ((((ulong)ppppuVar11 >> 0x20 & 1) == 0) &&
               (lVar17 = (long)ppppuVar12 + lVar17, lVar17 < (long)ppppuVar5)) {
              if (((ulong)param_2 >> 0x3c & 1) == 0) {
                if (((ulong)param_2 >> 0x3d & 1) == 0) {
                  ppppuVar12 = ppppuVar2;
                  ppppuVar13 = ppppuVar19;
                  if (((ulong)param_1 >> 0x3c & 1) == 0) {
                    ppppuVar12 = param_1;
                    ppppuVar13 = param_2;
                    __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
                  }
                }
                else {
                  ppppuVar12 = &local_80;
                  ppppuVar13 = ppppuVar16;
                  local_80 = param_1;
                  uStack_78 = uVar18;
                }
                __ss13_decodeScalar_10startingAts7UnicodeO0B0V_Si12scalarLengthtSRys5UInt8VG_SitF();
              }
              else {
                ppppuVar12 = (undefined8 ****)(lVar17 * 0x10000);
                ppppuVar13 = param_1;
                __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                          (ppppuVar12,param_1,param_2);
              }
              FUN_1005349e4();
              if ((((ulong)ppppuVar12 >> 0x20 & 1) == 0) &&
                 (lVar17 = (long)ppppuVar13 + lVar17, lVar17 < (long)ppppuVar5)) {
                if (((ulong)param_2 >> 0x3c & 1) == 0) {
                  if (((ulong)param_2 >> 0x3d & 1) == 0) {
                    ppppuVar13 = ppppuVar2;
                    ppppuVar15 = ppppuVar19;
                    if (((ulong)param_1 >> 0x3c & 1) == 0) {
                      ppppuVar13 = param_1;
                      ppppuVar15 = param_2;
                      __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
                    }
                  }
                  else {
                    ppppuVar13 = &local_80;
                    ppppuVar15 = ppppuVar16;
                    local_80 = param_1;
                    uStack_78 = uVar18;
                  }
                  __ss13_decodeScalar_10startingAts7UnicodeO0B0V_Si12scalarLengthtSRys5UInt8VG_SitF
                            ();
                }
                else {
                  ppppuVar13 = (undefined8 ****)(lVar17 * 0x10000);
                  ppppuVar15 = param_1;
                  __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                            (ppppuVar13,param_1,param_2);
                }
                FUN_1005349e4();
                if (((ulong)ppppuVar13 >> 0x20 & 1) == 0) {
                  if (((ulong)ppppuVar10 >> 0x1c & 0xf) != 0) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100535630);
                    (*pcVar6)();
                  }
                  uVar1 = (int)ppppuVar10 * 0x10;
                  uVar3 = (uint)ppppuVar11 + uVar1;
                  if (CARRY4((uint)ppppuVar11,uVar1)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100535634);
                    (*pcVar6)();
                  }
                  if (uVar3 >> 0x1c != 0) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100535638);
                    (*pcVar6)();
                  }
                  uVar3 = uVar3 * 0x10;
                  uVar1 = (uint)ppppuVar12 + uVar3;
                  if (CARRY4((uint)ppppuVar12,uVar3)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x10053563c);
                    (*pcVar6)();
                  }
                  if (uVar1 >> 0x1c != 0) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100535640);
                    (*pcVar6)();
                  }
                  uVar1 = uVar1 * 0x10;
                  uVar3 = (uint)ppppuVar13 + uVar1;
                  if (CARRY4((uint)ppppuVar13,uVar1)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100535644);
                    (*pcVar6)();
                  }
                  lVar17 = (long)ppppuVar15 + lVar17;
                  if ((uVar3 >> 0x10 < 0x11) && ((uVar3 & 0xfffff800) != 0xd800))
                  goto LAB_100534f9c;
                  if (uVar3 < 0xe000) {
                    if (0x36 < uVar3 >> 10) goto LAB_100535600;
                    if (lVar17 < (long)ppppuVar5) {
                      if (((ulong)param_2 >> 0x3c & 1) == 0) {
                        if (((ulong)param_2 >> 0x3d & 1) == 0) {
                          ppppuVar10 = ppppuVar19;
                          iVar7 = iVar8;
                          if (((ulong)param_1 >> 0x3c & 1) == 0) {
                            ppppuVar11 = param_1;
                            ppppuVar10 = param_2;
                            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
                            iVar7 = (int)ppppuVar11;
                          }
                        }
                        else {
                          iVar7 = (int)&local_80;
                          ppppuVar10 = ppppuVar16;
                          local_80 = param_1;
                          uStack_78 = uVar18;
                        }
                        __ss13_decodeScalar_10startingAts7UnicodeO0B0V_Si12scalarLengthtSRys5UInt8VG_SitF
                                  ();
                      }
                      else {
                        lVar9 = lVar17 * 0x10000;
                        ppppuVar10 = param_1;
                        __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                                  (lVar9,param_1,param_2);
                        iVar7 = (int)lVar9;
                      }
                      if ((iVar7 == 0x5c) &&
                         (lVar17 = (long)ppppuVar10 + lVar17, lVar17 < (long)ppppuVar5)) {
                        if (((ulong)param_2 >> 0x3c & 1) == 0) {
                          if (((ulong)param_2 >> 0x3d & 1) == 0) {
                            ppppuVar10 = ppppuVar19;
                            if (((ulong)param_1 >> 0x3c & 1) == 0) {
                              ppppuVar11 = param_1;
                              ppppuVar10 = param_2;
                              __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
                              iVar8 = (int)ppppuVar11;
                            }
                          }
                          else {
                            iVar8 = (int)&local_80;
                            ppppuVar10 = ppppuVar16;
                            local_80 = param_1;
                            uStack_78 = uVar18;
                          }
                          __ss13_decodeScalar_10startingAts7UnicodeO0B0V_Si12scalarLengthtSRys5UInt8VG_SitF
                                    ();
                        }
                        else {
                          lVar9 = lVar17 * 0x10000;
                          ppppuVar10 = param_1;
                          __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                                    (lVar9,param_1,param_2);
                          iVar8 = (int)lVar9;
                        }
                        if ((iVar8 == 0x75) &&
                           (lVar17 = (long)ppppuVar10 + lVar17, lVar17 < (long)ppppuVar5)) {
                          if (((ulong)param_2 >> 0x3c & 1) == 0) {
                            if (((ulong)param_2 >> 0x3d & 1) == 0) {
                              ppppuVar10 = ppppuVar2;
                              ppppuVar11 = ppppuVar19;
                              if (((ulong)param_1 >> 0x3c & 1) == 0) {
                                ppppuVar10 = param_1;
                                ppppuVar11 = param_2;
                                __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
                              }
                            }
                            else {
                              ppppuVar10 = &local_80;
                              ppppuVar11 = ppppuVar16;
                              local_80 = param_1;
                              uStack_78 = uVar18;
                            }
                            __ss13_decodeScalar_10startingAts7UnicodeO0B0V_Si12scalarLengthtSRys5UInt8VG_SitF
                                      ();
                          }
                          else {
                            ppppuVar10 = (undefined8 ****)(lVar17 * 0x10000);
                            ppppuVar11 = param_1;
                            __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                                      (ppppuVar10,param_1,param_2);
                          }
                          FUN_1005349e4();
                          if ((((ulong)ppppuVar10 >> 0x20 & 1) == 0) &&
                             (lVar17 = (long)ppppuVar11 + lVar17, lVar17 < (long)ppppuVar5)) {
                            if (((ulong)param_2 >> 0x3c & 1) == 0) {
                              if (((ulong)param_2 >> 0x3d & 1) == 0) {
                                ppppuVar11 = ppppuVar2;
                                ppppuVar12 = ppppuVar19;
                                if (((ulong)param_1 >> 0x3c & 1) == 0) {
                                  ppppuVar11 = param_1;
                                  ppppuVar12 = param_2;
                                  __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
                                }
                              }
                              else {
                                ppppuVar11 = &local_80;
                                ppppuVar12 = ppppuVar16;
                                local_80 = param_1;
                                uStack_78 = uVar18;
                              }
                              __ss13_decodeScalar_10startingAts7UnicodeO0B0V_Si12scalarLengthtSRys5UInt8VG_SitF
                                        ();
                            }
                            else {
                              ppppuVar11 = (undefined8 ****)(lVar17 * 0x10000);
                              ppppuVar12 = param_1;
                              __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                                        (ppppuVar11,param_1,param_2);
                            }
                            FUN_1005349e4();
                            if ((((ulong)ppppuVar11 >> 0x20 & 1) == 0) &&
                               (lVar17 = (long)ppppuVar12 + lVar17, lVar17 < (long)ppppuVar5)) {
                              if (((ulong)param_2 >> 0x3c & 1) == 0) {
                                if (((ulong)param_2 >> 0x3d & 1) == 0) {
                                  ppppuVar12 = ppppuVar2;
                                  ppppuVar13 = ppppuVar19;
                                  if (((ulong)param_1 >> 0x3c & 1) == 0) {
                                    ppppuVar12 = param_1;
                                    ppppuVar13 = param_2;
                                    __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
                                  }
                                }
                                else {
                                  ppppuVar12 = &local_80;
                                  ppppuVar13 = ppppuVar16;
                                  local_80 = param_1;
                                  uStack_78 = uVar18;
                                }
                                __ss13_decodeScalar_10startingAts7UnicodeO0B0V_Si12scalarLengthtSRys5UInt8VG_SitF
                                          ();
                              }
                              else {
                                ppppuVar12 = (undefined8 ****)(lVar17 * 0x10000);
                                ppppuVar13 = param_1;
                                __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                                          (ppppuVar12,param_1,param_2);
                              }
                              FUN_1005349e4();
                              if ((((ulong)ppppuVar12 >> 0x20 & 1) == 0) &&
                                 (lVar17 = (long)ppppuVar13 + lVar17, lVar17 < (long)ppppuVar5)) {
                                if (((ulong)param_2 >> 0x3c & 1) == 0) {
                                  if (((ulong)param_2 >> 0x3d & 1) == 0) {
                                    ppppuVar13 = ppppuVar2;
                                    ppppuVar15 = ppppuVar19;
                                    if (((ulong)param_1 >> 0x3c & 1) == 0) {
                                      ppppuVar13 = param_1;
                                      ppppuVar15 = param_2;
                                      __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
                                    }
                                  }
                                  else {
                                    ppppuVar13 = &local_80;
                                    ppppuVar15 = ppppuVar16;
                                    local_80 = param_1;
                                    uStack_78 = uVar18;
                                  }
                                  __ss13_decodeScalar_10startingAts7UnicodeO0B0V_Si12scalarLengthtSRys5UInt8VG_SitF
                                            ();
                                }
                                else {
                                  ppppuVar13 = (undefined8 ****)(lVar17 * 0x10000);
                                  ppppuVar15 = param_1;
                                  __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                                            (ppppuVar13,param_1,param_2);
                                }
                                FUN_1005349e4();
                                if (((ulong)ppppuVar13 >> 0x20 & 1) == 0) {
                                  if (((ulong)ppppuVar10 >> 0x1c & 0xf) != 0) {
                    /* WARNING: Does not return */
                                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100535648);
                                    (*pcVar6)();
                                  }
                                  uVar1 = (int)ppppuVar10 * 0x10;
                                  uVar4 = (uint)ppppuVar11 + uVar1;
                                  if (CARRY4((uint)ppppuVar11,uVar1)) {
                    /* WARNING: Does not return */
                                    pcVar6 = (code *)SoftwareBreakpoint(1,0x10053564c);
                                    (*pcVar6)();
                                  }
                                  if (uVar4 >> 0x1c != 0) {
                    /* WARNING: Does not return */
                                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100535650);
                                    (*pcVar6)();
                                  }
                                  uVar4 = uVar4 * 0x10;
                                  uVar1 = (uint)ppppuVar12 + uVar4;
                                  if (CARRY4((uint)ppppuVar12,uVar4)) {
                    /* WARNING: Does not return */
                                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100535654);
                                    (*pcVar6)();
                                  }
                                  if (uVar1 >> 0x1c != 0) {
                    /* WARNING: Does not return */
                                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100535658);
                                    (*pcVar6)();
                                  }
                                  uVar1 = uVar1 * 0x10;
                                  if (CARRY4((uint)ppppuVar13,uVar1)) {
                    /* WARNING: Does not return */
                                    pcVar6 = (code *)SoftwareBreakpoint(1,0x10053565c);
                                    (*pcVar6)();
                                  }
                                  if ((uint)ppppuVar13 + uVar1 >> 10 == 0x37) {
                                    if (uVar3 < 0xd800) {
                    /* WARNING: Does not return */
                                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100535660);
                                      (*pcVar6)();
                                    }
                                    lVar17 = (long)ppppuVar15 + lVar17;
                                    goto LAB_100534f9c;
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
            }
          }
        }
        _swift_bridgeObjectRelease(param_2);
        uVar14 = local_68;
        goto LAB_1005355d4;
      }
LAB_100534f9c:
      __sSS17UnicodeScalarViewV6appendyys0A0O0B0VF();
    } while (lVar17 < (long)ppppuVar5);
    _swift_bridgeObjectRelease(param_2);
    uVar14 = local_68;
  }
LAB_1005355e0:
  auVar20._8_8_ = uVar14;
  auVar20._0_8_ = local_70;
  return auVar20;
}

