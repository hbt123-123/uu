// rea decompile_all
// name: FUN_100019690
// address: 0x100019690
// body: available
// range: 0x100019690-0x10001a177 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x00010001a164) */
/* WARNING: Type propagation algorithm not settling */

uint FUN_100019690(undefined8 *******param_1)

{
  uint uVar1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 *******pppppppuVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 ******ppppppuVar10;
  undefined8 *******pppppppuVar11;
  undefined8 *******pppppppuVar12;
  undefined8 ******ppppppuVar13;
  undefined8 uVar14;
  ID IVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *******pppppppuVar18;
  uint uVar19;
  long unaff_x20;
  long lVar20;
  long lVar21;
  ID self;
  undefined8 ******ppppppuVar22;
  ulong uVar23;
  undefined8 *******pppppppuVar24;
  undefined8 *******pppppppuVar25;
  ulong uVar26;
  undefined8 *******pppppppuVar27;
  undefined8 *******local_c8;
  undefined8 *******pppppppuStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 auStack_98 [24];
  undefined *local_80;
  undefined1 auStack_78 [24];
  
  if ((*(char *)(unaff_x20 + 0x99) != '\x01') ||
     (*(long *)(*(long *)(unaff_x20 + 0x90) + 0x10) == 0)) {
    uVar19 = 0;
    goto LAB_10001a114;
  }
  _swift_bridgeObjectRetain();
  FUN_10004d12c();
  local_c8 = param_1;
  FUN_10005fea0();
  pppppppuVar18 = local_c8;
  _swift_beginAccess(unaff_x20 + 0x80,auStack_78,1,0);
  uVar5 = *(ulong *)(unaff_x20 + 0x80);
  _swift_bridgeObjectRetain();
  pppppppuVar6 = pppppppuVar18;
  FUN_10002dad0();
  uVar7 = NSScreen::screens((ID)&_OBJC_CLASS___NSScreen,"screens");
  uVar8 = 0;
  FUN_10004003c(0,&DAT_100a75978,&PTR__OBJC_CLASS___NSScreen_100a65810);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar7,uVar8);
  if (uVar7 >> 0x3e == 0) {
    uVar23 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
    pppppppuVar24 = (undefined8 *******)PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    uVar23 = uVar7 & 0xffffffffffffff8;
    if ((long)uVar7 < 0) {
      uVar23 = uVar7;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    pppppppuVar24 = (undefined8 *******)PTR___swiftEmptyArrayStorage_100995ea0;
  }
  PTR___swiftEmptyArrayStorage_100995ea0 = (undefined *)pppppppuVar24;
  if (uVar23 != 0) {
    uVar26 = 0;
    do {
      if ((uVar7 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10) <= uVar26) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10001991c);
          (*pcVar3)();
        }
        uVar9 = *(ulong *)(uVar7 + 0x20 + uVar26 * 8);
      }
      else {
        uVar9 = uVar26;
        FUN_100169c00(uVar26,uVar7);
      }
      bVar4 = SCARRY8(uVar26,1);
      uVar26 = uVar26 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100019918);
        (*pcVar3)();
      }
      FUN_1003d541c();
      if (pppppppuVar18[2] != (undefined8 ******)0x0) {
        ppppppuVar10 = pppppppuVar18[5];
        __ss6HasherV5_hash4seed5bytes5countS2i_s6UInt64VSitFZ(ppppppuVar10,uVar9 & 0xffffffff,4);
        uVar17 = -1L << ((ulong)*(byte *)(pppppppuVar18 + 4) & 0x3f);
        uVar16 = (ulong)ppppppuVar10 & (uVar17 ^ 0xffffffffffffffff);
        if ((*(ulong *)((long)pppppppuVar18 + (uVar16 >> 3 & 0xffffffffffffff8) + 0x38) >>
             (uVar16 & 0x3f) & 1) != 0) {
          do {
            if (*(int *)((long)pppppppuVar18[6] + uVar16 * 4) == (int)uVar9)
            goto joined_r0x0001000197bc;
            uVar16 = uVar16 + 1 & ~uVar17;
          } while ((*(ulong *)((long)pppppppuVar18 + (uVar16 >> 3 & 0xffffffffffffff8) + 0x38) >>
                    (uVar16 & 0x3f) & 1) != 0);
        }
      }
      pppppppuVar11 = pppppppuVar24;
      _swift_isUniquelyReferenced_nonNull_native();
      pppppppuVar27 = pppppppuVar24;
      if (((ulong)pppppppuVar11 & 1) == 0) {
        pppppppuVar27 = (undefined8 *******)0x0;
        FUN_1000344b4(0,(long)pppppppuVar24[2] + 1,1,pppppppuVar24,&DAT_100a759b8,&DAT_10080a9a0);
      }
      ppppppuVar10 = pppppppuVar27[2];
      pppppppuVar24 = pppppppuVar27;
      if ((undefined8 ******)((ulong)pppppppuVar27[3] >> 1) <= ppppppuVar10) {
        pppppppuVar24 = (undefined8 *******)(ulong)((undefined8 ******)0x1 < pppppppuVar27[3]);
        FUN_1000344b4(pppppppuVar24,(undefined8 ******)((long)ppppppuVar10 + 1U),1,pppppppuVar27,
                      &DAT_100a759b8,&DAT_10080a9a0);
      }
      pppppppuVar24[2] = (undefined8 ******)((long)ppppppuVar10 + 1U);
      *(int *)((long)pppppppuVar24 + (long)ppppppuVar10 * 4 + 0x20) = (int)uVar9;
