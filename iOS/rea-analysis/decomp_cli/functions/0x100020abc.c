// rea decompile_all
// name: FUN_100020abc
// address: 0x100020abc
// body: available
// range: 0x100020abc-0x100021347 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100021238 to 0x1000c2828 _exit (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x100021344 to 0x1000c2828 _exit (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100020abc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  byte bVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  char *pcVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  undefined1 auStack_150 [16];
  undefined **local_140;
  undefined8 local_128;
  ulong local_120;
  long local_118;
  long local_108;
  undefined *local_100;
  long local_f8;
  
  __ss11CommandLineO9argumentsSaySSGvgZ();
  lVar8 = param_1;
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_100022244(param_1,param_1 + 0x20,1,*(long *)(param_1 + 0x10) << 1 | 1);
    _swift_bridgeObjectRelease(param_1);
  }
  local_100 = (undefined *)0x6e6f736a2d2d;
  local_f8 = -0x1a00000000000000;
  local_108 = lVar8;
  (*(code *)PTR____chkstk_darwin_1000f0278)();
  local_140 = &local_100;
  _swift_retain(lVar8);
  bVar4 = 0;
  FUN_10002150c(FUN_10002236c,auStack_150,lVar8);
  DAT_100105680 = bVar4 & 1;
  if (*(long *)(lVar8 + 0x10) != 0) {
    uVar19 = *(ulong *)(lVar8 + 0x20);
    lVar15 = *(long *)(lVar8 + 0x28);
    _swift_bridgeObjectRetain(lVar15);
    _swift_release(lVar8);
    if ((uVar19 == 0x6f69737265762d2d) && (lVar15 == -0x16ffffffffffff92)) {
      _swift_bridgeObjectRelease(0xe90000000000006e);
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar19,lVar15,0x6f69737265762d2d,0xe90000000000006e,0);
      _swift_bridgeObjectRelease(lVar15);
      if ((uVar19 & 1) == 0) {
        lVar15 = *(long *)(lVar8 + 0x10);
        if (lVar15 != 0) goto LAB_100020be8;
        goto LAB_100020d08;
      }
    }
LAB_100021194:
    if (*(long *)(lVar8 + 0x10) != 1) {
      pcVar13 = "ell provided more than once";
      uVar11 = 0xd000000000000048;
      goto LAB_100021230;
    }
    puVar9 = &DAT_100102bd0;
    FUN_10000eb08(&DAT_100102bd0,&DAT_1000cf760);
    _swift_allocObject();
    puVar5 = PTR___sSSN_1000f02f8;
    *(undefined8 *)(puVar9 + 0x18) = 2;
    *(undefined8 *)(puVar9 + 0x10) = 1;
    *(undefined **)(puVar9 + 0x38) = puVar5;
    *(undefined8 *)(puVar9 + 0x20) = 0x302e302e31;
    *(undefined8 *)(puVar9 + 0x28) = 0xe500000000000000;
    __ss5print_9separator10terminatoryypd_S2StF();
    goto LAB_10002133c;
  }
  _swift_release(lVar8);
  lVar15 = *(long *)(lVar8 + 0x10);
  if (lVar15 == 0) goto LAB_100020d08;
LAB_100020be8:
  uVar19 = *(ulong *)(lVar8 + 0x20);
  if (((uVar19 == 0x762d) && (*(long *)(lVar8 + 0x28) == -0x1e00000000000000)) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar19,*(long *)(lVar8 + 0x28),0x762d,0xe200000000000000,0), (uVar19 & 1) != 0))
  goto LAB_100021194;
  uVar19 = *(ulong *)(lVar8 + 0x20);
  if ((uVar19 == 0x6d7265746c) && (*(long *)(lVar8 + 0x28) == -0x1b00000000000000)) {
    if (lVar15 != 1) {
LAB_100020c60:
      uVar19 = *(ulong *)(lVar8 + 0x30);
      lVar15 = *(long *)(lVar8 + 0x38);
      if (((uVar19 == 0x6e6f736a2d2d) && (lVar15 == -0x1a00000000000000)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar19,lVar15,0x6e6f736a2d2d,0xe600000000000000,0), (uVar19 & 1) != 0)) {
        FUN_100021be0(1);
        _swift_bridgeObjectRelease(lVar15);
        lVar8 = local_108;
        uVar19 = *(ulong *)(local_108 + 0x10);
        if (1 < uVar19) {
          lVar15 = local_108;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((int)lVar15 == 0) || (*(ulong *)(lVar8 + 0x18) >> 1 <= uVar19)) {
            FUN_100021cbc();
            lVar8 = lVar15;
            local_108 = lVar15;
          }
          FUN_10002240c(2,2,1,0x6e6f736a2d2d,0xe600000000000000);
          local_108 = lVar8;
        }
      }
    }
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    if ((lVar15 != 1) && ((uVar19 & 1) != 0)) goto LAB_100020c60;
  }
