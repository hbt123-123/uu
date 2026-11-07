// rea decompile_all
// name: FUN_1000a5114
// address: 0x1000a5114
// body: available
// range: 0x1000a5114-0x1000a5b77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000a5114(long param_1,long param_2,ulong param_3,ulong param_4)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 *puVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  undefined1 auVar29 [16];
  undefined *local_a8;
  undefined *local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_80;
  ulong uStack_78;
  undefined *local_70;
  undefined *local_68;
  
  if (SBORROW8(param_1,param_2)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000a5b34);
    (*pcVar3)();
  }
  if (0 < param_1 - param_2) {
    uVar26 = 0;
    local_68 = PTR___swiftEmptyArrayStorage_1000f0740;
    uVar16 = param_3 & 0xffffffffffff;
    if ((param_4 & 0x2000000000000000) != 0) {
      uVar16 = param_4 >> 0x38 & 0xf;
    }
    uVar22 = 0xb;
    if (((uint)(param_4 >> 0x3c) & (uint)((param_3 & 0x800000000000000) == 0)) == 0) {
      uVar22 = 7;
    }
    uVar22 = uVar22 | uVar16 << 0x10;
    uVar23 = 0xf;
LAB_1000a525c:
    uVar25 = uVar23;
    uVar7 = uVar22;
    uVar20 = param_3;
    uVar6 = param_4;
    __sSSySsSnySS5IndexVGcig(uVar23,uVar22,param_3,param_4);
    uVar28 = uVar25;
    uVar19 = param_1 - param_2;
    __sSs5index_8offsetBy07limitedC0SS5IndexVSgAE_SiAEtF();
    uVar5 = uVar7;
    if ((uVar19 & 1) == 0) {
      uVar5 = uVar28;
    }
    if (uVar5 >> 0xe < uVar25 >> 0xe) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000a5b1c);
      (*pcVar3)();
    }
    uVar28 = uVar25;
    __sSsySsSnySS5IndexVGcig(uVar25,uVar5,uVar25,uVar7,uVar20,uVar6);
    uVar19 = uVar7;
    _swift_bridgeObjectRelease(uVar6);
    uVar20 = uVar5;
    do {
      if (uVar25 >> 0xe == uVar20 >> 0xe) {
        uVar20 = uVar19;
        uVar6 = uVar5;
        if (uVar16 << 2 != uVar5 >> 0xe) goto LAB_1000a53ac;
        _swift_bridgeObjectRelease(uVar7);
        goto LAB_1000a587c;
      }
      __sSs5index6beforeSS5IndexVAD_tF(uVar20,uVar25,uVar5,uVar28,uVar7);
      uVar6 = uVar20;
      uVar4 = uVar25;
      __sSsySJSS5IndexVcig();
      if ((uVar6 == 10) && (uVar4 == 0xe100000000000000)) {
        _swift_bridgeObjectRelease(uVar7);
        uVar7 = 0xe100000000000000;
        break;
      }
      uVar19 = 0xe100000000000000;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      _swift_bridgeObjectRelease(uVar4);
    } while ((uVar6 & 1) == 0);
    _swift_bridgeObjectRelease(uVar7);
    if (uVar20 >> 0xe < uVar26) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000a5b24);
      (*pcVar3)();
    }
    uVar26 = uVar20;
    uVar5 = param_3;
    uVar7 = param_4;
    __sSSySsSnySS5IndexVGcig(uVar23,uVar20,param_3,param_4);
    uVar25 = uVar23 >> 0xe;
    uVar28 = uVar26 >> 0xe;
    if (uVar25 == uVar28) {
      uVar25 = uVar23;
      uVar28 = uVar26;
      __sSsySsSnySS5IndexVGcig();
      local_a8 = (undefined *)0x0;
      FUN_10006e718(0,1,1,PTR___swiftEmptyArrayStorage_1000f0740);
      uVar5 = *(ulong *)(local_a8 + 0x10);
      if (*(ulong *)(local_a8 + 0x18) >> 1 <= uVar5) {
        local_a8 = (undefined *)(ulong)(1 < *(ulong *)(local_a8 + 0x18));
        FUN_10006e718(local_a8,uVar5 + 1,1);
      }
      *(ulong *)(local_a8 + 0x10) = uVar5 + 1;
      *(ulong *)(local_a8 + uVar5 * 0x20 + 0x20) = uVar23;
      *(ulong *)(local_a8 + uVar5 * 0x20 + 0x28) = uVar26;
      *(ulong *)(local_a8 + uVar5 * 0x20 + 0x30) = uVar25;
      *(ulong *)(local_a8 + uVar5 * 0x20 + 0x38) = uVar28;
      _swift_bridgeObjectRelease(uVar7);
    }
    else {
      local_a8 = PTR___swiftEmptyArrayStorage_1000f0740;
      uVar6 = uVar23;
      uVar19 = uVar23;
      do {
        while ((uVar4 = uVar6, uVar14 = uVar23,
               __sSsySJSS5IndexVcig(uVar6,uVar23,uVar26,uVar5,uVar7), uVar4 == 10 &&
               (uVar14 == 0xe100000000000000))) {
          _swift_bridgeObjectRelease(0xe100000000000000);
LAB_1000a54f4:
          if (uVar25 < uVar19 >> 0xe) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1000a5b28);
            (*pcVar3)();
          }
          uVar25 = uVar6;
          uVar4 = uVar23;
          uVar14 = uVar26;
          __sSsySsSnySS5IndexVGcig();
          puVar13 = local_a8;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar13 & 1) == 0) {
            plVar1 = (long *)(local_a8 + 0x10);
            local_a8 = (undefined *)0x0;
            FUN_10006e718(0,*plVar1 + 1,1);
          }
          uVar2 = *(ulong *)(local_a8 + 0x10);
          if (*(ulong *)(local_a8 + 0x18) >> 1 <= uVar2) {
            local_a8 = (undefined *)(ulong)(1 < *(ulong *)(local_a8 + 0x18));
            FUN_10006e718(local_a8,uVar2 + 1,1);
          }
          *(ulong *)(local_a8 + 0x10) = uVar2 + 1;
          *(ulong *)(local_a8 + uVar2 * 0x20 + 0x20) = uVar19;
          *(ulong *)(local_a8 + uVar2 * 0x20 + 0x28) = uVar25;
          *(ulong *)(local_a8 + uVar2 * 0x20 + 0x30) = uVar4;
          *(ulong *)(local_a8 + uVar2 * 0x20 + 0x38) = uVar14;
          __sSs5index5afterSS5IndexVAD_tF(uVar6,uVar23,uVar26,uVar5,uVar7);
          uVar25 = uVar6 >> 0xe;
          uVar19 = uVar6;
          if (uVar25 == uVar28) goto LAB_1000a55c8;
        }
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        _swift_bridgeObjectRelease(uVar14);
        if ((uVar4 & 1) != 0) goto LAB_1000a54f4;
        __sSs5index5afterSS5IndexVAD_tF(uVar6,uVar23,uVar26,uVar5,uVar7);
        uVar25 = uVar6 >> 0xe;
      } while (uVar25 != uVar28);
