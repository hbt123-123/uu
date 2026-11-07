// rea decompile_all
// name: FUN_10035ab0c
// address: 0x10035ab0c
// body: available
// range: 0x10035ab0c-0x10035b0f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_10035ab0c(char *param_1,ID param_2,ID param_3,undefined8 param_4)

{
  char *pcVar1;
  bool bVar2;
  long lVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  undefined8 uVar8;
  ID IVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  undefined8 uVar13;
  char *pcVar14;
  char *pcVar15;
  undefined *puVar16;
  undefined *puVar17;
  ulong uVar18;
  code *pcVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined1 auVar24 [16];
  long local_c0;
  ID local_b8;
  char *local_b0;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  char *local_88;
  ID local_80;
  char *local_78;
  ID local_70;
  char *local_68;
  
  lVar3 = 0;
  local_88 = param_1;
  FUN_100277ad0();
  local_a0 = (long)&local_c0 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar21 = *(long *)(param_3 - 8);
  lVar20 = local_a0 - (*(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0);
  IVar4 = 0;
  IVar9 = param_3;
  pcVar14 = PTR___sSTTL_100995860;
  local_a8 = lVar3;
  local_90 = param_4;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,PTR___sSTTL_100995860,PTR___s8IteratorSTTl_100995710);
  lVar23 = *(long *)(IVar4 - 8);
  uVar18 = *(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar3 = lVar20 - uVar18;
  lVar22 = lVar3 - uVar18;
  pcVar11 = "MIMEType";
  IVar5 = _objc_msgSend(param_2,"MIMEType");
  if (IVar5 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _swift_bridgeObjectRetain(pcVar11);
    pcVar10 = pcVar11;
    local_b8 = IVar5;
    FUN_10035a664();
    local_80 = IVar5;
    local_78 = pcVar14;
    if (pcVar10 != (char *)0x0) {
      local_c0 = lVar23;
      (**(code **)(lVar21 + 0x10))(lVar20,local_88,param_3);
      uVar13 = local_90;
      __sST12makeIterator0B0QzyFTj(lVar22,param_3,local_90);
      IVar5 = IVar4;
      pcVar14 = PTR___sSTTL_100995860;
      _swift_getAssociatedConformanceWitness
                (uVar13,param_3,IVar4,PTR___sSTTL_100995860,PTR___sST8IteratorST_StTn_100995858);
      local_98 = uVar13;
      __sSt4next7ElementQzSgyFTj(&local_70,IVar4);
      pcVar1 = pcVar11;
      pcVar15 = local_b0;
      IVar6 = local_70;
      pcVar12 = local_68;
      while (local_b0 = pcVar1, pcVar12 != (char *)0x0) {
        local_70 = IVar6;
        local_68 = pcVar12;
        FUN_10035a664();
        pcVar15 = pcVar14;
        if (pcVar12 != (char *)0x0) {
          bVar2 = local_80 == IVar6;
          if ((bVar2 && pcVar10 == pcVar12) ||
             (IVar7 = local_80,
             __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                       (local_80,pcVar10,IVar6,pcVar12,0), (IVar7 & 1) != 0)) {
            if (((IVar9 != IVar5) || (local_78 != pcVar14)) &&
               (IVar7 = IVar9,
               __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                         (IVar9,local_78,IVar5,pcVar14,0), (IVar7 & 1) == 0)) {
              if (!bVar2 || pcVar10 != pcVar12) goto LAB_10035ad50;
              goto LAB_10035ad6c;
            }
LAB_10035b044:
            _swift_bridgeObjectRelease(pcVar14);
            _swift_bridgeObjectRelease(pcVar12);
            _swift_bridgeObjectRelease(local_b0);
            _swift_bridgeObjectRelease(local_78);
          }
          else {
LAB_10035ad50:
            IVar7 = local_80;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (local_80,pcVar10,IVar6,pcVar12,0);
            if ((IVar7 & 1) != 0) {
LAB_10035ad6c:
              if ((IVar5 != 0x2a) || (pcVar14 != (char *)0xe100000000000000)) {
                uVar18 = 0;
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (0x2a,0xe100000000000000,IVar5,pcVar14,0);
                if ((uVar18 & 1) == 0) goto LAB_10035ad9c;
              }
              goto LAB_10035b044;
            }
LAB_10035ad9c:
            if (IVar6 == 0x2a && pcVar12 == (char *)0xe100000000000000) {
LAB_10035adcc:
              if (((IVar9 == IVar5) && (local_78 == pcVar14)) ||
                 (IVar7 = IVar9,
                 __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                           (IVar9,local_78,IVar5,pcVar14,0), (IVar7 & 1) != 0)) goto LAB_10035b044;
              if (IVar6 != 0x2a || pcVar12 != (char *)0xe100000000000000) goto LAB_10035ae00;
            }
            else {
              uVar18 = 0;
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x2a,0xe100000000000000,IVar6,pcVar12,0);
              if ((uVar18 & 1) != 0) goto LAB_10035adcc;
LAB_10035ae00:
              uVar18 = 0;
              pcVar15 = pcVar12;
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x2a,0xe100000000000000,IVar6,pcVar12,0);
              if ((uVar18 & 1) == 0) {
                _swift_bridgeObjectRelease(pcVar14);
                _swift_bridgeObjectRelease(pcVar12);
                IVar5 = IVar6;
                pcVar11 = local_b0;
                goto LAB_10035acb8;
              }
            }
            if ((IVar5 == 0x2a) && (pcVar14 == (char *)0xe100000000000000)) {
              _swift_bridgeObjectRelease(pcVar10);
              _swift_bridgeObjectRelease(0xe100000000000000);
              pcVar10 = pcVar12;
            }
            else {
              uVar18 = 0;
              pcVar15 = pcVar14;
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x2a,0xe100000000000000,IVar5,pcVar14,0);
              _swift_bridgeObjectRelease(pcVar14);
              _swift_bridgeObjectRelease(pcVar12);
              pcVar11 = local_b0;
              if ((uVar18 & 1) == 0) goto LAB_10035acb8;
            }
            pcVar11 = local_b0;
            _swift_bridgeObjectRelease(pcVar10);
            _swift_bridgeObjectRelease(pcVar11);
            pcVar10 = local_78;
          }
          _swift_bridgeObjectRelease(pcVar10);
          pcVar19 = *(code **)(local_c0 + 8);
          lVar3 = lVar22;
          goto LAB_10035b0c0;
        }
LAB_10035acb8:
        __sSt4next7ElementQzSgyFTj(&local_70,IVar4,local_98);
        pcVar1 = local_b0;
        pcVar14 = pcVar15;
        pcVar15 = local_b0;
        IVar6 = local_70;
        pcVar12 = local_68;
      }
      local_b0 = pcVar15;
      (**(code **)(local_c0 + 8))(lVar22,IVar4);
      _swift_bridgeObjectRelease(local_78);
      _swift_bridgeObjectRelease(pcVar10);
      lVar3 = local_a0;
      FUN_100358af8(local_a0,local_88,local_b8,pcVar11,param_3,local_90);
      _swift_bridgeObjectRelease(pcVar11);
      goto LAB_10035b010;
    }
    _swift_bridgeObjectRelease(pcVar11);
  }
  (**(code **)(lVar21 + 0x10))(lVar20,local_88,param_3);
  uVar13 = local_90;
  __sST12makeIterator0B0QzyFTj(lVar3,param_3,local_90);
  uVar8 = uVar13;
  IVar9 = IVar4;
  puVar16 = PTR___sSTTL_100995860;
  _swift_getAssociatedConformanceWitness
            (uVar13,param_3,IVar4,PTR___sSTTL_100995860,PTR___sST8IteratorST_StTn_100995858);
  __sSt4next7ElementQzSgyFTj(&local_70,IVar4,uVar8);
  IVar5 = local_70;
  pcVar11 = local_68;
  while (pcVar11 != (char *)0x0) {
    local_70 = IVar5;
    local_68 = pcVar11;
    FUN_10035a664();
    puVar17 = puVar16;
    if (pcVar11 != (char *)0x0) {
      if ((IVar5 != 0x2a) || (pcVar11 != (char *)0xe100000000000000)) {
        puVar17 = (undefined *)0xe100000000000000;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        if ((IVar5 & 1) == 0) {
          _swift_bridgeObjectRelease(puVar16);
          _swift_bridgeObjectRelease(pcVar11);
          goto LAB_10035af18;
        }
      }
      if ((IVar9 == 0x2a) && (puVar16 == (undefined *)0xe100000000000000)) {
        _swift_bridgeObjectRelease(0xe100000000000000);
        _swift_bridgeObjectRelease(pcVar11);
      }
      else {
        IVar5 = 0x2a;
        puVar17 = (undefined *)0xe100000000000000;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (IVar9,puVar16,0x2a,0xe100000000000000,0);
        _swift_bridgeObjectRelease(puVar16);
        _swift_bridgeObjectRelease(pcVar11);
        uVar18 = IVar9 & 1;
        IVar9 = IVar5;
        if (uVar18 == 0) goto LAB_10035af18;
      }
      pcVar19 = *(code **)(lVar23 + 8);
LAB_10035b0c0:
      (*pcVar19)(lVar3,IVar4);
      lVar20 = 0;
      uVar13 = 0;
      goto LAB_10035b0d0;
    }
LAB_10035af18:
    __sSt4next7ElementQzSgyFTj(&local_70,IVar4,uVar8);
    puVar16 = puVar17;
    IVar5 = local_70;
    pcVar11 = local_68;
  }
  (**(code **)(lVar23 + 8))(lVar3,IVar4);
  lVar3 = local_a0;
  pcVar11 = local_88;
  FUN_100358a30(local_a0,local_88,param_3,uVar13);
LAB_10035b010:
  FUN_1002c272c();
  lVar20 = local_a8;
  _swift_allocError(local_a8,pcVar11,0,0);
  FUN_1000823d8(lVar3);
  uVar13 = 1;
LAB_10035b0d0:
  auVar24._8_8_ = uVar13;
  auVar24._0_8_ = lVar20;
  return auVar24;
}

