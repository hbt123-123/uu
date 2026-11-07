// rea decompile_all
// name: FUN_10009c2e4
// address: 0x10009c2e4
// body: available
// range: 0x10009c2e4-0x10009c973 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_10009c2e4(long param_1,long param_2)

{
  undefined8 ******ppppppuVar1;
  undefined8 uVar2;
  undefined8 ******ppppppuVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *******pppppppuVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined1 auStack_b0 [16];
  undefined8 *local_a0;
  long lStack_98;
  undefined *local_90;
  undefined8 ******local_88;
  undefined *puStack_80;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar4 = 0xe;
  _NSSearchPathForDirectoriesInDomains(0xe,1,1);
  puVar7 = PTR___sSSN_1009957f8;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
  if (*(long *)(lVar4 + 0x10) == 0) {
    _swift_bridgeObjectRelease(lVar4);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_a0 = (undefined8 *)param_1;
    lStack_98 = param_2;
    FUN_1003fb4bc(FUN_10009ffa0,auStack_b0,0xd000000000000093,0x800000010087fc10,0xd00000000000001b,
                  0x8000000100880210,0xfb,0);
    return PTR___swiftEmptyArrayStorage_100995ea0;
  }
  uVar13 = 0x746e65696c63;
  ppppppuVar1 = *(undefined8 *******)(lVar4 + 0x20);
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRelease(lVar4);
  FUN_10009c0f4();
  if (puVar7 == (undefined *)0x0) {
LAB_10009c668:
    puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (param_1 == 0x746e65696c63) goto LAB_10009c678;
LAB_10009c684:
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x746e65696c63,0xe600000000000000,param_1,param_2,0);
    if ((uVar13 & 1) != 0) goto LAB_10009c6a0;
    uVar13 = 0x735f746e65696c63;
    if (((param_1 == 0x735f746e65696c63) && (param_2 == -0x108d9a929e9a8d8c)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x735f746e65696c63,0xef72656d61657274,param_1,param_2,0), (uVar13 & 1) != 0)) {
      local_68 = 0x80000001008801a0;
      local_70 = 0xd000000000000026;
    }
    else {
      uVar13 = 0x72657461647075;
      if (((param_1 != 0x72657461647075) || (param_2 != -0x1900000000000000)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x72657461647075,0xe700000000000000,param_1,param_2,0), (uVar13 & 1) == 0)) {
        _swift_bridgeObjectRelease(uVar2);
        lVar4 = *(long *)(puVar7 + 0x10);
        if (lVar4 == 0) {
          _swift_bridgeObjectRelease(puVar7);
          return PTR___swiftEmptyArrayStorage_100995ea0;
        }
        goto LAB_10009c728;
      }
      local_68 = 0x8000000100880170;
      local_70 = 0xd000000000000022;
    }
  }
  else {
    if (((param_1 == 0x746e65696c63) && (param_2 == -0x1a00000000000000)) ||
       (uVar8 = uVar13,
       __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                 (0x746e65696c63,0xe600000000000000,param_1,param_2,0), (uVar8 & 1) != 0)) {
      local_70 = 0x2f;
      local_68 = 0xe100000000000000;
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar7);
      uVar5 = 0x73676f4c2f;
      uVar12 = 0xe500000000000000;
    }
    else {
      uVar8 = 0x735f746e65696c63;
      if (((param_1 == 0x735f746e65696c63) && (param_2 == -0x108d9a929e9a8d8c)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x735f746e65696c63,0xef72656d61657274,param_1,param_2,0), (uVar8 & 1) != 0)) {
        local_70 = 0;
        local_68 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x14);
        _swift_bridgeObjectRelease(local_68);
        local_70 = 0x2f;
        local_68 = 0xe100000000000000;
        __sSS6appendyySSF(lVar4,puVar7);
        _swift_bridgeObjectRelease(puVar7);
        uVar12 = 0x80000001008801f0;
        uVar5 = 0xd000000000000011;
      }
      else {
        uVar8 = 0x72657461647075;
        if (((param_1 != 0x72657461647075) || (param_2 != -0x1900000000000000)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x72657461647075,0xe700000000000000,param_1,param_2,0), (uVar8 & 1) == 0)) {
          _swift_bridgeObjectRelease(puVar7);
          goto LAB_10009c668;
        }
        local_70 = 0;
        local_68 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x10);
        _swift_bridgeObjectRelease(local_68);
        local_70 = 0x2f;
        local_68 = 0xe100000000000000;
        __sSS6appendyySSF(lVar4,puVar7);
        _swift_bridgeObjectRelease(puVar7);
        uVar5 = 0x726574616470752e;
        uVar12 = 0xed000073676f4c2f;
      }
    }
    __sSS6appendyySSF(uVar5,uVar12);
    uVar5 = local_68;
    local_88 = ppppppuVar1;
    puStack_80 = (undefined *)uVar2;
    _swift_bridgeObjectRetain(uVar2);
    puVar10 = PTR___sSSSTsWP_100995820;
    puVar7 = PTR___sSSN_1009957f8;
    pppppppuVar6 = &local_88;
    puVar9 = PTR___sSSN_1009957f8;
    __sSSySSxcs25LosslessStringConvertibleRzSTRzSJ7ElementSTRtzlufC
              (pppppppuVar6,PTR___sSSN_1009957f8,PTR___sSSs25LosslessStringConvertiblesWP_100995838,
               PTR___sSSSTsWP_100995820);
    local_88 = pppppppuVar6;
    puStack_80 = puVar9;
    __sSS6append10contentsOfyx_tSTRzSJ7ElementRtzlF(&local_70,puVar7,puVar10);
    _swift_bridgeObjectRelease(uVar5);
    puVar10 = puStack_80;
    ppppppuVar3 = local_88;
    puVar7 = (undefined *)0x0;
    FUN_100033898(0,1,1,PTR___swiftEmptyArrayStorage_100995ea0);
    uVar8 = *(ulong *)(puVar7 + 0x10);
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar8) {
      puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
      FUN_100033898(puVar7,uVar8 + 1,1);
    }
    *(ulong *)(puVar7 + 0x10) = uVar8 + 1;
    *(undefined8 *******)(puVar7 + uVar8 * 0x10 + 0x20) = ppppppuVar3;
    *(undefined **)(puVar7 + uVar8 * 0x10 + 0x28) = puVar10;
    if (param_1 != 0x746e65696c63) goto LAB_10009c684;