LAB_1000a55c8:
      if (uVar28 < uVar19 >> 0xe) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000a5b2c);
        (*pcVar3)();
      }
      uVar5 = uVar26;
      __sSsySsSnySS5IndexVGcig();
      _swift_bridgeObjectRelease(uVar7);
      puVar13 = local_a8;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar13 & 1) == 0) {
        plVar1 = (long *)(local_a8 + 0x10);
        local_a8 = (undefined *)0x0;
        FUN_10006e718(0,*plVar1 + 1,1);
      }
      uVar7 = *(ulong *)(local_a8 + 0x10);
      if (*(ulong *)(local_a8 + 0x18) >> 1 <= uVar7) {
        local_a8 = (undefined *)(ulong)(1 < *(ulong *)(local_a8 + 0x18));
        FUN_10006e718(local_a8,uVar7 + 1,1);
      }
      *(ulong *)(local_a8 + 0x10) = uVar7 + 1;
      *(ulong *)(local_a8 + uVar7 * 0x20 + 0x20) = uVar19;
      *(ulong *)(local_a8 + uVar7 * 0x20 + 0x28) = uVar26;
      *(ulong *)(local_a8 + uVar7 * 0x20 + 0x30) = uVar23;
      *(ulong *)(local_a8 + uVar7 * 0x20 + 0x38) = uVar5;
    }
    FUN_10006d638(local_a8);
    uVar23 = uVar20;
    goto LAB_1000a5234;
  }
  uVar11 = 0;
  uVar17 = 0xe000000000000000;