joined_r0x0001000197bc:
    } while (uVar26 != uVar23);
  }
  _swift_bridgeObjectRelease(uVar7);
  pppppppuVar11 = pppppppuVar24;
  FUN_100074ebc();
  _swift_bridgeObjectRelease(pppppppuVar24);
  local_c8 = pppppppuVar11;
  _swift_bridgeObjectRetain(uVar5);
  FUN_10005fe84();
  if ((undefined8 ******)((ulong)local_c8[2] >> 3) < pppppppuVar18[2]) {
    pppppppuVar24 = pppppppuVar18;
    FUN_100038ac4();
    _swift_bridgeObjectRelease(pppppppuVar18);
  }
  else {
    FUN_1000395ac(pppppppuVar18);
    _swift_bridgeObjectRelease(pppppppuVar18);
    pppppppuVar24 = local_c8;
  }
  local_80 = PTR___swiftEmptySetSingleton_100995eb0;
  _swift_beginAccess(unaff_x20 + 0x88,auStack_98,1,0);
  lVar20 = *(long *)(unaff_x20 + 0x88);
  _swift_bridgeObjectRetain(pppppppuVar24);
  _swift_bridgeObjectRetain();
  pppppppuVar18 = pppppppuVar24;
  FUN_10003be94();
  _swift_bridgeObjectRelease(pppppppuVar24);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x88);
  *(long *)(unaff_x20 + 0x88) = lVar20;
  _swift_retain(lVar20);
  _swift_bridgeObjectRelease(uVar8);
  lVar21 = lVar20;
  FUN_100045cc4();
  _swift_release(lVar20);
  uVar7 = *(ulong *)(lVar21 + 0x10);
  if (uVar7 != 0) {
    uVar23 = 0;
    pppppppuVar11 = (undefined8 *******)PTR___swiftEmptyDictionarySingleton_100995ea8;
LAB_100019aa4:
    if (*(ulong *)(lVar21 + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10001a13c);
      (*pcVar3)();
    }
    if (*(long *)(uVar5 + 0x10) != 0) {
      uVar9 = (ulong)*(uint *)(lVar21 + 0x20 + uVar23 * 4);
      uVar26 = uVar9;
      thunk_FUN_1001a2c34();
      if ((((ulong)pppppppuVar18 & 1) != 0) &&
         (lVar20 = *(long *)(unaff_x20 + 0x90), *(long *)(lVar20 + 0x10) != 0)) {
        uVar19 = *(uint *)(*(long *)(uVar5 + 0x38) + uVar26 * 4);
        pppppppuVar27 = (undefined8 *******)(ulong)uVar19;
        uVar26 = *(ulong *)(lVar20 + 0x28);
        pppppppuVar18 = pppppppuVar27;
        __ss6HasherV5_hash4seed5bytes5countS2i_s6UInt64VSitFZ(uVar26,pppppppuVar27,4);
        puVar2 = local_80;
        uVar16 = -1L << ((ulong)*(byte *)(lVar20 + 0x20) & 0x3f);
        uVar26 = uVar26 & (uVar16 ^ 0xffffffffffffffff);
        if ((*(ulong *)(lVar20 + 0x38 + (uVar26 >> 3 & 0xffffffffffffff8)) >> (uVar26 & 0x3f) & 1)
            != 0) {
          do {
            if (*(uint *)(*(long *)(lVar20 + 0x30) + uVar26 * 4) == uVar19) {
              if (*(long *)(local_80 + 0x10) == 0) goto LAB_100019a60;
              uVar26 = *(ulong *)(local_80 + 0x28);
              pppppppuVar18 = pppppppuVar27;
              __ss6HasherV5_hash4seed5bytes5countS2i_s6UInt64VSitFZ(uVar26,pppppppuVar27,4);
              uVar16 = -1L << ((ulong)(byte)puVar2[0x20] & 0x3f);
              uVar26 = uVar26 & (uVar16 ^ 0xffffffffffffffff);
              if ((*(ulong *)(puVar2 + (uVar26 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar26 & 0x3f)
                  & 1) == 0) goto LAB_100019a60;
              goto LAB_100019b90;
            }
            uVar26 = uVar26 + 1 & ~uVar16;
          } while ((*(ulong *)(lVar20 + 0x38 + (uVar26 >> 3 & 0xffffffffffffff8)) >> (uVar26 & 0x3f)
                   & 1) != 0);
        }
      }
    }
    goto LAB_100019a98;
  }
  _swift_bridgeObjectRelease(lVar21);
  pppppppuVar11 = (undefined8 *******)PTR___swiftEmptyDictionarySingleton_100995ea8;
LAB_100019bd8:
  pppppppuVar25 = *(undefined8 ********)(uVar5 + 0x10);
  pppppppuVar27 = (undefined8 *******)PTR___swiftEmptyArrayStorage_100995ea0;
  if (pppppppuVar25 != (undefined8 *******)0x0) {
    pppppppuVar27 = pppppppuVar25;
    FUN_10006d60c(pppppppuVar25,0);
    pppppppuVar12 = &local_c8;
    FUN_100074110(pppppppuVar12,pppppppuVar27 + 4,pppppppuVar25,uVar5);
    pppppppuVar18 = local_c8;
    _swift_bridgeObjectRetain(uVar5);
    FUN_10003f638(pppppppuVar18,pppppppuStack_c0,local_b8,uStack_b0,local_a8);
    pppppppuVar18 = pppppppuStack_c0;
    if (pppppppuVar12 != pppppppuVar25) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100019c44);
      (*pcVar3)();
    }
  }
  local_c8 = pppppppuVar27;
  FUN_100033714(&local_c8);
  pppppppuVar27 = local_c8;
  ppppppuVar10 = local_c8[2];
  if (ppppppuVar10 != (undefined8 ******)0x0) {
    ppppppuVar22 = (undefined8 ******)0x0;
LAB_100019cc4:
    if (pppppppuVar27[2] <= ppppppuVar22) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10001a140);
      (*pcVar3)();
    }
    uVar19 = *(uint *)(pppppppuVar27 + (long)ppppppuVar22 + 4);
    pppppppuVar25 = (undefined8 *******)(ulong)uVar19;
    uVar1 = *(uint *)((long)(pppppppuVar27 + (long)ppppppuVar22 + 4) + 4);
    pppppppuVar12 = (undefined8 *******)(ulong)uVar1;
    if (((pppppppuVar11[2] == (undefined8 ******)0x0) ||
        (thunk_FUN_1001a2c34(pppppppuVar25), ((ulong)pppppppuVar18 & 1) == 0)) &&
       (pppppppuVar24[2] != (undefined8 ******)0x0)) {
      ppppppuVar13 = pppppppuVar24[5];
      pppppppuVar18 = pppppppuVar25;
      __ss6HasherV5_hash4seed5bytes5countS2i_s6UInt64VSitFZ(ppppppuVar13,pppppppuVar25,4);
      uVar23 = -1L << ((ulong)*(byte *)(pppppppuVar24 + 4) & 0x3f);
      uVar7 = (ulong)ppppppuVar13 & (uVar23 ^ 0xffffffffffffffff);
      if ((*(ulong *)((long)pppppppuVar24 + (uVar7 >> 3 & 0xffffffffffffff8) + 0x38) >>
           (uVar7 & 0x3f) & 1) != 0) {
        do {
          if (*(uint *)((long)pppppppuVar24[6] + uVar7 * 4) == uVar19) {
            lVar21 = *(long *)(unaff_x20 + 0x90);
            if (*(long *)(lVar21 + 0x10) != 0) {
              uVar7 = *(ulong *)(lVar21 + 0x28);
              pppppppuVar18 = pppppppuVar12;
              __ss6HasherV5_hash4seed5bytes5countS2i_s6UInt64VSitFZ(uVar7,pppppppuVar12,4);
              puVar2 = local_80;
              uVar23 = -1L << ((ulong)*(byte *)(lVar21 + 0x20) & 0x3f);
              uVar7 = uVar7 & (uVar23 ^ 0xffffffffffffffff);
              if ((*(ulong *)(lVar21 + 0x38 + (uVar7 >> 3 & 0xffffffffffffff8)) >> (uVar7 & 0x3f) &
                  1) != 0) {
                goto LAB_100019db8;
              }
            }
            break;
          }
          uVar7 = uVar7 + 1 & ~uVar23;
        } while ((*(ulong *)((long)pppppppuVar24 + (uVar7 >> 3 & 0xffffffffffffff8) + 0x38) >>
                  (uVar7 & 0x3f) & 1) != 0);
      }
    }
    goto LAB_100019cb8;
  }
