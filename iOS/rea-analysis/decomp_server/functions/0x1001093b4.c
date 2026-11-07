// rea decompile_all
// name: FUN_1001093b4
// address: 0x1001093b4
// body: available
// range: 0x1001093b4-0x100109f9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_1001093b4(void)

{
  undefined8 ****ppppuVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined8 ****ppppuVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *****pppppuVar7;
  long lVar8;
  undefined8 *****pppppuVar9;
  undefined *puVar10;
  undefined8 *****pppppuVar11;
  char *pcVar12;
  undefined8 ****ppppuVar13;
  undefined8 *****pppppuVar14;
  undefined8 *****pppppuVar15;
  undefined8 ****ppppuVar16;
  undefined8 ****ppppuVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined8 ***apppuStack_150 [2];
  undefined4 local_140;
  undefined8 ****local_138;
  undefined8 ***apppuStack_130 [2];
  undefined8 ****local_120;
  undefined8 ****ppppuStack_118;
  long local_110;
  undefined8 ****local_108;
  undefined8 ***pppuStack_100;
  long local_f8;
  long local_f0;
  long local_e8;
  char *local_e0;
  undefined8 ***local_d8;
  char *local_d0;
  undefined *local_c8;
  undefined8 ****local_c0;
  undefined8 ***pppuStack_b8;
  undefined8 ****local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long local_98;
  
  ppppuVar4 = (undefined8 ****)0x0;
  FUN_10004003c(0,&DAT_100a75978,&PTR__OBJC_CLASS___NSScreen_100a65810);
  thunk_FUN_1003d7218();
  if (ppppuVar4 == (undefined8 ****)0x0) {
    FUN_100401b14();
    FUN_1003fb4ec(FUN_10010476c,0,0xd000000000000097,0x8000000100889170,0xd000000000000019,
                  0x800000010088af70,0x28,0);
  }
  else {
    lVar5 = 0;
    _CGWindowListCopyWindowInfo(0,0);
    if ((lVar5 != 0) && (_swift_dynamicCastObjCClass(lVar5,&_OBJC_CLASS___NSArray), lVar5 != 0)) {
      local_b0 = (undefined8 *****)0x0;
      puVar10 = &DAT_100a759d8;
      FUN_100004bb4(&DAT_100a759d8,&DAT_10080c0a0);
      local_c8 = puVar10;
      __sSa10FoundationE34_conditionallyBridgeFromObjectiveC_6resultSbSo7NSArrayC_SayxGSgztFZ
                (lVar5,&local_b0);
      ppppuVar13 = local_b0;
      if ((undefined8 *****)local_b0 != (undefined8 *****)0x0) {
        ppppuVar16 = (undefined8 ****)local_b0[2];
        pppppuVar9 = (undefined8 *****)PTR___swiftEmptyArrayStorage_100995ea0;
        local_d8 = ppppuVar4;
        if (ppppuVar16 != (undefined8 ****)0x0) {
          ppppuVar4 = (undefined8 ****)0x0;
          do {
            if (ppppuVar13[2] <= ppppuVar4) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100109f94);
              (*pcVar3)();
            }
            pppppuVar14 = (undefined8 *****)ppppuVar13[(long)ppppuVar4 + 4];
            local_c0 = pppppuVar14;
            _swift_bridgeObjectRetain(pppppuVar14);
            uVar6 = 0;
            FUN_1001085ac();
            if ((uVar6 & 1) == 0) {
              _swift_bridgeObjectRelease(pppppuVar14);
            }
            else {
              pppppuVar11 = pppppuVar9;
              _swift_isUniquelyReferenced_nonNull_native();
              local_b0 = pppppuVar9;
              if (((ulong)pppppuVar11 & 1) == 0) {
                FUN_10006fef4(0,(long)pppppuVar9[2] + 1,1);
              }
              ppppuVar1 = (undefined8 ****)local_b0[2];
              if ((undefined8 ****)((ulong)local_b0[3] >> 1) <= ppppuVar1) {
                FUN_10006fef4((undefined8 ****)0x1 < local_b0[3],
                              (undefined8 ****)((long)ppppuVar1 + 1U),1);
              }
              local_b0[2] = (undefined8 ****)((long)ppppuVar1 + 1U);
              local_b0[(long)ppppuVar1 + 4] = pppppuVar14;
              pppppuVar9 = (undefined8 *****)local_b0;
            }
            ppppuVar4 = (undefined8 ****)((long)ppppuVar4 + 1);
          } while (ppppuVar16 != ppppuVar4);
        }
        _swift_bridgeObjectRelease(ppppuVar13);
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        pppppuVar14 = (undefined8 *****)apppuStack_130;
        pcVar12 = s__WallpaperManager__10088af60 + 0x10;
        local_d0 = s___15_100889140 + 0x30;
        local_120 = pppppuVar9;
        FUN_1003fb48c(FUN_10010a388,pppppuVar14,0xd000000000000097,0x8000000100889170,
                      0xd000000000000019,0x800000010088af70,0x54,0);
        ppppuVar4 = pppppuVar9[2];
        if (ppppuVar4 == (undefined8 ****)0x0) {
          _swift_release(pppppuVar9);
          ppppuVar13 = (undefined8 ****)local_d8;
LAB_100109de0:
          ppppuVar4 = (undefined8 ****)0x0;
          FUN_1003fb4ec(FUN_100104e4c,0,0xd000000000000097,(ulong)local_d0 | 0x8000000000000000,
                        0xd000000000000019,(ulong)pcVar12 | 0x8000000000000000,0x78,0);
        }
        else {
          local_e0 = s__WallpaperManager__10088af60 + 0x10;
          ppppuVar13 = (undefined8 ****)0x0;
          lVar5 = *(long *)PTR__kCGWindowBounds_100995570;
          local_e8 = *(long *)PTR__kCGWindowNumber_100995590;
          local_f0 = *(long *)PTR__kCGWindowName_100995588;
          local_f8 = *(long *)PTR__kCGWindowLayer_100995580;
          do {
            if (pppppuVar9[2] <= ppppuVar13) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100109f98);
              (*pcVar3)();
            }
            pppppuVar15 = (undefined8 *****)pppppuVar9[(long)ppppuVar13 + 4];
            lVar8 = lVar5;
            __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar5);
            pppppuVar11 = pppppuVar14;
            if (pppppuVar15[2] == (undefined8 ****)0x0) goto LAB_1001099dc;
            _swift_bridgeObjectRetain_n(pppppuVar15,2);
            FUN_1001a2c70(lVar8);
            _swift_bridgeObjectRelease(pppppuVar14);
            if (((ulong)pppppuVar11 & 1) == 0) {
LAB_100109728:
              pppppuVar14 = (undefined8 *****)0x2;
              _swift_bridgeObjectRelease_n(pppppuVar15);
            }
            else {
              FUN_10003e8bc(pppppuVar15[7] + lVar8 * 4,&local_b0);
              _swift_bridgeObjectRelease(pppppuVar15);
              pppppuVar7 = &local_c0;
              pppppuVar14 = &local_b0;
              _swift_dynamicCast(pppppuVar7,pppppuVar14,PTR___sypN_100995e88 + 8,local_c8,6);
              ppppuVar16 = local_c0;
              pppppuVar11 = pppppuVar15;
              if (((ulong)pppppuVar7 & 1) == 0) goto LAB_1001099dc;
              if ((undefined8 ****)local_c0[2] == (undefined8 ****)0x0) {
LAB_1001099c0:
                _swift_bridgeObjectRelease(pppppuVar15);
                pppppuVar11 = (undefined8 *****)ppppuVar16;
              }
              else {
                _swift_bridgeObjectRetain(local_c0);
                lVar8 = 0x58;
                pppppuVar14 = (undefined8 *****)0xe100000000000000;
                FUN_1001a2c70(0x58);
                if (((ulong)pppppuVar14 & 1) == 0) {
                  _swift_bridgeObjectRelease(ppppuVar16);
                  goto LAB_1001099c0;
                }
                FUN_10003e8bc(ppppuVar16[7] + lVar8 * 4,&local_b0);
                _swift_bridgeObjectRelease(ppppuVar16);
                pppppuVar7 = &local_c0;
                pppppuVar14 = &local_b0;
                _swift_dynamicCast(pppppuVar7,pppppuVar14,PTR___sypN_100995e88 + 8,
                                   PTR___s12CoreGraphics7CGFloatVN_100996360,6);
                ppppuVar1 = local_c0;
                if ((((ulong)pppppuVar7 & 1) == 0) ||
                   ((undefined8 ****)ppppuVar16[2] == (undefined8 ****)0x0)) {
LAB_1001099d0:
                  _swift_bridgeObjectRelease(ppppuVar16);
                }
                else {
                  lVar8 = 0x59;
                  pppppuVar14 = (undefined8 *****)0xe100000000000000;
                  FUN_1001a2c70(0x59);
                  if (((ulong)pppppuVar14 & 1) == 0) goto LAB_1001099d0;
                  FUN_10003e8bc(ppppuVar16[7] + lVar8 * 4,&local_b0);
                  _swift_bridgeObjectRelease(ppppuVar16);
                  pppppuVar7 = &local_c0;
                  pppppuVar14 = &local_b0;
                  _swift_dynamicCast(pppppuVar7,pppppuVar14,PTR___sypN_100995e88 + 8,
                                     PTR___s12CoreGraphics7CGFloatVN_100996360,6);
                  ppppuVar16 = local_c0;
                  if (((ulong)pppppuVar7 & 1) != 0) {
                    lVar8 = local_e8;
                    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
                              (local_e8);
                    if (pppppuVar15[2] != (undefined8 ****)0x0) {
                      _swift_bridgeObjectRetain(pppppuVar15);
                      pppppuVar7 = pppppuVar14;
                      FUN_1001a2c70(lVar8);
                      _swift_bridgeObjectRelease(pppppuVar14);
                      if (((ulong)pppppuVar7 & 1) == 0) goto LAB_100109728;
                      FUN_10003e8bc(pppppuVar15[7] + lVar8 * 4,&local_b0);
                      _swift_bridgeObjectRelease(pppppuVar15);
                      pppppuVar7 = &local_c0;
                      pppppuVar14 = &local_b0;
                      _swift_dynamicCast(pppppuVar7,pppppuVar14,PTR___sypN_100995e88 + 8,
                                         PTR___ss6UInt32VN_100995dc0,6);
                      if (((ulong)pppppuVar7 & 1) == 0) goto LAB_1001099dc;
                      uVar2 = local_c0._0_4_;
                      lVar8 = local_f0;
                      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
                                (local_f0);
                      pppppuVar11 = pppppuVar14;
                      if (pppppuVar15[2] == (undefined8 ****)0x0) {
LAB_100109a00:
                        _swift_bridgeObjectRelease(pppppuVar14);
LAB_100109a04:
                        pppppuVar7 = (undefined8 *****)0xa7e78d90e5a097e6;
                        ppppuVar17 = (undefined8 ****)0xa9000000000000b0;
                      }
                      else {
                        _swift_bridgeObjectRetain(pppppuVar15);
                        pppppuVar7 = pppppuVar14;
                        FUN_1001a2c70(lVar8);
                        pppppuVar11 = pppppuVar7;
                        _swift_bridgeObjectRelease(pppppuVar14);
                        pppppuVar14 = pppppuVar15;
                        if (((ulong)pppppuVar7 & 1) == 0) goto LAB_100109a00;
                        FUN_10003e8bc(pppppuVar15[7] + lVar8 * 4,&local_b0);
                        _swift_bridgeObjectRelease(pppppuVar15);
                        pppppuVar14 = &local_c0;
                        pppppuVar11 = &local_b0;
                        _swift_dynamicCast(pppppuVar14,pppppuVar11,PTR___sypN_100995e88 + 8,
                                           PTR___sSSN_1009957f8,6);
                        pppppuVar7 = (undefined8 *****)local_c0;
                        ppppuVar17 = (undefined8 ****)pppuStack_b8;
                        if (((ulong)pppppuVar14 & 1) == 0) goto LAB_100109a04;
                      }
                      lVar8 = local_f8;
                      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
                      if (pppppuVar15[2] == (undefined8 ****)0x0) {
                        _swift_bridgeObjectRelease(pppppuVar15);
                        _swift_bridgeObjectRelease(pppppuVar11);
                        pppppuVar14 = (undefined8 *****)0x0;
                      }
                      else {
                        pppppuVar14 = pppppuVar11;
                        local_108 = pppppuVar7;
                        pppuStack_100 = ppppuVar17;
                        FUN_1001a2c70();
                        local_110 = lVar8;
                        _swift_bridgeObjectRelease(pppppuVar11);
                        if (((ulong)pppppuVar14 & 1) == 0) {
                          _swift_bridgeObjectRelease(pppppuVar15);
                        }
                        else {
                          FUN_10003e8bc(pppppuVar15[7] + local_110 * 4,&local_b0);
                          _swift_bridgeObjectRelease(pppppuVar15);
                          pppppuVar11 = &local_c0;
                          _swift_dynamicCast(pppppuVar11,&local_b0,PTR___sypN_100995e88 + 8,
                                             PTR___sSiN_100995968,6);
                          pppppuVar14 = (undefined8 *****)local_c0;
                          pppppuVar7 = (undefined8 *****)local_108;
                          ppppuVar17 = (undefined8 ****)pppuStack_100;
                          if (((ulong)pppppuVar11 & 1) != 0) goto LAB_100109ac8;
                        }
                        pppppuVar14 = (undefined8 *****)0x0;
                        pppppuVar7 = (undefined8 *****)local_108;
                        ppppuVar17 = (undefined8 ****)pppuStack_100;
                      }
LAB_100109ac8:
                      (*(code *)PTR____chkstk_darwin_100995498)(pppppuVar14);
                      pppppuVar14 = (undefined8 *****)apppuStack_150;
                      local_140 = uVar2;
                      local_120 = ppppuVar1;
                      ppppuStack_118 = ppppuVar16;
                      local_138 = pppppuVar7;
                      apppuStack_130[0] = ppppuVar17;
                      FUN_1003fb48c(FUN_10010a3a0,pppppuVar14,0xd000000000000097,
                                    (ulong)local_d0 | 0x8000000000000000,0xd000000000000019,
                                    (ulong)local_e0 | 0x8000000000000000,99,0);
                      _swift_bridgeObjectRelease(ppppuVar17);
                      if ((0.1 <= ABS((double)ppppuVar1)) || (0.1 <= ABS((double)ppppuVar16)))
                      goto LAB_100109734;
                      _swift_release(pppppuVar9);
                      (*(code *)PTR____chkstk_darwin_100995498)();
                      local_120 = (undefined8 ****)CONCAT44(local_120._4_4_,uVar2);
                      FUN_1003fb48c(FUN_10010a3b4,apppuStack_130,0xd000000000000097,
                                    (ulong)local_d0 | 0x8000000000000000,0xd000000000000019,
                                    (ulong)local_e0 | 0x8000000000000000,0x68,0);
                      ppppuVar16 = (undefined8 ****)local_d8;
                      goto LAB_100109cfc;
                    }
                    pppppuVar7 = pppppuVar14;
                    _swift_bridgeObjectRelease(pppppuVar15);
                    pppppuVar11 = pppppuVar14;
                    pppppuVar14 = pppppuVar7;
                  }
                }
              }
LAB_1001099dc:
              _swift_bridgeObjectRelease(pppppuVar11);
            }
LAB_100109734:
            ppppuVar13 = (undefined8 ****)((long)ppppuVar13 + 1);
          } while (ppppuVar4 != ppppuVar13);
          if (pppppuVar9[2] == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100109f9c);
            (*pcVar3)();
          }
          pppppuVar11 = (undefined8 *****)pppppuVar9[4];
          _swift_bridgeObjectRetain(pppppuVar11);
          _swift_release(pppppuVar9);
          lVar5 = local_e8;
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(local_e8);
          if (pppppuVar11[2] == (undefined8 ****)0x0) {
LAB_100109c54:
            uStack_a8 = 0;
            local_b0 = (undefined8 *****)0x0;
            local_98 = 0;
            uStack_a0 = 0;
          }
          else {
            _swift_bridgeObjectRetain(pppppuVar11);
            pppppuVar9 = pppppuVar14;
            FUN_1001a2c70(lVar5);
            if (((ulong)pppppuVar9 & 1) == 0) {
              _swift_bridgeObjectRelease(pppppuVar11);
              goto LAB_100109c54;
            }
            FUN_10003e8bc(pppppuVar11[7] + lVar5 * 4,&local_b0);
            _swift_bridgeObjectRelease(pppppuVar14);
            pppppuVar14 = pppppuVar11;
          }
          _swift_bridgeObjectRelease(pppppuVar14);
          ppppuVar16 = (undefined8 ****)local_d8;
          _swift_bridgeObjectRelease(pppppuVar11);
          pcVar12 = local_e0;
          ppppuVar13 = ppppuVar16;
          if (local_98 == 0) {
            FUN_100040bb4(&local_b0,&DAT_100a766e0,&DAT_10080bdb0);
            goto LAB_100109de0;
          }
          pppppuVar9 = &local_c0;
          _swift_dynamicCast(pppppuVar9,&local_b0,PTR___sypN_100995e88 + 8,
                             PTR___ss6UInt32VN_100995dc0,6);
          if (((ulong)pppppuVar9 & 1) == 0) goto LAB_100109de0;
          uVar2 = local_c0._0_4_;
          (*(code *)PTR____chkstk_darwin_100995498)();
          local_120 = (undefined8 ****)CONCAT44(local_120._4_4_,uVar2);
          FUN_1003fb48c(FUN_10010a390,apppuStack_130,0xd000000000000097,
                        (ulong)local_d0 | 0x8000000000000000,0xd000000000000019,
                        (ulong)pcVar12 | 0x8000000000000000,0x72,0);