LAB_1000a5af0:
  auVar29._8_8_ = uVar17;
  auVar29._0_8_ = uVar11;
  return auVar29;
  while( true ) {
    uVar20 = 0xe100000000000000;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    _swift_bridgeObjectRelease(uVar4);
    if ((uVar19 & 1) != 0) break;
LAB_1000a53ac:
    if (uVar25 >> 0xe == uVar6 >> 0xe) {
      _swift_bridgeObjectRelease(uVar7);
      uVar5 = uVar23;
      uVar7 = param_3;
      uVar25 = param_4;
      FUN_1000714b8();
      uVar28 = uVar5 >> 0xe;
      uVar19 = uVar20;
      uVar6 = uVar5;
      if (uVar28 != uVar7 >> 0xe) goto LAB_1000a5678;
      goto LAB_1000a5844;
    }
    __sSs5index6beforeSS5IndexVAD_tF(uVar6,uVar25,uVar5,uVar28,uVar7);
    uVar19 = uVar6;
    uVar4 = uVar25;
    __sSsySJSS5IndexVcig();
    if ((uVar19 == 0x20) && (uVar4 == 0xe100000000000000)) {
      _swift_bridgeObjectRelease(uVar7);
      uVar7 = 0xe100000000000000;
      break;
    }
  }
  _swift_bridgeObjectRelease(uVar7);
  if (uVar6 >> 0xe < uVar26) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000a5b30);
    (*pcVar3)();
  }
  goto LAB_1000a5750;
LAB_1000a5678:
  uVar19 = uVar6;
  uVar4 = uVar5;
  __sSsySJSS5IndexVcig(uVar6,uVar5,uVar7,uVar25,uVar20);
  if ((uVar19 != 0x20) || (uVar4 != 0xe100000000000000)) {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    _swift_bridgeObjectRelease(uVar4);
    if ((uVar19 & 1) != 0) goto LAB_1000a5730;
    uVar19 = uVar25;
    __sSs5index5afterSS5IndexVAD_tF(uVar6,uVar5,uVar7,uVar25,uVar20);
    uVar28 = uVar6 >> 0xe;
    if (uVar28 == uVar7 >> 0xe) goto LAB_1000a5844;
    goto LAB_1000a5678;
  }
  _swift_bridgeObjectRelease(uVar20);
  uVar20 = 0xe100000000000000;
LAB_1000a5730:
  _swift_bridgeObjectRelease(uVar20);
  if (uVar28 < uVar26) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000a5b38);
    (*pcVar3)();
  }
LAB_1000a5750:
  uVar26 = uVar6;
  uVar5 = param_3;
  uVar7 = param_4;
  __sSSySsSnySS5IndexVGcig();
  puVar13 = local_68;
  puVar8 = local_68;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar12 = puVar13;
  if (((ulong)puVar8 & 1) == 0) {
    puVar12 = (undefined *)0x0;
    FUN_10006e718(0,*(long *)(puVar13 + 0x10) + 1,1,puVar13);
  }
  uVar25 = *(ulong *)(puVar12 + 0x10);
  puVar13 = puVar12;
  if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar25) {
    puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
    FUN_10006e718(puVar13,uVar25 + 1,1,puVar12);
  }
  *(ulong *)(puVar13 + 0x10) = uVar25 + 1;
  *(ulong *)(puVar13 + uVar25 * 0x20 + 0x20) = uVar23;
  *(ulong *)(puVar13 + uVar25 * 0x20 + 0x28) = uVar26;
  *(ulong *)(puVar13 + uVar25 * 0x20 + 0x30) = uVar5;
  *(ulong *)(puVar13 + uVar25 * 0x20 + 0x38) = uVar7;
  uVar23 = uVar6;
  local_68 = puVar13;
LAB_1000a5234:
  __sSS5index5afterSS5IndexVAD_tF(uVar23,param_3,param_4);
  uVar26 = uVar23 >> 0xe;
  if (uVar16 << 2 < uVar26) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000a5b20);
    (*pcVar3)();
  }
  goto LAB_1000a525c;
LAB_1000a5844:
  _swift_bridgeObjectRelease(uVar20);
