// rea decompile_all
// name: FUN_1005946f8
// address: 0x1005946f8
// body: available
// range: 0x1005946f8-0x1005950a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1005946f8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_458 [24];
  undefined1 auStack_440 [24];
  undefined1 auStack_428 [24];
  undefined1 auStack_410 [24];
  undefined1 auStack_3f8 [24];
  undefined1 auStack_3e0 [24];
  undefined1 auStack_3c8 [24];
  undefined1 auStack_3b0 [24];
  undefined1 auStack_398 [24];
  undefined1 auStack_380 [24];
  undefined1 auStack_368 [24];
  undefined1 auStack_350 [24];
  undefined1 auStack_338 [24];
  undefined1 auStack_320 [24];
  undefined1 auStack_308 [24];
  undefined1 auStack_2f0 [24];
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  _swift_beginAccess(param_1 + 0x10,auStack_80,0,0);
  uVar8 = *(ulong *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x18);
  _swift_beginAccess(param_2 + 0x10,auStack_98,0,0);
  lVar12 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    if (lVar12 == 0) goto LAB_100594784;
  }
  else if ((lVar12 != 0) &&
          ((uVar8 == *(ulong *)(param_2 + 0x10) && lVar1 == lVar12 ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar8,lVar1,*(ulong *)(param_2 + 0x10),lVar12,0), (uVar8 & 1) != 0)))) {
LAB_100594784:
    _swift_beginAccess(param_1 + 0x20,auStack_b0,0,0);
    uVar8 = *(ulong *)(param_1 + 0x20);
    lVar1 = *(long *)(param_1 + 0x28);
    _swift_beginAccess(param_2 + 0x20,auStack_c8,0,0);
    lVar12 = *(long *)(param_2 + 0x28);
    if (lVar1 == 0) {
      if (lVar12 == 0) goto LAB_1005947ec;
    }
    else if ((lVar12 != 0) &&
            (((uVar8 == *(ulong *)(param_2 + 0x20) && (lVar1 == lVar12)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (uVar8,lVar1,*(ulong *)(param_2 + 0x20),lVar12,0), (uVar8 & 1) != 0)))) {
LAB_1005947ec:
      _swift_beginAccess(param_1 + 0x30,auStack_e0,0,0);
      bVar4 = *(byte *)(param_1 + 0x30);
      _swift_beginAccess(param_2 + 0x30,auStack_f8,0,0);
      bVar5 = *(byte *)(param_2 + 0x30);
      if (bVar4 == 2) {
        if (bVar5 == 2) {
LAB_100594840:
          _swift_beginAccess(param_1 + 0x31,auStack_110,0,0);
          bVar4 = *(byte *)(param_1 + 0x31);
          _swift_beginAccess(param_2 + 0x31,auStack_128,0,0);
          bVar5 = *(byte *)(param_2 + 0x31);
          if (bVar4 == 2) {
            if (bVar5 == 2) {
LAB_100594894:
              _swift_beginAccess(param_1 + 0x32,auStack_140,0,0);
              bVar4 = *(byte *)(param_1 + 0x32);
              _swift_beginAccess(param_2 + 0x32,auStack_158,0,0);
              bVar5 = *(byte *)(param_2 + 0x32);
              if (bVar4 == 2) {
                if (bVar5 == 2) {
LAB_1005948e8:
                  _swift_beginAccess(param_1 + 0x33,auStack_170,0,0);
                  cVar6 = *(char *)(param_1 + 0x33);
                  _swift_beginAccess(param_2 + 0x33,auStack_188,0,0);
                  cVar7 = *(char *)(param_2 + 0x33);
                  if (cVar6 == '\x03') {
                    if (cVar7 != '\x03') goto LAB_100594f54;
                  }
                  else {
                    uVar14 = 0;
                    if ((cVar7 == '\x03') || (cVar6 != cVar7)) goto LAB_100594f58;
                  }
                  _swift_beginAccess(param_1 + 0x38,auStack_1a0,0,0);
                  uVar8 = *(ulong *)(param_1 + 0x38);
                  lVar1 = *(long *)(param_1 + 0x40);
                  _swift_beginAccess(param_2 + 0x38,auStack_1b8,0,0);
                  lVar12 = *(long *)(param_2 + 0x40);
                  if (lVar1 == 0) {
                    if (lVar12 == 0) goto LAB_1005949a8;
                  }
                  else if ((lVar12 != 0) &&
                          (((uVar8 == *(ulong *)(param_2 + 0x38) && (lVar1 == lVar12)) ||
                           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                      (uVar8,lVar1,*(ulong *)(param_2 + 0x38),lVar12,0),
                           (uVar8 & 1) != 0)))) {
LAB_1005949a8:
                    _swift_beginAccess(param_1 + 0x48,auStack_1d0,0,0);
                    bVar4 = *(byte *)(param_1 + 0x48);
                    _swift_beginAccess(param_2 + 0x48,auStack_1e8,0,0);
                    bVar5 = *(byte *)(param_2 + 0x48);
                    if (bVar4 == 2) {
                      if (bVar5 == 2) {
LAB_1005949fc:
                        _swift_beginAccess(param_1 + 0x49,auStack_200,0,0);
                        bVar4 = *(byte *)(param_1 + 0x49);
                        _swift_beginAccess(param_2 + 0x49,auStack_218,0,0);
                        bVar5 = *(byte *)(param_2 + 0x49);
                        if (bVar4 == 2) {
                          if (bVar5 == 2) {
LAB_100594a50:
                            _swift_beginAccess(param_1 + 0x4a,auStack_230,0,0);
                            bVar4 = *(byte *)(param_1 + 0x4a);
                            _swift_beginAccess(param_2 + 0x4a,auStack_248,0,0);
                            bVar5 = *(byte *)(param_2 + 0x4a);
                            if (bVar4 == 2) {
                              if (bVar5 == 2) {
LAB_100594aa4:
                                _swift_beginAccess(param_1 + 0x4b,auStack_260,0,0);
                                bVar4 = *(byte *)(param_1 + 0x4b);
                                _swift_beginAccess(param_2 + 0x4b,auStack_278,0,0);
                                bVar5 = *(byte *)(param_2 + 0x4b);
                                if (bVar4 == 2) {
                                  if (bVar5 == 2) {
LAB_100594af8:
                                    _swift_beginAccess(param_1 + 0x4c,auStack_290,0,0);
                                    bVar4 = *(byte *)(param_1 + 0x4c);
                                    _swift_beginAccess(param_2 + 0x4c,auStack_2a8,0,0);
                                    bVar5 = *(byte *)(param_2 + 0x4c);
                                    if (bVar4 == 2) {
                                      if (bVar5 == 2) {
LAB_100594b4c:
                                        _swift_beginAccess(param_1 + 0x50,auStack_2c0,0,0);
                                        uVar8 = *(ulong *)(param_1 + 0x50);
                                        lVar1 = *(long *)(param_1 + 0x58);
                                        _swift_beginAccess(param_2 + 0x50,auStack_2d8,0,0);
                                        lVar12 = *(long *)(param_2 + 0x58);
                                        if (lVar1 == 0) {
                                          if (lVar12 == 0) goto LAB_100594bb4;
                                        }
                                        else if ((lVar12 != 0) &&
                                                (((uVar8 == *(ulong *)(param_2 + 0x50) &&
                                                  (lVar1 == lVar12)) ||
                                                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                                            (uVar8,lVar1,*(ulong *)(param_2 + 0x50),
                                                             lVar12,0), (uVar8 & 1) != 0)))) {
LAB_100594bb4:
                                          _swift_beginAccess(param_1 + 0x60,auStack_2f0,0,0);
                                          uVar8 = *(ulong *)(param_1 + 0x60);
                                          lVar1 = *(long *)(param_1 + 0x68);
                                          _swift_beginAccess(param_2 + 0x60,auStack_308,0,0);
                                          lVar12 = *(long *)(param_2 + 0x68);
                                          if (lVar1 == 0) {
                                            if (lVar12 == 0) goto LAB_100594c1c;
                                          }
                                          else if ((lVar12 != 0) &&
                                                  (((uVar8 == *(ulong *)(param_2 + 0x60) &&
                                                    (lVar1 == lVar12)) ||
                                                   (
                                                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                                            (uVar8,lVar1,*(ulong *)(param_2 + 0x60),
                                                             lVar12,0), (uVar8 & 1) != 0)))) {
LAB_100594c1c:
                                            _swift_beginAccess(param_1 + 0x70,auStack_320,0,0);
                                            uVar8 = *(ulong *)(param_1 + 0x70);
                                            lVar1 = *(long *)(param_1 + 0x78);
                                            _swift_beginAccess(param_2 + 0x70,auStack_338,0,0);
                                            lVar12 = *(long *)(param_2 + 0x78);
                                            if (lVar1 == 0) {
                                              if (lVar12 == 0) goto LAB_100594c84;
                                            }
                                            else if ((lVar12 != 0) &&
                                                    (((uVar8 == *(ulong *)(param_2 + 0x70) &&
                                                      (lVar1 == lVar12)) ||
                                                     (
                                                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                                            (uVar8,lVar1,*(ulong *)(param_2 + 0x70),
                                                             lVar12,0), (uVar8 & 1) != 0)))) {
LAB_100594c84:
                                              _swift_beginAccess(param_1 + 0x80,auStack_350,0,0);
                                              uVar8 = *(ulong *)(param_1 + 0x80);
                                              lVar1 = *(long *)(param_1 + 0x88);
                                              _swift_beginAccess(param_2 + 0x80,auStack_368,0,0);
                                              lVar12 = *(long *)(param_2 + 0x88);
                                              if (lVar1 == 0) {
                                                if (lVar12 == 0) goto LAB_100594cec;
                                              }
                                              else if ((lVar12 != 0) &&
                                                      (((uVar8 == *(ulong *)(param_2 + 0x80) &&
                                                        (lVar1 == lVar12)) ||
                                                       (
                                                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                                            (uVar8,lVar1,*(ulong *)(param_2 + 0x80),
                                                             lVar12,0), (uVar8 & 1) != 0)))) {
LAB_100594cec:
                                                _swift_beginAccess(param_1 + 0x90,auStack_380,0,0);
                                                uVar8 = *(ulong *)(param_1 + 0x90);
                                                lVar1 = *(long *)(param_1 + 0x98);
                                                _swift_beginAccess(param_2 + 0x90,auStack_398,0,0);
                                                lVar12 = *(long *)(param_2 + 0x98);
                                                if (lVar1 == 0) {
                                                  if (lVar12 == 0) goto LAB_100594d54;
                                                }
                                                else if ((lVar12 != 0) &&
                                                        (((uVar8 == *(ulong *)(param_2 + 0x90) &&
                                                          (lVar1 == lVar12)) ||
                                                         (
                                                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                                            (uVar8,lVar1,*(ulong *)(param_2 + 0x90),
                                                             lVar12,0), (uVar8 & 1) != 0)))) {
LAB_100594d54:
                                                  _swift_beginAccess(param_1 + 0xa0,auStack_3b0,0,0)
                                                  ;
                                                  uVar8 = *(ulong *)(param_1 + 0xa0);
                                                  lVar1 = *(long *)(param_1 + 0xa8);
                                                  _swift_beginAccess(param_2 + 0xa0,auStack_3c8,0,0)
                                                  ;
                                                  lVar12 = *(long *)(param_2 + 0xa8);
                                                  if (lVar1 == 0) {
                                                    if (lVar12 == 0) goto LAB_100594dbc;
                                                  }
                                                  else if ((lVar12 != 0) &&
                                                          (((uVar8 == *(ulong *)(param_2 + 0xa0) &&
                                                            (lVar1 == lVar12)) ||
                                                           (
                                                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                                            (uVar8,lVar1,*(ulong *)(param_2 + 0xa0),
                                                             lVar12,0), (uVar8 & 1) != 0)))) {
LAB_100594dbc:
                                                    _swift_beginAccess(param_1 + 0xb0,auStack_3e0,0,
                                                                       0);
                                                    uVar8 = *(ulong *)(param_1 + 0xb0);
                                                    lVar1 = *(long *)(param_1 + 0xb8);
                                                    _swift_beginAccess(param_2 + 0xb0,auStack_3f8,0,
                                                                       0);
                                                    lVar12 = *(long *)(param_2 + 0xb8);
                                                    if (lVar1 == 0) {
                                                      if (lVar12 == 0) goto LAB_100594e24;
                                                    }
                                                    else if ((lVar12 != 0) &&
                                                            (((uVar8 == *(ulong *)(param_2 + 0xb0)
                                                              && (lVar1 == lVar12)) ||
                                                             (
                                                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                                            (uVar8,lVar1,*(ulong *)(param_2 + 0xb0),
                                                             lVar12,0), (uVar8 & 1) != 0)))) {
LAB_100594e24:
                                                    _swift_beginAccess(param_1 + 0xc0,auStack_410,0,
                                                                       0);
                                                    uVar8 = *(ulong *)(param_1 + 0xc0);
                                                    uVar15 = *(undefined8 *)(param_1 + 200);
                                                    lVar1 = *(long *)(param_1 + 0xd0);
                                                    uVar16 = *(undefined8 *)(param_1 + 0xd8);
                                                    _swift_beginAccess(param_2 + 0xc0,auStack_428,0,
                                                                       0);
                                                    uVar10 = *(undefined8 *)(param_2 + 0xc0);
                                                    uVar2 = *(undefined8 *)(param_2 + 200);
                                                    lVar12 = *(long *)(param_2 + 0xd0);
                                                    uVar3 = *(undefined8 *)(param_2 + 0xd8);
                                                    if (lVar1 == 0) {
                                                      if (lVar12 == 0) {
                                                        _swift_retain(param_1);
                                                        _swift_retain(param_2);
                                                        FUN_1005a7f54(uVar8,uVar15,0,uVar16);
                                                        FUN_1005a7f54(uVar10,uVar2,0,uVar3);
                                                        FUN_100541944(uVar8,uVar15,0,uVar16);
LAB_100595034:
                                                        _swift_beginAccess(param_1 + 0xe0,
                                                                           auStack_440,0,0);
                                                        uVar15 = *(undefined8 *)(param_1 + 0xe0);
                                                        _swift_beginAccess(param_2 + 0xe0,
                                                                           auStack_458,0,0);
                                                        uVar16 = *(undefined8 *)(param_2 + 0xe0);
                                                        _swift_bridgeObjectRetain(uVar15);
                                                        _swift_bridgeObjectRetain(uVar16);
                                                        uVar10 = uVar15;
                                                        FUN_1005707f8(uVar15,uVar16);
                                                        uVar14 = (uint)uVar10;
                                                        _swift_release(param_1);
                                                        _swift_release(param_2);
                                                        _swift_bridgeObjectRelease(uVar15);
                                                        _swift_bridgeObjectRelease(uVar16);
                                                        goto LAB_100594f58;
                                                      }
                                                      lVar11 = 0;
                                                      lVar13 = lVar12;
                                                    }
                                                    else {
                                                      if (lVar12 != 0) {
                                                        FUN_1005a7f54(uVar8,uVar15,lVar1,uVar16);
                                                        FUN_1005a7f54(uVar10,uVar2,lVar12,uVar3);
                                                        _swift_retain(param_1);
                                                        _swift_retain(param_2);
                                                        FUN_1005a7f54(uVar8,uVar15,lVar1,uVar16);
                                                        FUN_1005a7f54(uVar10,uVar2,lVar12,uVar3);
                                                        uVar9 = uVar8;
                                                        FUN_1005a7724(uVar8,uVar15,lVar1,uVar16,
                                                                      uVar10,uVar2,lVar12,uVar3);
                                                        FUN_100541944(uVar10,uVar2,lVar12,uVar3);
                                                        FUN_100541944(uVar8,uVar15,lVar1,uVar16);
                                                        FUN_100541944(uVar10,uVar2,lVar12,uVar3);
                                                        FUN_100541944(uVar8,uVar15,lVar1,uVar16);
                                                        if ((uVar9 & 1) != 0) goto LAB_100595034;
                                                        _swift_release(param_1);
                                                        _swift_release(param_2);
                                                        goto LAB_100594f54;
                                                      }
                                                      lVar11 = lVar1;
                                                      lVar13 = 0;
                                                    }
                                                    FUN_1005a7f54(uVar8,uVar15,lVar11,uVar16);
                                                    FUN_1005a7f54(uVar10,uVar2,lVar13,uVar3);
                                                    FUN_100541944(uVar8,uVar15,lVar1,uVar16);
                                                    FUN_100541944(uVar10,uVar2,lVar12,uVar3);
                                                    uVar14 = 0;
                                                    goto LAB_100594f58;
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    else if ((bVar5 != 2) && (((bVar4 ^ bVar5) & 1) == 0))
                                    goto LAB_100594b4c;
                                  }
                                }
                                else if ((bVar5 != 2) && (((bVar4 ^ bVar5) & 1) == 0))
                                goto LAB_100594af8;
                              }
                            }
                            else if ((bVar5 != 2) && (((bVar4 ^ bVar5) & 1) == 0))
                            goto LAB_100594aa4;
                          }
                        }
                        else if ((bVar5 != 2) && (((bVar4 ^ bVar5) & 1) == 0)) goto LAB_100594a50;
                      }
                    }
                    else if ((bVar5 != 2) && (((bVar4 ^ bVar5) & 1) == 0)) goto LAB_1005949fc;
                  }
                }
              }
              else if ((bVar5 != 2) && (((bVar4 ^ bVar5) & 1) == 0)) goto LAB_1005948e8;
            }
          }
          else if ((bVar5 != 2) && (((bVar4 ^ bVar5) & 1) == 0)) goto LAB_100594894;
        }
      }
      else if ((bVar5 != 2) && (((bVar4 ^ bVar5) & 1) == 0)) goto LAB_100594840;
    }
  }
LAB_100594f54:
  uVar14 = 0;
LAB_100594f58:
  return uVar14 & 1;
}

