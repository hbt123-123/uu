// rea decompile_all
// name: FUN_10019250c
// address: 0x10019250c
// body: available
// range: 0x10019250c-0x100192b4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_10019250c(long param_1,undefined *param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x20;
  undefined *puVar9;
  uint uVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined auStack_110 [16];
  ulong local_100;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  char *local_d0;
  char *pcStack_c8;
  undefined *local_c0;
  ulong local_b8;
  undefined4 local_ac;
  undefined *local_a8;
  undefined *puStack_a0;
  uint local_94;
  ulong local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  
  lVar11 = param_1;
  FUN_1001932cc();
  local_ac = (undefined4)lVar11;
  lVar11 = unaff_x20 + 0x10;
  _swift_weakLoadStrong();
  puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (lVar11 != 0) {
    local_e8 = *(long *)(param_1 + 0x10);
    if (local_e8 == 0) {
      _swift_release();
      puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    else {
      uVar10 = 0;
      lVar7 = 0;
      local_e0 = param_1 + 0x20;
      local_d0 = "-blockDataCount:";
      pcStack_c8 = s___taskID__100894f70 + 0x10;
      local_f0 = lVar11;
      do {
        puVar12 = *(undefined **)(local_e0 + lVar7 * 8);
        if ((ulong)puVar12 >> 0x3e == 0) {
          puVar13 = *(undefined **)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar13 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
          if ((long)puVar12 < 0) {
            puVar13 = puVar12;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg();
        }
        if (puVar13 != (undefined *)0x0) {
          local_90 = (ulong)puVar12 & 0xc000000000000001;
          local_b8 = (ulong)puVar12 & 0xffffffffffffff8;
          local_c0 = puVar12 + 0x20;
          local_d8 = lVar7;
          _swift_bridgeObjectRetain(puVar12);
          puVar14 = (undefined *)0x0;
          local_a8 = puVar13;
          puStack_a0 = puVar12;
LAB_100192600:
          do {
            if (local_90 == 0) {
              if (*(undefined **)(local_b8 + 0x10) <= puVar14) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x100192b10);
                (*pcVar1)();
              }
              puVar9 = *(undefined **)(local_c0 + (long)puVar14 * 8);
              _swift_retain(puVar9);
            }
            else {
              puVar9 = puVar14;
              param_2 = puVar12;
              FUN_10016a8a0();
            }
            if (SCARRY8((long)puVar14,1)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x100192b0c);
              (*pcVar1)();
            }
            puVar14 = puVar14 + 1;
            uVar8 = *(ulong *)(puVar9 + 0x18);
            if (uVar8 != 0) {
              puVar12 = puVar9;
              local_70 = (undefined *)uVar8;
              FUN_1001888b0();
              bVar2 = ((ulong)puVar6 & 0x4000000000000000) != 0;
              local_94 = (uint)(!bVar2 && (long)puVar6 >= 0);
              local_88 = puVar9;
              local_80 = puVar14;
              if (bVar2 || (long)puVar6 < 0) {
                puVar13 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
                if ((long)puVar6 < 0) {
                  puVar13 = puVar6;
                }
                __ss18_CocoaArrayWrapperV8endIndexSivg();
              }
              else {
                puVar13 = *(undefined **)((undefined *)((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
              }
              local_78 = (undefined *)CONCAT44(local_78._4_4_,(uint)puVar12 | uVar10);
              if (puVar13 != (undefined *)0x0) {
                puVar12 = (undefined *)0x0;
                puVar14 = param_2;
                do {
                  if (*(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10) <= puVar12) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x100192998);
                    (*pcVar1)();
                  }
                  lVar11 = *(long *)(puVar6 + (long)puVar12 * 8 + 0x20);
                  uVar3 = *(ulong *)(lVar11 + 0x58);
                  param_2 = puVar14;
                  if (uVar3 != 0) {
                    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
                    uVar4 = uVar8;
                    puVar9 = puVar14;
                    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
                    if (uVar3 == uVar4 && puVar14 == puVar9) {
                      param_2 = puVar9;
                      _swift_retain(lVar11);
                      _swift_release(lVar11);
                      _swift_bridgeObjectRelease(puVar14);
                      _swift_bridgeObjectRelease(puVar9);
                    }
                    else {
                      param_2 = puVar14;
                      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (uVar3,puVar14,uVar4,puVar9,0);
                      _swift_retain(lVar11);
                      _swift_release(lVar11);
                      _swift_bridgeObjectRelease(puVar14);
                      _swift_bridgeObjectRelease(puVar9);
                      if ((uVar3 & 1) == 0) goto LAB_1001926a0;
                    }
                    _swift_release(local_88);
                    puVar12 = puStack_a0;
                    puVar13 = local_a8;
                    puVar14 = local_80;
                    uVar10 = (uint)local_78;
                    if (local_80 != local_a8) goto LAB_100192600;
                    goto LAB_10019258c;
                  }
LAB_1001926a0:
                  puVar12 = puVar12 + 1;
                  puVar14 = param_2;
                } while (puVar13 != puVar12);
              }
              lVar11 = 0;
              FUN_10016dae4();
              _swift_allocObject();
              FUN_10016d3cc();
              puVar12 = local_70;
              *(undefined4 *)(lVar11 + 0x14) = local_ac;
              *(undefined1 *)(lVar11 + 0x18) = 1;
              *(ulong *)(lVar11 + 0x58) = uVar8;
              FUN_100401b14(0);
              (*(code *)PTR____chkstk_darwin_100995498)();
              param_2 = auStack_110;
              local_100 = (ulong)puVar12;
              FUN_1003fb45c(FUN_100193a14,param_2,0xd0000000000000a8,
                            (ulong)pcStack_c8 | 0x8000000000000000,0xd000000000000023,
                            (ulong)local_d0 | 0x8000000000000000,0x20,7);
              _swift_retain(lVar11);
              puVar9 = puVar6;
              _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
              puVar14 = local_80;
              puVar12 = puStack_a0;
              puVar13 = local_a8;
              puVar5 = puVar6;
              if ((local_94 & (uint)puVar9 & 1) == 0) {
                if ((ulong)puVar6 >> 0x3e == 0) {
                  param_2 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
                }
                else {
                  param_2 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
                  if ((long)puVar6 < 0) {
                    param_2 = puVar6;
                  }
                  __ss18_CocoaArrayWrapperV8endIndexSivg();
                }
                puVar12 = puStack_a0;
                puVar13 = local_a8;
                param_2 = param_2 + 1;
                puVar5 = (undefined *)0x0;
                FUN_1000358f0(0,param_2,1,puVar6);
              }
              uVar3 = (ulong)puVar5 & 0xffffffffffffff8;
              uVar8 = *(ulong *)(uVar3 + 0x10);
              puVar9 = (undefined *)(uVar8 + 1);
              puVar6 = puVar5;
              if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar8) {
                puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar3 + 0x18));
                param_2 = puVar9;
                FUN_1000358f0(puVar6,puVar9,1,puVar5);
                uVar3 = (ulong)puVar6 & 0xffffffffffffff8;
              }
              uVar10 = (uint)local_78;
              *(undefined **)(uVar3 + 0x10) = puVar9;
              *(long *)(uVar3 + uVar8 * 8 + 0x20) = lVar11;
              _swift_release(lVar11);
              puVar9 = local_88;
            }
            _swift_release(puVar9);
          } while (puVar14 != puVar13);
LAB_10019258c:
          _swift_bridgeObjectRelease(puVar12);
          lVar7 = local_d8;
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 != local_e8);
      if ((uVar10 & 1) == 0) {
        _swift_release(local_f0);
      }
      else {
        if ((ulong)puVar6 >> 0x3e == 0) {
          puVar12 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
          puVar13 = PTR___swiftEmptyArrayStorage_100995ea0;
        }
        else {
          puVar12 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
          if ((long)puVar6 < 0) {
            puVar12 = puVar6;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg();
          puVar13 = PTR___swiftEmptyArrayStorage_100995ea0;
        }
        PTR___swiftEmptyArrayStorage_100995ea0 = puVar13;
        local_70 = puVar6;
        if (puVar12 != (undefined *)0x0) {
          local_78 = puVar12 + -1;
          puVar14 = (undefined *)0x0;
          do {
            while( true ) {
              if (*(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10) <= puVar14) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x100192b14);
                (*pcVar1)();
              }
              lVar11 = *(long *)(puVar6 + (long)puVar14 * 8 + 0x20);
              uVar8 = *(ulong *)(lVar11 + 0x58);
              puVar9 = param_2;
              if (uVar8 != 0) break;
LAB_100192a00:
              puVar14 = puVar14 + 1;
              param_2 = puVar9;
              if (puVar12 == puVar14) goto LAB_100192b38;
            }
            __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
            puVar9 = param_2;
            if (uVar8 == 0x662e63696c627570 && param_2 == (undefined *)0xef6c72752d656c69) {
              _swift_retain(lVar11);
              _swift_bridgeObjectRelease(param_2);
            }
            else {
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        ();
              _swift_retain(lVar11);
              _swift_bridgeObjectRelease(param_2);
              if ((uVar8 & 1) == 0) {
                _swift_release(lVar11);
                goto LAB_100192a00;
              }
            }
            puVar5 = puVar13;
            _swift_isUniquelyReferenced_nonNull_native();
            local_68 = puVar13;
            if (((ulong)puVar5 & 1) == 0) {
              puVar9 = (undefined *)(*(long *)(puVar13 + 0x10) + 1);
              FUN_100070008(0,puVar9,1);
            }
            uVar8 = *(ulong *)(local_68 + 0x10);
            puVar13 = (undefined *)(uVar8 + 1);
            if (*(ulong *)(local_68 + 0x18) >> 1 <= uVar8) {
              puVar9 = puVar13;
              FUN_100070008(1 < *(ulong *)(local_68 + 0x18),puVar13,1);
            }
            *(undefined **)(local_68 + 0x10) = puVar13;
            *(long *)(local_68 + uVar8 * 8 + 0x20) = lVar11;
            bVar2 = local_78 != puVar14;
            param_2 = puVar9;
            puVar14 = puVar14 + 1;
            puVar13 = local_68;
          } while (bVar2);
        }
LAB_100192b38:
        _swift_bridgeObjectRelease(local_70);
        _swift_release(local_f0);
        puVar6 = puVar13;
      }
    }
  }
  return puVar6;
}

