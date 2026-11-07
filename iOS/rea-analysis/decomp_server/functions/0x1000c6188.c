// rea decompile_all
// name: FUN_1000c6188
// address: 0x1000c6188
// body: available
// range: 0x1000c6188-0x1000c6b57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001000c6b38) */
/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_1000c6188(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  ID self;
  ID IVar6;
  long lVar7;
  undefined8 uVar8;
  ID *pIVar9;
  code *pcVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  char *pcVar14;
  undefined **ppuVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined *puVar19;
  long unaff_x20;
  undefined **ppuVar20;
  ulong uVar21;
  undefined *puVar22;
  ID IVar23;
  undefined **ppuVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined1 auStack_190 [16];
  ID local_180;
  undefined8 uStack_178;
  undefined *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined *local_148;
  long local_140;
  undefined *local_138;
  undefined *local_130;
  ID local_128;
  undefined *local_120;
  long local_118;
  ID local_110;
  undefined8 uStack_108;
  undefined *local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long local_e8;
  undefined *local_e0;
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  byte local_b0;
  
  (**(code **)(unaff_x20 + 0x10))();
  if (param_5 >> 0x3e == 0) {
    uVar21 = *(ulong *)((param_5 & 0xffffffffffffff8) + 0x10);
    if (uVar21 == 0) goto LAB_1000c630c;
LAB_1000c61d8:
    local_d0 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_10006fda4(0,uVar21 & ((long)uVar21 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar21 < 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1000c6b20);
      (*pcVar10)();
    }
    IVar23 = 0;
    do {
      puVar12 = local_d0;
      if ((param_5 & 0xc000000000000001) == 0) {
        self = *(ID *)(param_5 + IVar23 * 8 + 0x20);
        uVar8 = param_1;
        uVar27 = param_2;
        uVar28 = param_3;
        uVar29 = param_4;
      }
      else {
        self = IVar23;
        FUN_10016a00c(IVar23,param_5);
        uVar8 = param_1;
        uVar27 = param_2;
        uVar28 = param_3;
        uVar29 = param_4;
      }
      IVar6 = _objc_msgSend(self,"windowNumber");
      _objc_msgSend(self,"frame");
      uVar25 = *(ulong *)(puVar12 + 0x10);
      param_1 = uVar8;
      param_2 = uVar27;
      param_3 = uVar28;
      param_4 = uVar29;
      local_d0 = puVar12;
      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar25) {
        FUN_10006fda4(1 < *(ulong *)(puVar12 + 0x18),uVar25 + 1,1);
      }
      puVar12 = local_d0;
      *(ulong *)(local_d0 + 0x10) = uVar25 + 1;
      *(ID *)(local_d0 + uVar25 * 0x28 + 0x20) = IVar6;
      IVar23 = IVar23 + 1;
      *(undefined8 *)(local_d0 + uVar25 * 0x28 + 0x28) = uVar8;
      *(undefined8 *)(local_d0 + uVar25 * 0x28 + 0x30) = uVar27;
      *(undefined8 *)(local_d0 + uVar25 * 0x28 + 0x38) = uVar28;
      *(undefined8 *)(local_d0 + uVar25 * 0x28 + 0x40) = uVar29;
    } while (uVar21 != IVar23);
    _swift_bridgeObjectRelease(param_5);
    puVar19 = *(undefined **)(puVar12 + 0x10);
    puVar13 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  }
  else {
    uVar21 = param_5 & 0xffffffffffffff8;
    if ((long)param_5 < 0) {
      uVar21 = param_5;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    if (uVar21 != 0) goto LAB_1000c61d8;
LAB_1000c630c:
    _swift_bridgeObjectRelease(param_5);
    puVar19 = *(undefined **)(PTR___swiftEmptyArrayStorage_100995ea0 + 0x10);
    puVar13 = PTR___swiftEmptyDictionarySingleton_100995ea8;
    puVar12 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  PTR___swiftEmptyDictionarySingleton_100995ea8 = puVar13;
  if (puVar19 != (undefined *)0x0) {
    FUN_100004bb4(&DAT_100a76398,&DAT_10080abc0);
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    puVar13 = puVar19;
  }
  local_d0 = puVar13;
  _swift_bridgeObjectRetain(puVar12);
  FUN_1000c6f60();
  _swift_bridgeObjectRelease(puVar12);
  puVar12 = local_d0;
  if (*(long *)(local_d0 + 0x10) == 0) {
    _swift_release(local_d0);
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_1000c6e08,0,0xd0000000000000ac,0x8000000100884780,0xd000000000000020,
                  0x80000001008849a0,0xea,0);
    return 0;
  }
  lVar7 = 0x11;
  _CGWindowListCopyWindowInfo(0x11,0);
  if (lVar7 != 0) {
    _swift_dynamicCastObjCClass(lVar7,&_OBJC_CLASS___NSArray);
    if (lVar7 == 0) {
      _swift_release(puVar12);
      goto LAB_1000c68a8;
    }
    local_d0 = (undefined *)0x0;
    puVar19 = &DAT_100a759d8;
    FUN_100004bb4(&DAT_100a759d8,&DAT_10080c0a0);
    pcVar10 = (code *)&local_d0;
    __sSa10FoundationE34_conditionallyBridgeFromObjectiveC_6resultSbSo7NSArrayC_SayxGSgztFZ
              (lVar7,pcVar10,puVar19);
    puVar19 = local_d0;
    if (local_d0 != (undefined *)0x0) {
      if (DAT_100a73b48 != -1) {
        pcVar10 = FUN_1000c554c;
        _swift_once(&DAT_100a73b48);
      }
      local_128 = DAT_100a77200;
      local_e0 = PTR___swiftEmptySetSingleton_100995eb0;
      uVar21 = *(ulong *)(puVar19 + 0x10);
      if (uVar21 == 0) {
        _swift_release(puVar12);
        _swift_bridgeObjectRelease(puVar19);
        _swift_bridgeObjectRelease(PTR___swiftEmptySetSingleton_100995eb0);
        return 0;
      }
      uVar25 = 0;
      local_118 = *(long *)PTR__kCGWindowLayer_100995580;
      local_140 = *(long *)PTR__kCGWindowNumber_100995590;
      local_120 = puVar12 + 0x40;
      puVar22 = puVar19;
      puVar13 = PTR___sypN_100995e88;
      do {
        if (*(ulong *)(puVar22 + 0x10) <= uVar25) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x1000c6b18);
          (*pcVar10)();
        }
        ppuVar24 = *(undefined ***)(puVar19 + uVar25 * 8 + 0x20);
        lVar7 = local_118;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(local_118);
        ppuVar20 = (undefined **)pcVar10;
        if (ppuVar24[2] == (undefined *)0x0) {
LAB_1000c6670:
          _swift_bridgeObjectRelease(ppuVar20);
        }
        else {
          _swift_bridgeObjectRetain_n(ppuVar24,2);
          FUN_1001a2c70(lVar7);
          _swift_bridgeObjectRelease(pcVar10);
          if (((ulong)ppuVar20 & 1) != 0) {
            FUN_10003e8bc(ppuVar24[7] + lVar7 * 0x20,&local_100);
            _swift_bridgeObjectRelease(ppuVar24);
            uVar8 = 0;
            FUN_10004003c(0,&DAT_100a77030,&PTR__OBJC_CLASS___NSNumber_100a65780);
            pIVar9 = &local_110;
            pcVar10 = (code *)&local_100;
            _swift_dynamicCast(pIVar9,pcVar10,puVar13 + 8,uVar8,6);
            ppuVar20 = ppuVar24;
            if (((ulong)pIVar9 & 1) != 0) {
              pcVar14 = "integerValue";
              IVar23 = _objc_msgSend(local_110,"integerValue");
              pcVar10 = (code *)pcVar14;
              if (IVar23 == local_128) {
                lVar7 = local_140;
                __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
                          (local_140);
                if (ppuVar24[2] == (undefined *)0x0) {
                  _swift_bridgeObjectRelease(pcVar14);
                }
                else {
                  _swift_bridgeObjectRetain(ppuVar24);
                  ppuVar11 = (undefined **)pcVar14;
                  FUN_1001a2c70(lVar7);
                  ppuVar15 = ppuVar11;
                  _swift_bridgeObjectRelease(pcVar14);
                  if (((ulong)ppuVar11 & 1) == 0) {
                    _swift_bridgeObjectRelease(ppuVar24);
                    pcVar14 = (char *)ppuVar15;
                    puVar13 = PTR___sypN_100995e88;
                  }
                  else {
                    FUN_10003e8bc(ppuVar24[7] + lVar7 * 0x20,&local_100);
                    _swift_bridgeObjectRelease(ppuVar24);
                    puVar13 = PTR___sypN_100995e88;
                    pIVar9 = &local_110;
                    pcVar14 = (char *)&local_100;
                    _swift_dynamicCast(pIVar9,pcVar14,PTR___sypN_100995e88 + 8,uVar8,6);
                    if (((ulong)pIVar9 & 1) != 0) {
                      pcVar14 = "integerValue";
                      pcVar10 = (code *)_objc_msgSend(local_110,"integerValue");
                      if ((*(long *)(puVar12 + 0x10) != 0) &&
                         (thunk_FUN_1001a2e54(pcVar10), ((ulong)pcVar14 & 1) != 0)) {
                        _swift_bridgeObjectRelease(ppuVar24);
                        FUN_10006dbc4(&local_100);
                        goto LAB_1000c6454;
                      }
                    }
                  }
                }
                ppuVar11 = ppuVar24;
                FUN_1000c7424(&local_d0);
                uVar28 = uStack_b8;
                uVar27 = local_c0;
                uVar8 = uStack_c8;
                puVar4 = local_d0;
                pcVar10 = (code *)pcVar14;
                if (((local_b0 & 1) == 0) &&
                   (_CGRectIsEmpty(local_d0,uStack_c8,local_c0,uStack_b8), puVar3 = local_e0,
                   pcVar10 = (code *)pcVar14, ((ulong)ppuVar11 & 1) == 0)) {
                  uVar16 = 1L << ((ulong)(byte)puVar12[0x20] & 0x3f);
                  uVar26 = 0xffffffffffffffff;
                  if ((long)uVar16 < 0x40) {
                    uVar26 = ~(-1L << (uVar16 & 0x3f));
                  }
                  uVar26 = uVar26 & *(ulong *)(puVar12 + 0x40);
                  local_130 = local_e0;
                  local_138 = puVar12;
                  _swift_retain();
                  lVar7 = 0;
                  local_148 = puVar22;
                  pcVar10 = (code *)pcVar14;
                  puVar13 = puVar12;
joined_r0x0001000c66fc:
                  puVar2 = local_130;
                  puVar12 = local_138;
                  if (uVar26 != 0) {
                    uVar17 = (uVar26 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar26 & 0x5555555555555555) << 1
                    ;
                    uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2
                    ;
                    uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
                    uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar17 & 0xffff0000ffff) << 0x10;
                    uVar26 = uVar26 - 1 & uVar26;
                    uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) | lVar7 << 6;
                    puVar1 = (undefined8 *)(*(long *)(local_138 + 0x38) + uVar17 * 0x20);
                    uVar29 = *puVar1;
                    uVar30 = puVar1[1];
                    uVar31 = puVar1[2];
                    uVar32 = puVar1[3];
                    if (*(long *)(local_130 + 0x10) != 0) {
                      ppuVar20 = *(undefined ***)(*(long *)(local_138 + 0x30) + uVar17 * 8);
                      puVar13 = *(undefined **)(local_130 + 0x28);
                      pcVar10 = (code *)ppuVar20;
                      __ss6HasherV5_hash4seed_S2i_s6UInt64VtFZ();
                      uVar18 = -1L << ((ulong)(byte)puVar2[0x20] & 0x3f);
                      uVar17 = (ulong)puVar13 & (uVar18 ^ 0xffffffffffffffff);
                      puVar22 = local_148;
                      if ((*(ulong *)(puVar3 + (uVar17 >> 3 & 0xffffffffffffff8) + 0x38) >>
                           (uVar17 & 0x3f) & 1) != 0) {
                        do {
                          if (*(undefined ***)(*(long *)(local_130 + 0x30) + uVar17 * 8) == ppuVar20
                             ) goto joined_r0x0001000c66fc;
                          uVar17 = uVar17 + 1 & ~uVar18;
                        } while ((*(ulong *)(puVar3 + (uVar17 >> 3 & 0xffffffffffffff8) + 0x38) >>
                                  (uVar17 & 0x3f) & 1) != 0);
                      }
                    }
                    _CGRectIntersectsRect(uVar29,uVar30,uVar31,uVar32,puVar4,uVar8,uVar27,uVar28);
                    if ((int)puVar13 != 0) {
                      _swift_release(local_138);
                      _swift_bridgeObjectRelease(puVar22);
                      lVar7 = *(long *)PTR__kCGWindowOwnerName_100995598;
                      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
                                (lVar7);
                      puVar12 = PTR___sypN_100995e88;
                      if (ppuVar24[2] == (undefined *)0x0) {
LAB_1000c69f4:
                        uStack_f8 = 0;
                        local_100 = (undefined *)0x0;
                        local_e8 = 0;
                        uStack_f0 = 0;
                      }
                      else {
                        _swift_bridgeObjectRetain(ppuVar24);
                        ppuVar20 = (undefined **)pcVar10;
                        FUN_1001a2c70(lVar7);
                        if (((ulong)ppuVar20 & 1) == 0) {
                          _swift_bridgeObjectRelease(ppuVar24);
                          goto LAB_1000c69f4;
                        }
                        FUN_10003e8bc(ppuVar24[7] + lVar7 * 0x20,&local_100);
                        _swift_bridgeObjectRelease(pcVar10);
                        pcVar10 = (code *)ppuVar24;
                      }
                      _swift_bridgeObjectRelease(pcVar10);
                      _swift_bridgeObjectRelease(ppuVar24);
                      if (local_e8 == 0) {
                        FUN_1000c776c(&local_100);
                      }
                      else {
                        pIVar9 = &local_110;
                        _swift_dynamicCast(pIVar9,&local_100,puVar12 + 8,PTR___sSSN_1009957f8,6);
                        if (((ulong)pIVar9 & 1) != 0) {
                          _swift_bridgeObjectRelease(local_130);
                          IVar23 = local_110;
                          uVar29 = uStack_108;
                          goto LAB_1000c6a70;
                        }
                      }
                      _swift_bridgeObjectRelease(local_130);
                      uVar29 = 0xe700000000000000;
                      IVar23 = 0x6e776f6e6b6e75;
LAB_1000c6a70:
                      FUN_100401b14(0);
                      (*(code *)PTR____chkstk_darwin_100995498)();
                      local_170 = puVar4;
                      uStack_168 = uVar8;
                      local_160 = uVar27;
                      uStack_158 = uVar28;
                      local_180 = IVar23;
                      uStack_178 = uVar29;
                      FUN_1003fb48c(FUN_1000c77b4,auStack_190,0xd0000000000000ac,0x8000000100884780,
                                    0xd000000000000020,0x80000001008849a0,0x10c,0);
                      _swift_bridgeObjectRelease(uVar29);
                      _swift_release(local_138);
                      return 1;
                    }
                    goto joined_r0x0001000c66fc;
                  }
                  bVar5 = SCARRY8(lVar7,1);
                  lVar7 = lVar7 + 1;
                  if (bVar5) {
                    /* WARNING: Does not return */
                    pcVar10 = (code *)SoftwareBreakpoint(1,0x1000c6b1c);
                    (*pcVar10)();
                  }
                  if (lVar7 < (long)(uVar16 + 0x3f >> 6)) {
                    uVar26 = *(ulong *)(local_120 + lVar7 * 8);
                    goto joined_r0x0001000c66fc;
                  }
                  _swift_release(local_138);
                  _swift_bridgeObjectRelease(ppuVar24);
                  puVar13 = PTR___sypN_100995e88;
                  goto LAB_1000c6454;
                }
              }
            }
            goto LAB_1000c6670;
          }
          pcVar10 = (code *)0x2;
          _swift_bridgeObjectRelease_n(ppuVar24);
        }
LAB_1000c6454:
        uVar25 = uVar25 + 1;
        if (uVar25 == uVar21) {
          _swift_release(puVar12);
          _swift_bridgeObjectRelease(puVar22);
          _swift_bridgeObjectRelease(local_e0);
          return 0;
        }
      } while( true );
    }
  }
  _swift_release(puVar12);
LAB_1000c68a8:
  FUN_100401b14(0);
  FUN_1003fb4bc(FUN_1000c6e34,0,0xd0000000000000ac,0x8000000100884780,0xd000000000000020,
                0x80000001008849a0,0xf4,0);
  return 0;
}