LAB_10009c678:
    if (param_2 != -0x1a00000000000000) goto LAB_10009c684;
LAB_10009c6a0:
    local_68 = 0x80000001008801d0;
    local_70 = 0xd00000000000001a;
  }
  puVar9 = PTR___sSSSTsWP_100995820;
  puVar10 = PTR___sSSN_1009957f8;
  pppppppuVar6 = &local_88;
  puVar11 = PTR___sSSN_1009957f8;
  local_88 = ppppppuVar1;
  puStack_80 = (undefined *)uVar2;
  __sSSySSxcs25LosslessStringConvertibleRzSTRzSJ7ElementSTRtzlufC
            (pppppppuVar6,PTR___sSSN_1009957f8,PTR___sSSs25LosslessStringConvertiblesWP_100995838,
             PTR___sSSSTsWP_100995820);
  local_88 = pppppppuVar6;
  puStack_80 = puVar11;
  __sSS6append10contentsOfyx_tSTRzSJ7ElementRtzlF(&local_70,puVar10,puVar9);
  puVar10 = puStack_80;
  ppppppuVar1 = local_88;
  puVar9 = puVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar11 = puVar7;
  if (((ulong)puVar9 & 1) == 0) {
    puVar11 = (undefined *)0x0;
    FUN_100033898(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
  }
  uVar13 = *(ulong *)(puVar11 + 0x10);
  lVar4 = uVar13 + 1;
  puVar7 = puVar11;
  if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar13) {
    puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
    FUN_100033898(puVar7,lVar4,1,puVar11);
  }
  *(long *)(puVar7 + 0x10) = lVar4;
  *(undefined8 *******)(puVar7 + uVar13 * 0x10 + 0x20) = ppppppuVar1;
  *(undefined **)(puVar7 + uVar13 * 0x10 + 0x28) = puVar10;
LAB_10009c728:
  puVar14 = (undefined8 *)(puVar7 + 0x28);
  puVar10 = PTR___swiftEmptyArrayStorage_100995ea0;
  local_90 = puVar7;
  do {
    uVar2 = puVar14[-1];
    uVar5 = *puVar14;
    local_70 = uVar2;
    local_68 = uVar5;
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_a0 = &local_70;
    _swift_bridgeObjectRetain(uVar5);
    uVar13 = 0;
    FUN_100152a38(FUN_10009ff84,auStack_b0,puVar10);
    if ((uVar13 & 1) == 0) {
      puVar7 = puVar10;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar9 = puVar10;
      if (((ulong)puVar7 & 1) == 0) {
        puVar9 = (undefined *)0x0;
        FUN_100033898(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
      }
      uVar13 = *(ulong *)(puVar9 + 0x10);
      puVar10 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar13) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
        FUN_100033898(puVar10,uVar13 + 1,1,puVar9);
      }
      *(ulong *)(puVar10 + 0x10) = uVar13 + 1;
      *(undefined8 *)(puVar10 + uVar13 * 0x10 + 0x20) = uVar2;
      *(undefined8 *)(puVar10 + uVar13 * 0x10 + 0x28) = uVar5;
    }
    else {
      _swift_bridgeObjectRelease(uVar5);
    }
    puVar14 = puVar14 + 2;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  _swift_bridgeObjectRelease(local_90);
  return puVar10;
}