LAB_1000a587c:
  FUN_1000714b8();
  puVar13 = local_68;
  puVar8 = local_68;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar12 = puVar13;
  if (((ulong)puVar8 & 1) == 0) {
    puVar12 = (undefined *)0x0;
    FUN_10006e718(0,*(long *)(puVar13 + 0x10) + 1,1,puVar13);
  }
  uVar16 = *(ulong *)(puVar12 + 0x10);
  lVar27 = uVar16 + 1;
  puVar13 = puVar12;
  if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar16) {
    puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
    FUN_10006e718(puVar13,lVar27,1,puVar12);
  }
  *(long *)(puVar13 + 0x10) = lVar27;
  *(ulong *)(puVar13 + uVar16 * 0x20 + 0x20) = uVar23;
  *(ulong *)(puVar13 + uVar16 * 0x20 + 0x28) = param_3;
  *(ulong *)(puVar13 + uVar16 * 0x20 + 0x30) = param_4;
  *(ulong *)(puVar13 + uVar16 * 0x20 + 0x38) = uVar19;
  local_70 = PTR___swiftEmptyArrayStorage_1000f0740;
  FUN_1000798ec(0,lVar27,0);
  puVar24 = (undefined8 *)(puVar13 + 0x38);
  do {
    puVar12 = local_70;
    puVar8 = (undefined *)puVar24[-3];
    uVar16 = puVar24[-2];
    uVar11 = puVar24[-1];
    uVar17 = *puVar24;
    _swift_bridgeObjectRetain(uVar17);
    uVar21 = uVar11;
    uVar15 = uVar17;
    if (0x3fff < (uVar16 ^ (ulong)puVar8)) {
      puVar9 = (undefined *)0x20;
      uVar15 = 0xe100000000000000;
      __sSS9repeating5countS2S_SitcfC(0x20,0xe100000000000000,param_2);
      __sSs8distance4from2toSiSS5IndexV_AEtF(puVar8,uVar16,puVar8,uVar16,uVar11,uVar17);
      __sSS5countSivg(puVar9,uVar15);
      puVar10 = (undefined *)0xf;
      uVar26 = 7;
      uVar21 = 0xe000000000000000;
      local_a0 = puVar9;
      uStack_98 = uVar15;
      __sSS14_fromSubstringySSSshFZ(0xf,7,0);
      puVar18 = PTR___sSSSTsWP_1000f0310;
      local_80 = puVar10;
      uStack_78 = uVar26;
      __sSS6append10contentsOfyx_tSTRzSJ7ElementRtzlF
                (&local_a0,PTR___sSSN_1000f02f8,PTR___sSSSTsWP_1000f0310);
      puVar9 = local_80;
      uVar26 = uStack_78;
      __sSsySsSScfC();
      _swift_bridgeObjectRelease(uVar15);
      uVar15 = uVar21;
      local_a0 = puVar8;
      uStack_98 = uVar16;
      local_90 = uVar11;
      uStack_88 = uVar17;
      __sSS14_fromSubstringySSSshFZ(puVar9,uVar26,puVar18);
      _swift_bridgeObjectRelease();
      local_80 = puVar9;
      uStack_78 = uVar26;
      FUN_10005b81c();
      __sSS6append10contentsOfyx_tSTRzSJ7ElementRtzlF(&local_a0,PTR___sSsN_1000f0448);
      puVar8 = local_80;
      uVar16 = uStack_78;
      __sSsySsSScfC();
      _swift_bridgeObjectRelease(uVar17);
    }
    uVar26 = *(ulong *)(puVar12 + 0x10);
    local_70 = puVar12;
    if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar26) {
      FUN_1000798ec(1 < *(ulong *)(puVar12 + 0x18),uVar26 + 1,1);
    }
    puVar12 = local_70;
    *(ulong *)(local_70 + 0x10) = uVar26 + 1;
    *(undefined **)(local_70 + uVar26 * 0x20 + 0x20) = puVar8;
    *(ulong *)(local_70 + uVar26 * 0x20 + 0x28) = uVar16;
    *(undefined8 *)(local_70 + uVar26 * 0x20 + 0x30) = uVar21;
    *(undefined8 *)(local_70 + uVar26 * 0x20 + 0x38) = uVar15;
    puVar24 = puVar24 + 4;
    lVar27 = lVar27 + -1;
  } while (lVar27 != 0);
  _swift_bridgeObjectRelease(puVar13);
  puVar13 = &DAT_100103f48;
  local_a0 = puVar12;
  FUN_10000eb08(&DAT_100103f48,&DAT_1000d39e8);
  puVar8 = &DAT_100103f50;
  FUN_10002cf3c(&DAT_100103f50,&DAT_100103f48,&DAT_1000d39e8,PTR___sSayxGSTsMc_1000f0380);
  puVar9 = puVar8;
  FUN_10005b85c();
  uVar11 = 10;
  uVar17 = 0xe100000000000000;
  __sSTsSy7ElementRpzrlE6joined9separatorS2S_tF(10,0xe100000000000000,puVar13,puVar8,puVar9);
  _swift_bridgeObjectRelease(puVar12);
  goto LAB_1000a5af0;
}

