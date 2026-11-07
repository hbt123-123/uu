// rea decompile_all
// name: FUN_100364220
// address: 0x100364220
// body: available
// range: 0x100364220-0x10036551b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100364220(undefined8 *param_1,ID param_2,undefined8 param_3,undefined1 *param_4,
                  long param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ID IVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  undefined8 uStack_90;
  undefined4 auStack_88 [2];
  undefined1 *apuStack_80 [4];
  
  lVar2 = 0;
  apuStack_80[2] = param_4;
  apuStack_80[3] = (undefined1 *)param_6;
  FUN_100365824();
  lVar16 = (long)apuStack_80 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar3 = &DAT_100a888f0;
  FUN_100004bb4(&DAT_100a888f0,&DAT_10081cb80);
  lVar13 = lVar16 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s10Foundation10URLRequestVMa();
  lVar15 = *(long *)(lVar4 + -8);
  lVar14 = lVar13 - (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_5 == 0) {
    lVar2 = 0;
    FUN_100365888();
    _swift_storeEnumTagMultiPayload(param_1,lVar2,6);
                    /* WARNING: Could not recover jumptable at 0x0001003643a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar2 + -8) + 0x38))(param_1,0,1,lVar2);
    return;
  }
  FUN_10036c9e0(param_3,lVar13);
  lVar5 = lVar13;
  (**(code **)(lVar15 + 0x30))(lVar13,1,lVar4);
  if ((int)lVar5 == 1) {
    FUN_100040bb4(lVar13,&DAT_100a888f0,&DAT_10081cb80);
    puVar10 = apuStack_80[3];
    *param_1 = apuStack_80[3];
    uVar6 = 0;
    FUN_100365874(0);
    uVar12 = 9;
    goto LAB_100364334;
  }
  pcVar17 = *(code **)(lVar15 + 0x20);
  (*pcVar17)(lVar14,lVar13,lVar4);
  IVar7 = _objc_msgSend(param_2,"statusCode");
  puVar10 = apuStack_80[2];
  if (0x194 < (long)IVar7) {
    if (IVar7 - 500 < 6) {
      IVar7 = _objc_msgSend(param_2,"statusCode");
      if (5 < IVar7 - 500) {
        *(undefined4 *)(lVar14 + -8) = 0;
        *(undefined8 *)(lVar14 + -0x10) = 0x194;
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0,0xe000000000000000,"Filepicker/FilePickerTaskError.swift",
                   0x24,2);
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x10036551c);
        (*pcVar17)();
      }
      puVar3 = &DAT_100a88a88;
      FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
      iVar1 = *(int *)(puVar3 + 0x30);
      (*pcVar17)(lVar16,lVar14,lVar4);
      puVar10 = apuStack_80[3];
      *(undefined1 **)(lVar16 + iVar1) = apuStack_80[3];
      _swift_storeEnumTagMultiPayload(lVar16,lVar2,IVar7 - 500);
      FUN_1000823d8(lVar16,param_1,FUN_100365824);
      lVar2 = 0;
      FUN_100365888();
      uVar6 = 4;
      goto LAB_100364b38;
    }
    if (IVar7 == 0x195) {
LAB_100364ad8:
      puVar3 = &DAT_100a88a88;
      FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
      iVar1 = *(int *)(puVar3 + 0x30);
      (*pcVar17)(param_1,lVar14,lVar4);
      puVar10 = apuStack_80[3];
      *(undefined1 **)((long)param_1 + (long)iVar1) = apuStack_80[3];
      uVar6 = 0;
      FUN_10036584c(0);
      uVar12 = 0xb;
      goto LAB_100364b1c;
    }
    if (IVar7 == 0x19d) goto LAB_1003645f0;
LAB_10036546c:
    puVar10 = apuStack_80[3];
    _swift_errorRetain(apuStack_80[3]);
    IVar7 = _objc_msgSend(param_2,"statusCode");
    (**(code **)(lVar15 + 8))(lVar14,lVar4);
    *param_1 = puVar10;
    param_1[1] = IVar7;
    lVar2 = 0;
    FUN_100365888();
    _swift_storeEnumTagMultiPayload(param_1,lVar2,5);
    pcVar17 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
    uVar6 = 0;
LAB_1003654d0:
    (*pcVar17)(param_1,uVar6,1,lVar2);
    return;
  }
  if ((long)IVar7 < 0x191) {
    if (IVar7 == 200) {
      (**(code **)(lVar15 + 8))(lVar14,lVar4);
      lVar2 = 0;
      FUN_100365888();
      pcVar17 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
      uVar6 = 1;
      goto LAB_1003654d0;
    }
    if (IVar7 != 400) goto LAB_10036546c;
    uVar8 = 0;
    if (((apuStack_80[2] == (undefined1 *)0x796e614d206f6f54) && (param_5 == -0x12ffff8c8f90b9e0))
       || (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                     (0x796e614d206f6f54,0xed000073706f4620,apuStack_80[2],param_5,0),
          (uVar8 & 1) != 0)) {
      puVar3 = &DAT_100a88a88;
      FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
      iVar1 = *(int *)(puVar3 + 0x30);
      (*pcVar17)(param_1,lVar14,lVar4);
      puVar10 = apuStack_80[3];
      *(undefined1 **)((long)param_1 + (long)iVar1) = apuStack_80[3];
      uVar6 = 0;
      FUN_100365874(0);
      uVar12 = 0;
      goto LAB_100364334;
    }
    if ((puVar10 == (undefined1 *)0xd000000000000011) && (param_5 == -0x7ffffffeff753760)) {
LAB_1003645f0:
      puVar3 = &DAT_100a88a88;
      FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
      iVar1 = *(int *)(puVar3 + 0x30);
      (*pcVar17)(param_1,lVar14,lVar4);
      puVar10 = apuStack_80[3];
      *(undefined1 **)((long)param_1 + (long)iVar1) = apuStack_80[3];
      uVar6 = 0;
      FUN_100365874(0);
      uVar12 = 3;
    }
    else {
      uVar8 = 0xd000000000000011;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000011,0x80000001008ac8a0,apuStack_80[2],param_5,0);
      if ((uVar8 & 1) != 0) goto LAB_1003645f0;
      if ((apuStack_80[2] == (undefined1 *)0xd000000000000011) && (param_5 == -0x7ffffffeff753740))
      {
LAB_100364828:
        puVar3 = &DAT_100a88a88;
        FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
        iVar1 = *(int *)(puVar3 + 0x30);
        (*pcVar17)(param_1,lVar14,lVar4);
        puVar10 = apuStack_80[3];
        *(undefined1 **)((long)param_1 + (long)iVar1) = apuStack_80[3];
        uVar6 = 0;
        FUN_100365874(0);
        uVar12 = 4;
      }
      else {
        uVar8 = 0xd000000000000011;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0xd000000000000011,0x80000001008ac8c0,apuStack_80[2],param_5,0);
        if ((uVar8 & 1) != 0) goto LAB_100364828;
        puVar10 = &DAT_d000000000000013;
        if (((apuStack_80[2] == &DAT_d000000000000013) && (param_5 == -0x7ffffffeff753720)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (&DAT_d000000000000013,0x80000001008ac8e0,apuStack_80[2],param_5,0),
           ((ulong)puVar10 & 1) != 0)) {
          puVar3 = &DAT_100a88a88;
          FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
          iVar1 = *(int *)(puVar3 + 0x30);
          (*pcVar17)(param_1,lVar14,lVar4);
          puVar10 = apuStack_80[3];
          *(undefined1 **)((long)param_1 + (long)iVar1) = apuStack_80[3];
          uVar6 = 0;
          FUN_100365874(0);
          uVar12 = 1;
        }
        else {
          if ((apuStack_80[2] != &DAT_d000000000000013) || (param_5 != -0x7ffffffeff753700)) {
            puVar10 = &DAT_d000000000000013;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (&DAT_d000000000000013,0x80000001008ac900,apuStack_80[2],param_5,0);
            if (((ulong)puVar10 & 1) == 0) {
              uVar8 = 0;
              if (((apuStack_80[2] == (undefined1 *)0xd00000000000001c) &&
                  (param_5 == -0x7ffffffeff7536e0)) ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (0xd00000000000001c,0x80000001008ac920,apuStack_80[2],param_5,0),
                 (uVar8 & 1) != 0)) {
                puVar3 = &DAT_100a88a88;
                FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
                iVar1 = *(int *)(puVar3 + 0x30);
                (*pcVar17)(param_1,lVar14,lVar4);
                puVar10 = apuStack_80[3];
                *(undefined1 **)((long)param_1 + (long)iVar1) = apuStack_80[3];
                uVar6 = 0;
                FUN_100365874(0);
                uVar12 = 7;
              }
              else {
                uVar8 = 0;
                if (((apuStack_80[2] == (undefined1 *)0xd00000000000001a) &&
                    (param_5 == -0x7ffffffeff7536c0)) ||
                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (0xd00000000000001a,0x80000001008ac940,apuStack_80[2],param_5,0),
                   (uVar8 & 1) != 0)) {
                  puVar3 = &DAT_100a88a88;
                  FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
                  iVar1 = *(int *)(puVar3 + 0x30);
                  (*pcVar17)(param_1,lVar14,lVar4);
                  puVar10 = apuStack_80[3];
                  *(undefined1 **)((long)param_1 + (long)iVar1) = apuStack_80[3];
                  uVar6 = 0;
                  FUN_100365874(0);
                  uVar12 = 8;
                }
                else {
                  uVar8 = 0;
                  __sSS9hasPrefixySbSSF
                            (0xd00000000000001e,0x80000001008ac960,apuStack_80[2],param_5);
                  if ((uVar8 & 1) == 0) goto LAB_10036546c;
                  puVar3 = &DAT_100a88a88;
                  FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
                  iVar1 = *(int *)(puVar3 + 0x30);
                  (*pcVar17)(param_1,lVar14,lVar4);
                  puVar10 = apuStack_80[3];
                  *(undefined1 **)((long)param_1 + (long)iVar1) = apuStack_80[3];
                  uVar6 = 0;
                  FUN_100365874(0);
                  uVar12 = 6;
                }
              }
              goto LAB_100364334;
            }
          }
          puVar3 = &DAT_100a88a88;
          FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
          iVar1 = *(int *)(puVar3 + 0x30);
          (*pcVar17)(param_1,lVar14,lVar4);
          puVar10 = apuStack_80[3];
          *(undefined1 **)((long)param_1 + (long)iVar1) = apuStack_80[3];
          uVar6 = 0;
          FUN_100365874(0);
          uVar12 = 2;
        }
      }
    }
LAB_100364334:
    _swift_storeEnumTagMultiPayload(param_1,uVar6,uVar12);
    lVar2 = 0;
    FUN_100365888();
    uVar6 = 0;
    goto LAB_100364b38;
  }
  if (IVar7 == 0x191) {
    uVar8 = 0;
    if (((apuStack_80[2] == (undefined1 *)0x2065726975716552) && (param_5 == -0x12ffff919a9490ac))
       || (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                     (0x2065726975716552,0xed00006e656b6f54,apuStack_80[2],param_5,0),
          (uVar8 & 1) != 0)) {
      puVar3 = &DAT_100a88a88;
      FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
      iVar1 = *(int *)(puVar3 + 0x30);
      (*pcVar17)(param_1,lVar14,lVar4);
      puVar10 = apuStack_80[3];
      *(undefined1 **)((long)param_1 + (long)iVar1) = apuStack_80[3];
      uVar6 = 0;
      FUN_100365860(0);
      uVar12 = 0;
    }
    else {
      uVar8 = 0x2064696c61766e49;
      if (((puVar10 == (undefined1 *)0x2064696c61766e49) && (param_5 == -0x12ffff919a9490ac)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x2064696c61766e49,0xed00006e656b6f54,puVar10,param_5,0), (uVar8 & 1) != 0)) {
        puVar3 = &DAT_100a88a88;
        FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
        iVar1 = *(int *)(puVar3 + 0x30);
        (*pcVar17)(param_1,lVar14,lVar4);
        puVar10 = apuStack_80[3];
        *(undefined1 **)((long)param_1 + (long)iVar1) = apuStack_80[3];
        uVar6 = 0;
        FUN_100365860(0);
        uVar12 = 2;
      }
      else {
        uVar8 = 0;
        if (((puVar10 == &DAT_d000000000000010) && (param_5 == -0x7ffffffeff7537a0)) ||
           (uVar11 = uVar8,
           __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                     (&DAT_d000000000000010,0x80000001008ac860,apuStack_80[2],param_5,0),
           (uVar11 & 1) != 0)) {
          puVar3 = &DAT_100a88a88;
          FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
          iVar1 = *(int *)(puVar3 + 0x30);
          (*pcVar17)(param_1,lVar14,lVar4);
          puVar10 = apuStack_80[3];
          *(undefined1 **)((long)param_1 + (long)iVar1) = apuStack_80[3];
          uVar6 = 0;
          FUN_100365860(0);
          uVar12 = 1;
        }
        else if (((apuStack_80[2] == &DAT_d000000000000010) && (param_5 == -0x7ffffffeff7537c0)) ||
                (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                           (&DAT_d000000000000010,0x80000001008ac840,apuStack_80[2],param_5,0),
                puVar10 = apuStack_80[2], (uVar8 & 1) != 0)) {
          puVar3 = &DAT_100a88a88;
          FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
          iVar1 = *(int *)(puVar3 + 0x30);
          (*pcVar17)(param_1,lVar14,lVar4);
          puVar10 = apuStack_80[3];
          *(undefined1 **)((long)param_1 + (long)iVar1) = apuStack_80[3];
          uVar6 = 0;
          FUN_100365860(0);
          uVar12 = 3;
        }
        else {
          if ((apuStack_80[2] != (undefined1 *)0xd000000000000011) ||
             (param_5 != -0x7ffffffeff753780)) {
            uVar8 = 0xd000000000000011;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0xd000000000000011,0x80000001008ac880,apuStack_80[2],param_5,0);
            if ((uVar8 & 1) == 0) {
              uVar8 = 0;
              if (((puVar10 != (undefined1 *)0x20734920656c6946) || (param_5 != -0x109b9a8c8a999aae)
                  ) && (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                  (0x20734920656c6946,0xef64657375666552,apuStack_80[2],param_5,0),
                       (uVar8 & 1) == 0)) goto LAB_10036546c;
              puVar3 = &DAT_100a88a88;
              FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
              iVar1 = *(int *)(puVar3 + 0x30);
              (*pcVar17)(param_1,lVar14,lVar4);
              puVar10 = apuStack_80[3];
              *(undefined1 **)((long)param_1 + (long)iVar1) = apuStack_80[3];
              uVar6 = 0;
              FUN_100365860(0);
              uVar12 = 5;
              goto LAB_1003646f8;
            }
          }
          puVar3 = &DAT_100a88a88;
          FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
          iVar1 = *(int *)(puVar3 + 0x30);
          (*pcVar17)(param_1,lVar14,lVar4);
          puVar10 = apuStack_80[3];
          *(undefined1 **)((long)param_1 + (long)iVar1) = apuStack_80[3];
          uVar6 = 0;
          FUN_100365860(0);
          uVar12 = 4;
        }
      }
    }
LAB_1003646f8:
    _swift_storeEnumTagMultiPayload(param_1,uVar6,uVar12);
    lVar2 = 0;
    FUN_100365888();
    uVar6 = 1;
    goto LAB_100364b38;
  }
  if (IVar7 != 0x193) {
    if (IVar7 != 0x194) goto LAB_10036546c;
    if ((apuStack_80[2] == (undefined1 *)0xd000000000000011) && (param_5 == -0x7ffffffeff7538a0)) {
LAB_100364440:
      puVar3 = &DAT_100a88a88;
      FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
      iVar1 = *(int *)(puVar3 + 0x30);
      (*pcVar17)(param_1,lVar14,lVar4);
      puVar10 = apuStack_80[3];
      *(undefined1 **)((long)param_1 + (long)iVar1) = apuStack_80[3];
      uVar6 = 0;
      FUN_100365838(0);
      uVar12 = 0;
    }
    else {
      uVar8 = 0xd000000000000011;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000011,0x80000001008ac760,apuStack_80[2],param_5,0);
      if ((uVar8 & 1) != 0) goto LAB_100364440;
      uVar8 = 0;
      if (((puVar10 == (undefined1 *)0x746f4e20656c6946) && (param_5 == -0x11ff9b918a90b9e0)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x746f4e20656c6946,0xee00646e756f4620,puVar10,param_5,0), (uVar8 & 1) != 0)) {
        puVar3 = &DAT_100a88a88;
        FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
        iVar1 = *(int *)(puVar3 + 0x30);
        (*pcVar17)(param_1,lVar14,lVar4);
        puVar10 = apuStack_80[3];
        *(undefined1 **)((long)param_1 + (long)iVar1) = apuStack_80[3];
        uVar6 = 0;
        FUN_100365838(0);
        uVar12 = 1;
      }
      else {
        uVar8 = 0;
        if (((puVar10 != (undefined1 *)0x20734920656c6946) || (param_5 != -0x109b9a8d968f87bb)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x20734920656c6946,0xef64657269707845,puVar10,param_5,0), (uVar8 & 1) == 0))
        goto LAB_10036546c;
        puVar3 = &DAT_100a88a88;
        FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
        iVar1 = *(int *)(puVar3 + 0x30);
        (*pcVar17)(param_1,lVar14,lVar4);
        puVar10 = apuStack_80[3];
        *(undefined1 **)((long)param_1 + (long)iVar1) = apuStack_80[3];
        uVar6 = 0;
        FUN_100365838(0);
        uVar12 = 2;
      }
    }
    _swift_storeEnumTagMultiPayload(param_1,uVar6,uVar12);
    lVar2 = 0;
    FUN_100365888();
    uVar6 = 3;
    goto LAB_100364b38;
  }
  if ((apuStack_80[2] == &DAT_d000000000000013) && (param_5 == -0x7ffffffeff753880)) {
LAB_10036475c:
    puVar3 = &DAT_100a88a88;
    FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
    iVar1 = *(int *)(puVar3 + 0x30);
    (*pcVar17)(param_1,lVar14,lVar4);
    puVar10 = apuStack_80[3];
    *(undefined1 **)((long)param_1 + (long)iVar1) = apuStack_80[3];
    uVar6 = 0;
    FUN_10036584c(0);
    uVar12 = 0;
  }
  else {
    puVar9 = &DAT_d000000000000013;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (&DAT_d000000000000013,0x80000001008ac780,apuStack_80[2],param_5,0);
    if (((ulong)puVar9 & 1) != 0) goto LAB_10036475c;
    uVar8 = 0;
    if (((puVar10 == (undefined1 *)0x6954206e656b6f54) && (param_5 == -0x12ffff8b8a909a93)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x6954206e656b6f54,0xed000074756f656d,puVar10,param_5,0), (uVar8 & 1) != 0)) {
      puVar3 = &DAT_100a88a88;
      FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
      iVar1 = *(int *)(puVar3 + 0x30);
      (*pcVar17)(param_1,lVar14,lVar4);
      puVar10 = apuStack_80[3];
      *(undefined1 **)((long)param_1 + (long)iVar1) = apuStack_80[3];
      uVar6 = 0;
      FUN_10036584c(0);
      uVar12 = 1;
    }
    else {
      uVar8 = 0;
      if (((puVar10 == &DAT_d000000000000010) && (param_5 == -0x7ffffffeff753860)) ||
         (uVar11 = uVar8,
         __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (&DAT_d000000000000010,0x80000001008ac7a0,apuStack_80[2],param_5,0),
         (uVar11 & 1) != 0)) goto LAB_100364ad8;
      uVar11 = 0x20746f4e204c5255;
      if (((apuStack_80[2] == (undefined1 *)0x20746f4e204c5255) && (param_5 == -0x12ffff979c8b9eb3))
         || (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                       (0x20746f4e204c5255,0xed0000686374614d,apuStack_80[2],param_5,0),
            (uVar11 & 1) != 0)) {
        puVar3 = &DAT_100a88a88;
        FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
        iVar1 = *(int *)(puVar3 + 0x30);
        (*pcVar17)(param_1,lVar14,lVar4);
        puVar10 = apuStack_80[3];
        *(undefined1 **)((long)param_1 + (long)iVar1) = apuStack_80[3];
        uVar6 = 0;
        FUN_10036584c(0);
        uVar12 = 3;
      }
      else {
        uVar11 = 0;
        if (((apuStack_80[2] == (undefined1 *)0x20734920656c6946) &&
            (param_5 == -0x109b9a8d968f87bb)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x20734920656c6946,0xef64657269707845,apuStack_80[2],param_5,0),
           (uVar11 & 1) != 0)) {
          puVar3 = &DAT_100a88a88;
          FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
          iVar1 = *(int *)(puVar3 + 0x30);
          (*pcVar17)(param_1,lVar14,lVar4);
          puVar10 = apuStack_80[3];
          *(undefined1 **)((long)param_1 + (long)iVar1) = apuStack_80[3];
          uVar6 = 0;
          FUN_10036584c(0);
          uVar12 = 4;
        }
        else {
          apuStack_80[1] = (undefined1 *)0xd000000000000012;
          if ((apuStack_80[2] != (undefined1 *)0xd000000000000012) ||
             (param_5 != -0x7ffffffeff753840)) {
            uVar11 = 0;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0xd000000000000012,0x80000001008ac7c0,apuStack_80[2],param_5,0);
            if ((uVar11 & 1) == 0) {
              if ((apuStack_80[2] != apuStack_80[1]) || (param_5 != -0x7ffffffeff753820)) {
                uVar11 = 0;
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (0xd000000000000012,0x80000001008ac7e0,apuStack_80[2],param_5,0);
                if ((uVar11 & 1) == 0) {
                  uVar11 = 0;
                  if (((apuStack_80[2] == (undefined1 *)0xd00000000000001c) &&
                      (param_5 == -0x7ffffffeff753800)) ||
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (0xd00000000000001c,0x80000001008ac800,apuStack_80[2],param_5,0),
                     (uVar11 & 1) != 0)) {
                    puVar3 = &DAT_100a88a88;
                    FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
                    iVar1 = *(int *)(puVar3 + 0x30);
                    (*pcVar17)(param_1,lVar14,lVar4);
                    puVar10 = apuStack_80[3];
                    *(undefined1 **)((long)param_1 + (long)iVar1) = apuStack_80[3];
                    uVar6 = 0;
                    FUN_10036584c(0);
                    uVar12 = 7;
                  }
                  else {
                    uVar11 = 0xd00000000000001b;
                    if (((apuStack_80[2] == (undefined1 *)0xd00000000000001b) &&
                        (param_5 == -0x7ffffffeff7537e0)) ||
                       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                  (0xd00000000000001b,0x80000001008ac820,apuStack_80[2],param_5,0),
                       (uVar11 & 1) != 0)) {
                      puVar3 = &DAT_100a88a88;
                      FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
                      iVar1 = *(int *)(puVar3 + 0x30);
                      (*pcVar17)(param_1,lVar14,lVar4);
                      puVar10 = apuStack_80[3];
                      *(undefined1 **)((long)param_1 + (long)iVar1) = apuStack_80[3];
                      uVar6 = 0;
                      FUN_10036584c(0);
                      uVar12 = 8;
                    }
                    else if (((apuStack_80[2] == &DAT_d000000000000010) &&
                             (param_5 == -0x7ffffffeff7537c0)) ||
                            (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                       (&DAT_d000000000000010,0x80000001008ac840,apuStack_80[2],
                                        param_5,0), (uVar8 & 1) != 0)) {
                      puVar3 = &DAT_100a88a88;
                      FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
                      iVar1 = *(int *)(puVar3 + 0x30);
                      (*pcVar17)(param_1,lVar14,lVar4);
                      puVar10 = apuStack_80[3];
                      *(undefined1 **)((long)param_1 + (long)iVar1) = apuStack_80[3];
                      uVar6 = 0;
                      FUN_10036584c(0);
                      uVar12 = 9;
                    }
                    else {
                      uVar8 = 0x5320746f4e20704f;
                      if (((apuStack_80[2] != (undefined1 *)0x5320746f4e20704f) ||
                          (param_5 != -0x11ff8b8d908f8f8b)) &&
                         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                    (0x5320746f4e20704f,0xee0074726f707075,apuStack_80[2],param_5,0)
                         , (uVar8 & 1) == 0)) goto LAB_10036546c;
                      puVar3 = &DAT_100a88a88;
                      FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
                      iVar1 = *(int *)(puVar3 + 0x30);
                      (*pcVar17)(param_1,lVar14,lVar4);
                      puVar10 = apuStack_80[3];
                      *(undefined1 **)((long)param_1 + (long)iVar1) = apuStack_80[3];
                      uVar6 = 0;
                      FUN_10036584c(0);
                      uVar12 = 10;
                    }
                  }
                  goto LAB_100364b1c;
                }
              }
              puVar3 = &DAT_100a88a88;
              FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
              iVar1 = *(int *)(puVar3 + 0x30);
              (*pcVar17)(param_1,lVar14,lVar4);
              puVar10 = apuStack_80[3];
              *(undefined1 **)((long)param_1 + (long)iVar1) = apuStack_80[3];
              uVar6 = 0;
              FUN_10036584c(0);
              uVar12 = 6;
              goto LAB_100364b1c;
            }
          }
          puVar3 = &DAT_100a88a88;
          FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
          iVar1 = *(int *)(puVar3 + 0x30);
          (*pcVar17)(param_1,lVar14,lVar4);
          puVar10 = apuStack_80[3];
          *(undefined1 **)((long)param_1 + (long)iVar1) = apuStack_80[3];
          uVar6 = 0;
          FUN_10036584c(0);
          uVar12 = 5;
        }
      }
    }
  }
LAB_100364b1c:
  _swift_storeEnumTagMultiPayload(param_1,uVar6,uVar12);
  lVar2 = 0;
  FUN_100365888();
  uVar6 = 2;
LAB_100364b38:
  _swift_storeEnumTagMultiPayload(param_1,lVar2,uVar6);
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(param_1,0,1,lVar2);
  _swift_errorRetain(puVar10);
  return;
}