LAB_100109cfc:
          uVar18 = *(undefined8 *)(PTR__CGRectNull_100995560 + 0x10);
          uVar19 = *(undefined8 *)(PTR__CGRectNull_100995560 + 0x18);
          lVar5 = 8;
          _CGWindowListCreateImage
                    (*(undefined8 *)PTR__CGRectNull_100995560,
                     *(undefined8 *)(PTR__CGRectNull_100995560 + 8),uVar18,uVar19,8,uVar2,8);
          if (lVar5 != 0) {
            _objc_msgSend((ID)ppppuVar16,"frame");
            puVar10 = &_OBJC_CLASS___NSImage;
            _objc_allocWithZone();
            pcVar12 = "initWithCGImage:size:";
            ppppuVar13 = (undefined8 ****)
                         _objc_msgSend((ID)puVar10,"initWithCGImage:size:",uVar18,uVar19,lVar5);
            FUN_1003ee76c(0);
            ppppuVar4 = ppppuVar13;
            FUN_1003ecf34();
            if (((ulong)pcVar12 & 1) == 0) {
              if (ppppuVar4 == (undefined8 ****)0xffffffffffffffff) {
                pcVar3 = FUN_1001050fc;
                uVar18 = 0x97;
              }
              else {
                if (ppppuVar4 != (undefined8 ****)0x0) {
                  FUN_1003fb48c(FUN_100105190,0,0xd000000000000097,
                                (ulong)local_d0 | 0x8000000000000000,0xd000000000000019,
                                (ulong)local_e0 | 0x8000000000000000,0x9b,0);
                  goto LAB_100109608;
                }
                pcVar3 = FUN_100105068;
                uVar18 = 0x92;
              }
              ppppuVar4 = (undefined8 ****)0x0;
              FUN_1003fb4bc(pcVar3,0,0xd000000000000097,(ulong)local_d0 | 0x8000000000000000,
                            0xd000000000000019,(ulong)local_e0 | 0x8000000000000000,uVar18,0);
              ppppuVar13 = (undefined8 ****)local_d8;
            }
            else {
              ppppuVar4 = (undefined8 ****)0x0;
              FUN_1003fb4bc(FUN_100104fd4,0,0xd000000000000097,(ulong)local_d0 | 0x8000000000000000,
                            0xd000000000000019,(ulong)local_e0 | 0x8000000000000000,0x8c,0);
              ppppuVar13 = ppppuVar16;
            }
            FUN_100108f80(ppppuVar13);
            goto LAB_100109608;
          }
          (*(code *)PTR____chkstk_darwin_100995498)();
          ppppuVar4 = apppuStack_130;
          local_120 = (undefined8 ****)CONCAT44(local_120._4_4_,uVar2);
          FUN_1003fb4ec(FUN_10010a398,ppppuVar4,0xd000000000000097,
                        (ulong)local_d0 | 0x8000000000000000,0xd000000000000019,
                        (ulong)local_e0 | 0x8000000000000000,0x82,0);
          ppppuVar13 = ppppuVar16;
        }
        FUN_100108f80(ppppuVar13);
        goto LAB_100109608;
      }
    }
    FUN_100401b14(0);
    FUN_1003fb4ec(FUN_100104798,0,0xd000000000000097,0x8000000100889170,0xd000000000000019,
                  0x800000010088af70,0x2e,0);
  }
  ppppuVar13 = (undefined8 ****)0x0;
  ppppuVar4 = (undefined8 ****)0x0;
LAB_100109608:
  auVar20._8_8_ = ppppuVar4;
  auVar20._0_8_ = ppppuVar13;
  return auVar20;
}

