// rea decompile_all
// name: FUN_10035b0f4
// address: 0x10035b0f4
// body: available
// range: 0x10035b0f4-0x10035b66f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010035b65c) */

undefined1  [16] FUN_10035b0f4(long param_1,ID param_2,ID param_3,char *param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined1 auVar17 [16];
  long *local_b0;
  long local_a8;
  char *local_a0;
  ID local_98;
  long local_90;
  long local_88;
  long local_80;
  ID local_78;
  long local_68;
  
  lVar2 = 0;
  FUN_1002782c4();
  uVar11 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  plVar12 = (long *)((long)&local_b0 - uVar11);
  plVar16 = (long *)((long)plVar12 - uVar11);
  lVar3 = 0;
  local_80 = lVar2;
  FUN_100277ad0();
  uVar11 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar2 = (long)plVar16 - uVar11;
  lVar13 = lVar2 - uVar11;
  pcVar7 = "MIMEType";
  IVar4 = _objc_msgSend(param_2,"MIMEType");
  if (IVar4 != 0) {
    local_90 = lVar3;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _swift_bridgeObjectRetain(pcVar7);
    pcVar10 = pcVar7;
    local_98 = IVar4;
    FUN_10035a664();
    local_78 = IVar4;
    if (pcVar10 != (char *)0x0) {
      lVar3 = *(long *)(param_1 + 0x10);
      local_b0 = plVar16;
      local_a8 = lVar13;
      local_a0 = pcVar7;
      if (lVar3 != 0) {
        puVar14 = (undefined8 *)(param_1 + 0x28);
        IVar4 = param_3;
        pcVar7 = param_4;
        local_88 = param_1;
        do {
          IVar5 = puVar14[-1];
          pcVar8 = (char *)*puVar14;
          _swift_bridgeObjectRetain(pcVar8);
          FUN_10035a664();
          pcVar9 = pcVar7;
          if (pcVar8 != (char *)0x0) {
            bVar1 = local_78 == IVar5;
            if ((bVar1 && pcVar10 == pcVar8) ||
               (IVar6 = local_78,
               __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                         (local_78,pcVar10,IVar5,pcVar8,0), (IVar6 & 1) != 0)) {
              if ((param_3 != IVar4 || param_4 != pcVar7) &&
                 (IVar6 = param_3,
                 __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                           (param_3,param_4,IVar4,pcVar7,0), (IVar6 & 1) == 0)) {
                if (!bVar1 || pcVar10 != pcVar8) goto LAB_10035b2ac;
                goto LAB_10035b2c8;
              }
            }
            else {
LAB_10035b2ac:
              IVar6 = local_78;
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (local_78,pcVar10,IVar5,pcVar8,0);
              if ((IVar6 & 1) == 0) {
LAB_10035b2f8:
                if (IVar5 == 0x2a && pcVar8 == (char *)0xe100000000000000) {
LAB_10035b328:
                  if (((param_3 == IVar4) && (param_4 == pcVar7)) ||
                     (IVar6 = param_3,
                     __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                               (param_3,param_4,IVar4,pcVar7,0), (IVar6 & 1) != 0))
                  goto LAB_10035b5cc;
                  if (IVar5 != 0x2a || pcVar8 != (char *)0xe100000000000000) goto LAB_10035b358;
                }
                else {
                  uVar11 = 0;
                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (0x2a,0xe100000000000000,IVar5,pcVar8,0);
                  if ((uVar11 & 1) != 0) goto LAB_10035b328;
LAB_10035b358:
                  uVar11 = 0;
                  pcVar9 = pcVar8;
                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (0x2a,0xe100000000000000,IVar5,pcVar8,0);
                  if ((uVar11 & 1) == 0) {
                    _swift_bridgeObjectRelease(pcVar7);
                    _swift_bridgeObjectRelease(pcVar8);
                    IVar4 = IVar5;
                    param_1 = local_88;
                    goto LAB_10035b218;
                  }
                }
                if ((IVar4 == 0x2a) && (pcVar7 == (char *)0xe100000000000000)) {
                  _swift_bridgeObjectRelease(pcVar10);
                  _swift_bridgeObjectRelease(0xe100000000000000);
                  pcVar10 = pcVar8;
                }
                else {
                  uVar11 = 0;
                  pcVar9 = pcVar7;
                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (0x2a,0xe100000000000000,IVar4,pcVar7,0);
                  _swift_bridgeObjectRelease(pcVar7);
                  _swift_bridgeObjectRelease(pcVar8);
                  param_1 = local_88;
                  if ((uVar11 & 1) == 0) goto LAB_10035b218;
                }
                _swift_bridgeObjectRelease(pcVar10);
                _swift_bridgeObjectRelease(local_a0);
                pcVar7 = param_4;
                goto LAB_10035b628;
              }
LAB_10035b2c8:
              if ((IVar4 != 0x2a) || (pcVar7 != (char *)0xe100000000000000)) {
                uVar11 = 0;
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (0x2a,0xe100000000000000,IVar4,pcVar7,0);
                if ((uVar11 & 1) == 0) goto LAB_10035b2f8;
              }
            }
LAB_10035b5cc:
            _swift_bridgeObjectRelease(pcVar8);
            _swift_bridgeObjectRelease(local_a0);
            _swift_bridgeObjectRelease(param_4);
            _swift_bridgeObjectRelease(pcVar10);
            goto LAB_10035b628;
          }
LAB_10035b218:
          puVar14 = puVar14 + 2;
          lVar3 = lVar3 + -1;
          pcVar7 = pcVar9;
        } while (lVar3 != 0);
      }
      _swift_bridgeObjectRelease(param_4);
      _swift_bridgeObjectRelease(pcVar10);
      local_68 = param_1;
      _swift_bridgeObjectRetain(param_1);
      FUN_1002c3b6c(&local_68);
      IVar4 = local_98;
      pcVar7 = local_a0;
      plVar12 = local_b0;
      *local_b0 = local_68;
      plVar12[1] = IVar4;
      plVar12[2] = (long)pcVar7;
      _swift_storeEnumTagMultiPayload(plVar12,local_80,2);
      lVar2 = local_a8;
      FUN_1000823d8(plVar12,local_a8,FUN_1002782c4);
      lVar3 = local_90;
      lVar13 = lVar2;
      _swift_storeEnumTagMultiPayload(lVar2,local_90,9);
      FUN_1002c272c();
      _swift_allocError(lVar3,lVar13,0,0);
      FUN_1000823d8(lVar2);
      uVar15 = 1;
      goto LAB_10035b634;
    }
    _swift_bridgeObjectRelease(pcVar7);
    lVar3 = local_90;
  }
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 != 0) {
    puVar14 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar11 = puVar14[-1];
      pcVar7 = (char *)*puVar14;
      _swift_bridgeObjectRetain(pcVar7);
      FUN_10035a664();
      pcVar10 = param_4;
      if (pcVar7 != (char *)0x0) {
        if (uVar11 != 0x2a || pcVar7 != (char *)0xe100000000000000) {
          pcVar10 = (char *)0xe100000000000000;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          if ((uVar11 & 1) == 0) {
            _swift_bridgeObjectRelease(param_4);
            _swift_bridgeObjectRelease(pcVar7);
            goto LAB_10035b3f4;
          }
        }
        if (param_3 == 0x2a && param_4 == (char *)0xe100000000000000) {
          _swift_bridgeObjectRelease(param_4);
LAB_10035b628:
          _swift_bridgeObjectRelease(pcVar7);
LAB_10035b62c:
          lVar3 = 0;
          uVar15 = 0;
          goto LAB_10035b634;
        }
        IVar4 = 0x2a;
        pcVar10 = (char *)0xe100000000000000;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (param_3,param_4,0x2a,0xe100000000000000,0);
        _swift_bridgeObjectRelease(param_4);
        _swift_bridgeObjectRelease(pcVar7);
        uVar11 = param_3 & 1;
        param_3 = IVar4;
        if (uVar11 != 0) goto LAB_10035b62c;
      }
LAB_10035b3f4:
      puVar14 = puVar14 + 2;
      lVar13 = lVar13 + -1;
      param_4 = pcVar10;
    } while (lVar13 != 0);
  }
  local_68 = param_1;
  _swift_bridgeObjectRetain(param_1);
  FUN_1002c3b6c(&local_68);
  *plVar12 = local_68;
  uVar15 = 1;
  _swift_storeEnumTagMultiPayload(plVar12,local_80,1);
  FUN_1000823d8(plVar12,lVar2,FUN_1002782c4);
  lVar13 = lVar2;
  _swift_storeEnumTagMultiPayload(lVar2,lVar3,9);
  FUN_1002c272c();
  _swift_allocError(lVar3,lVar13,0,0);
  FUN_1000823d8(lVar2);
LAB_10035b634:
  auVar17._8_8_ = uVar15;
  auVar17._0_8_ = lVar3;
  return auVar17;
}