LAB_100019e5c:
  _swift_bridgeObjectRelease(pppppppuVar24);
  _swift_release(pppppppuVar27);
  if ((ulong)pppppppuVar6 >> 0x3e == 0) {
    pppppppuVar24 = *(undefined8 ********)(((ulong)pppppppuVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    pppppppuVar24 = (undefined8 *******)((ulong)pppppppuVar6 & 0xffffffffffffff8);
    if ((long)pppppppuVar6 < 0) {
      pppppppuVar24 = pppppppuVar6;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (pppppppuVar24 != (undefined8 *******)0x0) {
    ppppppuVar10 = (undefined8 ******)0x0;
    do {
      if (((ulong)pppppppuVar6 & 0xc000000000000001) == 0) {
        if (*(undefined8 *******)(((ulong)pppppppuVar6 & 0xffffffffffffff8) + 0x10) <= ppppppuVar10)
        {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10001a148);
          (*pcVar3)();
        }
        ppppppuVar22 = pppppppuVar6[(long)ppppppuVar10 + 4];
      }
      else {
        ppppppuVar22 = ppppppuVar10;
        pppppppuVar18 = pppppppuVar6;
        FUN_100169c00(ppppppuVar10);
      }
      pppppppuVar27 = (undefined8 *******)((long)ppppppuVar10 + 1);
      if (SCARRY8((long)ppppppuVar10,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10001a144);
        (*pcVar3)();
      }
      FUN_1003d541c();
      if ((pppppppuVar11[2] == (undefined8 ******)0x0) ||
         (thunk_FUN_1001a2c34(ppppppuVar22), ((ulong)pppppppuVar18 & 1) == 0)) {
        pppppppuVar18 = *(undefined8 ********)(unaff_x20 + 0x90);
        pppppppuVar25 = pppppppuVar18;
        _swift_bridgeObjectRetain();
        FUN_100045da4();
        _swift_bridgeObjectRelease(pppppppuVar18);
        pppppppuVar18 = pppppppuVar25;
        FUN_10000f6e4(pppppppuVar25,&local_80);
        _swift_bridgeObjectRelease(pppppppuVar25);
        if (((ulong)pppppppuVar18 >> 0x20 & 1) != 0) break;
        pppppppuVar25 = pppppppuVar11;
        _swift_isUniquelyReferenced_nonNull_native(pppppppuVar11);
        local_c8 = pppppppuVar11;
        FUN_100060bbc(pppppppuVar18,ppppppuVar22,pppppppuVar25);
        pppppppuVar11 = local_c8;
        FUN_10006d93c(&local_c8);
      }
      ppppppuVar10 = (undefined8 ******)((long)ppppppuVar10 + 1);
    } while (pppppppuVar27 != pppppppuVar24);
  }
  _swift_bridgeObjectRelease(pppppppuVar6);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 ********)(unaff_x20 + 0x80) = pppppppuVar11;
  _swift_bridgeObjectRetain(pppppppuVar11);
  _swift_bridgeObjectRelease(uVar8);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x88);
  _swift_retain(unaff_x20);
  _swift_bridgeObjectRetain();
  FUN_10003c1f8();
  _swift_release(unaff_x20);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(unaff_x20 + 0x88) = uVar8;
  _swift_bridgeObjectRelease(uVar14);
  self = *(ID *)(unaff_x20 + 0x10);
  IVar15 = _objc_msgSend(self,"videoTrackIndex");
  if (4 < (uint)IVar15) {
    IVar15 = _objc_msgSend(self,"screenId");
    pppppppuVar18 = &local_c8;
    _swift_beginAccess(unaff_x20 + 0x80,pppppppuVar18,0x20,0);
    lVar21 = *(long *)(unaff_x20 + 0x80);
    if ((*(long *)(lVar21 + 0x10) == 0) || (thunk_FUN_1001a2c34(), ((ulong)pppppppuVar18 & 1) == 0))
    {
      _swift_endAccess(&local_c8);
    }
    else {
      uVar19 = *(uint *)(*(long *)(lVar21 + 0x38) + IVar15 * 4);
      _swift_endAccess(&local_c8);
      _objc_msgSend(self,"setVideoTrackIndex:",(ulong)uVar19);
    }
  }
  uVar7 = uVar5;
  FUN_10004cc78(uVar5,*(undefined8 *)(unaff_x20 + 0x80));
  _swift_bridgeObjectRelease(uVar5);
  if ((uVar7 & 1) == 0) {
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_10003f640,unaff_x20,0xd0000000000000a9,0x8000000100877660,0xd000000000000027,
                  0x8000000100877e60,0x969,0);
  }
  puVar2 = local_80;
  uVar19 = (uint)uVar7 ^ 1;
  _swift_bridgeObjectRelease(pppppppuVar11);
  _swift_bridgeObjectRelease(puVar2);