LAB_100020d08:
  if (*(long *)(lVar8 + 0x10) == 0) {
    return lVar8;
  }
  uVar19 = *(ulong *)(lVar8 + 0x20);
  if (((uVar19 == 0x6d726574) && (*(long *)(lVar8 + 0x28) == -0x1c00000000000000)) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar19,*(long *)(lVar8 + 0x28),0x6d726574,0xe400000000000000,0), (uVar19 & 1) != 0)
     ) {
    local_100 = (undefined *)0x77656e;
    local_f8 = -0x1d00000000000000;
    (*(code *)PTR____chkstk_darwin_1000f0278)();
    local_140 = &local_100;
    uVar19 = 0;
    FUN_10002150c(FUN_1000224ec,auStack_150,lVar8);
    if ((uVar19 & 1) != 0) {
      local_128 = 0;
      uVar19 = *(ulong *)(lVar8 + 0x10);
      puVar9 = PTR___swiftEmptyArrayStorage_1000f0740;
      if (uVar19 != 0) {
        uVar12 = 0;
        local_118 = lVar8 + 0x28;
        local_120 = uVar19 - 1;
        do {
          plVar17 = (long *)(local_118 + uVar12 * 0x10);
          uVar18 = uVar12;
          while( true ) {
            if (*(ulong *)(lVar8 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10002115c);
              (*pcVar3)();
            }
            uVar1 = plVar17[-1];
            lVar15 = *plVar17;
            if (uVar1 == 0x6c6c6568732d2d && lVar15 == -0x1900000000000000) break;
            uVar12 = uVar1;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar1,lVar15,0x6c6c6568732d2d,0xe700000000000000,0);
            _swift_bridgeObjectRetain(lVar15);
            if ((uVar12 & 1) != 0) goto LAB_100020e7c;
            uVar12 = 0x3d6c6c6568732d2d;
            __sSS9hasPrefixySbSSF(0x3d6c6c6568732d2d,0xe800000000000000,uVar1,lVar15);
            if ((uVar12 & 1) != 0) goto LAB_100020e7c;
            uVar18 = uVar18 + 1;
            _swift_bridgeObjectRelease(lVar15);
            plVar17 = plVar17 + 2;
            if (uVar19 == uVar18) goto LAB_100020f04;
          }
          _swift_bridgeObjectRetain(lVar15);
LAB_100020e7c:
          puVar5 = puVar9;
          _swift_isUniquelyReferenced_nonNull_native();
          local_100 = puVar9;
          if (((ulong)puVar5 & 1) == 0) {
            FUN_100021c68(0,*(long *)(puVar9 + 0x10) + 1,1);
          }
          uVar2 = *(ulong *)(local_100 + 0x10);
          if (*(ulong *)(local_100 + 0x18) >> 1 <= uVar2) {
            FUN_100021c68(1 < *(ulong *)(local_100 + 0x18),uVar2 + 1,1);
          }
          uVar12 = uVar18 + 1;
          *(ulong *)(local_100 + 0x10) = uVar2 + 1;
          *(ulong *)(local_100 + uVar2 * 0x10 + 0x20) = uVar1;
          *(long *)(local_100 + uVar2 * 0x10 + 0x28) = lVar15;
          puVar9 = local_100;
        } while (local_120 != uVar18);
      }
LAB_100020f04:
      uVar19 = *(ulong *)(puVar9 + 0x10);
      _swift_release(puVar9);
      if (1 < uVar19) {
        pcVar13 = "Invalid command-line usage: ";
        uVar11 = 0xd00000000000003b;
LAB_100021230:
        FUN_100022760(2,uVar11,(ulong)pcVar13 | 0x8000000000000000,DAT_100105680);
                    /* WARNING: Subroutine does not return */
        _exit(2);
      }
    }
  }
  if (*(long *)(lVar8 + 0x10) != 2) {
    return lVar8;
  }
  puVar9 = &DAT_100102c30;
  FUN_10000eb08(&DAT_100102c30,&DAT_1000d0700);
  _swift_initStaticObject();
  local_100 = *(undefined **)(lVar8 + 0x30);
  lVar15 = *(long *)(lVar8 + 0x38);
  local_f8 = lVar15;
  (*(code *)PTR____chkstk_darwin_1000f0278)();
  local_140 = &local_100;
  _swift_bridgeObjectRetain(lVar15);
  uVar19 = 0;
  FUN_10002150c(FUN_1000224ec,auStack_150,puVar9);
  puVar5 = PTR___sSSN_1000f02f8;
  _swift_arrayDestroy(puVar9 + 0x20,3,PTR___sSSN_1000f02f8);
  _swift_bridgeObjectRelease();
  if ((uVar19 & 1) == 0) {
    return lVar8;
  }
  FUN_100021a20();
  lVar6 = lVar15;
  FUN_100021a60();
  lVar7 = lVar6;
  FUN_100021aa0();
  (**(code **)(lVar15 + 0x10))(&local_100,&DAT_1000f3878,lVar15);
  lVar16 = local_f8;
  puVar9 = local_100;
  _swift_bridgeObjectRetain(local_f8);
  FUN_100022384(&local_100);
  if (*(long *)(lVar8 + 0x10) == 0) goto LAB_100021188;
  if (lVar16 == 0) {
LAB_100021054:
    (**(code **)(lVar6 + 0x10))(&local_100,&DAT_1000f3c70,lVar6);
    lVar16 = local_f8;
    puVar9 = local_100;
    _swift_bridgeObjectRetain(local_f8);
    FUN_100022384(&local_100);
    if (*(long *)(lVar8 + 0x10) == 0) goto LAB_100021188;
    if (lVar16 != 0) {
      lVar15 = lVar6;
      if ((puVar9 == *(undefined **)(lVar8 + 0x20)) && (lVar16 == *(long *)(lVar8 + 0x28))) {
        puVar14 = &DAT_1000f3c70;
        goto LAB_1000212a4;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (puVar9,lVar16,*(undefined **)(lVar8 + 0x20),*(long *)(lVar8 + 0x28),0);
      _swift_bridgeObjectRelease(lVar16);
      if (((ulong)puVar9 & 1) != 0) {
        puVar14 = &DAT_1000f3c70;
        goto LAB_1000212bc;
      }
    }
    (**(code **)(lVar7 + 0x10))(&local_100,&DAT_1000f44a0,lVar7);
    lVar16 = local_f8;
    puVar9 = local_100;
    _swift_bridgeObjectRetain(local_f8);
    FUN_100022384(&local_100);
    if (*(long *)(lVar8 + 0x10) == 0) {
LAB_100021188:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10002118c);
      (*pcVar3)();
    }
    if (lVar16 == 0) {
      return lVar8;
    }
    lVar15 = lVar7;
    if ((puVar9 == *(undefined **)(lVar8 + 0x20)) && (lVar16 == *(long *)(lVar8 + 0x28))) {
      puVar14 = &DAT_1000f44a0;
      goto LAB_1000212a4;
    }
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (puVar9,lVar16,*(undefined **)(lVar8 + 0x20),*(long *)(lVar8 + 0x28),0);
    _swift_bridgeObjectRelease(lVar16);
    if (((ulong)puVar9 & 1) == 0) {
      return lVar8;
    }
    puVar14 = &DAT_1000f44a0;
  }
  else if ((puVar9 == *(undefined **)(lVar8 + 0x20)) && (lVar16 == *(long *)(lVar8 + 0x28))) {
    puVar14 = &DAT_1000f3878;
LAB_1000212a4:
    _swift_bridgeObjectRelease(lVar16);
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (puVar9,lVar16,*(undefined **)(lVar8 + 0x20),*(long *)(lVar8 + 0x28),0);
    _swift_bridgeObjectRelease(lVar16);
    if (((ulong)puVar9 & 1) == 0) goto LAB_100021054;
    puVar14 = &DAT_1000f3878;
  }
LAB_1000212bc:
  puVar9 = &DAT_100102bd0;
  FUN_10000eb08(&DAT_100102bd0,&DAT_1000cf760);
  _swift_allocObject();
  *(undefined8 *)(puVar9 + 0x18) = 2;
  *(undefined8 *)(puVar9 + 0x10) = 1;
  puVar10 = puVar9;
  FUN_1000013c0();
  FUN_100078b4c(puVar14,lVar15,0,0,1,&DAT_1000f30c0,puVar10);
  *(undefined **)(puVar9 + 0x38) = puVar5;
  *(undefined **)(puVar9 + 0x20) = puVar14;
  *(long *)(puVar9 + 0x28) = lVar15;
  __ss5print_9separator10terminatoryypd_S2StF(puVar9,0x20,0xe100000000000000,10,0xe100000000000000);
LAB_10002133c:
  _swift_bridgeObjectRelease(puVar9);
                    /* WARNING: Subroutine does not return */
  _exit(0);
}