LAB_10001a114:
  return uVar19 & 1;
  while (uVar26 = uVar26 + 1 & ~uVar16,
        (*(ulong *)(puVar2 + (uVar26 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar26 & 0x3f) & 1) != 0)
  {
LAB_100019b90:
    if (*(uint *)(*(long *)(puVar2 + 0x30) + uVar26 * 4) == uVar19) goto LAB_100019a98;
  }
LAB_100019a60:
  pppppppuVar18 = pppppppuVar11;
  _swift_isUniquelyReferenced_nonNull_native(pppppppuVar11);
  local_c8 = pppppppuVar11;
  FUN_100060bbc(pppppppuVar27,uVar9,pppppppuVar18);
  pppppppuVar11 = local_c8;
  FUN_10006d93c(&local_c8);
  pppppppuVar18 = pppppppuVar27;
LAB_100019a98:
  uVar23 = uVar23 + 1;
  if (uVar23 == uVar7) goto LAB_100019bbc;
  goto LAB_100019aa4;
LAB_100019bbc:
  _swift_bridgeObjectRelease(lVar21);
  goto LAB_100019bd8;
  while (uVar7 = uVar7 + 1 & ~uVar23,
        (*(ulong *)(lVar21 + 0x38 + (uVar7 >> 3 & 0xffffffffffffff8)) >> (uVar7 & 0x3f) & 1) != 0) {
LAB_100019db8:
    if (*(uint *)(*(long *)(lVar21 + 0x30) + uVar7 * 4) == uVar1) {
      if (*(long *)(local_80 + 0x10) == 0) goto LAB_100019c80;
      uVar7 = *(ulong *)(local_80 + 0x28);
      pppppppuVar18 = pppppppuVar12;
      __ss6HasherV5_hash4seed5bytes5countS2i_s6UInt64VSitFZ(uVar7,pppppppuVar12,4);
      uVar23 = -1L << ((ulong)(byte)puVar2[0x20] & 0x3f);
      uVar7 = uVar7 & (uVar23 ^ 0xffffffffffffffff);
      if ((*(ulong *)(puVar2 + (uVar7 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar7 & 0x3f) & 1) == 0)
      goto LAB_100019c80;
      goto LAB_100019e30;
    }
  }
  goto LAB_100019cb8;
  while (uVar7 = uVar7 + 1 & ~uVar23,
        (*(ulong *)(puVar2 + (uVar7 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar7 & 0x3f) & 1) != 0) {
LAB_100019e30:
    if (*(uint *)(*(long *)(puVar2 + 0x30) + uVar7 * 4) == uVar1) goto LAB_100019cb8;
  }
LAB_100019c80:
  pppppppuVar18 = pppppppuVar11;
  _swift_isUniquelyReferenced_nonNull_native(pppppppuVar11);
  local_c8 = pppppppuVar11;
  FUN_100060bbc(pppppppuVar12,pppppppuVar25,pppppppuVar18);
  pppppppuVar11 = local_c8;
  FUN_10006d93c(&local_c8);
  pppppppuVar18 = pppppppuVar12;
LAB_100019cb8:
  ppppppuVar22 = (undefined8 ******)((long)ppppppuVar22 + 1);
  if (ppppppuVar22 == ppppppuVar10) goto LAB_100019e5c;
  goto LAB_100019cc4;
}

